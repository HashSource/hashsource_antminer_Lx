#!/usr/bin/env python3
"""Automated binary decompilation using ghidrecomp, RetDec, and IDA Pro."""

from __future__ import annotations

import logging
import re
import subprocess
import sys
from dataclasses import dataclass
from datetime import datetime
from functools import lru_cache
from pathlib import Path
from typing import Final

# Constants
BINARIES_DIR: Final = Path("_binaries")
GHIDRA_OUTPUT_PATH: Final = Path("_binaries/_ghidra")
RETDEC_OUTPUT_PATH: Final = Path("_binaries/_retdec")
LOG_FILE: Final = Path("_decompile.log")

TIMEOUT_SECONDS: Final = 300
FILE_CHECK_TIMEOUT: Final = 2

RETDEC_PATH: Final = Path("/home/danielsokil/Lab/avast/retdec/retdec-install")
RETDEC_DECOMPILER: Final = RETDEC_PATH / "bin" / "retdec-decompiler"

# Regex patterns
HASH_SUFFIX_PATTERN: Final = re.compile(r"^(.+?)_[a-f0-9]+")

# Bitmain-specific binary name patterns (whitelist)
BITMAIN_BINARIES: Final = {
    "antlogin",
    "bitmain_axi.ko",
    "bmminer",
    "cgminer-api",
    "cgminer",
    "FileParser",
    "fpga_mem_driver.ko",
    "fpgaminer-api",
    "godminer",
    "id2mac",
    "led-blink",
    "miner-monitor",
    "monitor-ipsig",
    "monitor-recobtn",
    "single_board_test",
    "single-board-test",
    "update-daemon",
    "uart_trans.ko",
    "cv183x_wdt.ko",
    "cv183x_pwm.ko",
    "configfs.ko",
}


def setup_logging() -> None:
    """Configure logging with file and console handlers."""
    logging.basicConfig(
        level=logging.INFO,
        format="%(asctime)s [%(levelname)s] %(message)s",
        datefmt="%Y-%m-%d %H:%M:%S",
        handlers=[
            logging.FileHandler(LOG_FILE, mode="w", encoding="utf-8"),
            logging.StreamHandler(sys.stdout),
        ],
    )


@dataclass(frozen=True, slots=True)
class DecompileStats:
    """Statistics for decompilation run."""

    executables_done: int = 0
    executables_failed: int = 0
    retdec_done: int = 0
    retdec_failed: int = 0
    haruspex_done: int = 0
    haruspex_failed: int = 0

    @property
    def total_processed(self) -> int:
        """Total successfully processed files."""
        return self.executables_done

    @property
    def total_failed(self) -> int:
        """Total failed files."""
        return self.executables_failed


@lru_cache(maxsize=1024)
def is_elf(path: Path) -> bool:
    """Check if file is an ELF binary using file command.

    Args:
        path: Path to file to check

    Returns:
        True if file is an ELF binary, False otherwise
    """
    if not path.exists() or not path.is_file():
        return False

    try:
        result = subprocess.run(
            ["file", "--brief", str(path)],
            capture_output=True,
            text=True,
            timeout=FILE_CHECK_TIMEOUT,
            check=False,
        )
        return "ELF" in result.stdout
    except (subprocess.TimeoutExpired, FileNotFoundError, OSError):
        logging.warning(f"Could not check file type: {path}")
        return False


def extract_base_name(filename: str) -> str | None:
    """Extract base name from filename with hash suffix.

    Args:
        filename: Filename potentially with hash suffix (e.g., 'libc.so.6_abc123')

    Returns:
        Base name without hash (e.g., 'libc.so.6') or None if no hash found
    """
    if "_" not in filename:
        return None

    if match := HASH_SUFFIX_PATTERN.match(filename):
        return match.group(1)

    return filename.split("_")[0]


@lru_cache(maxsize=512)
def has_bitmain_identifier(path: Path) -> bool:
    """Check if binary contains unique Bitmain build identifiers.

    Scans for strings that uniquely identify Bitmain-built software.

    Args:
        path: Path to binary file

    Returns:
        True if Bitmain identifiers found, False otherwise
    """
    # Simple identifiers unique to Bitmain (verified not in standard tools)
    identifiers = (
        b"bitmain",  # Company name / function prefix
        b"cgminer",  # Mining software
        b"antminer",  # Product line
        b"stratum",  # Mining protocol
    )

    try:
        result = subprocess.run(
            ["strings", "-n", "6", str(path)],
            capture_output=True,
            timeout=5,
            check=False,
        )
        # Case-insensitive check
        stdout_lower = result.stdout.lower()
        return any(ident in stdout_lower for ident in identifiers)
    except (subprocess.TimeoutExpired, FileNotFoundError, OSError):
        return False


def is_bitmain_binary(path: Path) -> bool:
    """Check if binary is Bitmain-specific.

    Uses whitelist matching first, then identifier scanning for unknown binaries.

    Args:
        path: Path to binary file

    Returns:
        True if binary is Bitmain-specific, False otherwise
    """
    base_name = extract_base_name(path.name) or path.name
    base_name_lower = base_name.lower()

    # Remove common suffixes for matching
    base_clean = (
        base_name_lower.replace(".shadow", "")
        .replace(".sysvinit", "")
        .replace("_debug", "")
    )

    # First check: Known Bitmain binaries (fast, case-insensitive)
    if any(bm.lower() in base_clean for bm in BITMAIN_BINARIES):
        return True

    # Second check: Scan for Bitmain build identifiers (slower, but accurate)
    return has_bitmain_identifier(path)
    return False


def decompile_with_ghidra(binary_path: Path) -> bool:
    """Decompile a binary using ghidrecomp.

    Args:
        binary_path: Path to binary to decompile

    Returns:
        True if decompilation succeeded, False otherwise
    """
    with LOG_FILE.open("a", encoding="utf-8") as log:
        log.write(f"\n{'=' * 80}\n")
        log.write(f"Ghidra/ghidrecomp Decompiling: {binary_path.name}\n")
        log.write(f"{'-' * 80}\n")
        log.flush()

        cmd = [
            "timeout",
            f"{TIMEOUT_SECONDS}s",
            "ghidrecomp",
            str(binary_path),
            "-o",
            str(GHIDRA_OUTPUT_PATH),
            "--project-path",
            str(BINARIES_DIR / "_ghidra_projects"),
        ]

        try:
            with subprocess.Popen(
                cmd,
                stdout=subprocess.PIPE,
                stderr=subprocess.STDOUT,
                text=True,
                bufsize=1,
            ) as process:
                # Stream output line by line
                if process.stdout:
                    for line in process.stdout:
                        log.write(line)
                        log.flush()

                returncode = process.wait()

            log.write(f"\nReturn code: {returncode}\n")
            log.flush()

            if returncode != 0:
                logging.error(
                    f"ghidrecomp failed to decompile {binary_path.name} (code {returncode})"
                )
            else:
                # Find the output directory created by ghidrecomp
                output_dir = GHIDRA_OUTPUT_PATH / binary_path.stem
                logging.info(f"  ghidrecomp output: {output_dir}")
                # Format any C files in the output directory
                if output_dir.exists():
                    for c_file in output_dir.glob("**/*.c"):
                        format_c_file(c_file)

            return returncode == 0

        except (subprocess.TimeoutExpired, OSError) as e:
            log.write(f"\nError: {e}\n")
            log.flush()
            logging.error(
                f"Exception while decompiling {binary_path.name} with ghidrecomp: {e}"
            )
            return False


def format_c_file(c_file: Path) -> bool:
    """Format a C file using clang-format.

    Args:
        c_file: Path to C file to format

    Returns:
        True if formatting succeeded, False otherwise
    """
    if not c_file.exists():
        logging.warning(f"C file not found for formatting: {c_file}")
        return False

    try:
        result = subprocess.run(
            [
                "clang-format",
                "-style={BasedOnStyle: LLVM, IndentWidth: 4}",
                "-i",
                str(c_file),
            ],
            capture_output=True,
            text=True,
            timeout=30,
            check=False,
        )

        if result.returncode == 0:
            logging.debug(f"  Formatted: {c_file.name}")
            return True
        else:
            logging.warning(f"clang-format failed for {c_file.name}: {result.stderr}")
            return False

    except (subprocess.TimeoutExpired, FileNotFoundError, OSError) as e:
        logging.warning(f"Could not format {c_file.name}: {e}")
        return False


def decompile_with_retdec(binary_path: Path) -> bool:
    """Decompile a binary using RetDec.

    Args:
        binary_path: Path to binary to decompile

    Returns:
        True if decompilation succeeded, False otherwise
    """
    # Create output directory structure matching Ghidra
    output_dir = RETDEC_OUTPUT_PATH / binary_path.stem
    output_dir.mkdir(parents=True, exist_ok=True)

    output_file = output_dir / f"{binary_path.stem}.c"

    with LOG_FILE.open("a", encoding="utf-8") as log:
        log.write(f"\n{'=' * 80}\n")
        log.write(f"RetDec Decompiling: {binary_path.name}\n")
        log.write(f"{'-' * 80}\n")
        log.flush()

        cmd = [
            "timeout",
            f"{TIMEOUT_SECONDS}s",
            str(RETDEC_DECOMPILER),
            str(binary_path),
            "--cleanup",
            "--backend-var-renamer",
            "hungarian",
            "--backend-keep-library-funcs",
            "-k",
            "-o",
            str(output_file),
        ]

        try:
            with subprocess.Popen(
                cmd,
                stdout=subprocess.PIPE,
                stderr=subprocess.STDOUT,
                text=True,
                bufsize=1,
            ) as process:
                # Stream output line by line
                if process.stdout:
                    for line in process.stdout:
                        log.write(line)
                        log.flush()

                returncode = process.wait()

            log.write(f"\nReturn code: {returncode}\n")
            log.flush()

            if returncode != 0:
                logging.error(
                    f"RetDec failed to decompile {binary_path.name} (code {returncode})"
                )
            else:
                logging.info(f"  RetDec output: {output_file}")
                # Format the generated C file
                format_c_file(output_file)

            return returncode == 0

        except (subprocess.TimeoutExpired, OSError) as e:
            log.write(f"\nError: {e}\n")
            log.flush()
            logging.error(
                f"Exception while decompiling {binary_path.name} with RetDec: {e}"
            )
            return False


def decompile_with_haruspex(binary_path: Path) -> bool:
    """Decompile a binary using haruspex/IDA Pro.

    haruspex creates output directories in BINARIES_DIR as <binary_name>.dec/

    Args:
        binary_path: Path to binary to decompile

    Returns:
        True if decompilation succeeded, False otherwise
    """
    with LOG_FILE.open("a", encoding="utf-8") as log:
        log.write(f"\n{'=' * 80}\n")
        log.write(f"IDA Pro/haruspex Decompiling: {binary_path.name}\n")
        log.write(f"{'-' * 80}\n")
        log.flush()

        cmd = [
            "timeout",
            f"{TIMEOUT_SECONDS}s",
            "haruspex",
            binary_path.name,
        ]

        try:
            with subprocess.Popen(
                cmd,
                stdout=subprocess.PIPE,
                stderr=subprocess.STDOUT,
                text=True,
                bufsize=1,
                cwd=BINARIES_DIR,
            ) as process:
                # Stream output line by line
                if process.stdout:
                    for line in process.stdout:
                        log.write(line)
                        log.flush()

                returncode = process.wait()

            log.write(f"\nReturn code: {returncode}\n")
            log.flush()

            if returncode != 0:
                logging.error(
                    f"haruspex failed to decompile {binary_path.name} (code {returncode})"
                )
            else:
                # haruspex creates output as <binary_name>.dec/ in BINARIES_DIR
                output_dir = BINARIES_DIR / f"{binary_path.name}.dec"
                logging.info(f"  haruspex output: {output_dir}")

            return returncode == 0

        except (subprocess.TimeoutExpired, OSError) as e:
            log.write(f"\nError: {e}\n")
            log.flush()
            logging.error(
                f"Exception while decompiling {binary_path.name} with haruspex: {e}"
            )
            return False


def get_executables() -> list[Path]:
    """Get list of Bitmain-specific executable files in BINARIES_DIR.

    Filters out standard Linux tools and libraries.

    Returns:
        List of Bitmain-specific executable file paths
    """
    executables: list[Path] = []
    skipped: list[str] = []

    for f in BINARIES_DIR.iterdir():
        if not f.is_file():
            continue

        # Skip libraries
        if ".so" in f.name:
            continue

        # Check If ELF
        if not is_elf(f):
            continue

        # Check if Bitmain-specific
        if is_bitmain_binary(f):
            executables.append(f)
        else:
            skipped.append(f.name)

    if skipped:
        logging.info(f"Skipped {len(skipped)} standard tools")
        logging.debug(f"Skipped: {', '.join(sorted(skipped)[:10])}")

    logging.info(f"Found {len(executables)} Bitmain-specific binaries")
    return executables


def print_summary(stats: DecompileStats, exe_count: int) -> None:
    """Print decompilation summary.

    Args:
        stats: Decompilation statistics
        exe_count: Total executable count
    """
    logging.info("=" * 60)
    logging.info("SUMMARY")
    logging.info("=" * 60)
    logging.info(f"Ghidra:          {stats.executables_done}/{exe_count} decompiled")
    logging.info(f"RetDec:          {stats.retdec_done}/{exe_count} decompiled")
    logging.info(f"IDA Pro:         {stats.haruspex_done}/{exe_count} decompiled")
    logging.info(f"Ghidra Failed:   {stats.executables_failed}")
    logging.info(f"RetDec Failed:   {stats.retdec_failed}")
    logging.info(f"IDA Pro Failed:  {stats.haruspex_failed}")
    logging.info(f"Ghidra Output:   {GHIDRA_OUTPUT_PATH}")
    logging.info(f"RetDec Output:   {RETDEC_OUTPUT_PATH}")
    logging.info(f"IDA Pro Output:  {BINARIES_DIR}/<binary>.dec/")
    logging.info(f"Log:             {LOG_FILE}")
    logging.info(f"Completed:       {datetime.now().isoformat()}")
    logging.info("=" * 60)


def main() -> int:
    """Main decompilation workflow using ghidrecomp, RetDec, and IDA Pro.

    For each Bitmain binary:
    1. Decompile the binary with ghidrecomp (Ghidra)
    2. Decompile the binary with RetDec
    3. Decompile the binary with IDA Pro/haruspex

    Returns:
        Exit code (0 for success, 1 for failure)
    """
    setup_logging()

    logging.info("=" * 60)
    logging.info("Automated Decompilation (ghidrecomp + RetDec + IDA Pro)")
    logging.info("=" * 60)
    logging.info(f"Started: {datetime.now().isoformat()}")
    logging.info(f"Using RetDec: {RETDEC_PATH}")

    try:
        # Create necessary directories
        GHIDRA_OUTPUT_PATH.mkdir(parents=True, exist_ok=True)
        RETDEC_OUTPUT_PATH.mkdir(parents=True, exist_ok=True)
        # Note: haruspex creates its own output directories

        # Validate ghidrecomp installation
        try:
            result = subprocess.run(
                ["which", "ghidrecomp"],
                capture_output=True,
                text=True,
                check=False,
            )
            if result.returncode != 0:
                logging.error("ghidrecomp command not found in PATH")
                return 1
            else:
                logging.info(f"Using ghidrecomp: {result.stdout.strip()}")
        except (FileNotFoundError, OSError):
            logging.error("Failed to check for ghidrecomp")
            return 1

        # Validate RetDec installation
        if not RETDEC_DECOMPILER.exists():
            logging.error(f"RetDec decompiler not found: {RETDEC_DECOMPILER}")
            return 1

        # Validate haruspex installation
        try:
            result = subprocess.run(
                ["which", "haruspex"],
                capture_output=True,
                text=True,
                check=False,
            )
            if result.returncode != 0:
                logging.warning("haruspex command not found in PATH")
                logging.warning("IDA Pro decompilation will be skipped")
                haruspex_available = False
            else:
                logging.info(f"Using haruspex: {result.stdout.strip()}")
                haruspex_available = True
        except (FileNotFoundError, OSError):
            logging.warning(
                "Failed to check for haruspex - IDA Pro decompilation will be skipped"
            )
            haruspex_available = False

        # Get Bitmain-specific executables
        executables = get_executables()

        # Process each executable with all three decompilers
        ghidra_ok = ghidra_fail = 0
        retdec_ok = retdec_fail = 0
        haruspex_ok = haruspex_fail = 0
        total = len(executables)

        for i, exe_path in enumerate(executables, 1):
            logging.info(f"\n[{i}/{total}] Processing: {exe_path.name}")

            # Decompile the executable with ghidrecomp (Ghidra)
            logging.info(f"  Decompiling with ghidrecomp: {exe_path.name}...")
            if decompile_with_ghidra(exe_path):
                ghidra_ok += 1
            else:
                ghidra_fail += 1

            # Decompile the executable with RetDec
            logging.info(f"  Decompiling with RetDec: {exe_path.name}...")
            if decompile_with_retdec(exe_path):
                retdec_ok += 1
            else:
                retdec_fail += 1

            # Decompile the executable with IDA Pro/haruspex (if available)
            if haruspex_available:
                logging.info(f"  Decompiling with IDA Pro/haruspex: {exe_path.name}...")
                if decompile_with_haruspex(exe_path):
                    haruspex_ok += 1
                else:
                    haruspex_fail += 1

        # Print summary
        stats = DecompileStats(
            ghidra_ok, ghidra_fail, retdec_ok, retdec_fail, haruspex_ok, haruspex_fail
        )
        print_summary(stats, total)

        return 0 if stats.total_failed == 0 else 1

    except KeyboardInterrupt:
        logging.warning("\nInterrupted by user")
        return 130
    except Exception as e:
        logging.exception(f"Unexpected error: {e}")
        return 1


if __name__ == "__main__":
    sys.exit(main())
