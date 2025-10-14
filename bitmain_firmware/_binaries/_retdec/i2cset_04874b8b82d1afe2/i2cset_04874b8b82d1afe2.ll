source_filename = "test"
target datalayout = "e-p:32:32:32-f80:32:32"

%_IO_FILE = type { i32 }
%__dirstream = type { i32 }
%dirent64 = type { i32, i32, i16, i8, [256 x i8] }

@0 = external local_unnamed_addr global i32
@1 = external local_unnamed_addr global i32
@2 = external local_unnamed_addr global i32
@global_var_2400c = local_unnamed_addr global i32 68348
@global_var_24010 = local_unnamed_addr global i32 68348
@global_var_24014 = local_unnamed_addr global i32 68348
@global_var_24018 = local_unnamed_addr global i32 68348
@global_var_2401c = local_unnamed_addr global i32 68348
@global_var_24020 = local_unnamed_addr global i32 68348
@global_var_24024 = local_unnamed_addr global i32 68348
@global_var_24028 = local_unnamed_addr global i32 68348
@global_var_2402c = local_unnamed_addr global i32 68348
@global_var_24030 = local_unnamed_addr global i32 68348
@global_var_24034 = local_unnamed_addr global i32 68348
@global_var_24038 = local_unnamed_addr global i32 68348
@global_var_2403c = local_unnamed_addr global i32 68348
@global_var_24040 = local_unnamed_addr global i32 68348
@global_var_24044 = local_unnamed_addr global i32 68348
@global_var_24048 = local_unnamed_addr global i32 68348
@global_var_2404c = local_unnamed_addr global i32 68348
@global_var_24050 = local_unnamed_addr global i32 68348
@global_var_24054 = local_unnamed_addr global i32 68348
@global_var_24058 = local_unnamed_addr global i32 68348
@global_var_2405c = local_unnamed_addr global i32 68348
@global_var_24060 = local_unnamed_addr global i32 68348
@global_var_24064 = local_unnamed_addr global i32 68348
@global_var_24068 = local_unnamed_addr global i32 68348
@global_var_2406c = local_unnamed_addr global i32 68348
@global_var_24070 = local_unnamed_addr global i32 68348
@global_var_24074 = local_unnamed_addr global i32 68348
@global_var_24078 = local_unnamed_addr global i32 68348
@global_var_2407c = local_unnamed_addr global i32 68348
@global_var_24080 = local_unnamed_addr global i32 68348
@global_var_24084 = local_unnamed_addr global i32 68348
@global_var_24088 = local_unnamed_addr global i32 68348
@global_var_2408c = local_unnamed_addr global i32 68348
@global_var_24090 = local_unnamed_addr global i32 68348
@global_var_24094 = local_unnamed_addr global i32 68348
@global_var_24098 = local_unnamed_addr global i32 68348
@global_var_2409c = local_unnamed_addr global i32 68348
@global_var_240a0 = local_unnamed_addr global i32 68348
@global_var_240a4 = local_unnamed_addr global i32 68348
@global_var_240a8 = local_unnamed_addr global i32 68348
@global_var_240ac = local_unnamed_addr global i32 68348
@global_var_240b0 = local_unnamed_addr global i32 68348
@global_var_240b4 = local_unnamed_addr global i32 68348
@global_var_240b8 = local_unnamed_addr global i32 68348
@global_var_240bc = local_unnamed_addr global i32 68348
@global_var_240c0 = local_unnamed_addr global i32 68348
@global_var_240c4 = local_unnamed_addr global i32 68348
@global_var_129c4 = constant [28 x i8] c"Error: Too many arguments!\0A\00"
@global_var_128ec = constant [33 x i8] c"Error: Unsupported option \22%s\22!\0A\00"
@global_var_12928 = constant [30 x i8] c"Error: Data address invalid!\0A\00"
@global_var_12910 = constant [4 x i8] c"4.1\00"
@global_var_12914 = constant [19 x i8] c"i2cset version %s\0A\00"
@global_var_12a20 = constant [33 x i8] c"Error: Data value mask invalid!\0A\00"
@global_var_12948 = constant [27 x i8] c"Error: Invalid mode '%s'!\0A\00"
@global_var_12b30 = local_unnamed_addr constant [47 x i8] c"Warning: Adapter does not seem to support PEC\0A\00"
@global_var_12d1c = constant [75 x i8] c"Old value 0x%0*x, write mask 0x%0*x: Will write 0x%0*x to register 0x%02x\0A\00"
@global_var_12d68 = constant [17 x i8] c"Continue? [Y/n] \00"
@global_var_12b20 = constant [16 x i8] c"I2C block write\00"
@global_var_12ab8 = constant [44 x i8] c"Error: Adapter does not have %s capability\0A\00"
@global_var_12b0c = constant [18 x i8] c"SMBus block write\00"
@global_var_12af8 = constant [17 x i8] c"SMBus write word\00"
@global_var_12ae4 = constant [17 x i8] c"SMBus write byte\00"
@global_var_12aa8 = constant [16 x i8] c"SMBus send byte\00"
@global_var_12a44 = constant [38 x i8] c"Error: Data value mask out of range!\0A\00"
@global_var_129e0 = constant [28 x i8] c"Error: Data value invalid!\0A\00"
@global_var_12994 = constant [45 x i8] c"Error: Mask not supported for block writes!\0A\00"
@global_var_12964 = constant [48 x i8] c"Error: PEC not supported for I2C block writes!\0A\00"
@global_var_129fc = constant [33 x i8] c"Error: Data value out of range!\0A\00"
@global_var_12df0 = constant [58 x i8] c"Warning - data mismatch - wrote 0x%0*x, read back 0x%0*x\0A\00"
@global_var_12e2c = constant [40 x i8] c"Value 0x%0*x written, readback matched\0A\00"
@global_var_12dd4 = constant [26 x i8] c"Warning - readback failed\00"
@global_var_12db4 = local_unnamed_addr constant [32 x i8] c"Error: Could not clear PEC: %s\0A\00"
@global_var_12d9c = constant [21 x i8] c"Error: Write failed\0A\00"
@global_var_12d7c = local_unnamed_addr constant [30 x i8] c"Error: Could not set PEC: %s\0A\00"
@global_var_12cdc = constant [27 x i8] c"Aborting on user request.\0A\00"
@global_var_12cf8 = constant [33 x i8] c"Error: Failed to read old value\0A\00"
@global_var_12b60 = constant [76 x i8] c"WARNING! This program can confuse your I2C bus, cause data loss and worse!\0A\00"
@global_var_12bac = constant [120 x i8] c"DANGEROUS! Writing to a serial EEPROM on a memory DIMM\0Amay render your memory USELESS and make your system UNBOOTABLE!\0A\00"
@global_var_12c24 = constant [75 x i8] c"I will write to device file %s, chip address 0x%02x, data address\0A0x%02x, \00"
@global_var_12af0 = constant [5 x i8] c"byte\00"
@global_var_12b04 = constant [5 x i8] c"word\00"
@global_var_128d8 = constant [10 x i8] c" (masked)\00"
@global_var_12c98 = constant [25 x i8] c"data 0x%02x%s, mode %s.\0A\00"
@global_var_12cb4 = local_unnamed_addr constant [23 x i8] c"PEC checking enabled.\0A\00"
@global_var_128e4 = constant [4 x i8] c"y/N\00"
@global_var_128e8 = constant [4 x i8] c"Y/n\00"
@global_var_12ccc = constant [16 x i8] c"Continue? [%s] \00"
@global_var_12c7c = constant [5 x i8] c"data\00"
@global_var_12c84 = constant [8 x i8] c" 0x%02x\00"
@global_var_128cc = constant [10 x i8] c"i2c block\00"
@global_var_128c0 = constant [12 x i8] c"smbus block\00"
@global_var_12c8c = constant [12 x i8] c", mode %s.\0A\00"
@global_var_12c70 = constant [10 x i8] c"no data.\0A\00"
@global_var_12a6c = constant [59 x i8] c"Error: Could not get the adapter functionality matrix: %s\0A\00"
@global_var_11b38 = local_unnamed_addr constant i32 74964
@global_var_124d4 = constant i32 704643120
@global_var_11b3c = local_unnamed_addr constant i32 200
@global_var_11b2c = constant i32 -481165312
@global_var_1274c = constant [369 x i8] c"Usage: i2cset [-f] [-y] [-m MASK] [-r] [-a] I2CBUS CHIP-ADDRESS DATA-ADDRESS [VALUE] ... [MODE]\0A  I2CBUS is an integer or an I2C bus name\0A  ADDRESS is an integer (0x03 - 0x77, or 0x00 - 0x7f if -a is given)\0A  MODE is one of:\0A    c (byte, no value)\0A    b (byte data, default)\0A    w (word data)\0A    i (I2C block data)\0A    s (SMBus block data)\0A    Append p for SMBus PEC\0A\00"
@global_var_12e7c = constant [38 x i8] c"Error: Chip address is not a number!\0A\00"
@global_var_12ea4 = constant [53 x i8] c"Error: Chip address out of range (0x%02lx-0x%02lx)!\0A\00"
@global_var_12edc = constant [12 x i8] c"/dev/i2c/%d\00"
@global_var_12f34 = local_unnamed_addr constant [37 x i8] c"Error: Could not open file `%s': %s\0A\00"
@global_var_12f5c = local_unnamed_addr constant [14 x i8] c"Run as root?\0A\00"
@global_var_12ef4 = local_unnamed_addr constant [63 x i8] c"Error: Could not open file `/dev/i2c-%d' or `/dev/i2c/%d': %s\0A\00"
@global_var_12ee8 = constant [12 x i8] c"/dev/i2c-%d\00"
@global_var_12f6c = constant [14 x i8] c"/proc/bus/i2c\00"
@global_var_12f7c = constant [7 x i8] c"i2c-%d\00"
@global_var_12f84 = constant [13 x i8] c"/proc/mounts\00"
@global_var_12f94 = constant [24 x i8] c"%*[^ ] %[^ ] %[^ ] %*s\0A\00"
@global_var_12fac = constant [6 x i8] c"sysfs\00"
@global_var_13030 = local_unnamed_addr constant [15 x i8] c"/class/i2c-dev\00"
@global_var_13034 = local_unnamed_addr constant [11 x i8] c"ss/i2c-dev\00"
@global_var_13038 = local_unnamed_addr constant [7 x i8] c"2c-dev\00"
@global_var_1303c = local_unnamed_addr constant [3 x i8] c"ev\00"
@global_var_12fb4 = constant [11 x i8] c"%s/%s/name\00"
@global_var_13028 = constant [5 x i8] c"ISA \00"
@global_var_130fc = constant [6 x i8] c"dummy\00"
@global_var_13104 = constant [10 x i8] c"Dummy bus\00"
@global_var_13110 = constant [4 x i8] c"isa\00"
@global_var_13114 = constant [8 x i8] c"ISA bus\00"
@global_var_1311c = constant [4 x i8] c"i2c\00"
@global_var_13120 = constant [12 x i8] c"I2C adapter\00"
@global_var_1312c = constant [6 x i8] c"smbus\00"
@global_var_13134 = constant [14 x i8] c"SMBus adapter\00"
@global_var_13144 = constant [8 x i8] c"unknown\00"
@global_var_1314c = constant [4 x i8] c"N/A\00"
@global_var_12e54 = constant [10 x i8*] [i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_130fc, i32 0, i32 0), i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_13104, i32 0, i32 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_13110, i32 0, i32 0), i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_13114, i32 0, i32 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_1311c, i32 0, i32 0), i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_13120, i32 0, i32 0), i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_1312c, i32 0, i32 0), i8* getelementptr inbounds ([14 x i8], [14 x i8]* @global_var_13134, i32 0, i32 0), i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_13144, i32 0, i32 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_1314c, i32 0, i32 0)]
@global_var_12fc0 = constant [20 x i8] c"%s: path truncated\0A\00"
@global_var_12fd4 = constant [18 x i8] c"%s/%s/device/name\00"
@global_var_12fe8 = constant [13 x i8] c"%s/%s/device\00"
@global_var_12ff8 = constant [5 x i8] c"i2c-\00"
@global_var_13000 = constant [21 x i8] c"%s/%s/device/%s/name\00"
@global_var_13018 = constant [16 x i8] c"%s: read error\0A\00"
@global_var_13058 = constant [36 x i8] c"Error: I2C bus name is not unique!\0A\00"
@global_var_1307c = constant [52 x i8] c"Error: I2C bus name doesn't match any bus present!\0A\00"
@global_var_130b0 = constant [30 x i8] c"Error: I2C bus out of range!\0A\00"
@global_var_13040 = constant [23 x i8] c"Error: Out of memory!\0A\00"
@global_var_130d0 = constant [44 x i8] c"Error: Could not set address to 0x%02x: %s\0A\00"
@global_var_12734 = local_unnamed_addr constant i32 71674
@global_var_12738 = local_unnamed_addr constant i32 71664
@global_var_23f08 = global i32 72617
@3 = external global i32
@global_var_240d8 = local_unnamed_addr global %_IO_FILE* null
@global_var_1290c = external constant i8*
@global_var_11b14 = local_unnamed_addr constant void ()* inttoptr (i32 68932 to void ()*)
@global_var_11b18 = local_unnamed_addr constant void ()* inttoptr (i32 75521 to void ()*)
@4 = internal constant [2 x i8] c"r\00"
@5 = constant i8* getelementptr inbounds ([2 x i8], [2 x i8]* @4, i32 0, i32 0)
@global_var_1303e = local_unnamed_addr constant i8 0
@global_var_240e0 = local_unnamed_addr global %_IO_FILE* null
@global_var_13140 = constant [2 x i8] c"r\00"

declare i32 @unknown_240() local_unnamed_addr

define i32 @function_10af0(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_10af0:
  %0 = call i32 @function_11b1c(), !insn.addr !0
  ret i32 %0, !insn.addr !1
}

define i32* @function_10b10(i32 %nmemb, i32 %size) local_unnamed_addr {
dec_label_pc_10b10:
  %0 = call i32* @calloc(i32 %nmemb, i32 %size), !insn.addr !2
  ret i32* %0, !insn.addr !2
}

define i32 @function_10b1c(i8* %s1, i8* %s2) local_unnamed_addr {
dec_label_pc_10b1c:
  %0 = call i32 @strcmp(i8* %s1, i8* %s2), !insn.addr !3
  ret i32 %0, !insn.addr !3
}

define i32 @function_10b28(i8* %nptr, i8** %endptr, i32 %base) local_unnamed_addr {
dec_label_pc_10b28:
  %0 = call i32 @strtol(i8* %nptr, i8** %endptr, i32 %base), !insn.addr !4
  ret i32 %0, !insn.addr !4
}

define i32 @function_10b34(i8* %format, ...) local_unnamed_addr {
dec_label_pc_10b34:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !5
  ret i32 %0, !insn.addr !5
}

define i32 @function_10b40(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_10b40:
  %0 = call i32 @fflush(%_IO_FILE* %stream), !insn.addr !6
  ret i32 %0, !insn.addr !6
}

define void @function_10b4c(i32* %ptr) local_unnamed_addr {
dec_label_pc_10b4c:
  call void @free(i32* %ptr), !insn.addr !7
  ret void, !insn.addr !7
}

define i8* @function_10b58(i8* %s, i32 %n, %_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_10b58:
  %0 = call i8* @fgets(i8* %s, i32 %n, %_IO_FILE* %stream), !insn.addr !8
  ret i8* %0, !insn.addr !8
}

define i32 @function_10b64(i32 %arg1, i32 %arg2, i32 %arg3, i32* %arg4) local_unnamed_addr {
dec_label_pc_10b64:
  %0 = call i32 @i2c_smbus_write_block_data(i32 %arg1, i32 %arg2, i32 %arg3, i32* %arg4), !insn.addr !9
  ret i32 %0, !insn.addr !9
}

define i32* @function_10b70(i32* %ptr, i32 %size) local_unnamed_addr {
dec_label_pc_10b70:
  %0 = call i32* @realloc(i32* %ptr, i32 %size), !insn.addr !10
  ret i32* %0, !insn.addr !10
}

define i32 @function_10b7c(i8* %s1, i8* %s2) local_unnamed_addr {
dec_label_pc_10b7c:
  %0 = call i32 @strcasecmp(i8* %s1, i8* %s2), !insn.addr !11
  ret i32 %0, !insn.addr !11
}

define i32 @function_10b88(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %s) local_unnamed_addr {
dec_label_pc_10b88:
  %0 = call i32 @fwrite(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %s), !insn.addr !12
  ret i32 %0, !insn.addr !12
}

define i32 @function_10b94(i32 %fd, i32 %request, ...) local_unnamed_addr {
dec_label_pc_10b94:
  %0 = call i32 (i32, i32, ...) @ioctl(i32 %fd, i32 %request), !insn.addr !13
  ret i32 %0, !insn.addr !13
}

define i8* @function_10ba0(i8* %dest, i8* %src) local_unnamed_addr {
dec_label_pc_10ba0:
  %0 = call i8* @strcpy(i8* %dest, i8* %src), !insn.addr !14
  ret i8* %0, !insn.addr !14
}

define i32 @function_10bac(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_10bac:
  %0 = call i32 @i2c_smbus_write_byte(i32 %arg1, i32 %arg2), !insn.addr !15
  ret i32 %0, !insn.addr !15
}

define %__dirstream* @function_10bb8(i8* %name) local_unnamed_addr {
dec_label_pc_10bb8:
  %0 = call %__dirstream* @opendir(i8* %name), !insn.addr !16
  ret %__dirstream* %0, !insn.addr !16
}

define i32 @function_10bc4(i8* %file, i32 %oflag, ...) local_unnamed_addr {
dec_label_pc_10bc4:
  %0 = call i32 (i8*, i32, ...) @open64(i8* %file, i32 %oflag), !insn.addr !17
  ret i32 %0, !insn.addr !17
}

define i32 @function_10bd0(i8* %s) local_unnamed_addr {
dec_label_pc_10bd0:
  %0 = call i32 @puts(i8* %s), !insn.addr !18
  ret i32 %0, !insn.addr !18
}

define i32* @function_10bdc(i32 %size) local_unnamed_addr {
dec_label_pc_10bdc:
  %0 = call i32* @malloc(i32 %size), !insn.addr !19
  ret i32* %0, !insn.addr !19
}

define i32 @function_10be8(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_10be8:
  %0 = call i32 @__libc_start_main(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !20
  ret i32 %0, !insn.addr !20
}

define i8* @function_10bf4(i32 %errnum) local_unnamed_addr {
dec_label_pc_10bf4:
  %0 = call i8* @strerror(i32 %errnum), !insn.addr !21
  ret i8* %0, !insn.addr !21
}

define void @function_10c00() local_unnamed_addr {
dec_label_pc_10c00:
  call void @__gmon_start__(), !insn.addr !22
  ret void, !insn.addr !22
}

define void @function_10c0c(i32 %status) local_unnamed_addr {
dec_label_pc_10c0c:
  call void @exit(i32 %status), !insn.addr !23
  ret void, !insn.addr !23
}

define i32 @function_10c18(i8* %nptr, i8** %endptr, i32 %base) local_unnamed_addr {
dec_label_pc_10c18:
  %0 = call i32 @strtoul(i8* %nptr, i8** %endptr, i32 %base), !insn.addr !24
  ret i32 %0, !insn.addr !24
}

define i32 @function_10c24(i32 %arg1) local_unnamed_addr {
dec_label_pc_10c24:
  %0 = call i32 @i2c_smbus_read_byte(i32 %arg1), !insn.addr !25
  ret i32 %0, !insn.addr !25
}

define i32 @function_10c30(i8* %s) local_unnamed_addr {
dec_label_pc_10c30:
  %0 = call i32 @strlen(i8* %s), !insn.addr !26
  ret i32 %0, !insn.addr !26
}

define i8* @function_10c3c(i8* %s, i32 %c) local_unnamed_addr {
dec_label_pc_10c3c:
  %0 = call i8* @strchr(i8* %s, i32 %c), !insn.addr !27
  ret i8* %0, !insn.addr !27
}

define i32 @function_10c48(%_IO_FILE* %stream, i8* %format, ...) local_unnamed_addr {
dec_label_pc_10c48:
  %0 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %stream, i8* %format), !insn.addr !28
  ret i32 %0, !insn.addr !28
}

define i32 @function_10c54(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_10c54:
  %0 = call i32 @i2c_smbus_write_byte_data(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !29
  ret i32 %0, !insn.addr !29
}

define i32* @function_10c60() local_unnamed_addr {
dec_label_pc_10c60:
  %0 = call i32* @__errno_location(), !insn.addr !30
  ret i32* %0, !insn.addr !30
}

define i32 @function_10c6c(i8* %s, i32 %maxlen, i8* %format, ...) local_unnamed_addr {
dec_label_pc_10c6c:
  %0 = call i32 (i8*, i32, i8*, ...) @snprintf(i8* %s, i32 %maxlen, i8* %format), !insn.addr !31
  ret i32 %0, !insn.addr !31
}

define i32 @function_10c78(i8* %s, i8* %format, ...) local_unnamed_addr {
dec_label_pc_10c78:
  %0 = call i32 (i8*, i8*, ...) @sscanf(i8* %s, i8* %format), !insn.addr !32
  ret i32 %0, !insn.addr !32
}

define i8* @function_10c84(i8* %string) local_unnamed_addr {
dec_label_pc_10c84:
  %0 = call i8* @__strdup(i8* %string), !insn.addr !33
  ret i8* %0, !insn.addr !33
}

define i32* @function_10c90(i32* %s, i32 %c, i32 %n) local_unnamed_addr {
dec_label_pc_10c90:
  %0 = call i32* @memset(i32* %s, i32 %c, i32 %n), !insn.addr !34
  ret i32* %0, !insn.addr !34
}

define i32 @function_10c9c(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_10c9c:
  %0 = call i32 @fgetc(%_IO_FILE* %stream), !insn.addr !35
  ret i32 %0, !insn.addr !35
}

define i32 @function_10ca8(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_10ca8:
  %0 = call i32 @i2c_smbus_write_word_data(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !36
  ret i32 %0, !insn.addr !36
}

define i32 @function_10cb4(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_10cb4:
  %0 = call i32 @fclose(%_IO_FILE* %stream), !insn.addr !37
  ret i32 %0, !insn.addr !37
}

define i32 @function_10cc0(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_10cc0:
  %0 = call i32 @i2c_smbus_read_word_data(i32 %arg1, i32 %arg2), !insn.addr !38
  ret i32 %0, !insn.addr !38
}

define i8* @function_10ccc(i8* %s, i32 %c) local_unnamed_addr {
dec_label_pc_10ccc:
  %0 = call i8* @strrchr(i8* %s, i32 %c), !insn.addr !39
  ret i8* %0, !insn.addr !39
}

define i32 @function_10cd8(i8* %s, i8* %format, ...) local_unnamed_addr {
dec_label_pc_10cd8:
  %0 = call i32 (i8*, i8*, ...) @sprintf(i8* %s, i8* %format), !insn.addr !40
  ret i32 %0, !insn.addr !40
}

define %dirent64* @function_10ce4(%__dirstream* %dirp) local_unnamed_addr {
dec_label_pc_10ce4:
  %0 = call %dirent64* @readdir64(%__dirstream* %dirp), !insn.addr !41
  ret %dirent64* %0, !insn.addr !41
}

define i32 @function_10cf0(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_10cf0:
  %0 = call i32 @i2c_smbus_read_byte_data(i32 %arg1, i32 %arg2), !insn.addr !42
  ret i32 %0, !insn.addr !42
}

define %_IO_FILE* @function_10cfc(i8* %filename, i8* %modes) local_unnamed_addr {
dec_label_pc_10cfc:
  %0 = call %_IO_FILE* @fopen64(i8* %filename, i8* %modes), !insn.addr !43
  ret %_IO_FILE* %0, !insn.addr !43
}

define i32 @function_10d08(i8* %s1, i8* %s2, i32 %n) local_unnamed_addr {
dec_label_pc_10d08:
  %0 = call i32 @strncmp(i8* %s1, i8* %s2, i32 %n), !insn.addr !44
  ret i32 %0, !insn.addr !44
}

define void @function_10d14() local_unnamed_addr {
dec_label_pc_10d14:
  call void @abort(), !insn.addr !45
  ret void, !insn.addr !45
}

define i32 @function_10d20(i32 %fd) local_unnamed_addr {
dec_label_pc_10d20:
  %0 = call i32 @close(i32 %fd), !insn.addr !46
  ret i32 %0, !insn.addr !46
}

define i32 @function_10d2c(%__dirstream* %dirp) local_unnamed_addr {
dec_label_pc_10d2c:
  %0 = call i32 @closedir(%__dirstream* %dirp), !insn.addr !47
  ret i32 %0, !insn.addr !47
}

define i32 @function_10d38(i32 %arg1, i32 %arg2, i32 %arg3, i32* %arg4) local_unnamed_addr {
dec_label_pc_10d38:
  %0 = call i32 @i2c_smbus_write_i2c_block_data(i32 %arg1, i32 %arg2, i32 %arg3, i32* %arg4), !insn.addr !48
  ret i32 %0, !insn.addr !48
}

define i32 @function_10d44(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_10d44:
  %0 = alloca i32
  %r4.1130.reg2mem = alloca i32, !insn.addr !49
  %.reg2mem = alloca %_IO_FILE*, !insn.addr !49
  %.lcssa.reg2mem = alloca %_IO_FILE*, !insn.addr !49
  %stack_var_-124.1.reg2mem = alloca i32, !insn.addr !49
  %r7.3.reg2mem = alloca i32, !insn.addr !49
  %r4.9.reg2mem = alloca i32, !insn.addr !49
  %r0.3.reg2mem = alloca i32, !insn.addr !49
  %r4.831.reg2mem = alloca i32, !insn.addr !49
  %storemerge532.reg2mem = alloca i32, !insn.addr !49
  %storemerge9.reg2mem = alloca i32, !insn.addr !49
  %r6.3.reg2mem = alloca i32, !insn.addr !49
  %.pre-phi.reg2mem = alloca i8*, !insn.addr !49
  %r4.6.reg2mem = alloca i32, !insn.addr !49
  %r0.2.reg2mem = alloca i32, !insn.addr !49
  %fp.3.reg2mem = alloca i32, !insn.addr !49
  %r6.2.reg2mem = alloca i32, !insn.addr !49
  %r4.4.reg2mem = alloca i32, !insn.addr !49
  %stack_var_-120.0.reg2mem = alloca i32, !insn.addr !49
  %r6.0.reg2mem = alloca i32, !insn.addr !49
  %r4.2.reg2mem = alloca i32, !insn.addr !49
  %storemerge6.reg2mem = alloca i32, !insn.addr !49
  %fp.2.reg2mem = alloca i32, !insn.addr !49
  %sb.2.reg2mem = alloca i32, !insn.addr !49
  %r8.2.reg2mem = alloca i32, !insn.addr !49
  %r7.2.reg2mem = alloca i32, !insn.addr !49
  %r4.1.reg2mem = alloca i32, !insn.addr !49
  %r1.2.reg2mem = alloca i32, !insn.addr !49
  %fp.1.reg2mem = alloca i32, !insn.addr !49
  %sb.1.reg2mem = alloca i32, !insn.addr !49
  %r8.1.reg2mem = alloca i32, !insn.addr !49
  %r7.1.reg2mem = alloca i32, !insn.addr !49
  %r1.1.reg2mem = alloca i32, !insn.addr !49
  %r0.1.reg2mem = alloca i32, !insn.addr !49
  %lr.1.reg2mem = alloca i32, !insn.addr !49
  %fp.0.reg2mem = alloca i32, !insn.addr !49
  %sb.0.reg2mem = alloca i32, !insn.addr !49
  %r8.0.reg2mem = alloca i32, !insn.addr !49
  %r7.0.reg2mem = alloca i32, !insn.addr !49
  %r4.0.reg2mem = alloca i32, !insn.addr !49
  %r2.0.reg2mem = alloca i32, !insn.addr !49
  %r1.0.reg2mem = alloca i32, !insn.addr !49
  %r0.0.reg2mem = alloca i32, !insn.addr !49
  %lr.0.reg2mem = alloca i32, !insn.addr !49
  %stack_var_-72 = alloca i32, align 4
  %1 = load i32, i32* %0
  %stack_var_-92 = alloca i32, align 4
  %stack_var_-100 = alloca i8*, align 4
  %2 = icmp slt i32 %arg1, 2, !insn.addr !50
  br i1 %2, label %dec_label_pc_11004, label %dec_label_pc_10d54, !insn.addr !50

dec_label_pc_10d54:                               ; preds = %dec_label_pc_10d44
  %3 = add i32 %arg2, 4
  %4 = inttoptr i32 %3 to i32*, !insn.addr !51
  %5 = load i32, i32* %4, align 4, !insn.addr !51
  %6 = inttoptr i32 %5 to i8*, !insn.addr !52
  %7 = load i8, i8* %6, align 1, !insn.addr !52
  %8 = icmp eq i8 %7, 45, !insn.addr !53
  store i32 0, i32* %lr.0.reg2mem, !insn.addr !54
  store i32 1, i32* %r0.0.reg2mem, !insn.addr !54
  store i32 0, i32* %r1.0.reg2mem, !insn.addr !54
  store i32 %5, i32* %r2.0.reg2mem, !insn.addr !54
  store i32 0, i32* %r4.0.reg2mem, !insn.addr !54
  store i32 0, i32* %r7.0.reg2mem, !insn.addr !54
  store i32 0, i32* %r8.0.reg2mem, !insn.addr !54
  store i32 0, i32* %sb.0.reg2mem, !insn.addr !54
  store i32 0, i32* %fp.0.reg2mem, !insn.addr !54
  store i32 0, i32* %r1.2.reg2mem, !insn.addr !54
  store i32 0, i32* %r4.1.reg2mem, !insn.addr !54
  store i32 0, i32* %r7.2.reg2mem, !insn.addr !54
  store i32 0, i32* %r8.2.reg2mem, !insn.addr !54
  store i32 0, i32* %sb.2.reg2mem, !insn.addr !54
  store i32 0, i32* %fp.2.reg2mem, !insn.addr !54
  br i1 %8, label %dec_label_pc_10d8c, label %dec_label_pc_10e60, !insn.addr !54

dec_label_pc_10d8c:                               ; preds = %dec_label_pc_10d54, %dec_label_pc_10e48
  %fp.0.reload = load i32, i32* %fp.0.reg2mem
  %sb.0.reload = load i32, i32* %sb.0.reg2mem
  %r8.0.reload = load i32, i32* %r8.0.reg2mem
  %r7.0.reload = load i32, i32* %r7.0.reg2mem
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  %r2.0.reload = load i32, i32* %r2.0.reg2mem
  %r1.0.reload = load i32, i32* %r1.0.reg2mem
  %lr.0.reload = load i32, i32* %lr.0.reg2mem
  %9 = add i32 %r2.0.reload, 1, !insn.addr !55
  %10 = inttoptr i32 %9 to i8*, !insn.addr !55
  %11 = load i8, i8* %10, align 1, !insn.addr !55
  %12 = zext i8 %11 to i32, !insn.addr !55
  %13 = add nsw i32 %12, -86, !insn.addr !56
  store i32 %13, i32* @0, align 4, !insn.addr !57
  store i32 %lr.0.reload, i32* %lr.1.reg2mem, !insn.addr !57
  store i32 %r4.0.reload, i32* %r0.1.reg2mem, !insn.addr !57
  store i32 %r1.0.reload, i32* %r1.1.reg2mem, !insn.addr !57
  store i32 1, i32* %r7.1.reg2mem, !insn.addr !57
  store i32 %r8.0.reload, i32* %r8.1.reg2mem, !insn.addr !57
  store i32 %sb.0.reload, i32* %sb.1.reg2mem, !insn.addr !57
  store i32 %fp.0.reload, i32* %fp.1.reg2mem, !insn.addr !57
  switch i8 %11, label %dec_label_pc_10fc8 [
    i8 86, label %dec_label_pc_10f94
    i8 121, label %dec_label_pc_10fa0
    i8 114, label %dec_label_pc_10fac
    i8 109, label %dec_label_pc_10fb8
    i8 102, label %dec_label_pc_10e38
    i8 97, label %dec_label_pc_10f88
  ], !insn.addr !57

dec_label_pc_10e38:                               ; preds = %dec_label_pc_10d8c, %78, %dec_label_pc_10fb8, %dec_label_pc_10fac, %dec_label_pc_10fa0, %dec_label_pc_10f94, %dec_label_pc_10f88
  %fp.1.reload = load i32, i32* %fp.1.reg2mem
  %sb.1.reload = load i32, i32* %sb.1.reg2mem
  %r8.1.reload = load i32, i32* %r8.1.reg2mem
  %r7.1.reload = load i32, i32* %r7.1.reg2mem
  %r1.1.reload = load i32, i32* %r1.1.reg2mem
  %r0.1.reload = load i32, i32* %r0.1.reg2mem
  %lr.1.reload = load i32, i32* %lr.1.reg2mem
  %14 = add i32 %r0.1.reload, 1, !insn.addr !58
  %15 = add i32 %r0.1.reload, 2, !insn.addr !59
  %16 = icmp slt i32 %15, %arg1, !insn.addr !60
  br i1 %16, label %dec_label_pc_10e48, label %dec_label_pc_10e58, !insn.addr !60

dec_label_pc_10e48:                               ; preds = %dec_label_pc_10e38
  %17 = mul i32 %15, 4, !insn.addr !61
  %18 = add i32 %17, %arg2, !insn.addr !61
  %19 = inttoptr i32 %18 to i32*, !insn.addr !61
  %20 = load i32, i32* %19, align 4, !insn.addr !61
  %21 = inttoptr i32 %20 to i8*, !insn.addr !62
  %22 = load i8, i8* %21, align 1, !insn.addr !62
  %23 = icmp eq i8 %22, 45, !insn.addr !63
  store i32 %lr.1.reload, i32* %lr.0.reg2mem, !insn.addr !64
  store i32 %15, i32* %r0.0.reg2mem, !insn.addr !64
  store i32 %r1.1.reload, i32* %r1.0.reg2mem, !insn.addr !64
  store i32 %20, i32* %r2.0.reg2mem, !insn.addr !64
  store i32 %14, i32* %r4.0.reg2mem, !insn.addr !64
  store i32 %r7.1.reload, i32* %r7.0.reg2mem, !insn.addr !64
  store i32 %r8.1.reload, i32* %r8.0.reg2mem, !insn.addr !64
  store i32 %sb.1.reload, i32* %sb.0.reg2mem, !insn.addr !64
  store i32 %fp.1.reload, i32* %fp.0.reg2mem, !insn.addr !64
  br i1 %23, label %dec_label_pc_10d8c, label %dec_label_pc_10e58, !insn.addr !64

dec_label_pc_10e58:                               ; preds = %dec_label_pc_10e38, %dec_label_pc_10e48
  %24 = icmp eq i32 %lr.1.reload, 0, !insn.addr !65
  store i32 %r1.1.reload, i32* %r1.2.reg2mem, !insn.addr !66
  store i32 %14, i32* %r4.1.reg2mem, !insn.addr !66
  store i32 %r7.1.reload, i32* %r7.2.reg2mem, !insn.addr !66
  store i32 %r8.1.reload, i32* %r8.2.reg2mem, !insn.addr !66
  store i32 %sb.1.reload, i32* %sb.2.reg2mem, !insn.addr !66
  store i32 %fp.1.reload, i32* %fp.2.reg2mem, !insn.addr !66
  br i1 %24, label %dec_label_pc_10e60, label %dec_label_pc_11008, !insn.addr !66

dec_label_pc_10e60:                               ; preds = %dec_label_pc_10d54, %dec_label_pc_10e58
  %r4.1.reload = load i32, i32* %r4.1.reg2mem
  %25 = add i32 %r4.1.reload, 3, !insn.addr !67
  %26 = icmp slt i32 %25, %arg1, !insn.addr !68
  br i1 %26, label %dec_label_pc_10e6c, label %dec_label_pc_11004, !insn.addr !68

dec_label_pc_10e6c:                               ; preds = %dec_label_pc_10e60
  %27 = mul i32 %r4.1.reload, 4, !insn.addr !69
  %28 = add i32 %27, %3, !insn.addr !70
  %29 = inttoptr i32 %28 to i32*, !insn.addr !70
  %30 = load i32, i32* %29, align 4, !insn.addr !70
  %31 = call i32 @function_12498(i32 %30), !insn.addr !71
  %32 = icmp slt i32 %31, 0, !insn.addr !72
  br i1 %32, label %dec_label_pc_11004, label %dec_label_pc_10e8c, !insn.addr !73

dec_label_pc_10e8c:                               ; preds = %dec_label_pc_10e6c
  %r1.2.reload = load i32, i32* %r1.2.reg2mem
  %33 = add i32 %28, 4, !insn.addr !74
  %34 = inttoptr i32 %33 to i32*, !insn.addr !74
  %35 = load i32, i32* %34, align 4, !insn.addr !74
  %36 = call i32 @function_11cc8(i32 %35, i32 %r1.2.reload), !insn.addr !75
  %37 = icmp slt i32 %36, 0, !insn.addr !76
  br i1 %37, label %dec_label_pc_11004, label %dec_label_pc_10eac, !insn.addr !77

dec_label_pc_10eac:                               ; preds = %dec_label_pc_10e8c
  %38 = add i32 %arg2, 12, !insn.addr !78
  %39 = add i32 %38, %27, !insn.addr !79
  %40 = inttoptr i32 %39 to i32*, !insn.addr !80
  %41 = load i32, i32* %40, align 4, !insn.addr !80
  %42 = inttoptr i32 %41 to i8*, !insn.addr !81
  %43 = call i32 @strtol(i8* %42, i8** nonnull %stack_var_-100, i32 0), !insn.addr !81
  %44 = load i8*, i8** %stack_var_-100, align 4, !insn.addr !82
  %45 = load i8, i8* %44, align 1, !insn.addr !83
  %46 = icmp eq i8 %45, 0, !insn.addr !84
  br i1 %46, label %dec_label_pc_10edc, label %dec_label_pc_10fe4, !insn.addr !85

dec_label_pc_10edc:                               ; preds = %dec_label_pc_10eac
  %47 = icmp ult i32 %43, 255, !insn.addr !86
  %48 = icmp ne i1 %47, true, !insn.addr !86
  %49 = icmp eq i32 %43, 255, !insn.addr !86
  %50 = icmp ne i1 %49, true, !insn.addr !87
  %51 = icmp eq i1 %48, %50, !insn.addr !87
  br i1 %51, label %dec_label_pc_10fe4, label %dec_label_pc_10ee4, !insn.addr !87

dec_label_pc_10ee4:                               ; preds = %dec_label_pc_10edc
  %fp.2.reload = load i32, i32* %fp.2.reg2mem
  %sb.2.reload = load i32, i32* %sb.2.reg2mem
  %r8.2.reload = load i32, i32* %r8.2.reg2mem
  %r7.2.reload = load i32, i32* %r7.2.reg2mem
  %52 = add i32 %r4.1.reload, 4, !insn.addr !88
  %53 = icmp eq i32 %52, %arg1, !insn.addr !89
  store i32 -1, i32* %r4.2.reg2mem, !insn.addr !90
  store i32 1, i32* %r6.0.reg2mem, !insn.addr !90
  br i1 %53, label %dec_label_pc_11058, label %dec_label_pc_10ef0, !insn.addr !90

dec_label_pc_10ef0:                               ; preds = %dec_label_pc_10ee4
  %54 = add i32 %r4.1.reload, 5, !insn.addr !91
  %55 = icmp eq i32 %54, %arg1, !insn.addr !92
  br i1 %55, label %dec_label_pc_11104, label %dec_label_pc_10f00, !insn.addr !93

dec_label_pc_10f00:                               ; preds = %dec_label_pc_10ef0
  %56 = mul i32 %arg1, 4, !insn.addr !94
  %57 = add i32 %56, -4, !insn.addr !95
  %58 = add i32 %57, %arg2, !insn.addr !95
  %59 = inttoptr i32 %58 to i32*, !insn.addr !95
  %60 = load i32, i32* %59, align 4, !insn.addr !95
  %61 = inttoptr i32 %60 to i8*, !insn.addr !96
  %62 = call i32 @strlen(i8* %61), !insn.addr !96
  %63 = icmp ult i32 %62, 2, !insn.addr !97
  %64 = icmp ne i1 %63, true, !insn.addr !97
  %65 = icmp eq i32 %62, 2, !insn.addr !97
  %66 = icmp ne i1 %65, true, !insn.addr !98
  %67 = icmp eq i1 %64, %66, !insn.addr !98
  br i1 %67, label %dec_label_pc_110e4, label %dec_label_pc_10f18, !insn.addr !98

dec_label_pc_10f18:                               ; preds = %dec_label_pc_10f00
  br i1 %65, label %dec_label_pc_110b8, label %dec_label_pc_10f1c, !insn.addr !99

dec_label_pc_10f1c:                               ; preds = %dec_label_pc_10f18
  %68 = load i8, i8* %61, align 1, !insn.addr !100
  %69 = icmp eq i8 %68, 105, !insn.addr !101
  br i1 %69, label %dec_label_pc_11520, label %dec_label_pc_10f28, !insn.addr !102

dec_label_pc_10f28:                               ; preds = %dec_label_pc_10f1c
  %70 = icmp ult i8 %68, 105, !insn.addr !101
  br i1 %70, label %dec_label_pc_11488, label %dec_label_pc_10f2c, !insn.addr !103

dec_label_pc_10f2c:                               ; preds = %dec_label_pc_10f28
  store i32 3, i32* %storemerge6.reg2mem
  store i32 5, i32* %storemerge9.reg2mem
  switch i8 %68, label %dec_label_pc_110e4 [
    i8 115, label %dec_label_pc_114f4
    i8 119, label %dec_label_pc_10f58
  ]

dec_label_pc_10f58:                               ; preds = %dec_label_pc_10f2c, %dec_label_pc_110d4, %dec_label_pc_11638, %dec_label_pc_11488
  %71 = add i32 %r4.1.reload, 6, !insn.addr !104
  %72 = icmp eq i32 %71, %arg1, !insn.addr !105
  br i1 %72, label %dec_label_pc_10f58.dec_label_pc_11430_crit_edge, label %dec_label_pc_10f64, !insn.addr !106

dec_label_pc_10f58.dec_label_pc_11430_crit_edge:  ; preds = %dec_label_pc_10f58
  %storemerge6.reload = load i32, i32* %storemerge6.reg2mem
  %.pre = add i32 %28, 12, !insn.addr !107
  %.pre38 = inttoptr i32 %.pre to i32*, !insn.addr !107
  %.pre48 = load i32, i32* %.pre38, align 4
  %.pre49 = inttoptr i32 %.pre48 to i8*, !insn.addr !108
  store i8* %.pre49, i8** %.pre-phi.reg2mem
  store i32 %storemerge6.reload, i32* %r6.3.reg2mem
  br label %dec_label_pc_11430

dec_label_pc_10f64:                               ; preds = %dec_label_pc_1159c, %dec_label_pc_10f58
  %73 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !109
  %74 = call i32 @fwrite(i32* bitcast ([28 x i8]* @global_var_129c4 to i32*), i32 1, i32 27, %_IO_FILE* %73), !insn.addr !110
  %75 = call i32 @function_11bac(), !insn.addr !111
  unreachable, !insn.addr !111

dec_label_pc_10f88:                               ; preds = %dec_label_pc_10d8c
  store i32 %lr.0.reload, i32* %lr.1.reg2mem, !insn.addr !112
  store i32 %r4.0.reload, i32* %r0.1.reg2mem, !insn.addr !112
  store i32 1, i32* %r1.1.reg2mem, !insn.addr !112
  store i32 %r7.0.reload, i32* %r7.1.reg2mem, !insn.addr !112
  store i32 %r8.0.reload, i32* %r8.1.reg2mem, !insn.addr !112
  store i32 %sb.0.reload, i32* %sb.1.reg2mem, !insn.addr !112
  store i32 %fp.0.reload, i32* %fp.1.reg2mem, !insn.addr !112
  br label %dec_label_pc_10e38, !insn.addr !112

dec_label_pc_10f94:                               ; preds = %dec_label_pc_10d8c
  store i32 1, i32* %lr.1.reg2mem, !insn.addr !113
  store i32 %r4.0.reload, i32* %r0.1.reg2mem, !insn.addr !113
  store i32 %r1.0.reload, i32* %r1.1.reg2mem, !insn.addr !113
  store i32 %r7.0.reload, i32* %r7.1.reg2mem, !insn.addr !113
  store i32 %r8.0.reload, i32* %r8.1.reg2mem, !insn.addr !113
  store i32 %sb.0.reload, i32* %sb.1.reg2mem, !insn.addr !113
  store i32 %fp.0.reload, i32* %fp.1.reg2mem, !insn.addr !113
  br label %dec_label_pc_10e38, !insn.addr !113

dec_label_pc_10fa0:                               ; preds = %dec_label_pc_10d8c
  store i32 %lr.0.reload, i32* %lr.1.reg2mem, !insn.addr !114
  store i32 %r4.0.reload, i32* %r0.1.reg2mem, !insn.addr !114
  store i32 %r1.0.reload, i32* %r1.1.reg2mem, !insn.addr !114
  store i32 %r7.0.reload, i32* %r7.1.reg2mem, !insn.addr !114
  store i32 1, i32* %r8.1.reg2mem, !insn.addr !114
  store i32 %sb.0.reload, i32* %sb.1.reg2mem, !insn.addr !114
  store i32 %fp.0.reload, i32* %fp.1.reg2mem, !insn.addr !114
  br label %dec_label_pc_10e38, !insn.addr !114

dec_label_pc_10fac:                               ; preds = %dec_label_pc_10d8c
  store i32 %lr.0.reload, i32* %lr.1.reg2mem, !insn.addr !115
  store i32 %r4.0.reload, i32* %r0.1.reg2mem, !insn.addr !115
  store i32 %r1.0.reload, i32* %r1.1.reg2mem, !insn.addr !115
  store i32 %r7.0.reload, i32* %r7.1.reg2mem, !insn.addr !115
  store i32 %r8.0.reload, i32* %r8.1.reg2mem, !insn.addr !115
  store i32 1, i32* %sb.1.reg2mem, !insn.addr !115
  store i32 %fp.0.reload, i32* %fp.1.reg2mem, !insn.addr !115
  br label %dec_label_pc_10e38, !insn.addr !115

dec_label_pc_10fb8:                               ; preds = %dec_label_pc_10d8c
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  %76 = add i32 %r4.0.reload, 2, !insn.addr !116
  %77 = icmp slt i32 %76, %arg1, !insn.addr !117
  store i32 %lr.0.reload, i32* %lr.1.reg2mem, !insn.addr !117
  store i32 %r0.0.reload, i32* %r0.1.reg2mem, !insn.addr !117
  store i32 %r1.0.reload, i32* %r1.1.reg2mem, !insn.addr !117
  store i32 %r7.0.reload, i32* %r7.1.reg2mem, !insn.addr !117
  store i32 %r8.0.reload, i32* %r8.1.reg2mem, !insn.addr !117
  store i32 %sb.0.reload, i32* %sb.1.reg2mem, !insn.addr !117
  store i32 %fp.0.reload, i32* %fp.1.reg2mem, !insn.addr !117
  br i1 %77, label %78, label %dec_label_pc_10e38, !insn.addr !117

; <label>:78:                                     ; preds = %dec_label_pc_10fb8
  %79 = mul i32 %76, 4, !insn.addr !117
  %80 = add i32 %79, %arg2, !insn.addr !117
  %81 = inttoptr i32 %80 to i32*, !insn.addr !117
  %82 = load i32, i32* %81, align 4, !insn.addr !117
  store i32 %lr.0.reload, i32* %lr.1.reg2mem, !insn.addr !117
  store i32 %r0.0.reload, i32* %r0.1.reg2mem, !insn.addr !117
  store i32 %r1.0.reload, i32* %r1.1.reg2mem, !insn.addr !117
  store i32 %r7.0.reload, i32* %r7.1.reg2mem, !insn.addr !117
  store i32 %r8.0.reload, i32* %r8.1.reg2mem, !insn.addr !117
  store i32 %sb.0.reload, i32* %sb.1.reg2mem, !insn.addr !117
  store i32 %82, i32* %fp.1.reg2mem, !insn.addr !117
  br label %dec_label_pc_10e38, !insn.addr !117

dec_label_pc_10fc8:                               ; preds = %dec_label_pc_10d8c
  %83 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !118
  %84 = inttoptr i32 %r2.0.reload to i8*, !insn.addr !119
  %85 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %83, i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_128ec, i32 0, i32 0), i8* %84), !insn.addr !119
  %86 = call i32 @function_11bac(), !insn.addr !120
  unreachable, !insn.addr !120

dec_label_pc_10fe4:                               ; preds = %dec_label_pc_10eac, %dec_label_pc_10edc
  %87 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !121
  %88 = call i32 @fwrite(i32* bitcast ([30 x i8]* @global_var_12928 to i32*), i32 1, i32 29, %_IO_FILE* %87), !insn.addr !122
  br label %dec_label_pc_11004, !insn.addr !122

dec_label_pc_11004:                               ; preds = %dec_label_pc_10e60, %dec_label_pc_10fe4, %dec_label_pc_10e8c, %dec_label_pc_10e6c, %dec_label_pc_10d44
  %89 = call i32 @function_11bac(), !insn.addr !123
  unreachable, !insn.addr !123

dec_label_pc_11008:                               ; preds = %dec_label_pc_10e58
  %90 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !124
  %91 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %90, i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_12914, i32 0, i32 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_12910, i32 0, i32 0)), !insn.addr !125
  call void @exit(i32 0), !insn.addr !126
  unreachable, !insn.addr !126

dec_label_pc_11058:                               ; preds = %dec_label_pc_11118, %dec_label_pc_114c4, %dec_label_pc_10ee4, %dec_label_pc_11550
  %r6.0.reload = load i32, i32* %r6.0.reg2mem
  %r4.2.reload = load i32, i32* %r4.2.reg2mem
  %92 = icmp eq i32 %fp.2.reload, 0, !insn.addr !127
  store i32 0, i32* %stack_var_-120.0.reg2mem, !insn.addr !128
  store i32 %r4.2.reload, i32* %r4.4.reg2mem, !insn.addr !128
  store i32 %r6.0.reload, i32* %r6.2.reg2mem, !insn.addr !128
  store i32 0, i32* %fp.3.reg2mem, !insn.addr !128
  br i1 %92, label %dec_label_pc_11144, label %dec_label_pc_11060, !insn.addr !128

dec_label_pc_11060:                               ; preds = %dec_label_pc_11058
  %93 = inttoptr i32 %fp.2.reload to i8*, !insn.addr !129
  %94 = call i32 @strtol(i8* %93, i8** nonnull %stack_var_-100, i32 0), !insn.addr !129
  %95 = load i8*, i8** %stack_var_-100, align 4, !insn.addr !130
  %96 = load i8, i8* %95, align 1, !insn.addr !131
  %97 = icmp eq i8 %96, 0, !insn.addr !132
  br i1 %97, label %dec_label_pc_113f0, label %dec_label_pc_11094, !insn.addr !133

dec_label_pc_11094:                               ; preds = %dec_label_pc_11060
  %98 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !134
  %99 = call i32 @fwrite(i32* bitcast ([33 x i8]* @global_var_12a20 to i32*), i32 1, i32 32, %_IO_FILE* %98), !insn.addr !135
  %100 = call i32 @function_11bac(), !insn.addr !136
  unreachable, !insn.addr !136

dec_label_pc_110b8:                               ; preds = %dec_label_pc_10f18
  %101 = add i32 %60, 1, !insn.addr !137
  %102 = inttoptr i32 %101 to i8*, !insn.addr !137
  %103 = load i8, i8* %102, align 1, !insn.addr !137
  %104 = icmp eq i8 %103, 112, !insn.addr !138
  br i1 %104, label %dec_label_pc_110c4, label %dec_label_pc_110e4, !insn.addr !139

dec_label_pc_110c4:                               ; preds = %dec_label_pc_110b8
  %105 = load i8, i8* %61, align 1, !insn.addr !140
  %106 = icmp eq i8 %105, 105, !insn.addr !141
  br i1 %106, label %dec_label_pc_1152c, label %dec_label_pc_110d0, !insn.addr !142

dec_label_pc_110d0:                               ; preds = %dec_label_pc_110c4
  %107 = icmp ult i8 %105, 105, !insn.addr !141
  br i1 %107, label %dec_label_pc_11638, label %dec_label_pc_110d4, !insn.addr !143

dec_label_pc_110d4:                               ; preds = %dec_label_pc_110d0
  store i32 3, i32* %storemerge6.reg2mem
  store i32 5, i32* %storemerge9.reg2mem
  switch i8 %105, label %dec_label_pc_110e4 [
    i8 115, label %dec_label_pc_114f4
    i8 119, label %dec_label_pc_10f58
  ]

dec_label_pc_110e4:                               ; preds = %dec_label_pc_10f2c, %dec_label_pc_110d4, %dec_label_pc_11638, %dec_label_pc_110b8, %dec_label_pc_11488, %dec_label_pc_10f00
  %108 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !144
  %109 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %108, i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_12948, i32 0, i32 0), i8* %61), !insn.addr !145
  %110 = call i32 @function_11bac(), !insn.addr !146
  unreachable, !insn.addr !146

dec_label_pc_11104:                               ; preds = %dec_label_pc_10ef0
  %111 = add i32 %28, 12
  %112 = inttoptr i32 %111 to i32*
  %113 = load i32, i32* %112, align 4, !insn.addr !147
  %114 = inttoptr i32 %113 to i8*
  %115 = load i8, i8* %114, align 1, !insn.addr !148
  %116 = icmp eq i8 %115, 99, !insn.addr !149
  store i8* %114, i8** %.pre-phi.reg2mem, !insn.addr !150
  store i32 2, i32* %r6.3.reg2mem, !insn.addr !150
  br i1 %116, label %dec_label_pc_11118, label %dec_label_pc_11430, !insn.addr !150

dec_label_pc_11118:                               ; preds = %dec_label_pc_11104
  %117 = add i32 %113, 1, !insn.addr !151
  %118 = inttoptr i32 %117 to i8*, !insn.addr !151
  %119 = load i8, i8* %118, align 1, !insn.addr !151
  store i32 -1, i32* %r4.2.reg2mem
  store i32 1, i32* %r6.0.reg2mem
  store i8* %114, i8** %.pre-phi.reg2mem
  store i32 2, i32* %r6.3.reg2mem
  switch i8 %119, label %dec_label_pc_11430 [
    i8 0, label %dec_label_pc_11058
    i8 112, label %dec_label_pc_114c4
  ]

dec_label_pc_11144:                               ; preds = %dec_label_pc_115fc, %dec_label_pc_115bc, %dec_label_pc_115a8, %dec_label_pc_113fc, %dec_label_pc_114ac, %dec_label_pc_11058
  %120 = call i32 @function_11d80(i32 %31, i32* nonnull %stack_var_-92, i32 20, i32 0), !insn.addr !152
  %121 = icmp slt i32 %120, 0, !insn.addr !153
  br i1 %121, label %dec_label_pc_11328, label %dec_label_pc_11160, !insn.addr !154

dec_label_pc_11160:                               ; preds = %dec_label_pc_11144
  %122 = call i32 (i32, i32, ...) @ioctl(i32 %120, i32 1797), !insn.addr !155
  %123 = icmp slt i32 %122, 0, !insn.addr !156
  br i1 %123, label %dec_label_pc_11abc, label %dec_label_pc_11174, !insn.addr !157

dec_label_pc_11174:                               ; preds = %dec_label_pc_11160
  %fp.3.reload = load i32, i32* %fp.3.reg2mem
  %r6.2.reload = load i32, i32* %r6.2.reg2mem
  %r4.4.reload = load i32, i32* %r4.4.reg2mem
  %stack_var_-120.0.reload = load i32, i32* %stack_var_-120.0.reg2mem
  %124 = add nsw i32 %r6.2.reload, -1, !insn.addr !158
  store i32 %124, i32* @1, align 4, !insn.addr !159
  switch i32 %r6.2.reload, label %dec_label_pc_111e0 [
    i32 1, label %dec_label_pc_113c0
    i32 2, label %dec_label_pc_11390
    i32 3, label %dec_label_pc_11360
    i32 8, label %dec_label_pc_112fc
    i32 5, label %dec_label_pc_11330
  ], !insn.addr !159

dec_label_pc_111e0:                               ; preds = %dec_label_pc_112fc, %dec_label_pc_11330, %dec_label_pc_11360, %dec_label_pc_11390, %dec_label_pc_113c0, %dec_label_pc_11174
  %125 = call i32 @function_125ec(i32 %120, i32 %36, i32 %r7.2.reload), !insn.addr !160
  %126 = icmp eq i32 %125, 0, !insn.addr !161
  br i1 %126, label %dec_label_pc_111f8, label %dec_label_pc_11328, !insn.addr !162

dec_label_pc_111f8:                               ; preds = %dec_label_pc_111e0
  %127 = icmp eq i32 %r8.2.reload, 0, !insn.addr !163
  br i1 %127, label %dec_label_pc_11888, label %dec_label_pc_11200, !insn.addr !164

dec_label_pc_11200:                               ; preds = %dec_label_pc_11980, %dec_label_pc_111f8
  %128 = icmp eq i32 %stack_var_-120.0.reload, 0, !insn.addr !165
  store i32 %r4.4.reload, i32* %r4.6.reg2mem, !insn.addr !166
  br i1 %128, label %dec_label_pc_112c8, label %dec_label_pc_1120c, !insn.addr !166

dec_label_pc_1120c:                               ; preds = %dec_label_pc_11200
  %129 = icmp eq i32 %r6.2.reload, 1, !insn.addr !167
  br i1 %129, label %dec_label_pc_1187c, label %dec_label_pc_11214, !insn.addr !168

dec_label_pc_11214:                               ; preds = %dec_label_pc_1120c
  %130 = icmp eq i32 %r6.2.reload, 3, !insn.addr !169
  %131 = urem i32 %43, 256
  br i1 %130, label %dec_label_pc_1121c, label %dec_label_pc_1186c, !insn.addr !170

dec_label_pc_1121c:                               ; preds = %dec_label_pc_11214
  %132 = call i32 @i2c_smbus_read_word_data(i32 %120, i32 %131), !insn.addr !171
  store i32 %132, i32* %r0.2.reg2mem, !insn.addr !171
  br label %dec_label_pc_11228, !insn.addr !171

dec_label_pc_11228:                               ; preds = %dec_label_pc_1187c, %dec_label_pc_1186c, %dec_label_pc_1121c
  %r0.2.reload = load i32, i32* %r0.2.reg2mem
  %133 = icmp slt i32 %r0.2.reload, 0, !insn.addr !172
  br i1 %133, label %dec_label_pc_11844, label %dec_label_pc_11230, !insn.addr !173

dec_label_pc_11230:                               ; preds = %dec_label_pc_11228
  %134 = xor i32 %r0.2.reload, %r4.4.reload, !insn.addr !174
  %135 = and i32 %134, %stack_var_-120.0.reload, !insn.addr !175
  %136 = xor i32 %135, %r0.2.reload, !insn.addr !176
  store i32 %136, i32* %r4.6.reg2mem, !insn.addr !177
  br i1 %127, label %dec_label_pc_11248, label %dec_label_pc_112c8, !insn.addr !177

dec_label_pc_11248:                               ; preds = %dec_label_pc_11230
  %137 = icmp eq i32 %r6.2.reload, 3, !insn.addr !178
  %138 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !179
  %r1.6 = select i1 %137, i32 4, i32 2
  %139 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %138, i8* getelementptr inbounds ([75 x i8], [75 x i8]* @global_var_12d1c, i32 0, i32 0), i32 %r1.6, i32 %r0.2.reload, i32 %r1.6, i32 %stack_var_-120.0.reload, i32 %r1.6, i32 %136, i32 %43), !insn.addr !180
  %140 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !181
  %141 = call i32 @fwrite(i32* bitcast ([17 x i8]* @global_var_12d68 to i32*), i32 1, i32 16, %_IO_FILE* %140), !insn.addr !182
  %142 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !183
  %143 = call i32 @fflush(%_IO_FILE* %142), !insn.addr !184
  %144 = call i32 @function_12660(i32 1), !insn.addr !185
  %145 = icmp eq i32 %144, 0, !insn.addr !186
  store i32 %136, i32* %r4.6.reg2mem, !insn.addr !187
  br i1 %145, label %dec_label_pc_11824, label %dec_label_pc_112c8, !insn.addr !187

dec_label_pc_112c8:                               ; preds = %dec_label_pc_11200, %dec_label_pc_11248, %dec_label_pc_11230
  %r4.6.reload = load i32, i32* %r4.6.reg2mem
  %146 = urem i32 %43, 256, !insn.addr !188
  store i32 %124, i32* @2, align 4, !insn.addr !189
  switch i32 %r6.2.reload, label %dec_label_pc_117cc [
    i32 1, label %dec_label_pc_116d4
    i32 8, label %dec_label_pc_11a8c
    i32 3, label %dec_label_pc_11644
    i32 5, label %dec_label_pc_11aa4
  ], !insn.addr !189

dec_label_pc_112fc:                               ; preds = %dec_label_pc_11174
  %147 = and i32 %1, 134217728, !insn.addr !190
  %148 = icmp eq i32 %147, 0, !insn.addr !190
  br i1 %148, label %dec_label_pc_11308, label %dec_label_pc_111e0, !insn.addr !191

dec_label_pc_11308:                               ; preds = %dec_label_pc_112fc
  %149 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !192
  %150 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %149, i8* getelementptr inbounds ([44 x i8], [44 x i8]* @global_var_12ab8, i32 0, i32 0), i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_12b20, i32 0, i32 0)), !insn.addr !193
  br label %dec_label_pc_11328, !insn.addr !193

dec_label_pc_11328:                               ; preds = %dec_label_pc_111e0, %dec_label_pc_113cc, %dec_label_pc_1139c, %dec_label_pc_1136c, %dec_label_pc_1133c, %dec_label_pc_11308, %dec_label_pc_11abc, %dec_label_pc_11144
  call void @exit(i32 1), !insn.addr !194
  unreachable, !insn.addr !194

dec_label_pc_11330:                               ; preds = %dec_label_pc_11174
  %151 = and i32 %1, 33554432, !insn.addr !195
  %152 = icmp eq i32 %151, 0, !insn.addr !195
  br i1 %152, label %dec_label_pc_1133c, label %dec_label_pc_111e0, !insn.addr !196

dec_label_pc_1133c:                               ; preds = %dec_label_pc_11330
  %153 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !197
  %154 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %153, i8* getelementptr inbounds ([44 x i8], [44 x i8]* @global_var_12ab8, i32 0, i32 0), i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_12b0c, i32 0, i32 0)), !insn.addr !198
  br label %dec_label_pc_11328, !insn.addr !199

dec_label_pc_11360:                               ; preds = %dec_label_pc_11174
  %155 = and i32 %1, 4194304, !insn.addr !200
  %156 = icmp eq i32 %155, 0, !insn.addr !200
  br i1 %156, label %dec_label_pc_1136c, label %dec_label_pc_111e0, !insn.addr !201

dec_label_pc_1136c:                               ; preds = %dec_label_pc_11360
  %157 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !202
  %158 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %157, i8* getelementptr inbounds ([44 x i8], [44 x i8]* @global_var_12ab8, i32 0, i32 0), i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_12af8, i32 0, i32 0)), !insn.addr !203
  br label %dec_label_pc_11328, !insn.addr !204

dec_label_pc_11390:                               ; preds = %dec_label_pc_11174
  %159 = and i32 %1, 1048576, !insn.addr !205
  %160 = icmp eq i32 %159, 0, !insn.addr !205
  br i1 %160, label %dec_label_pc_1139c, label %dec_label_pc_111e0, !insn.addr !206

dec_label_pc_1139c:                               ; preds = %dec_label_pc_11390
  %161 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !207
  %162 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %161, i8* getelementptr inbounds ([44 x i8], [44 x i8]* @global_var_12ab8, i32 0, i32 0), i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_12ae4, i32 0, i32 0)), !insn.addr !208
  br label %dec_label_pc_11328, !insn.addr !209

dec_label_pc_113c0:                               ; preds = %dec_label_pc_11174
  %163 = and i32 %1, 262144, !insn.addr !210
  %164 = icmp eq i32 %163, 0, !insn.addr !210
  br i1 %164, label %dec_label_pc_113cc, label %dec_label_pc_111e0, !insn.addr !211

dec_label_pc_113cc:                               ; preds = %dec_label_pc_113c0
  %165 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !212
  %166 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %165, i8* getelementptr inbounds ([44 x i8], [44 x i8]* @global_var_12ab8, i32 0, i32 0), i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_12aa8, i32 0, i32 0)), !insn.addr !213
  br label %dec_label_pc_11328, !insn.addr !214

dec_label_pc_113f0:                               ; preds = %dec_label_pc_11060
  %not. = icmp ne i1 %97, true
  %spec.select = zext i1 %not. to i32
  %167 = icmp eq i32 %r6.0.reload, 3, !insn.addr !215
  br i1 %167, label %dec_label_pc_113fc, label %dec_label_pc_114ac, !insn.addr !216

dec_label_pc_113fc:                               ; preds = %dec_label_pc_113f0
  %168 = icmp slt i32 %94, 65536, !insn.addr !217
  store i32 %94, i32* %stack_var_-120.0.reg2mem, !insn.addr !217
  store i32 %r4.2.reload, i32* %r4.4.reg2mem, !insn.addr !217
  store i32 3, i32* %r6.2.reg2mem, !insn.addr !217
  store i32 %spec.select, i32* %fp.3.reg2mem, !insn.addr !217
  br i1 %168, label %dec_label_pc_11144, label %dec_label_pc_11404, !insn.addr !217

dec_label_pc_11404:                               ; preds = %dec_label_pc_114ac, %dec_label_pc_113fc
  %169 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !218
  %170 = call i32 @fwrite(i32* bitcast ([38 x i8]* @global_var_12a44 to i32*), i32 1, i32 37, %_IO_FILE* %169), !insn.addr !219
  %171 = call i32 @function_11bac(), !insn.addr !220
  unreachable, !insn.addr !220

dec_label_pc_11430:                               ; preds = %dec_label_pc_10f58.dec_label_pc_11430_crit_edge, %dec_label_pc_114c4, %dec_label_pc_11118, %dec_label_pc_11104
  %.pre-phi.reload = load i8*, i8** %.pre-phi.reg2mem
  %172 = call i32 @strtol(i8* %.pre-phi.reload, i8** nonnull %stack_var_-100, i32 0), !insn.addr !108
  %173 = load i8*, i8** %stack_var_-100, align 4, !insn.addr !221
  %174 = load i8, i8* %173, align 1, !insn.addr !222
  %175 = icmp eq i8 %174, 0, !insn.addr !223
  %not.24 = icmp ne i1 %175, true
  %176 = icmp slt i32 %172, 0
  %r2.2.v = select i1 %175, i1 %176, i1 %not.24
  %177 = icmp eq i1 %r2.2.v, false, !insn.addr !224
  br i1 %177, label %dec_label_pc_11550, label %dec_label_pc_11464, !insn.addr !225

dec_label_pc_11464:                               ; preds = %dec_label_pc_115c8, %dec_label_pc_11430
  %178 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !226
  %179 = call i32 @fwrite(i32* bitcast ([28 x i8]* @global_var_129e0 to i32*), i32 1, i32 27, %_IO_FILE* %178), !insn.addr !227
  %180 = call i32 @function_11bac(), !insn.addr !228
  unreachable, !insn.addr !228

dec_label_pc_11488:                               ; preds = %dec_label_pc_10f28
  %181 = icmp eq i8 %68, 98, !insn.addr !229
  store i32 2, i32* %storemerge6.reg2mem, !insn.addr !230
  br i1 %181, label %dec_label_pc_10f58, label %dec_label_pc_110e4, !insn.addr !230

dec_label_pc_114ac:                               ; preds = %dec_label_pc_113f0
  %182 = icmp sgt i32 %94, 255, !insn.addr !231
  store i32 %94, i32* %stack_var_-120.0.reg2mem, !insn.addr !231
  store i32 %r4.2.reload, i32* %r4.4.reg2mem, !insn.addr !231
  store i32 %r6.0.reload, i32* %r6.2.reg2mem, !insn.addr !231
  store i32 %spec.select, i32* %fp.3.reg2mem, !insn.addr !231
  br i1 %182, label %dec_label_pc_11404, label %dec_label_pc_11144, !insn.addr !231

dec_label_pc_114c4:                               ; preds = %dec_label_pc_11118
  %183 = add i32 %113, 2, !insn.addr !232
  %184 = inttoptr i32 %183 to i8*, !insn.addr !232
  %185 = load i8, i8* %184, align 1, !insn.addr !232
  %186 = icmp eq i8 %185, 0, !insn.addr !233
  store i32 -1, i32* %r4.2.reg2mem, !insn.addr !234
  store i32 1, i32* %r6.0.reg2mem, !insn.addr !234
  store i8* %114, i8** %.pre-phi.reg2mem, !insn.addr !234
  store i32 2, i32* %r6.3.reg2mem, !insn.addr !234
  br i1 %186, label %dec_label_pc_11058, label %dec_label_pc_11430, !insn.addr !234

dec_label_pc_114f4:                               ; preds = %dec_label_pc_10f2c, %dec_label_pc_110d4, %dec_label_pc_11520
  %187 = icmp eq i32 %fp.2.reload, 0, !insn.addr !235
  br i1 %187, label %dec_label_pc_1159c, label %dec_label_pc_114fc, !insn.addr !236

dec_label_pc_114fc:                               ; preds = %dec_label_pc_114f4
  %188 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !237
  %189 = call i32 @fwrite(i32* bitcast ([45 x i8]* @global_var_12994 to i32*), i32 1, i32 44, %_IO_FILE* %188), !insn.addr !238
  %190 = call i32 @function_11bac(), !insn.addr !239
  unreachable, !insn.addr !239

dec_label_pc_11520:                               ; preds = %dec_label_pc_10f1c
  %191 = add i32 %60, 1, !insn.addr !240
  %192 = inttoptr i32 %191 to i8*, !insn.addr !240
  %193 = load i8, i8* %192, align 1, !insn.addr !240
  %194 = icmp eq i8 %193, 112, !insn.addr !241
  store i32 8, i32* %storemerge9.reg2mem, !insn.addr !242
  br i1 %194, label %dec_label_pc_1152c, label %dec_label_pc_114f4, !insn.addr !242

dec_label_pc_1152c:                               ; preds = %dec_label_pc_11520, %dec_label_pc_110c4
  %195 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !243
  %196 = call i32 @fwrite(i32* bitcast ([48 x i8]* @global_var_12964 to i32*), i32 1, i32 47, %_IO_FILE* %195), !insn.addr !244
  %197 = call i32 @function_11bac(), !insn.addr !245
  unreachable, !insn.addr !245

dec_label_pc_11550:                               ; preds = %dec_label_pc_11430
  %r6.3.reload = load i32, i32* %r6.3.reg2mem
  %198 = icmp eq i32 %172, 65536, !insn.addr !246
  %199 = icmp sgt i32 %172, 65535, !insn.addr !247
  %200 = icmp eq i32 %r6.3.reload, 3
  %spec.select13 = select i1 %199, i1 %200, i1 %198
  store i32 %172, i32* %r4.2.reg2mem, !insn.addr !248
  store i32 %r6.3.reload, i32* %r6.0.reg2mem, !insn.addr !248
  br i1 %spec.select13, label %dec_label_pc_11578, label %dec_label_pc_11058, !insn.addr !248

dec_label_pc_11578:                               ; preds = %dec_label_pc_115f4, %dec_label_pc_11550
  %201 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !249
  %202 = call i32 @fwrite(i32* bitcast ([33 x i8]* @global_var_129fc to i32*), i32 1, i32 32, %_IO_FILE* %201), !insn.addr !250
  %203 = call i32 @function_11bac(), !insn.addr !251
  unreachable, !insn.addr !251

dec_label_pc_1159c:                               ; preds = %dec_label_pc_114f4
  %204 = add i32 %r4.1.reload, 37, !insn.addr !252
  %205 = icmp slt i32 %204, %arg1, !insn.addr !253
  br i1 %205, label %dec_label_pc_10f64, label %dec_label_pc_115a8, !insn.addr !253

dec_label_pc_115a8:                               ; preds = %dec_label_pc_1159c
  %storemerge9.reload = load i32, i32* %storemerge9.reg2mem
  %trunc = trunc i32 %storemerge9.reload to i4
  store i32 0, i32* %stack_var_-120.0.reg2mem
  store i32 -1, i32* %r4.4.reg2mem
  store i32 %storemerge9.reload, i32* %r6.2.reg2mem
  store i32 0, i32* %fp.3.reg2mem
  switch i4 %trunc, label %dec_label_pc_11144 [
    i4 5, label %dec_label_pc_115bc
    i4 -8, label %dec_label_pc_115bc
  ]

dec_label_pc_115bc:                               ; preds = %dec_label_pc_115a8, %dec_label_pc_115a8
  %206 = icmp slt i32 %54, %arg1, !insn.addr !254
  store i32 0, i32* %stack_var_-120.0.reg2mem, !insn.addr !254
  store i32 -1, i32* %r4.4.reg2mem, !insn.addr !254
  store i32 %storemerge9.reload, i32* %r6.2.reg2mem, !insn.addr !254
  store i32 0, i32* %fp.3.reg2mem, !insn.addr !254
  br i1 %206, label %dec_label_pc_115c8.lr.ph, label %dec_label_pc_11144, !insn.addr !254

dec_label_pc_115c8.lr.ph:                         ; preds = %dec_label_pc_115bc
  %207 = ptrtoint i32* %stack_var_-72 to i32
  store i32 0, i32* %storemerge532.reg2mem
  store i32 %39, i32* %r4.831.reg2mem
  br label %dec_label_pc_115c8

dec_label_pc_115c8:                               ; preds = %dec_label_pc_115c8.lr.ph, %dec_label_pc_115fc
  %r4.831.reload = load i32, i32* %r4.831.reg2mem
  %208 = add i32 %r4.831.reload, 4, !insn.addr !255
  %209 = inttoptr i32 %208 to i32*, !insn.addr !255
  %210 = load i32, i32* %209, align 4, !insn.addr !255
  %211 = inttoptr i32 %210 to i8*, !insn.addr !256
  %212 = call i32 @strtol(i8* %211, i8** nonnull %stack_var_-100, i32 0), !insn.addr !256
  %213 = load i8*, i8** %stack_var_-100, align 4, !insn.addr !257
  %214 = load i8, i8* %213, align 1, !insn.addr !258
  %215 = icmp eq i8 %214, 0, !insn.addr !259
  %not.25 = icmp ne i1 %215, true
  %216 = icmp slt i32 %212, 0
  %r3.1.v = select i1 %215, i1 %216, i1 %not.25
  %217 = icmp eq i1 %r3.1.v, false, !insn.addr !260
  br i1 %217, label %dec_label_pc_115f4, label %dec_label_pc_11464, !insn.addr !261

dec_label_pc_115f4:                               ; preds = %dec_label_pc_115c8
  %218 = icmp sgt i32 %212, 255, !insn.addr !262
  br i1 %218, label %dec_label_pc_11578, label %dec_label_pc_115fc, !insn.addr !262

dec_label_pc_115fc:                               ; preds = %dec_label_pc_115f4
  %storemerge532.reload = load i32, i32* %storemerge532.reg2mem
  %219 = trunc i32 %212 to i8, !insn.addr !263
  %220 = add i32 %storemerge532.reload, %207, !insn.addr !263
  %221 = inttoptr i32 %220 to i8*, !insn.addr !263
  store i8 %219, i8* %221, align 1, !insn.addr !263
  %222 = add i32 %storemerge532.reload, 1, !insn.addr !264
  %223 = add i32 %222, %54, !insn.addr !265
  %224 = icmp slt i32 %223, %arg1, !insn.addr !254
  store i32 0, i32* %stack_var_-120.0.reg2mem, !insn.addr !254
  store i32 -1, i32* %r4.4.reg2mem, !insn.addr !254
  store i32 %storemerge9.reload, i32* %r6.2.reg2mem, !insn.addr !254
  store i32 %222, i32* %fp.3.reg2mem, !insn.addr !254
  store i32 %222, i32* %storemerge532.reg2mem, !insn.addr !254
  store i32 %208, i32* %r4.831.reg2mem, !insn.addr !254
  br i1 %224, label %dec_label_pc_115c8, label %dec_label_pc_11144, !insn.addr !254

dec_label_pc_11638:                               ; preds = %dec_label_pc_110d0
  %225 = icmp eq i8 %105, 98, !insn.addr !266
  store i32 2, i32* %storemerge6.reg2mem, !insn.addr !267
  br i1 %225, label %dec_label_pc_10f58, label %dec_label_pc_110e4, !insn.addr !267

dec_label_pc_11644:                               ; preds = %dec_label_pc_112c8
  %226 = urem i32 %r4.6.reload, 65536, !insn.addr !268
  %227 = call i32 @i2c_smbus_write_word_data(i32 %120, i32 %146, i32 %226, i32 %124), !insn.addr !269
  store i32 %227, i32* %r0.3.reg2mem, !insn.addr !269
  br label %dec_label_pc_11654, !insn.addr !269

dec_label_pc_11654:                               ; preds = %dec_label_pc_11aa4, %dec_label_pc_11a8c, %dec_label_pc_116d4, %dec_label_pc_11644, %dec_label_pc_117cc
  %r0.3.reload = load i32, i32* %r0.3.reg2mem
  %228 = icmp slt i32 %r0.3.reload, 0, !insn.addr !270
  br i1 %228, label %dec_label_pc_1179c, label %dec_label_pc_11668, !insn.addr !271

dec_label_pc_11668:                               ; preds = %dec_label_pc_11654
  %229 = icmp eq i32 %sb.2.reload, 0, !insn.addr !272
  br i1 %229, label %dec_label_pc_1173c, label %dec_label_pc_11670, !insn.addr !273

dec_label_pc_11670:                               ; preds = %dec_label_pc_11668
  switch i32 %r6.2.reload, label %dec_label_pc_11714 [
    i32 1, label %dec_label_pc_11728
    i32 3, label %dec_label_pc_11680
  ]

dec_label_pc_11680:                               ; preds = %dec_label_pc_11670
  %230 = call i32 @i2c_smbus_read_word_data(i32 %120, i32 %146), !insn.addr !274
  store i32 %r4.6.reload, i32* %r4.9.reg2mem, !insn.addr !275
  store i32 %230, i32* %r7.3.reg2mem, !insn.addr !275
  br label %dec_label_pc_11690, !insn.addr !275

dec_label_pc_11690:                               ; preds = %dec_label_pc_11728, %dec_label_pc_11714, %dec_label_pc_11680
  %r7.3.reload = load i32, i32* %r7.3.reg2mem
  %231 = call i32 @close(i32 %120), !insn.addr !276
  %232 = icmp slt i32 %r7.3.reload, 0, !insn.addr !277
  br i1 %232, label %dec_label_pc_11704, label %dec_label_pc_116a0, !insn.addr !278

dec_label_pc_116a0:                               ; preds = %dec_label_pc_11690
  %r4.9.reload = load i32, i32* %r4.9.reg2mem
  %233 = icmp eq i32 %r7.3.reload, %r4.9.reload, !insn.addr !279
  %234 = icmp eq i32 %r6.2.reload, 3
  %r1.11 = select i1 %234, i32 4, i32 2
  br i1 %233, label %dec_label_pc_116e4, label %dec_label_pc_116a8, !insn.addr !280

dec_label_pc_116a8:                               ; preds = %dec_label_pc_116a0
  %235 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([58 x i8], [58 x i8]* @global_var_12df0, i32 0, i32 0), i32 %r1.11, i32 %r4.9.reload, i32 %r1.11, i32 %r7.3.reload), !insn.addr !281
  br label %dec_label_pc_116cc, !insn.addr !281

dec_label_pc_116cc:                               ; preds = %dec_label_pc_11704, %dec_label_pc_116e4, %dec_label_pc_116a8
  call void @exit(i32 0), !insn.addr !282
  unreachable, !insn.addr !282

dec_label_pc_116d4:                               ; preds = %dec_label_pc_112c8
  %236 = call i32 @i2c_smbus_write_byte(i32 %120, i32 %146), !insn.addr !283
  store i32 %236, i32* %r0.3.reg2mem, !insn.addr !284
  br label %dec_label_pc_11654, !insn.addr !284

dec_label_pc_116e4:                               ; preds = %dec_label_pc_116a0
  %237 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([40 x i8], [40 x i8]* @global_var_12e2c, i32 0, i32 0), i32 %r1.11, i32 %r4.9.reload), !insn.addr !285
  br label %dec_label_pc_116cc, !insn.addr !286

dec_label_pc_11704:                               ; preds = %dec_label_pc_11690
  %238 = call i32 @puts(i8* getelementptr inbounds ([26 x i8], [26 x i8]* @global_var_12dd4, i32 0, i32 0)), !insn.addr !287
  br label %dec_label_pc_116cc, !insn.addr !288

dec_label_pc_11714:                               ; preds = %dec_label_pc_11670
  %239 = call i32 @i2c_smbus_read_byte_data(i32 %120, i32 %146), !insn.addr !289
  store i32 %r4.6.reload, i32* %r4.9.reg2mem, !insn.addr !290
  store i32 %239, i32* %r7.3.reg2mem, !insn.addr !290
  br label %dec_label_pc_11690, !insn.addr !290

dec_label_pc_11728:                               ; preds = %dec_label_pc_11670
  %240 = call i32 @i2c_smbus_read_byte(i32 %120), !insn.addr !291
  store i32 %43, i32* %r4.9.reg2mem, !insn.addr !292
  store i32 %240, i32* %r7.3.reg2mem, !insn.addr !292
  br label %dec_label_pc_11690, !insn.addr !292

dec_label_pc_1173c:                               ; preds = %dec_label_pc_11668
  %241 = call i32 @close(i32 %120), !insn.addr !293
  call void @exit(i32 0), !insn.addr !294
  unreachable, !insn.addr !294

dec_label_pc_1179c:                               ; preds = %dec_label_pc_11654
  %242 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !295
  %243 = call i32 @fwrite(i32* bitcast ([21 x i8]* @global_var_12d9c to i32*), i32 1, i32 20, %_IO_FILE* %242), !insn.addr !296
  %244 = call i32 @close(i32 %120), !insn.addr !297
  call void @exit(i32 1), !insn.addr !298
  unreachable, !insn.addr !298

dec_label_pc_117cc:                               ; preds = %dec_label_pc_112c8
  %245 = urem i32 %r4.6.reload, 256, !insn.addr !299
  %246 = call i32 @i2c_smbus_write_byte_data(i32 %120, i32 %146, i32 %245, i32 %124), !insn.addr !300
  store i32 %246, i32* %r0.3.reg2mem, !insn.addr !301
  br label %dec_label_pc_11654, !insn.addr !301

dec_label_pc_11824:                               ; preds = %dec_label_pc_11248
  %247 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !302
  %248 = call i32 @fwrite(i32* bitcast ([27 x i8]* @global_var_12cdc to i32*), i32 1, i32 26, %_IO_FILE* %247), !insn.addr !303
  call void @exit(i32 0), !insn.addr !304
  unreachable, !insn.addr !304

dec_label_pc_11844:                               ; preds = %dec_label_pc_11228
  %249 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !305
  %250 = call i32 @fwrite(i32* bitcast ([33 x i8]* @global_var_12cf8 to i32*), i32 1, i32 32, %_IO_FILE* %249), !insn.addr !306
  call void @exit(i32 1), !insn.addr !307
  unreachable, !insn.addr !307

dec_label_pc_1186c:                               ; preds = %dec_label_pc_11214
  %251 = call i32 @i2c_smbus_read_byte_data(i32 %120, i32 %131), !insn.addr !308
  store i32 %251, i32* %r0.2.reg2mem, !insn.addr !309
  br label %dec_label_pc_11228, !insn.addr !309

dec_label_pc_1187c:                               ; preds = %dec_label_pc_1120c
  %252 = call i32 @i2c_smbus_read_byte(i32 %120), !insn.addr !310
  store i32 %252, i32* %r0.2.reg2mem, !insn.addr !311
  br label %dec_label_pc_11228, !insn.addr !311

dec_label_pc_11888:                               ; preds = %dec_label_pc_111f8
  %253 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !312
  %254 = call i32 @fwrite(i32* bitcast ([76 x i8]* @global_var_12b60 to i32*), i32 1, i32 75, %_IO_FILE* %253), !insn.addr !313
  %255 = add i32 %36, -80, !insn.addr !314
  %256 = icmp ult i32 %255, 7, !insn.addr !315
  %257 = icmp ne i1 %256, true, !insn.addr !315
  %258 = icmp eq i32 %255, 7, !insn.addr !315
  %259 = icmp ne i1 %258, true, !insn.addr !316
  %260 = icmp eq i1 %257, %259, !insn.addr !316
  store i32 0, i32* %stack_var_-124.1.reg2mem, !insn.addr !317
  br i1 %260, label %dec_label_pc_118d8, label %dec_label_pc_118bc, !insn.addr !317

dec_label_pc_118bc:                               ; preds = %dec_label_pc_11888
  %261 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !318
  %262 = call i32 @fwrite(i32* bitcast ([120 x i8]* @global_var_12bac to i32*), i32 1, i32 119, %_IO_FILE* %261), !insn.addr !319
  store i32 1, i32* %stack_var_-124.1.reg2mem, !insn.addr !319
  br label %dec_label_pc_118d8, !insn.addr !319

dec_label_pc_118d8:                               ; preds = %dec_label_pc_118bc, %dec_label_pc_11888
  %stack_var_-124.1.reload = load i32, i32* %stack_var_-124.1.reg2mem
  %263 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !320
  %264 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %263, i8* getelementptr inbounds ([75 x i8], [75 x i8]* @global_var_12c24, i32 0, i32 0), i32* nonnull %stack_var_-92, i32 %36, i32 %43), !insn.addr !321
  %265 = icmp eq i32 %r6.2.reload, 1, !insn.addr !322
  br i1 %265, label %dec_label_pc_11a70, label %dec_label_pc_118fc, !insn.addr !323

dec_label_pc_118fc:                               ; preds = %dec_label_pc_118d8
  %266 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !324
  switch i32 %r6.2.reload, label %dec_label_pc_1190c [
    i32 8, label %dec_label_pc_119ec
    i32 5, label %dec_label_pc_119ec
  ]

dec_label_pc_1190c:                               ; preds = %dec_label_pc_118fc
  %267 = icmp eq i32 %r6.2.reload, 2, !insn.addr !325
  %spec.select20 = select i1 %267, i32 ptrtoint ([5 x i8]* @global_var_12af0 to i32), i32 ptrtoint ([5 x i8]* @global_var_12b04 to i32)
  %268 = icmp eq i32 %stack_var_-120.0.reload, 0, !insn.addr !326
  %269 = inttoptr i32 %spec.select20 to i8*, !insn.addr !327
  %spec.select21 = select i1 %268, i32 ptrtoint (i8** @global_var_1290c to i32), i32 ptrtoint ([10 x i8]* @global_var_128d8 to i32)
  %270 = inttoptr i32 %spec.select21 to i8*, !insn.addr !328
  %271 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %266, i8* getelementptr inbounds ([25 x i8], [25 x i8]* @global_var_12c98, i32 0, i32 0), i32 %r4.4.reload, i8* %270, i8* %269), !insn.addr !328
  br label %dec_label_pc_11980, !insn.addr !328

dec_label_pc_1195c:                               ; preds = %dec_label_pc_11a20, %dec_label_pc_119ec
  %272 = icmp eq i32 %r6.2.reload, 5
  %.lcssa.reload = load %_IO_FILE*, %_IO_FILE** %.lcssa.reg2mem
  %spec.select23 = select i1 %272, i32 ptrtoint ([12 x i8]* @global_var_128c0 to i32), i32 ptrtoint ([10 x i8]* @global_var_128cc to i32)
  %273 = inttoptr i32 %spec.select23 to i8*, !insn.addr !329
  %274 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %.lcssa.reload, i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_12c8c, i32 0, i32 0), i8* %273), !insn.addr !329
  br label %dec_label_pc_11980

dec_label_pc_11980:                               ; preds = %dec_label_pc_1195c, %dec_label_pc_1190c, %dec_label_pc_11a70
  %275 = icmp eq i32 %stack_var_-124.1.reload, 0, !insn.addr !330
  %276 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !331
  %spec.select22 = select i1 %275, i32 ptrtoint ([4 x i8]* @global_var_128e8 to i32), i32 ptrtoint ([4 x i8]* @global_var_128e4 to i32)
  %277 = inttoptr i32 %spec.select22 to i8*, !insn.addr !332
  %278 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %276, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_12ccc, i32 0, i32 0), i8* %277), !insn.addr !332
  %279 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !333
  %280 = call i32 @fflush(%_IO_FILE* %279), !insn.addr !334
  %281 = xor i32 %stack_var_-124.1.reload, 1, !insn.addr !335
  %282 = call i32 @function_12660(i32 %281), !insn.addr !336
  %283 = icmp eq i32 %282, 0, !insn.addr !337
  br i1 %283, label %dec_label_pc_119cc, label %dec_label_pc_11200, !insn.addr !338

dec_label_pc_119cc:                               ; preds = %dec_label_pc_11980
  %284 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !339
  %285 = call i32 @fwrite(i32* bitcast ([27 x i8]* @global_var_12cdc to i32*), i32 1, i32 26, %_IO_FILE* %284), !insn.addr !340
  call void @exit(i32 0), !insn.addr !341
  unreachable, !insn.addr !341

dec_label_pc_119ec:                               ; preds = %dec_label_pc_118fc, %dec_label_pc_118fc
  %286 = call i32 @fwrite(i32* bitcast ([5 x i8]* @global_var_12c7c to i32*), i32 1, i32 4, %_IO_FILE* %266), !insn.addr !342
  %287 = icmp eq i32 %fp.3.reload, 0, !insn.addr !343
  %288 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !344
  store %_IO_FILE* %288, %_IO_FILE** %.lcssa.reg2mem, !insn.addr !345
  br i1 %287, label %dec_label_pc_1195c, label %dec_label_pc_11a20.lr.ph, !insn.addr !345

dec_label_pc_11a20.lr.ph:                         ; preds = %dec_label_pc_119ec
  %289 = ptrtoint i32* %stack_var_-72 to i32, !insn.addr !346
  store %_IO_FILE* %288, %_IO_FILE** %.reg2mem
  store i32 0, i32* %r4.1130.reg2mem
  br label %dec_label_pc_11a20

dec_label_pc_11a20:                               ; preds = %dec_label_pc_11a20.lr.ph, %dec_label_pc_11a20
  %r4.1130.reload = load i32, i32* %r4.1130.reg2mem
  %.reload = load %_IO_FILE*, %_IO_FILE** %.reg2mem
  %290 = add i32 %r4.1130.reload, %289, !insn.addr !347
  %291 = inttoptr i32 %290 to i8*, !insn.addr !347
  %292 = load i8, i8* %291, align 1, !insn.addr !347
  %293 = zext i8 %292 to i32, !insn.addr !347
  %294 = add nuw i32 %r4.1130.reload, 1, !insn.addr !348
  %295 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %.reload, i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_12c84, i32 0, i32 0), i32 %293), !insn.addr !349
  %296 = icmp eq i32 %294, %fp.3.reload, !insn.addr !343
  %297 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !344
  store %_IO_FILE* %297, %_IO_FILE** %.lcssa.reg2mem, !insn.addr !345
  store %_IO_FILE* %297, %_IO_FILE** %.reg2mem, !insn.addr !345
  store i32 %294, i32* %r4.1130.reg2mem, !insn.addr !345
  br i1 %296, label %dec_label_pc_1195c, label %dec_label_pc_11a20, !insn.addr !345

dec_label_pc_11a70:                               ; preds = %dec_label_pc_118d8
  %298 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !350
  %299 = call i32 @fwrite(i32* bitcast ([10 x i8]* @global_var_12c70 to i32*), i32 1, i32 9, %_IO_FILE* %298), !insn.addr !351
  br label %dec_label_pc_11980, !insn.addr !352

dec_label_pc_11a8c:                               ; preds = %dec_label_pc_112c8
  %300 = urem i32 %fp.3.reload, 256, !insn.addr !353
  %301 = call i32 @i2c_smbus_write_i2c_block_data(i32 %120, i32 %146, i32 %300, i32* nonnull %stack_var_-72), !insn.addr !354
  store i32 %301, i32* %r0.3.reg2mem, !insn.addr !355
  br label %dec_label_pc_11654, !insn.addr !355

dec_label_pc_11aa4:                               ; preds = %dec_label_pc_112c8
  %302 = urem i32 %fp.3.reload, 256, !insn.addr !356
  %303 = call i32 @i2c_smbus_write_block_data(i32 %120, i32 %146, i32 %302, i32* nonnull %stack_var_-72), !insn.addr !357
  store i32 %303, i32* %r0.3.reg2mem, !insn.addr !358
  br label %dec_label_pc_11654, !insn.addr !358

dec_label_pc_11abc:                               ; preds = %dec_label_pc_11160
  %304 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !359
  %305 = call i32* @__errno_location(), !insn.addr !360
  %306 = load i32, i32* %305, align 4, !insn.addr !361
  %307 = call i8* @strerror(i32 %306), !insn.addr !362
  %308 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %304, i8* getelementptr inbounds ([59 x i8], [59 x i8]* @global_var_12a6c, i32 0, i32 0), i8* %307), !insn.addr !363
  br label %dec_label_pc_11328, !insn.addr !364

; uselistorder directives
  uselistorder %_IO_FILE* %266, { 1, 0 }
  uselistorder i32 %stack_var_-124.1.reload, { 1, 0 }
  uselistorder i32 %r1.11, { 2, 1, 0 }
  uselistorder i32 %r4.9.reload, { 2, 1, 0 }
  uselistorder i32 %r7.3.reload, { 2, 0, 1 }
  uselistorder i32 %212, { 2, 1, 0 }
  uselistorder i32 %storemerge9.reload, { 3, 2, 1, 0 }
  uselistorder i32 %r6.3.reload, { 1, 0 }
  uselistorder i32 %172, { 0, 3, 2, 1 }
  uselistorder i32 %spec.select, { 1, 0 }
  uselistorder i32 %146, { 3, 5, 0, 1, 6, 2, 4 }
  uselistorder i32 %r4.6.reload, { 3, 0, 1, 2 }
  uselistorder i32 %r1.6, { 1, 0, 2 }
  uselistorder i32 %136, { 1, 2, 0 }
  uselistorder i32 %r0.2.reload, { 1, 3, 2, 0 }
  uselistorder i32 %131, { 1, 0 }
  uselistorder i32 %124, { 1, 0, 2, 3 }
  uselistorder i32 %stack_var_-120.0.reload, { 2, 1, 3, 0 }
  uselistorder i32 %r4.4.reload, { 1, 2, 0 }
  uselistorder i32 %r6.2.reload, { 7, 6, 11, 1, 2, 10, 9, 5, 3, 4, 8, 0 }
  uselistorder i32 %fp.3.reload, { 3, 2, 0, 1 }
  uselistorder i32 %120, { 7, 9, 11, 12, 0, 1, 2, 3, 5, 10, 4, 6, 8, 13, 14, 15, 16 }
  uselistorder i8* %114, { 2, 1, 0, 3 }
  uselistorder i8 %105, { 1, 0, 3, 2 }
  uselistorder i32 %94, { 1, 2, 0, 3 }
  uselistorder i32 %r4.2.reload, { 1, 0, 2 }
  uselistorder i32 %r6.0.reload, { 0, 2, 1 }
  uselistorder i32 %r0.0.reload, { 1, 0 }
  uselistorder i8 %68, { 1, 0, 3, 2 }
  uselistorder i32 %62, { 1, 0 }
  uselistorder i8* %61, { 2, 1, 0, 3 }
  uselistorder i32 %fp.2.reload, { 2, 0, 1 }
  uselistorder i32 %43, { 4, 0, 1, 3, 2, 6, 5 }
  uselistorder i32 %28, { 2, 0, 1, 3 }
  uselistorder i32 %27, { 1, 0 }
  uselistorder i32 %r4.1.reload, { 4, 3, 2, 1, 5, 0 }
  uselistorder i32 %lr.0.reload, { 4, 3, 2, 1, 5, 0 }
  uselistorder i32 %r1.0.reload, { 5, 4, 3, 2, 1, 0 }
  uselistorder i32 %r2.0.reload, { 1, 0 }
  uselistorder i32 %r4.0.reload, { 5, 3, 2, 1, 4, 0 }
  uselistorder i32 %r7.0.reload, { 4, 3, 2, 1, 0, 5 }
  uselistorder i32 %r8.0.reload, { 4, 3, 2, 1, 5, 0 }
  uselistorder i32 %sb.0.reload, { 4, 3, 2, 1, 5, 0 }
  uselistorder i32 %fp.0.reload, { 4, 3, 2, 1, 5, 0 }
  uselistorder i8** %stack_var_-100, { 3, 7, 2, 6, 1, 5, 0, 4 }
  uselistorder i32* %lr.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r0.0.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r1.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r2.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r4.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r7.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r8.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %sb.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %fp.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %lr.1.reg2mem, { 6, 5, 4, 3, 2, 7, 0, 1 }
  uselistorder i32* %r0.1.reg2mem, { 6, 5, 4, 3, 2, 7, 0, 1 }
  uselistorder i32* %r1.1.reg2mem, { 6, 5, 4, 3, 2, 7, 0, 1 }
  uselistorder i32* %r7.1.reg2mem, { 6, 5, 4, 3, 2, 7, 0, 1 }
  uselistorder i32* %r8.1.reg2mem, { 6, 5, 4, 3, 2, 7, 0, 1 }
  uselistorder i32* %sb.1.reg2mem, { 6, 5, 4, 3, 2, 7, 0, 1 }
  uselistorder i32* %fp.1.reg2mem, { 6, 5, 4, 3, 2, 7, 0, 1 }
  uselistorder i32* %r1.2.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r4.1.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r7.2.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r8.2.reg2mem, { 0, 2, 1 }
  uselistorder i32* %sb.2.reg2mem, { 0, 2, 1 }
  uselistorder i32* %fp.2.reg2mem, { 0, 2, 1 }
  uselistorder i32* %storemerge6.reg2mem, { 3, 4, 2, 0, 1 }
  uselistorder i32* %r4.2.reg2mem, { 4, 1, 2, 0, 3 }
  uselistorder i32* %r6.0.reg2mem, { 4, 1, 2, 0, 3 }
  uselistorder i32* %stack_var_-120.0.reg2mem, { 1, 2, 3, 5, 4, 0, 6 }
  uselistorder i32* %r4.4.reg2mem, { 1, 2, 3, 5, 4, 0, 6 }
  uselistorder i32* %r6.2.reg2mem, { 1, 2, 3, 5, 4, 0, 6 }
  uselistorder i32* %fp.3.reg2mem, { 1, 2, 3, 5, 4, 0, 6 }
  uselistorder i32* %r0.2.reg2mem, { 3, 1, 0, 2 }
  uselistorder i32* %r4.6.reg2mem, { 0, 2, 1, 3 }
  uselistorder i8** %.pre-phi.reg2mem, { 3, 0, 2, 1, 4 }
  uselistorder i32* %r6.3.reg2mem, { 0, 3, 2, 1, 4 }
  uselistorder i32* %storemerge9.reg2mem, { 0, 1, 3, 2 }
  uselistorder i32* %storemerge532.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r4.831.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r0.3.reg2mem, { 4, 2, 5, 1, 0, 3 }
  uselistorder i32* %r4.9.reg2mem, { 3, 1, 0, 2 }
  uselistorder i32* %r7.3.reg2mem, { 3, 1, 0, 2 }
  uselistorder %_IO_FILE** %.lcssa.reg2mem, { 1, 2, 0 }
  uselistorder %_IO_FILE** %.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r4.1130.reg2mem, { 1, 0, 2 }
  uselistorder i32 65536, { 0, 2, 1 }
  uselistorder i32 (i32)* @function_12660, { 1, 0 }
  uselistorder i32 (%_IO_FILE*)* @fflush, { 1, 0, 2 }
  uselistorder i32 (i32, i32)* @i2c_smbus_read_word_data, { 1, 0, 2 }
  uselistorder i8 112, { 2, 0, 1 }
  uselistorder i32 ()* @function_11bac, { 8, 7, 6, 5, 4, 3, 2, 0, 9, 1 }
  uselistorder i8 119, { 1, 0 }
  uselistorder i8 115, { 1, 0 }
  uselistorder i8 105, { 1, 0, 3, 2 }
  uselistorder i32 5, { 5, 2, 3, 4, 1, 0, 6 }
  uselistorder i1 true, { 3, 4, 0, 1, 2, 5, 6, 7, 8 }
  uselistorder i32 %arg2, { 3, 0, 1, 2, 4 }
  uselistorder i32 %arg1, { 3, 1, 4, 2, 5, 0, 6, 7, 8, 9, 10 }
  uselistorder label %dec_label_pc_11a20, { 1, 0 }
  uselistorder label %dec_label_pc_11980, { 2, 0, 1 }
  uselistorder label %dec_label_pc_11654, { 0, 1, 4, 2, 3 }
  uselistorder label %dec_label_pc_115c8, { 1, 0 }
  uselistorder label %dec_label_pc_114f4, { 2, 1, 0 }
  uselistorder label %dec_label_pc_11430, { 1, 2, 3, 0 }
  uselistorder label %dec_label_pc_11328, { 6, 1, 2, 3, 4, 5, 0, 7 }
  uselistorder label %dec_label_pc_112c8, { 1, 2, 0 }
  uselistorder label %dec_label_pc_111e0, { 4, 3, 2, 1, 0, 5 }
  uselistorder label %dec_label_pc_11144, { 0, 1, 2, 4, 3, 5 }
  uselistorder label %dec_label_pc_110e4, { 2, 4, 1, 3, 0, 5 }
  uselistorder label %dec_label_pc_11058, { 3, 1, 0, 2 }
  uselistorder label %dec_label_pc_11004, { 1, 2, 3, 0, 4 }
  uselistorder label %dec_label_pc_10fe4, { 1, 0 }
  uselistorder label %dec_label_pc_10f58, { 2, 3, 1, 0 }
  uselistorder label %dec_label_pc_10e60, { 1, 0 }
  uselistorder label %dec_label_pc_10e58, { 1, 0 }
  uselistorder label %dec_label_pc_10e38, { 1, 2, 3, 4, 5, 6, 0 }
  uselistorder label %dec_label_pc_10d8c, { 1, 0 }
}

define i32 @entry_point(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_11aec:
  %stack_var_4 = alloca i32, align 4
  %0 = bitcast i32* %stack_var_4 to i8**, !insn.addr !365
  %1 = inttoptr i32 %arg1 to void ()*, !insn.addr !365
  %2 = call i32 @__libc_start_main(i32 68932, i32 %arg2, i8** nonnull %0, void ()* inttoptr (i32 75521 to void ()*), void ()* inttoptr (i32 68932 to void ()*), void ()* %1), !insn.addr !365
  call void @abort(), !insn.addr !366
  unreachable, !insn.addr !366
}

define i32 @function_11b10(i32 %arg1) local_unnamed_addr {
dec_label_pc_11b10:
  ret i32 %arg1, !insn.addr !367
}

define i32 @function_11b1c() local_unnamed_addr {
dec_label_pc_11b1c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* inttoptr (i32 add (i32 add (i32 ptrtoint (i32* @global_var_11b2c to i32), i32 ptrtoint (i32* @global_var_124d4 to i32)), i32 200) to i32*), align 4, !insn.addr !368
  %3 = icmp eq i32 %2, 0, !insn.addr !369
  br i1 %3, label %4, label %dec_label_pc_11b34, !insn.addr !370

; <label>:4:                                      ; preds = %dec_label_pc_11b1c
  ret i32 %1, !insn.addr !370

dec_label_pc_11b34:                               ; preds = %dec_label_pc_11b1c
  call void @__gmon_start__(), !insn.addr !371
  ret i32 ptrtoint (i32* @3 to i32), !insn.addr !371
}

define i32 @function_11b40(i32 %arg1, i32 %arg2, i32 %arg3, i8 %arg4) local_unnamed_addr {
dec_label_pc_11b40:
  %0 = alloca i32
  %1 = alloca i1
  %2 = alloca double
  %cpsr_n.01.reg2mem = alloca i1, !insn.addr !372
  %3 = load i1, i1* %1
  %4 = load i1, i1* %1
  %5 = load i1, i1* %1
  %6 = load i32, i32* %0
  %7 = load double, double* %2
  %8 = load double, double* %2
  br i1 %4, label %9, label %dec_label_pc_11b5c, !insn.addr !372

; <label>:9:                                      ; preds = %dec_label_pc_11b40
  ret i32 %arg1, !insn.addr !372

dec_label_pc_11b5c:                               ; preds = %dec_label_pc_11b40
  %10 = icmp eq i1 %5, %3, !insn.addr !373
  br i1 %10, label %dec_label_pc_11b70, label %11, !insn.addr !373

; <label>:11:                                     ; preds = %dec_label_pc_11b5c
  call void @__asm_svclt(i32 18288), !insn.addr !373
  br label %dec_label_pc_11b70, !insn.addr !373

dec_label_pc_11b70:                               ; preds = %11, %dec_label_pc_11b5c
  br i1 %3, label %dec_label_pc_11b88, label %12, !insn.addr !374

; <label>:12:                                     ; preds = %dec_label_pc_11b70
  %13 = mul i32 %6, 1048577, !insn.addr !375
  %14 = mul i32 %6, 4194304, !insn.addr !374
  %15 = sub i32 0, %14
  %16 = sub i32 %15, 1
  %17 = and i32 %13, %16, !insn.addr !374
  %18 = icmp slt i32 %17, 0, !insn.addr !374
  %19 = icmp eq i32 %17, 0, !insn.addr !374
  store i1 %18, i1* %cpsr_n.01.reg2mem, !insn.addr !376
  br i1 %19, label %20, label %dec_label_pc_11b88, !insn.addr !376

; <label>:20:                                     ; preds = %12
  %21 = call i32 @unknown_240(), !insn.addr !376
  ret i32 %21, !insn.addr !376

dec_label_pc_11b88:                               ; preds = %dec_label_pc_11b70, %12
  %cpsr_n.01.reload = load i1, i1* %cpsr_n.01.reg2mem
  %22 = icmp eq i1 %cpsr_n.01.reload, %3, !insn.addr !377
  br i1 %22, label %24, label %23, !insn.addr !377

; <label>:23:                                     ; preds = %dec_label_pc_11b88
  call void @__asm_svclt(i32 18288), !insn.addr !377
  br label %24, !insn.addr !377

; <label>:24:                                     ; preds = %dec_label_pc_11b88, %23
  %25 = call double @__asm_vqrshl.s8(double %8, double %7), !insn.addr !378
  ret i32 %arg1, !insn.addr !378

; uselistorder directives
  uselistorder i32 %6, { 1, 0 }
  uselistorder i1 %3, { 2, 1, 0 }
  uselistorder double* %2, { 1, 0 }
  uselistorder i1* %1, { 2, 1, 0 }
  uselistorder label %24, { 1, 0 }
  uselistorder label %dec_label_pc_11b88, { 1, 0 }
}

define i32 @function_11b94(i32 %arg1) local_unnamed_addr {
dec_label_pc_11b94:
  %0 = alloca i32
  %r0.0.reg2mem = alloca i32, !insn.addr !379
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = load i32, i32* %0
  %4 = load i32, i32* %0
  %5 = mul i32 %1, 524288, !insn.addr !379
  %6 = or i32 %5, 131072, !insn.addr !380
  %7 = inttoptr i32 %6 to i8*, !insn.addr !381
  %8 = load i8, i8* %7, align 131072, !insn.addr !381
  %9 = icmp eq i8 %8, 0, !insn.addr !382
  br i1 %9, label %dec_label_pc_11b9e, label %dec_label_pc_11ba6, !insn.addr !382

dec_label_pc_11b9e:                               ; preds = %dec_label_pc_11b94
  %10 = call i32 @function_11b40(i32 %4, i32 %3, i32 %2, i8 0), !insn.addr !383
  store i8 1, i8* %7, align 131072, !insn.addr !384
  store i32 %10, i32* %r0.0.reg2mem, !insn.addr !384
  br label %dec_label_pc_11ba6, !insn.addr !384

dec_label_pc_11ba6:                               ; preds = %dec_label_pc_11b94, %dec_label_pc_11b9e
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !385

; uselistorder directives
  uselistorder i32* %0, { 3, 2, 1, 0 }
  uselistorder label %dec_label_pc_11ba6, { 1, 0 }
}

define i32 @function_11ba8() local_unnamed_addr {
dec_label_pc_11ba8:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !386
}

define i32 @function_11bac() local_unnamed_addr {
dec_label_pc_11bac:
  %0 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !387
  %1 = call i32 @fwrite(i32* bitcast ([369 x i8]* @global_var_1274c to i32*), i32 1, i32 368, %_IO_FILE* %0), !insn.addr !388
  call void @exit(i32 1), !insn.addr !389
  unreachable, !insn.addr !389

; uselistorder directives
  uselistorder void (i32)* @exit, { 7, 8, 6, 2, 0, 1, 4, 5, 3, 9 }
}

define i32 @function_11bd8(i32 %arg1) local_unnamed_addr {
dec_label_pc_11bd8:
  %0 = alloca i32
  %r3.04.reg2mem = alloca i32, !insn.addr !390
  %.reg2mem = alloca i32, !insn.addr !390
  %1 = load i32, i32* %0
  %2 = inttoptr i32 %arg1 to i8*, !insn.addr !391
  %3 = call i32 @strlen(i8* %2), !insn.addr !391
  %4 = icmp eq i32 %3, 0, !insn.addr !392
  br i1 %4, label %dec_label_pc_11c30, label %dec_label_pc_11bec, !insn.addr !393

dec_label_pc_11bec:                               ; preds = %dec_label_pc_11bd8
  %5 = add i32 %3, -1
  %6 = add i32 %5, %arg1
  %7 = inttoptr i32 %6 to i8*
  %8 = load i8, i8* %7, align 1, !insn.addr !394
  switch i8 %8, label %dec_label_pc_11c40 [
    i8 32, label %dec_label_pc_11c20.preheader
    i8 10, label %dec_label_pc_11c20.preheader
  ]

dec_label_pc_11c20.preheader:                     ; preds = %dec_label_pc_11bec, %dec_label_pc_11bec
  %9 = icmp eq i8 %8, 10, !insn.addr !395
  %10 = icmp eq i8 %8, 32
  %spec.select = or i1 %9, %10
  %extract.t = trunc i32 %1 to i8
  %spec.select1 = select i1 %spec.select, i8 0, i8 %extract.t
  store i8 %spec.select1, i8* %7, align 1, !insn.addr !396
  %11 = icmp eq i32 %5, 0, !insn.addr !397
  store i32 %6, i32* %.reg2mem, !insn.addr !398
  store i32 %5, i32* %r3.04.reg2mem, !insn.addr !398
  br i1 %11, label %dec_label_pc_11c30, label %dec_label_pc_11c0c, !insn.addr !398

dec_label_pc_11c0c:                               ; preds = %dec_label_pc_11c20.preheader, %dec_label_pc_11c20.backedge
  %r3.04.reload = load i32, i32* %r3.04.reg2mem
  %.reload = load i32, i32* %.reg2mem
  %12 = add i32 %.reload, -1, !insn.addr !396
  %13 = inttoptr i32 %12 to i8*
  %14 = load i8, i8* %13, align 1, !insn.addr !399
  switch i8 %14, label %dec_label_pc_11c38 [
    i8 32, label %dec_label_pc_11c20.backedge
    i8 10, label %dec_label_pc_11c20.backedge
  ]

dec_label_pc_11c20.backedge:                      ; preds = %dec_label_pc_11c0c, %dec_label_pc_11c0c
  %15 = add i32 %r3.04.reload, -1, !insn.addr !400
  store i8 %spec.select1, i8* %13, align 1, !insn.addr !396
  %16 = icmp eq i32 %15, 0, !insn.addr !397
  store i32 %12, i32* %.reg2mem, !insn.addr !398
  store i32 %15, i32* %r3.04.reg2mem, !insn.addr !398
  br i1 %16, label %dec_label_pc_11c30, label %dec_label_pc_11c0c, !insn.addr !398

dec_label_pc_11c30:                               ; preds = %dec_label_pc_11c20.backedge, %dec_label_pc_11c20.preheader, %dec_label_pc_11bd8
  ret i32 1, !insn.addr !401

dec_label_pc_11c38:                               ; preds = %dec_label_pc_11c0c
  %17 = add i32 %r3.04.reload, 1, !insn.addr !402
  ret i32 %17, !insn.addr !403

dec_label_pc_11c40:                               ; preds = %dec_label_pc_11bec
  %18 = add i32 %3, 1, !insn.addr !404
  ret i32 %18, !insn.addr !405

; uselistorder directives
  uselistorder i32 %r3.04.reload, { 1, 0 }
  uselistorder i8 %spec.select1, { 1, 0 }
  uselistorder i8 %8, { 1, 2, 0 }
  uselistorder i32 %5, { 0, 2, 1 }
  uselistorder i32 %3, { 0, 2, 1 }
  uselistorder i32* %.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r3.04.reg2mem, { 2, 0, 1 }
  uselistorder i8 32, { 0, 2, 1 }
  uselistorder label %dec_label_pc_11c0c, { 1, 0 }
}

define i32 @function_11c48(i32 %arg1) local_unnamed_addr {
dec_label_pc_11c48:
  %r4.0.reg2mem = alloca i32, !insn.addr !406
  %r0.0.reg2mem = alloca i32, !insn.addr !406
  %0 = add i32 %arg1, 4, !insn.addr !407
  %1 = inttoptr i32 %0 to i32*, !insn.addr !407
  %2 = load i32, i32* %1, align 4, !insn.addr !407
  %3 = icmp eq i32 %2, 0, !insn.addr !408
  store i32 %2, i32* %r0.0.reg2mem, !insn.addr !409
  store i32 %arg1, i32* %r4.0.reg2mem, !insn.addr !409
  br i1 %3, label %dec_label_pc_11c74, label %dec_label_pc_11c60, !insn.addr !409

dec_label_pc_11c60:                               ; preds = %dec_label_pc_11c48, %dec_label_pc_11c60
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  %4 = add i32 %r4.0.reload, 16, !insn.addr !410
  %5 = inttoptr i32 %r0.0.reload to i32*, !insn.addr !411
  call void @free(i32* %5), !insn.addr !411
  %6 = add i32 %r4.0.reload, 20, !insn.addr !412
  %7 = inttoptr i32 %6 to i32*, !insn.addr !412
  %8 = load i32, i32* %7, align 4, !insn.addr !412
  %9 = icmp eq i32 %8, 0, !insn.addr !413
  store i32 %8, i32* %r0.0.reg2mem, !insn.addr !414
  store i32 %4, i32* %r4.0.reg2mem, !insn.addr !414
  br i1 %9, label %dec_label_pc_11c74, label %dec_label_pc_11c60, !insn.addr !414

dec_label_pc_11c74:                               ; preds = %dec_label_pc_11c60, %dec_label_pc_11c48
  %10 = inttoptr i32 %arg1 to i32*, !insn.addr !415
  call void @free(i32* %10), !insn.addr !415
  ret i32 ptrtoint (i32* @3 to i32), !insn.addr !415

; uselistorder directives
  uselistorder i32* %r0.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r4.0.reg2mem, { 2, 0, 1 }
  uselistorder void (i32*)* @free, { 1, 0, 2 }
  uselistorder i32 %arg1, { 1, 0, 2 }
  uselistorder label %dec_label_pc_11c60, { 1, 0 }
}

define i32 @function_11c80(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_11c80:
  %0 = mul i32 %arg2, 16, !insn.addr !416
  %1 = add i32 %0, 128, !insn.addr !417
  %2 = inttoptr i32 %arg1 to i32*, !insn.addr !418
  %3 = call i32* @realloc(i32* %2, i32 %1), !insn.addr !418
  %4 = ptrtoint i32* %3 to i32, !insn.addr !418
  %5 = icmp eq i32* %3, null, !insn.addr !419
  br i1 %5, label %dec_label_pc_11cbc, label %dec_label_pc_11ca0, !insn.addr !420

dec_label_pc_11ca0:                               ; preds = %dec_label_pc_11c80
  %6 = add i32 %0, %4, !insn.addr !421
  %7 = inttoptr i32 %6 to i32*, !insn.addr !422
  %8 = call i32* @memset(i32* %7, i32 0, i32 128), !insn.addr !422
  br label %dec_label_pc_11cb4, !insn.addr !422

dec_label_pc_11cb4:                               ; preds = %dec_label_pc_11cbc, %dec_label_pc_11ca0
  ret i32 %4, !insn.addr !423

dec_label_pc_11cbc:                               ; preds = %dec_label_pc_11c80
  %9 = call i32 @function_11c48(i32 %arg1), !insn.addr !424
  br label %dec_label_pc_11cb4, !insn.addr !425

; uselistorder directives
  uselistorder i32 %4, { 1, 0 }
  uselistorder i32 %0, { 1, 0 }
  uselistorder i32 128, { 1, 0 }
}

define i32 @function_11cc8(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_11cc8:
  %.reg2mem = alloca i32, !insn.addr !426
  %stack_var_-20 = alloca i8*, align 4
  %0 = inttoptr i32 %arg1 to i8*, !insn.addr !427
  %1 = call i32 @strtol(i8* %0, i8** nonnull %stack_var_-20, i32 0), !insn.addr !427
  %2 = load i8*, i8** %stack_var_-20, align 4, !insn.addr !428
  %3 = load i8, i8* %2, align 1, !insn.addr !429
  %4 = icmp ne i8 %3, 0, !insn.addr !430
  %5 = trunc i32 %1 to i8
  %6 = icmp eq i8 %5, 0, !insn.addr !431
  %or.cond = or i1 %6, %4
  br i1 %or.cond, label %dec_label_pc_11d38, label %dec_label_pc_11d00, !insn.addr !432

dec_label_pc_11d00:                               ; preds = %dec_label_pc_11cc8
  %7 = icmp eq i32 %arg2, 0, !insn.addr !433
  %r2.1 = select i1 %7, i32 3, i32 0
  %r3.1 = select i1 %7, i32 119, i32 127
  %8 = icmp slt i32 %r3.1, %1, !insn.addr !434
  %9 = icmp sgt i32 %r2.1, %1, !insn.addr !435
  %narrow = or i1 %9, %8
  %10 = icmp eq i1 %narrow, false, !insn.addr !436
  store i32 %1, i32* %.reg2mem, !insn.addr !437
  br i1 %10, label %dec_label_pc_11d30, label %dec_label_pc_11d60, !insn.addr !437

dec_label_pc_11d30:                               ; preds = %dec_label_pc_11d00, %dec_label_pc_11d60, %dec_label_pc_11d38
  %.reload = load i32, i32* %.reg2mem, !insn.addr !438
  ret i32 %.reload, !insn.addr !438

dec_label_pc_11d38:                               ; preds = %dec_label_pc_11cc8
  %11 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !439
  %12 = call i32 @fwrite(i32* bitcast ([38 x i8]* @global_var_12e7c to i32*), i32 1, i32 37, %_IO_FILE* %11), !insn.addr !440
  store i32 -1, i32* %.reg2mem, !insn.addr !441
  br label %dec_label_pc_11d30, !insn.addr !441

dec_label_pc_11d60:                               ; preds = %dec_label_pc_11d00
  %13 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !442
  %14 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %13, i8* getelementptr inbounds ([53 x i8], [53 x i8]* @global_var_12ea4, i32 0, i32 0), i32 %r2.1, i32 %r3.1), !insn.addr !443
  store i32 -2, i32* %.reg2mem, !insn.addr !444
  br label %dec_label_pc_11d30, !insn.addr !444

; uselistorder directives
  uselistorder i32 %r3.1, { 1, 0 }
  uselistorder i32 %r2.1, { 1, 0 }
  uselistorder i32 %1, { 0, 2, 3, 1 }
  uselistorder i32* %.reg2mem, { 2, 1, 0, 3 }
  uselistorder i32 37, { 0, 2, 1 }
  uselistorder i32 3, { 3, 7, 4, 10, 0, 11, 5, 8, 9, 6, 2, 1, 12 }
  uselistorder i32 (i8*, i8**, i32)* @strtol, { 4, 3, 2, 1, 0, 5 }
  uselistorder label %dec_label_pc_11d30, { 1, 2, 0 }
}

define i32 @function_11d80(i32 %arg1, i32* %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_11d80:
  %r4.0.reg2mem = alloca i32, !insn.addr !445
  %0 = ptrtoint i32* %arg2 to i32
  %1 = bitcast i32* %arg2 to i8*, !insn.addr !446
  %2 = call i32 (i8*, i32, i8*, ...) @snprintf(i8* %1, i32 %arg3, i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_12edc, i32 0, i32 0), i32 %arg1), !insn.addr !446
  %3 = add i32 %arg3, -1, !insn.addr !447
  %4 = add i32 %3, %0, !insn.addr !448
  %5 = inttoptr i32 %4 to i8*, !insn.addr !448
  store i8 0, i8* %5, align 1, !insn.addr !448
  %6 = call i32 (i8*, i32, ...) @open64(i8* %1, i32 2), !insn.addr !449
  %7 = icmp slt i32 %6, 0, !insn.addr !450
  store i32 %6, i32* %r4.0.reg2mem, !insn.addr !451
  br i1 %7, label %dec_label_pc_11ddc, label %dec_label_pc_11dd0, !insn.addr !451

dec_label_pc_11dd0:                               ; preds = %dec_label_pc_11ddc, %dec_label_pc_11e88, %dec_label_pc_11d80
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  ret i32 %r4.0.reload, !insn.addr !452

dec_label_pc_11ddc:                               ; preds = %dec_label_pc_11d80
  %8 = call i32* @__errno_location(), !insn.addr !453
  %9 = load i32, i32* %8, align 4, !insn.addr !454
  store i32 %6, i32* %r4.0.reg2mem
  switch i32 %9, label %dec_label_pc_11dd0 [
    i32 20, label %dec_label_pc_11e88
    i32 2, label %dec_label_pc_11e88
  ]

dec_label_pc_11e88:                               ; preds = %dec_label_pc_11ddc, %dec_label_pc_11ddc
  %10 = call i32 (i8*, i8*, ...) @sprintf(i8* %1, i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_12ee8, i32 0, i32 0), i32 %arg1), !insn.addr !455
  %11 = call i32 (i8*, i32, ...) @open64(i8* %1, i32 2), !insn.addr !456
  store i32 %11, i32* %r4.0.reg2mem, !insn.addr !457
  br label %dec_label_pc_11dd0, !insn.addr !457

; uselistorder directives
  uselistorder i32 %6, { 1, 0, 2 }
  uselistorder i32* %r4.0.reg2mem, { 3, 2, 0, 1 }
  uselistorder label %dec_label_pc_11dd0, { 1, 0, 2 }
}

define i32 @function_11eb0() local_unnamed_addr {
dec_label_pc_11eb0:
  %0 = alloca i32
  %.in.reg2mem = alloca %dirent64*, !insn.addr !458
  %fp.7.reg2mem = alloca i32, !insn.addr !458
  %fp.6.reg2mem = alloca i32, !insn.addr !458
  %sb.2.reg2mem = alloca i32, !insn.addr !458
  %r3.0.in.reg2mem = alloca %_IO_FILE*, !insn.addr !458
  %fp.5.reg2mem = alloca i32, !insn.addr !458
  %r5.1.reg2mem = alloca i32, !insn.addr !458
  %r0.0.in.reg2mem = alloca %dirent64*, !insn.addr !458
  %r5.043.reg2mem = alloca i32, !insn.addr !458
  %fp.444.reg2mem = alloca i32, !insn.addr !458
  %.reg2mem105 = alloca %dirent64*, !insn.addr !458
  %fp.3.reg2mem = alloca i32, !insn.addr !458
  %fp.2.reg2mem = alloca i32, !insn.addr !458
  %fp.1.lcssa.reg2mem = alloca i32, !insn.addr !458
  %fp.0.reg2mem = alloca i32, !insn.addr !458
  %sb.046.reg2mem = alloca i32, !insn.addr !458
  %fp.147.reg2mem = alloca i32, !insn.addr !458
  %.reg2mem = alloca i32, !insn.addr !458
  %1 = load i32, i32* %0
  %stack_var_-948 = alloca i32, align 4
  %stack_var_-956 = alloca i32, align 4
  %stack_var_-552 = alloca i32, align 4
  %stack_var_-808 = alloca i32, align 4
  %stack_var_-296 = alloca i32, align 4
  %stack_var_-928 = alloca i32, align 4
  %2 = call i32* @calloc(i32 8, i32 16), !insn.addr !459
  %3 = ptrtoint i32* %2 to i32, !insn.addr !459
  %4 = icmp eq i32* %2, null, !insn.addr !460
  store i32 %3, i32* %fp.2.reg2mem, !insn.addr !461
  br i1 %4, label %dec_label_pc_1201c, label %dec_label_pc_11ecc, !insn.addr !461

dec_label_pc_11ecc:                               ; preds = %dec_label_pc_11eb0
  %5 = call %_IO_FILE* @fopen64(i8* getelementptr inbounds ([14 x i8], [14 x i8]* @global_var_12f6c, i32 0, i32 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_13140, i32 0, i32 0)), !insn.addr !462
  %6 = icmp eq %_IO_FILE* %5, null, !insn.addr !463
  br i1 %6, label %dec_label_pc_12040, label %dec_label_pc_11fec.preheader, !insn.addr !464

dec_label_pc_11fec.preheader:                     ; preds = %dec_label_pc_11ecc
  %7 = bitcast i32* %stack_var_-928 to i8*, !insn.addr !465
  %8 = call i8* @fgets(i8* nonnull %7, i32 120, %_IO_FILE* nonnull %5), !insn.addr !465
  %9 = icmp eq i8* %8, null, !insn.addr !466
  store i32 1, i32* %.reg2mem, !insn.addr !467
  store i32 %3, i32* %fp.147.reg2mem, !insn.addr !467
  store i32 0, i32* %sb.046.reg2mem, !insn.addr !467
  store i32 %3, i32* %fp.1.lcssa.reg2mem, !insn.addr !467
  br i1 %9, label %dec_label_pc_12014, label %dec_label_pc_11f08, !insn.addr !467

dec_label_pc_11f08:                               ; preds = %dec_label_pc_11fec.preheader, %dec_label_pc_11fb0
  %sb.046.reload = load i32, i32* %sb.046.reg2mem
  %fp.147.reload = load i32, i32* %fp.147.reg2mem
  %.reload = load i32, i32* %.reg2mem
  %10 = call i8* @strrchr(i8* nonnull %7, i32 9), !insn.addr !468
  store i8 0, i8* %10, align 1, !insn.addr !469
  %11 = call i8* @strrchr(i8* nonnull %7, i32 9), !insn.addr !470
  store i8 0, i8* %11, align 1, !insn.addr !471
  %12 = call i8* @strrchr(i8* nonnull %7, i32 9), !insn.addr !472
  store i8 0, i8* %12, align 1, !insn.addr !473
  %13 = call i32 (i8*, i8*, ...) @sscanf(i8* nonnull %7, i8* getelementptr inbounds ([7 x i8], [7 x i8]* @global_var_12f7c, i32 0, i32 0), i32* nonnull %stack_var_-296), !insn.addr !474
  %14 = urem i32 %.reload, 8, !insn.addr !475
  %15 = icmp eq i32 %14, 0, !insn.addr !475
  store i32 %fp.147.reload, i32* %fp.0.reg2mem, !insn.addr !476
  br i1 %15, label %dec_label_pc_11f88, label %dec_label_pc_11f94, !insn.addr !476

dec_label_pc_11f88:                               ; preds = %dec_label_pc_11f08
  %16 = call i32 @function_11c80(i32 %fp.147.reload, i32 %.reload), !insn.addr !477
  %17 = icmp eq i32 %16, 0, !insn.addr !478
  store i32 %16, i32* %fp.0.reg2mem, !insn.addr !479
  store i32 0, i32* %fp.2.reg2mem, !insn.addr !479
  br i1 %17, label %dec_label_pc_1201c, label %dec_label_pc_11f94, !insn.addr !479

dec_label_pc_11f94:                               ; preds = %dec_label_pc_11f08, %dec_label_pc_11f88
  %18 = ptrtoint i8* %11 to i32, !insn.addr !470
  %19 = add i32 %18, 1, !insn.addr !480
  %20 = ptrtoint i8* %12 to i32, !insn.addr !472
  %21 = add i32 %20, 1, !insn.addr !481
  %22 = add i32 %21, %19, !insn.addr !482
  %fp.0.reload = load i32, i32* %fp.0.reg2mem
  %23 = ashr i32 %22, 31
  %24 = add i32 %23, %22, !insn.addr !483
  %25 = call i32* @malloc(i32 %24), !insn.addr !484
  %26 = icmp eq i32* %25, null, !insn.addr !485
  store i32 %fp.0.reload, i32* %fp.3.reg2mem, !insn.addr !486
  br i1 %26, label %dec_label_pc_12028, label %dec_label_pc_11fb0, !insn.addr !486

dec_label_pc_11fb0:                               ; preds = %dec_label_pc_11f94
  %27 = ptrtoint i8* %10 to i32, !insn.addr !468
  %28 = add i32 %27, 1, !insn.addr !487
  %29 = add i32 %fp.0.reload, %sb.046.reload, !insn.addr !488
  %30 = ptrtoint i32* %25 to i32, !insn.addr !484
  %31 = load i32, i32* %stack_var_-296, align 4, !insn.addr !489
  %32 = inttoptr i32 %29 to i32*, !insn.addr !490
  store i32 %31, i32* %32, align 4, !insn.addr !490
  %33 = add i32 %sb.046.reload, 16, !insn.addr !491
  %34 = bitcast i32* %25 to i8*, !insn.addr !492
  %35 = inttoptr i32 %19 to i8*, !insn.addr !492
  %36 = call i8* @strcpy(i8* %34, i8* %35), !insn.addr !492
  %37 = ptrtoint i8* %36 to i32, !insn.addr !492
  %38 = add i32 %29, 4, !insn.addr !493
  %39 = inttoptr i32 %38 to i32*, !insn.addr !493
  store i32 %37, i32* %39, align 4, !insn.addr !493
  %40 = add i32 %19, %30, !insn.addr !494
  %41 = inttoptr i32 %40 to i8*, !insn.addr !495
  %42 = inttoptr i32 %21 to i8*, !insn.addr !495
  %43 = call i8* @strcpy(i8* %41, i8* %42), !insn.addr !495
  %44 = ptrtoint i8* %43 to i32, !insn.addr !495
  %45 = add i32 %29, 8, !insn.addr !496
  %46 = inttoptr i32 %45 to i32*, !insn.addr !496
  store i32 %44, i32* %46, align 4, !insn.addr !496
  %47 = add i32 %22, %30, !insn.addr !497
  %48 = inttoptr i32 %47 to i8*, !insn.addr !498
  %49 = inttoptr i32 %28 to i8*, !insn.addr !498
  %50 = call i8* @strcpy(i8* %48, i8* %49), !insn.addr !498
  %51 = ptrtoint i8* %50 to i32, !insn.addr !498
  %52 = add i32 %29, 12, !insn.addr !499
  %53 = inttoptr i32 %52 to i32*, !insn.addr !499
  store i32 %51, i32* %53, align 4, !insn.addr !499
  %54 = call i8* @fgets(i8* nonnull %7, i32 120, %_IO_FILE* nonnull %5), !insn.addr !465
  %55 = add i32 %.reload, 1, !insn.addr !500
  %56 = icmp eq i8* %54, null, !insn.addr !466
  store i32 %55, i32* %.reg2mem, !insn.addr !467
  store i32 %fp.0.reload, i32* %fp.147.reg2mem, !insn.addr !467
  store i32 %33, i32* %sb.046.reg2mem, !insn.addr !467
  store i32 %fp.0.reload, i32* %fp.1.lcssa.reg2mem, !insn.addr !467
  br i1 %56, label %dec_label_pc_12014, label %dec_label_pc_11f08, !insn.addr !467

dec_label_pc_12014:                               ; preds = %dec_label_pc_11fb0, %dec_label_pc_11fec.preheader
  %fp.1.lcssa.reload = load i32, i32* %fp.1.lcssa.reg2mem
  %57 = call i32 @fclose(%_IO_FILE* nonnull %5), !insn.addr !501
  store i32 %fp.1.lcssa.reload, i32* %fp.2.reg2mem, !insn.addr !501
  br label %dec_label_pc_1201c, !insn.addr !501

dec_label_pc_1201c:                               ; preds = %dec_label_pc_11f88, %dec_label_pc_12214, %dec_label_pc_12028, %dec_label_pc_12284, %dec_label_pc_120bc, %dec_label_pc_120b0, %dec_label_pc_12040, %dec_label_pc_12014, %dec_label_pc_11eb0
  %fp.2.reload = load i32, i32* %fp.2.reg2mem
  ret i32 %fp.2.reload, !insn.addr !502

dec_label_pc_12028:                               ; preds = %dec_label_pc_11f94, %dec_label_pc_12230
  %fp.3.reload = load i32, i32* %fp.3.reg2mem
  %58 = call i32 @function_11c48(i32 %fp.3.reload), !insn.addr !503
  store i32 0, i32* %fp.2.reg2mem, !insn.addr !503
  br label %dec_label_pc_1201c, !insn.addr !503

dec_label_pc_12040:                               ; preds = %dec_label_pc_11ecc
  %59 = call %_IO_FILE* @fopen64(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_12f84, i32 0, i32 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_13140, i32 0, i32 0)), !insn.addr !504
  %60 = icmp eq %_IO_FILE* %59, null, !insn.addr !505
  store i32 %3, i32* %fp.2.reg2mem, !insn.addr !506
  br i1 %60, label %dec_label_pc_1201c, label %dec_label_pc_12088.preheader, !insn.addr !506

dec_label_pc_12088.preheader:                     ; preds = %dec_label_pc_12040
  %61 = bitcast i32* %stack_var_-296 to i8*
  %62 = bitcast i32* %stack_var_-808 to i8*
  br label %dec_label_pc_12088

dec_label_pc_12070:                               ; preds = %dec_label_pc_12088
  %63 = call i32 (i8*, i8*, ...) @sscanf(i8* nonnull %61, i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_12f94, i32 0, i32 0), i32* nonnull %stack_var_-552, i32* nonnull %stack_var_-808), !insn.addr !507
  %64 = call i32 @strcasecmp(i8* nonnull %62, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_12fac, i32 0, i32 0)), !insn.addr !508
  %65 = icmp eq i32 %64, 0, !insn.addr !509
  br i1 %65, label %dec_label_pc_120bc, label %dec_label_pc_12088, !insn.addr !510

dec_label_pc_12088:                               ; preds = %dec_label_pc_12088.preheader, %dec_label_pc_12070
  %66 = call i8* @fgets(i8* nonnull %61, i32 255, %_IO_FILE* nonnull %59), !insn.addr !511
  %67 = icmp eq i8* %66, null, !insn.addr !512
  br i1 %67, label %dec_label_pc_120b0, label %dec_label_pc_12070, !insn.addr !513

dec_label_pc_120b0:                               ; preds = %dec_label_pc_12088
  %68 = call i32 @fclose(%_IO_FILE* nonnull %59), !insn.addr !514
  store i32 %3, i32* %fp.2.reg2mem, !insn.addr !515
  br label %dec_label_pc_1201c, !insn.addr !515

dec_label_pc_120bc:                               ; preds = %dec_label_pc_12070
  %69 = ptrtoint i32* %stack_var_-552 to i32, !insn.addr !516
  %70 = call i32 @fclose(%_IO_FILE* nonnull %59), !insn.addr !517
  %71 = bitcast i32* %stack_var_-552 to i8*, !insn.addr !518
  %72 = call i32 @strlen(i8* nonnull %71), !insn.addr !518
  %73 = add i32 %72, %69, !insn.addr !519
  %74 = inttoptr i32 %73 to i32*, !insn.addr !520
  store i32 1634493231, i32* %74, align 4, !insn.addr !520
  %75 = add i32 %73, 4, !insn.addr !521
  %76 = inttoptr i32 %75 to i32*, !insn.addr !521
  store i32 1764717427, i32* %76, align 4, !insn.addr !521
  %77 = add i32 %73, 8, !insn.addr !522
  %78 = inttoptr i32 %77 to i32*, !insn.addr !522
  store i32 1680696114, i32* %78, align 4, !insn.addr !522
  %79 = add i32 %73, 12, !insn.addr !523
  %80 = inttoptr i32 %79 to i16*, !insn.addr !523
  store i16 30309, i16* %80, align 2, !insn.addr !523
  %81 = add i32 %73, 14, !insn.addr !524
  %82 = inttoptr i32 %81 to i8*, !insn.addr !524
  store i8 0, i8* %82, align 1, !insn.addr !524
  %83 = call %__dirstream* @opendir(i8* nonnull %71), !insn.addr !525
  %84 = icmp eq %__dirstream* %83, null, !insn.addr !526
  store i32 %3, i32* %fp.2.reg2mem, !insn.addr !527
  br i1 %84, label %dec_label_pc_1201c, label %dec_label_pc_12134.preheader, !insn.addr !527

dec_label_pc_12134.preheader:                     ; preds = %dec_label_pc_120bc
  %85 = call %dirent64* @readdir64(%__dirstream* nonnull %83), !insn.addr !528
  %86 = icmp eq %dirent64* %85, null, !insn.addr !529
  store i32 %3, i32* %fp.7.reg2mem, !insn.addr !530
  br i1 %86, label %dec_label_pc_12284, label %dec_label_pc_12144.preheader.lr.ph, !insn.addr !530

dec_label_pc_12144.preheader.lr.ph:               ; preds = %dec_label_pc_12134.preheader
  %87 = bitcast i32* %stack_var_-928 to i8*
  %88 = urem i32 %1, 2
  %89 = icmp eq i32 %88, 0
  %90 = and i32 %1, 8257536
  %91 = icmp eq i32 %90, 0
  %spec.select11 = select i1 %91, i32 0, i32 24
  %spec.select = select i1 %89, i32 %spec.select11, i32 16
  store %dirent64* %85, %dirent64** %.reg2mem105
  store i32 %3, i32* %fp.444.reg2mem
  store i32 0, i32* %r5.043.reg2mem
  br label %dec_label_pc_12144.preheader

dec_label_pc_12144.preheader:                     ; preds = %dec_label_pc_12144.preheader.lr.ph, %dec_label_pc_12134.backedge
  %r5.043.reload = load i32, i32* %r5.043.reg2mem
  %fp.444.reload = load i32, i32* %fp.444.reg2mem
  %.reload106 = load %dirent64*, %dirent64** %.reg2mem105
  store %dirent64* %.reload106, %dirent64** %r0.0.in.reg2mem
  store i32 %r5.043.reload, i32* %r5.1.reg2mem
  store i32 %fp.444.reload, i32* %fp.5.reg2mem
  br label %dec_label_pc_12144

dec_label_pc_12144:                               ; preds = %dec_label_pc_12144.preheader, %dec_label_pc_12258
  %fp.5.reload = load i32, i32* %fp.5.reg2mem
  %r5.1.reload = load i32, i32* %r5.1.reg2mem
  %r0.0.in.reload = load %dirent64*, %dirent64** %r0.0.in.reg2mem
  %r0.0 = ptrtoint %dirent64* %r0.0.in.reload to i32
  %92 = add i32 %r0.0, 19, !insn.addr !531
  %93 = inttoptr i32 %92 to i8*, !insn.addr !531
  %94 = load i8, i8* %93, align 1, !insn.addr !531
  %95 = icmp eq i8 %94, 46, !insn.addr !532
  br i1 %95, label %dec_label_pc_12290, label %dec_label_pc_12150, !insn.addr !533

dec_label_pc_12150:                               ; preds = %dec_label_pc_12290, %dec_label_pc_122a4, %dec_label_pc_12144
  %96 = call i32 (i8*, i32, i8*, ...) @snprintf(i8* nonnull %61, i32 255, i8* getelementptr inbounds ([11 x i8], [11 x i8]* @global_var_12fb4, i32 0, i32 0), i32* nonnull %stack_var_-552, i8* %93), !insn.addr !534
  %97 = icmp sgt i32 %96, 254, !insn.addr !535
  br i1 %97, label %dec_label_pc_122b4, label %dec_label_pc_12174, !insn.addr !535

dec_label_pc_12174:                               ; preds = %dec_label_pc_12150
  %98 = call %_IO_FILE* @fopen64(i8* nonnull %61, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_13140, i32 0, i32 0)), !insn.addr !536
  %99 = icmp eq %_IO_FILE* %98, null, !insn.addr !537
  store %_IO_FILE* %98, %_IO_FILE** %r3.0.in.reg2mem, !insn.addr !538
  br i1 %99, label %dec_label_pc_122d4, label %dec_label_pc_12188, !insn.addr !538

dec_label_pc_12188:                               ; preds = %dec_label_pc_123c0, %dec_label_pc_122f8, %dec_label_pc_12174
  %r3.0.in.reload = load %_IO_FILE*, %_IO_FILE** %r3.0.in.reg2mem
  %100 = call i8* @fgets(i8* nonnull %87, i32 120, %_IO_FILE* nonnull %r3.0.in.reload), !insn.addr !539
  %101 = call i32 @fclose(%_IO_FILE* nonnull %r3.0.in.reload), !insn.addr !540
  %102 = icmp eq i8* %100, null, !insn.addr !541
  br i1 %102, label %dec_label_pc_12478, label %dec_label_pc_121b8, !insn.addr !542

dec_label_pc_121b8:                               ; preds = %dec_label_pc_12188
  %103 = call i8* @strchr(i8* nonnull %87, i32 10), !insn.addr !543
  %104 = icmp eq i8* %103, null, !insn.addr !544
  br i1 %104, label %106, label %105, !insn.addr !545

; <label>:105:                                    ; preds = %dec_label_pc_121b8
  store i8 0, i8* %103, align 1, !insn.addr !545
  br label %106, !insn.addr !545

; <label>:106:                                    ; preds = %dec_label_pc_121b8, %105
  %107 = call i32 (i8*, i8*, ...) @sscanf(i8* %93, i8* getelementptr inbounds ([7 x i8], [7 x i8]* @global_var_12f7c, i32 0, i32 0), i32* nonnull %stack_var_-956), !insn.addr !546
  %108 = icmp eq i32 %107, 0, !insn.addr !547
  br i1 %108, label %dec_label_pc_12134.backedge, label %dec_label_pc_121e8, !insn.addr !548

dec_label_pc_121e8:                               ; preds = %106
  %109 = call i32 @strncmp(i8* nonnull %87, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_13028, i32 0, i32 0), i32 4), !insn.addr !549
  %110 = icmp eq i32 %109, 0, !insn.addr !550
  store i32 8, i32* %sb.2.reg2mem, !insn.addr !551
  br i1 %110, label %dec_label_pc_12208, label %dec_label_pc_123f8, !insn.addr !551

dec_label_pc_12208:                               ; preds = %dec_label_pc_123f8, %dec_label_pc_121e8, %dec_label_pc_12418
  %sb.2.reload = load i32, i32* %sb.2.reg2mem
  %111 = add i32 %r5.1.reload, 1, !insn.addr !552
  %112 = urem i32 %111, 8, !insn.addr !553
  %113 = icmp eq i32 %112, 0, !insn.addr !553
  store i32 %fp.5.reload, i32* %fp.6.reg2mem, !insn.addr !554
  br i1 %113, label %dec_label_pc_12214, label %dec_label_pc_12230, !insn.addr !554

dec_label_pc_12214:                               ; preds = %dec_label_pc_12208
  %114 = call i32 @function_11c80(i32 %fp.5.reload, i32 %111), !insn.addr !555
  %115 = icmp eq i32 %114, 0, !insn.addr !556
  store i32 0, i32* %fp.2.reg2mem, !insn.addr !557
  store i32 %114, i32* %fp.6.reg2mem, !insn.addr !557
  br i1 %115, label %dec_label_pc_1201c, label %dec_label_pc_12230, !insn.addr !557

dec_label_pc_12230:                               ; preds = %dec_label_pc_12208, %dec_label_pc_12214
  %fp.6.reload = load i32, i32* %fp.6.reg2mem
  %116 = load i32, i32* %stack_var_-956, align 4, !insn.addr !558
  %117 = mul i32 %r5.1.reload, 16, !insn.addr !559
  %118 = add i32 %fp.6.reload, %117, !insn.addr !559
  %119 = inttoptr i32 %118 to i32*, !insn.addr !560
  store i32 %116, i32* %119, align 4, !insn.addr !560
  %120 = call i8* @__strdup(i8* nonnull %87), !insn.addr !561
  %121 = ptrtoint i8* %120 to i32, !insn.addr !561
  %122 = icmp eq i8* %120, null, !insn.addr !562
  %123 = add i32 %118, 4, !insn.addr !563
  %124 = inttoptr i32 %123 to i32*, !insn.addr !563
  store i32 %121, i32* %124, align 4, !insn.addr !563
  store i32 %fp.6.reload, i32* %fp.3.reg2mem, !insn.addr !564
  br i1 %122, label %dec_label_pc_12028, label %dec_label_pc_12258, !insn.addr !564

dec_label_pc_12258:                               ; preds = %dec_label_pc_12230
  %125 = add i32 %sb.2.reload, ptrtoint ([10 x i8*]* @global_var_12e54 to i32), !insn.addr !565
  %126 = inttoptr i32 %125 to i32*, !insn.addr !565
  %127 = load i32, i32* %126, align 8, !insn.addr !565
  %128 = add i32 %sb.2.reload, add (i32 ptrtoint ([10 x i8*]* @global_var_12e54 to i32), i32 4), !insn.addr !566
  %129 = inttoptr i32 %128 to i32*, !insn.addr !566
  %130 = load i32, i32* %129, align 4, !insn.addr !566
  %131 = add i32 %118, 8, !insn.addr !567
  %132 = inttoptr i32 %131 to i32*, !insn.addr !567
  store i32 %127, i32* %132, align 4, !insn.addr !567
  %133 = add i32 %118, 12, !insn.addr !567
  %134 = inttoptr i32 %133 to i32*, !insn.addr !567
  store i32 %130, i32* %134, align 4, !insn.addr !567
  %135 = call %dirent64* @readdir64(%__dirstream* nonnull %83), !insn.addr !568
  %136 = icmp eq %dirent64* %135, null, !insn.addr !569
  store %dirent64* %135, %dirent64** %r0.0.in.reg2mem, !insn.addr !570
  store i32 %111, i32* %r5.1.reg2mem, !insn.addr !570
  store i32 %fp.6.reload, i32* %fp.5.reg2mem, !insn.addr !570
  store i32 %fp.6.reload, i32* %fp.7.reg2mem, !insn.addr !570
  br i1 %136, label %dec_label_pc_12284, label %dec_label_pc_12144, !insn.addr !570

dec_label_pc_12284:                               ; preds = %dec_label_pc_12134.backedge, %dec_label_pc_12258, %dec_label_pc_12134.preheader
  %fp.7.reload = load i32, i32* %fp.7.reg2mem
  %137 = call i32 @closedir(%__dirstream* nonnull %83), !insn.addr !571
  store i32 %fp.7.reload, i32* %fp.2.reg2mem, !insn.addr !572
  br label %dec_label_pc_1201c, !insn.addr !572

dec_label_pc_12290:                               ; preds = %dec_label_pc_12144
  %138 = add i32 %r0.0, 20, !insn.addr !573
  %139 = inttoptr i32 %138 to i8*, !insn.addr !573
  %140 = load i8, i8* %139, align 1, !insn.addr !573
  switch i8 %140, label %dec_label_pc_12150 [
    i8 0, label %dec_label_pc_12134.backedge
    i8 46, label %dec_label_pc_122a4
  ]

dec_label_pc_122a4:                               ; preds = %dec_label_pc_12290
  %141 = add i32 %r0.0, 21, !insn.addr !574
  %142 = inttoptr i32 %141 to i8*, !insn.addr !574
  %143 = load i8, i8* %142, align 1, !insn.addr !574
  %144 = icmp eq i8 %143, 0, !insn.addr !575
  br i1 %144, label %dec_label_pc_12134.backedge, label %dec_label_pc_12150, !insn.addr !576

dec_label_pc_122b4:                               ; preds = %dec_label_pc_1230c, %dec_label_pc_122d4, %dec_label_pc_12150
  %145 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !577
  %146 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %145, i8* getelementptr inbounds ([20 x i8], [20 x i8]* @global_var_12fc0, i32 0, i32 0), i32* nonnull %stack_var_-296), !insn.addr !578
  br label %dec_label_pc_12134.backedge, !insn.addr !579

dec_label_pc_12134.backedge:                      ; preds = %dec_label_pc_12290, %dec_label_pc_12330, %dec_label_pc_122a4, %106, %dec_label_pc_12354.preheader, %dec_label_pc_12354.backedge, %dec_label_pc_122b4, %dec_label_pc_12478
  %147 = call %dirent64* @readdir64(%__dirstream* nonnull %83), !insn.addr !528
  %148 = icmp eq %dirent64* %147, null, !insn.addr !529
  store %dirent64* %147, %dirent64** %.reg2mem105, !insn.addr !530
  store i32 %fp.5.reload, i32* %fp.444.reg2mem, !insn.addr !530
  store i32 %r5.1.reload, i32* %r5.043.reg2mem, !insn.addr !530
  store i32 %fp.5.reload, i32* %fp.7.reg2mem, !insn.addr !530
  br i1 %148, label %dec_label_pc_12284, label %dec_label_pc_12144.preheader, !insn.addr !530

dec_label_pc_122d4:                               ; preds = %dec_label_pc_12174
  %149 = call i32 (i8*, i32, i8*, ...) @snprintf(i8* nonnull %61, i32 255, i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_12fd4, i32 0, i32 0), i32* nonnull %stack_var_-552, i8* %93), !insn.addr !580
  %150 = icmp sgt i32 %149, 254, !insn.addr !581
  br i1 %150, label %dec_label_pc_122b4, label %dec_label_pc_122f8, !insn.addr !581

dec_label_pc_122f8:                               ; preds = %dec_label_pc_122d4
  %151 = call %_IO_FILE* @fopen64(i8* nonnull %61, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_13140, i32 0, i32 0)), !insn.addr !582
  %152 = icmp eq %_IO_FILE* %151, null, !insn.addr !583
  store %_IO_FILE* %151, %_IO_FILE** %r3.0.in.reg2mem, !insn.addr !584
  br i1 %152, label %dec_label_pc_1230c, label %dec_label_pc_12188, !insn.addr !584

dec_label_pc_1230c:                               ; preds = %dec_label_pc_122f8
  %153 = call i32 (i8*, i32, i8*, ...) @snprintf(i8* nonnull %61, i32 255, i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_12fe8, i32 0, i32 0), i32* nonnull %stack_var_-552, i8* %93), !insn.addr !585
  %154 = icmp sgt i32 %153, 254, !insn.addr !586
  br i1 %154, label %dec_label_pc_122b4, label %dec_label_pc_12330, !insn.addr !586

dec_label_pc_12330:                               ; preds = %dec_label_pc_1230c
  %155 = call %__dirstream* @opendir(i8* nonnull %61), !insn.addr !587
  %156 = icmp eq %__dirstream* %155, null, !insn.addr !588
  br i1 %156, label %dec_label_pc_12134.backedge, label %dec_label_pc_12354.preheader, !insn.addr !589

dec_label_pc_12354.preheader:                     ; preds = %dec_label_pc_12330
  %157 = call %dirent64* @readdir64(%__dirstream* nonnull %155), !insn.addr !590
  %158 = icmp eq %dirent64* %157, null, !insn.addr !591
  store %dirent64* %157, %dirent64** %.in.reg2mem, !insn.addr !592
  br i1 %158, label %dec_label_pc_12134.backedge, label %dec_label_pc_12370, !insn.addr !592

dec_label_pc_12370:                               ; preds = %dec_label_pc_12354.preheader, %dec_label_pc_12354.backedge
  %.in.reload = load %dirent64*, %dirent64** %.in.reg2mem
  %159 = ptrtoint %dirent64* %.in.reload to i32
  %160 = add i32 %159, 19, !insn.addr !593
  %161 = inttoptr i32 %160 to i8*, !insn.addr !594
  %162 = load i8, i8* %161, align 1, !insn.addr !594
  %163 = icmp eq i8 %162, 46, !insn.addr !595
  br i1 %163, label %dec_label_pc_123d4, label %dec_label_pc_12380, !insn.addr !596

dec_label_pc_12380:                               ; preds = %dec_label_pc_123d4, %dec_label_pc_123e8, %dec_label_pc_12370
  %164 = call i32 @strncmp(i8* %161, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_12ff8, i32 0, i32 0), i32 4), !insn.addr !597
  %165 = icmp eq i32 %164, 0, !insn.addr !598
  br i1 %165, label %dec_label_pc_12394, label %dec_label_pc_12354.backedge, !insn.addr !599

dec_label_pc_12394:                               ; preds = %dec_label_pc_12380
  %166 = call i32 (i8*, i32, i8*, ...) @snprintf(i8* nonnull %61, i32 255, i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_13000, i32 0, i32 0), i32* nonnull %stack_var_-552, i8* %93, i8* %161), !insn.addr !600
  %167 = icmp sgt i32 %166, 254, !insn.addr !601
  br i1 %167, label %dec_label_pc_12458, label %dec_label_pc_123c0, !insn.addr !601

dec_label_pc_123c0:                               ; preds = %dec_label_pc_12394
  %168 = call %_IO_FILE* @fopen64(i8* nonnull %61, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_13140, i32 0, i32 0)), !insn.addr !602
  %169 = icmp eq %_IO_FILE* %168, null, !insn.addr !603
  store %_IO_FILE* %168, %_IO_FILE** %r3.0.in.reg2mem, !insn.addr !604
  br i1 %169, label %dec_label_pc_12354.backedge, label %dec_label_pc_12188, !insn.addr !604

dec_label_pc_12354.backedge:                      ; preds = %dec_label_pc_123c0, %dec_label_pc_123e8, %dec_label_pc_12458, %dec_label_pc_12380, %dec_label_pc_123d4
  %170 = call %dirent64* @readdir64(%__dirstream* nonnull %155), !insn.addr !590
  %171 = icmp eq %dirent64* %170, null, !insn.addr !591
  store %dirent64* %170, %dirent64** %.in.reg2mem, !insn.addr !592
  br i1 %171, label %dec_label_pc_12134.backedge, label %dec_label_pc_12370, !insn.addr !592

dec_label_pc_123d4:                               ; preds = %dec_label_pc_12370
  %172 = add i32 %159, 20, !insn.addr !605
  %173 = inttoptr i32 %172 to i8*, !insn.addr !605
  %174 = load i8, i8* %173, align 1, !insn.addr !605
  switch i8 %174, label %dec_label_pc_12380 [
    i8 0, label %dec_label_pc_12354.backedge
    i8 46, label %dec_label_pc_123e8
  ]

dec_label_pc_123e8:                               ; preds = %dec_label_pc_123d4
  %175 = add i32 %159, 21, !insn.addr !606
  %176 = inttoptr i32 %175 to i8*, !insn.addr !606
  %177 = load i8, i8* %176, align 1, !insn.addr !606
  %178 = icmp eq i8 %177, 0, !insn.addr !607
  br i1 %178, label %dec_label_pc_12354.backedge, label %dec_label_pc_12380, !insn.addr !608

dec_label_pc_123f8:                               ; preds = %dec_label_pc_121e8
  %179 = load i32, i32* %stack_var_-956, align 4, !insn.addr !609
  %180 = call i32 @function_11d80(i32 %179, i32* nonnull %stack_var_-948, i32 20, i32 1), !insn.addr !610
  %181 = icmp slt i32 %180, 0, !insn.addr !611
  %182 = icmp eq i1 %181, false, !insn.addr !612
  store i32 32, i32* %sb.2.reg2mem, !insn.addr !612
  br i1 %182, label %dec_label_pc_12418, label %dec_label_pc_12208, !insn.addr !612

dec_label_pc_12418:                               ; preds = %dec_label_pc_123f8
  %183 = call i32 (i32, i32, ...) @ioctl(i32 %180, i32 1797), !insn.addr !613
  %184 = icmp slt i32 %183, 0, !insn.addr !614
  %185 = icmp eq i1 %184, false, !insn.addr !615
  %sb.7 = select i1 %185, i32 %spec.select, i32 32
  %186 = call i32 @close(i32 %180), !insn.addr !616
  store i32 %sb.7, i32* %sb.2.reg2mem, !insn.addr !617
  br label %dec_label_pc_12208, !insn.addr !617

dec_label_pc_12458:                               ; preds = %dec_label_pc_12394
  %187 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !618
  %188 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %187, i8* getelementptr inbounds ([20 x i8], [20 x i8]* @global_var_12fc0, i32 0, i32 0), i32* nonnull %stack_var_-296), !insn.addr !619
  br label %dec_label_pc_12354.backedge, !insn.addr !620

dec_label_pc_12478:                               ; preds = %dec_label_pc_12188
  %189 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !621
  %190 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %189, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_13018, i32 0, i32 0), i32* nonnull %stack_var_-296), !insn.addr !622
  br label %dec_label_pc_12134.backedge, !insn.addr !623

; uselistorder directives
  uselistorder %__dirstream* %155, { 1, 0, 2 }
  uselistorder i32 %118, { 0, 1, 3, 2 }
  uselistorder i32 %fp.6.reload, { 0, 3, 2, 1 }
  uselistorder i32 %111, { 0, 2, 1 }
  uselistorder i32 %sb.2.reload, { 1, 0 }
  uselistorder %_IO_FILE* %r3.0.in.reload, { 1, 0 }
  uselistorder i8* %93, { 1, 2, 3, 0, 4, 5 }
  uselistorder i32 %r0.0, { 2, 0, 1 }
  uselistorder i32 %r5.1.reload, { 2, 1, 0 }
  uselistorder i32 %fp.5.reload, { 0, 3, 2, 1 }
  uselistorder %__dirstream* %83, { 3, 1, 2, 0, 4 }
  uselistorder i32 %73, { 4, 3, 2, 1, 0 }
  uselistorder i8* %61, { 7, 6, 5, 4, 3, 2, 1, 0, 9, 8 }
  uselistorder %_IO_FILE* %59, { 1, 0, 2, 3 }
  uselistorder i32 %29, { 1, 2, 3, 0 }
  uselistorder i32* %25, { 0, 2, 1 }
  uselistorder i32 %fp.0.reload, { 1, 3, 2, 0 }
  uselistorder i32 %21, { 1, 0 }
  uselistorder i32 %19, { 0, 2, 1 }
  uselistorder i8* %12, { 1, 0 }
  uselistorder i8* %11, { 1, 0 }
  uselistorder i8* %10, { 1, 0 }
  uselistorder i32 %.reload, { 1, 0, 2 }
  uselistorder i32 %fp.147.reload, { 1, 0 }
  uselistorder i8* %7, { 5, 2, 3, 4, 1, 0 }
  uselistorder %_IO_FILE* %5, { 1, 2, 0, 3 }
  uselistorder i32 %3, { 1, 0, 2, 3, 4, 6, 7, 5 }
  uselistorder i32* %stack_var_-296, { 2, 1, 0, 3, 5, 4 }
  uselistorder i32* %stack_var_-552, { 2, 3, 4, 5, 6, 0, 1 }
  uselistorder i32* %stack_var_-956, { 1, 2, 0 }
  uselistorder i32* %.reg2mem, { 2, 0, 1 }
  uselistorder i32* %fp.147.reg2mem, { 2, 0, 1 }
  uselistorder i32* %sb.046.reg2mem, { 2, 0, 1 }
  uselistorder i32* %fp.0.reg2mem, { 0, 2, 1 }
  uselistorder i32* %fp.2.reg2mem, { 5, 2, 6, 7, 8, 3, 0, 4, 1, 9 }
  uselistorder i32* %fp.3.reg2mem, { 2, 0, 1 }
  uselistorder %dirent64** %.reg2mem105, { 1, 0, 2 }
  uselistorder i32* %fp.444.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r5.043.reg2mem, { 1, 0, 2 }
  uselistorder %dirent64** %r0.0.in.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r5.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %fp.5.reg2mem, { 2, 0, 1 }
  uselistorder %_IO_FILE** %r3.0.in.reg2mem, { 1, 3, 0, 2 }
  uselistorder i32* %sb.2.reg2mem, { 2, 1, 0, 3 }
  uselistorder i32* %fp.6.reg2mem, { 0, 2, 1 }
  uselistorder i32* %fp.7.reg2mem, { 1, 0, 2, 3 }
  uselistorder %dirent64** %.in.reg2mem, { 2, 0, 1 }
  uselistorder i32 (i32)* @close, { 3, 2, 1, 0, 4 }
  uselistorder i32 32, { 1, 0, 2, 3, 4 }
  uselistorder i1 false, { 3, 4, 2, 0, 1 }
  uselistorder i32 (i32, i32*, i32, i32)* @function_11d80, { 1, 0 }
  uselistorder i8* getelementptr inbounds ([20 x i8], [20 x i8]* @global_var_12fc0, i32 0, i32 0), { 1, 0 }
  uselistorder i32 (i8*, i8*, i32)* @strncmp, { 1, 0, 2 }
  uselistorder i32 (i8*, i32, i8*, ...)* @snprintf, { 0, 3, 2, 4, 1, 5 }
  uselistorder i8 46, { 0, 2, 1, 3 }
  uselistorder %dirent64* null, { 2, 1, 4, 3, 0 }
  uselistorder %dirent64* (%__dirstream*)* @readdir64, { 3, 1, 4, 2, 0, 5 }
  uselistorder i32 (i8*)* @strlen, { 2, 1, 0, 3 }
  uselistorder i32 (%_IO_FILE*)* @fclose, { 3, 2, 1, 0, 4 }
  uselistorder i32 12, { 2, 3, 4, 5, 1, 0 }
  uselistorder i8* (i8*, i8*)* @strcpy, { 2, 1, 0, 3 }
  uselistorder i32 (i32, i32)* @function_11c80, { 1, 0 }
  uselistorder i32 (i8*, i8*, ...)* @sscanf, { 2, 0, 1, 3 }
  uselistorder i8* (i8*, i32)* @strrchr, { 0, 2, 1, 3 }
  uselistorder i32 9, { 1, 2, 0, 3 }
  uselistorder i32 120, { 1, 2, 0 }
  uselistorder %_IO_FILE* (i8*, i8*)* @fopen64, { 1, 0, 4, 3, 2, 5 }
  uselistorder i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_13140, i32 0, i32 0), { 4, 3, 2, 1, 0 }
  uselistorder i32 8, { 8, 2, 0, 9, 10, 3, 7, 4, 1, 5, 6 }
  uselistorder label %dec_label_pc_12354.backedge, { 2, 1, 4, 0, 3 }
  uselistorder label %dec_label_pc_12380, { 1, 0, 2 }
  uselistorder label %dec_label_pc_12370, { 1, 0 }
  uselistorder label %dec_label_pc_12134.backedge, { 7, 5, 4, 1, 6, 2, 0, 3 }
  uselistorder label %dec_label_pc_12230, { 1, 0 }
  uselistorder label %dec_label_pc_12208, { 2, 0, 1 }
  uselistorder label %106, { 1, 0 }
  uselistorder label %dec_label_pc_12150, { 1, 0, 2 }
  uselistorder label %dec_label_pc_12144, { 1, 0 }
  uselistorder label %dec_label_pc_12144.preheader, { 1, 0 }
  uselistorder label %dec_label_pc_12088, { 1, 0 }
  uselistorder label %dec_label_pc_12028, { 1, 0 }
  uselistorder label %dec_label_pc_1201c, { 3, 1, 4, 5, 6, 2, 7, 0, 8 }
  uselistorder label %dec_label_pc_11f94, { 1, 0 }
  uselistorder label %dec_label_pc_11f08, { 1, 0 }
}

define i32 @function_12498(i32 %arg1) local_unnamed_addr {
dec_label_pc_12498:
  %r5.5.reg2mem = alloca i32, !insn.addr !624
  %r5.4.reg2mem = alloca i32, !insn.addr !624
  %r5.3.reg2mem = alloca i32, !insn.addr !624
  %r4.1.in.reg2mem = alloca i32, !insn.addr !624
  %.reg2mem = alloca i32, !insn.addr !624
  %r5.1.reg2mem = alloca i32, !insn.addr !624
  %stack_var_-28 = alloca i8*, align 4
  %0 = inttoptr i32 %arg1 to i8*, !insn.addr !625
  %1 = call i32 @strtoul(i8* %0, i8** nonnull %stack_var_-28, i32 0), !insn.addr !625
  %2 = load i8*, i8** %stack_var_-28, align 4, !insn.addr !626
  %3 = load i8, i8* %2, align 1, !insn.addr !627
  %4 = icmp ne i8 %3, 0, !insn.addr !628
  %5 = trunc i32 %1 to i8
  %6 = icmp eq i8 %5, 0, !insn.addr !629
  %or.cond = or i1 %6, %4
  br i1 %or.cond, label %dec_label_pc_124e4, label %dec_label_pc_124cc, !insn.addr !630

dec_label_pc_124cc:                               ; preds = %dec_label_pc_12498
  %7 = icmp ult i32 %1, 1048576, !insn.addr !631
  store i32 %1, i32* %r5.1.reg2mem, !insn.addr !632
  br i1 %7, label %dec_label_pc_124d8, label %dec_label_pc_1259c, !insn.addr !632

dec_label_pc_124d8:                               ; preds = %dec_label_pc_124cc, %dec_label_pc_125c4, %dec_label_pc_1259c
  %r5.1.reload = load i32, i32* %r5.1.reg2mem
  ret i32 %r5.1.reload, !insn.addr !633

dec_label_pc_124e4:                               ; preds = %dec_label_pc_12498
  %8 = call i32 @function_11eb0(), !insn.addr !634
  %9 = icmp eq i32 %8, 0, !insn.addr !635
  br i1 %9, label %dec_label_pc_125c4, label %dec_label_pc_124f0, !insn.addr !636

dec_label_pc_124f0:                               ; preds = %dec_label_pc_124e4
  %10 = add i32 %8, 4, !insn.addr !637
  %11 = inttoptr i32 %10 to i32*, !insn.addr !637
  %12 = load i32, i32* %11, align 4, !insn.addr !637
  %13 = icmp eq i32 %12, 0, !insn.addr !638
  store i32 %12, i32* %.reg2mem, !insn.addr !639
  store i32 %8, i32* %r4.1.in.reg2mem, !insn.addr !639
  store i32 -1, i32* %r5.3.reg2mem, !insn.addr !639
  br i1 %13, label %dec_label_pc_12574, label %dec_label_pc_12504, !insn.addr !639

dec_label_pc_12504:                               ; preds = %dec_label_pc_124f0, %dec_label_pc_12520
  %r5.3.reload = load i32, i32* %r5.3.reg2mem
  %r4.1.in.reload = load i32, i32* %r4.1.in.reg2mem
  %.reload = load i32, i32* %.reg2mem, !insn.addr !640
  %14 = inttoptr i32 %.reload to i8*, !insn.addr !640
  %15 = call i32 @strcmp(i8* %14, i8* %0), !insn.addr !640
  %16 = icmp eq i32 %15, 0, !insn.addr !641
  store i32 %r5.3.reload, i32* %r5.4.reg2mem, !insn.addr !642
  br i1 %16, label %dec_label_pc_12514, label %dec_label_pc_12520, !insn.addr !642

dec_label_pc_12514:                               ; preds = %dec_label_pc_12504
  %17 = icmp slt i32 %r5.3.reload, 0, !insn.addr !643
  br i1 %17, label %dec_label_pc_1251c, label %dec_label_pc_1254c, !insn.addr !644

dec_label_pc_1251c:                               ; preds = %dec_label_pc_12514
  %18 = inttoptr i32 %r4.1.in.reload to i32*, !insn.addr !645
  %19 = load i32, i32* %18, align 4, !insn.addr !645
  store i32 %19, i32* %r5.4.reg2mem, !insn.addr !645
  br label %dec_label_pc_12520, !insn.addr !645

dec_label_pc_12520:                               ; preds = %dec_label_pc_12504, %dec_label_pc_1251c
  %r4.1 = add i32 %r4.1.in.reload, 16
  %r5.4.reload = load i32, i32* %r5.4.reg2mem
  %20 = add i32 %r4.1.in.reload, 20, !insn.addr !646
  %21 = inttoptr i32 %20 to i32*, !insn.addr !646
  %22 = load i32, i32* %21, align 4, !insn.addr !646
  %23 = icmp eq i32 %22, 0, !insn.addr !647
  store i32 %22, i32* %.reg2mem, !insn.addr !648
  store i32 %r4.1, i32* %r4.1.in.reg2mem, !insn.addr !648
  store i32 %r5.4.reload, i32* %r5.3.reg2mem, !insn.addr !648
  br i1 %23, label %dec_label_pc_12530, label %dec_label_pc_12504, !insn.addr !648

dec_label_pc_12530:                               ; preds = %dec_label_pc_12520
  %24 = icmp eq i32 %r5.4.reload, -1, !insn.addr !649
  store i32 %r5.4.reload, i32* %r5.5.reg2mem, !insn.addr !650
  br i1 %24, label %dec_label_pc_12574, label %dec_label_pc_12538, !insn.addr !650

dec_label_pc_12538:                               ; preds = %dec_label_pc_12574, %dec_label_pc_1254c, %dec_label_pc_12530
  %r5.5.reload = load i32, i32* %r5.5.reg2mem
  %25 = call i32 @function_11c48(i32 %8), !insn.addr !651
  ret i32 %r5.5.reload, !insn.addr !652

dec_label_pc_1254c:                               ; preds = %dec_label_pc_12514
  %26 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !653
  %27 = call i32 @fwrite(i32* bitcast ([36 x i8]* @global_var_13058 to i32*), i32 1, i32 35, %_IO_FILE* %26), !insn.addr !654
  store i32 -4, i32* %r5.5.reg2mem, !insn.addr !655
  br label %dec_label_pc_12538, !insn.addr !655

dec_label_pc_12574:                               ; preds = %dec_label_pc_12530, %dec_label_pc_124f0
  %28 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !656
  %29 = call i32 @fwrite(i32* bitcast ([52 x i8]* @global_var_1307c to i32*), i32 1, i32 51, %_IO_FILE* %28), !insn.addr !657
  store i32 -1, i32* %r5.5.reg2mem, !insn.addr !658
  br label %dec_label_pc_12538, !insn.addr !658

dec_label_pc_1259c:                               ; preds = %dec_label_pc_124cc
  %30 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !659
  %31 = call i32 @fwrite(i32* bitcast ([30 x i8]* @global_var_130b0 to i32*), i32 1, i32 29, %_IO_FILE* %30), !insn.addr !660
  store i32 -2, i32* %r5.1.reg2mem, !insn.addr !661
  br label %dec_label_pc_124d8, !insn.addr !661

dec_label_pc_125c4:                               ; preds = %dec_label_pc_124e4
  %32 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !662
  %33 = call i32 @fwrite(i32* bitcast ([23 x i8]* @global_var_13040 to i32*), i32 1, i32 22, %_IO_FILE* %32), !insn.addr !663
  store i32 -3, i32* %r5.1.reg2mem, !insn.addr !664
  br label %dec_label_pc_124d8, !insn.addr !664

; uselistorder directives
  uselistorder i32 %r4.1.in.reload, { 1, 0, 2 }
  uselistorder i32 %r5.3.reload, { 1, 0 }
  uselistorder i32 %8, { 1, 0, 2, 3 }
  uselistorder i32 %1, { 0, 2, 1 }
  uselistorder i32* %r5.1.reg2mem, { 3, 2, 0, 1 }
  uselistorder i32* %.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r4.1.in.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r5.3.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r5.4.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r5.5.reg2mem, { 3, 1, 0, 2 }
  uselistorder i32 (i32*, i32, i32, %_IO_FILE*)* @fwrite, { 7, 22, 21, 1, 0, 14, 12, 11, 10, 20, 19, 18, 6, 13, 4, 3, 2, 17, 16, 5, 15, 9, 8, 23 }
  uselistorder i32 20, { 1, 3, 6, 7, 0, 2, 4, 5 }
  uselistorder i32 16, { 3, 0, 2, 6, 4, 1, 7, 5 }
  uselistorder i32 4, { 14, 6, 7, 10, 8, 11, 12, 13, 9, 4, 15, 5, 0, 1, 16, 17, 2, 3, 18 }
  uselistorder i8 0, { 0, 11, 13, 4, 12, 5, 3, 14, 8, 9, 10, 15, 1, 16, 6, 2, 17, 19, 18, 21, 7, 20, 22, 23 }
  uselistorder label %dec_label_pc_12520, { 1, 0 }
  uselistorder label %dec_label_pc_12504, { 1, 0 }
  uselistorder label %dec_label_pc_124d8, { 1, 2, 0 }
}

define i32 @function_125ec(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_125ec:
  %0 = icmp eq i32 %arg3, 0, !insn.addr !665
  %spec.select = select i1 %0, i32 1795, i32 1798
  %1 = call i32 (i32, i32, ...) @ioctl(i32 %arg1, i32 %spec.select), !insn.addr !666
  %2 = icmp slt i32 %1, 0, !insn.addr !667
  br i1 %2, label %dec_label_pc_12620, label %dec_label_pc_12618, !insn.addr !668

dec_label_pc_12618:                               ; preds = %dec_label_pc_125ec
  ret i32 0, !insn.addr !669

dec_label_pc_12620:                               ; preds = %dec_label_pc_125ec
  %3 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !670
  %4 = call i32* @__errno_location(), !insn.addr !671
  %5 = load i32, i32* %4, align 4, !insn.addr !672
  %6 = call i8* @strerror(i32 %5), !insn.addr !673
  %7 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %3, i8* getelementptr inbounds ([44 x i8], [44 x i8]* @global_var_130d0, i32 0, i32 0), i32 %arg2, i8* %6), !insn.addr !674
  %8 = load i32, i32* %4, align 4, !insn.addr !675
  %9 = sub i32 0, %8, !insn.addr !676
  ret i32 %9, !insn.addr !677

; uselistorder directives
  uselistorder i32 (%_IO_FILE*, i8*, ...)* @fprintf, { 11, 17, 10, 9, 8, 3, 7, 5, 6, 19, 18, 16, 15, 14, 13, 12, 0, 2, 1, 4, 20 }
  uselistorder i32* ()* @__errno_location, { 2, 1, 0, 3 }
  uselistorder %_IO_FILE** @global_var_240d8, { 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 0, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 }
  uselistorder i32 (i32, i32, ...)* @ioctl, { 1, 0, 2, 3 }
}

define i32 @function_12660(i32 %arg1) local_unnamed_addr {
dec_label_pc_12660:
  %r5.1.reg2mem = alloca i32, !insn.addr !678
  %r5.01.reg2mem = alloca i32, !insn.addr !678
  %stack_var_-20 = alloca i32, align 4
  %0 = load %_IO_FILE*, %_IO_FILE** @global_var_240e0, align 4, !insn.addr !679
  %1 = bitcast i32* %stack_var_-20 to i8*, !insn.addr !680
  %2 = call i8* @fgets(i8* nonnull %1, i32 2, %_IO_FILE* %0), !insn.addr !680
  %3 = icmp eq i8* %2, null, !insn.addr !681
  store i32 0, i32* %r5.1.reg2mem, !insn.addr !682
  br i1 %3, label %dec_label_pc_126dc, label %dec_label_pc_1268c, !insn.addr !682

dec_label_pc_1268c:                               ; preds = %dec_label_pc_12660
  %4 = load i32, i32* %stack_var_-20, align 4, !insn.addr !683
  %5 = urem i32 %4, 256, !insn.addr !683
  %6 = icmp eq i32 %5, 89, !insn.addr !684
  br i1 %6, label %dec_label_pc_126f8, label %dec_label_pc_12698, !insn.addr !685

dec_label_pc_12698:                               ; preds = %dec_label_pc_1268c
  %7 = icmp ult i32 %5, 89, !insn.addr !684
  %trunc2 = trunc i32 %4 to i8
  br i1 %7, label %dec_label_pc_126e8, label %dec_label_pc_1269c, !insn.addr !686

dec_label_pc_1269c:                               ; preds = %dec_label_pc_12698
  store i32 %arg1, i32* %r5.01.reg2mem
  switch i8 %trunc2, label %dec_label_pc_126c4.preheader [
    i8 110, label %dec_label_pc_126f0
    i8 121, label %dec_label_pc_126f8
  ]

dec_label_pc_126c4.preheader:                     ; preds = %dec_label_pc_126e8, %dec_label_pc_126f0, %dec_label_pc_126f8, %dec_label_pc_1269c
  %r5.01.reload = load i32, i32* %r5.01.reg2mem
  br label %dec_label_pc_126c4

dec_label_pc_126b8:                               ; preds = %dec_label_pc_126c4
  %8 = urem i32 %13, 256, !insn.addr !687
  %9 = icmp eq i32 %8, 10, !insn.addr !688
  %10 = mul i32 %13, 16777216
  %11 = ashr exact i32 %10, 24, !insn.addr !689
  store i32 %11, i32* %stack_var_-20, align 4, !insn.addr !689
  store i32 %r5.01.reload, i32* %r5.1.reg2mem, !insn.addr !690
  br i1 %9, label %dec_label_pc_126dc, label %dec_label_pc_126c4, !insn.addr !690

dec_label_pc_126c4:                               ; preds = %dec_label_pc_126c4.preheader, %dec_label_pc_126b8
  %12 = load %_IO_FILE*, %_IO_FILE** @global_var_240e0, align 4, !insn.addr !691
  %13 = call i32 @fgetc(%_IO_FILE* %12), !insn.addr !692
  %14 = icmp eq i32 %13, -1, !insn.addr !693
  store i32 0, i32* %r5.1.reg2mem, !insn.addr !694
  br i1 %14, label %dec_label_pc_126dc, label %dec_label_pc_126b8, !insn.addr !694

dec_label_pc_126dc:                               ; preds = %dec_label_pc_126c4, %dec_label_pc_126b8, %dec_label_pc_126e8, %dec_label_pc_12660
  %r5.1.reload = load i32, i32* %r5.1.reg2mem
  ret i32 %r5.1.reload, !insn.addr !695

dec_label_pc_126e8:                               ; preds = %dec_label_pc_12698
  store i32 %arg1, i32* %r5.01.reg2mem
  store i32 %arg1, i32* %r5.1.reg2mem
  switch i8 %trunc2, label %dec_label_pc_126c4.preheader [
    i8 78, label %dec_label_pc_126f0
    i8 10, label %dec_label_pc_126dc
  ]

dec_label_pc_126f0:                               ; preds = %dec_label_pc_126e8, %dec_label_pc_1269c
  store i32 0, i32* %r5.01.reg2mem, !insn.addr !696
  br label %dec_label_pc_126c4.preheader, !insn.addr !696

dec_label_pc_126f8:                               ; preds = %dec_label_pc_1269c, %dec_label_pc_1268c
  store i32 1, i32* %r5.01.reg2mem, !insn.addr !697
  br label %dec_label_pc_126c4.preheader, !insn.addr !697

; uselistorder directives
  uselistorder i32 %13, { 2, 1, 0 }
  uselistorder i8 %trunc2, { 1, 0 }
  uselistorder i32 %4, { 1, 0 }
  uselistorder i32* %stack_var_-20, { 1, 2, 0 }
  uselistorder i32* %r5.01.reg2mem, { 2, 3, 1, 0, 4 }
  uselistorder i32* %r5.1.reg2mem, { 3, 0, 1, 2, 4 }
  uselistorder i8 10, { 0, 1, 3, 2 }
  uselistorder i32 -1, { 10, 0, 11, 1, 9, 2, 12, 15, 13, 3, 4, 5, 6, 14, 7, 8 }
  uselistorder i32 24, { 1, 0 }
  uselistorder i32 10, { 1, 0 }
  uselistorder i32 89, { 1, 0 }
  uselistorder i8* null, { 1, 2, 3, 4, 5, 6, 0 }
  uselistorder i8* (i8*, i32, %_IO_FILE*)* @fgets, { 1, 4, 3, 2, 0, 5 }
  uselistorder %_IO_FILE** @global_var_240e0, { 1, 0 }
  uselistorder label %dec_label_pc_126dc, { 2, 0, 1, 3 }
  uselistorder label %dec_label_pc_126c4, { 1, 0 }
  uselistorder label %dec_label_pc_126c4.preheader, { 2, 1, 0, 3 }
}

define i32 @function_12700(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_12700:
  %0 = call i32 @function_10af0(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !698
  %spec.select = select i1 icmp eq (i32 ashr (i32 sub (i32 147210, i32 ptrtoint (i32* @global_var_23f08 to i32)), i32 2), i32 0), i32 %0, i32 %arg1
  ret i32 %spec.select, !insn.addr !699

; uselistorder directives
  uselistorder i32 0, { 56, 2, 0, 1, 154, 57, 58, 32, 155, 156, 171, 172, 173, 174, 175, 122, 67, 68, 159, 160, 61, 62, 161, 44, 45, 63, 64, 65, 66, 59, 60, 5, 162, 163, 164, 69, 70, 165, 46, 47, 3, 42, 157, 158, 166, 48, 49, 50, 51, 71, 72, 6, 4, 167, 168, 73, 74, 7, 35, 36, 75, 76, 77, 78, 176, 79, 80, 81, 82, 43, 177, 123, 124, 169, 170, 178, 41, 83, 152, 153, 31, 202, 92, 93, 102, 103, 8, 40, 39, 187, 104, 105, 188, 52, 53, 106, 107, 189, 108, 109, 9, 38, 37, 110, 111, 54, 55, 125, 112, 113, 184, 185, 186, 14, 33, 126, 10, 11, 15, 12, 16, 196, 34, 127, 94, 95, 179, 96, 97, 180, 98, 99, 181, 100, 101, 182, 116, 117, 118, 119, 183, 190, 114, 115, 191, 192, 193, 194, 197, 198, 128, 90, 91, 129, 13, 17, 199, 130, 86, 87, 88, 89, 84, 85, 131, 200, 201, 195, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 120, 121, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151 }
  uselistorder i32 2, { 10, 12, 5, 13, 6, 14, 15, 8, 3, 2, 18, 4, 7, 9, 1, 0, 16, 19, 20, 17, 11 }
}

define i32 @function_1273c() local_unnamed_addr {
dec_label_pc_1273c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !700

; uselistorder directives
  uselistorder i32 1, { 7, 11, 136, 12, 10, 108, 109, 110, 111, 105, 18, 17, 16, 15, 14, 13, 112, 146, 150, 149, 147, 148, 36, 142, 141, 140, 139, 138, 137, 37, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 6, 38, 113, 106, 39, 41, 40, 151, 152, 100, 43, 42, 5, 114, 115, 4, 44, 3, 99, 45, 9, 8, 2, 1, 143, 101, 153, 116, 117, 154, 155, 49, 118, 119, 120, 121, 122, 123, 124, 102, 158, 125, 126, 159, 127, 65, 128, 129, 130, 103, 131, 132, 156, 104, 66, 160, 161, 133, 134, 78, 80, 87, 84, 135, 67, 157, 82, 162, 96, 107, 145, 144, 98, 97, 95, 94, 93, 92, 91, 90, 89, 88, 86, 85, 83, 81, 79, 77, 76, 75, 74, 73, 72, 71, 70, 69, 68, 64, 63, 62, 61, 60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 48, 47, 46, 0 }
}

define i32 @function_12740(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_12740:
  ret i32 %arg1, !insn.addr !701
}

declare i32* @calloc(i32, i32) local_unnamed_addr

declare i32 @strcmp(i8*, i8*) local_unnamed_addr

declare i32 @strtol(i8*, i8**, i32) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i32 @fflush(%_IO_FILE*) local_unnamed_addr

declare void @free(i32*) local_unnamed_addr

declare i8* @fgets(i8*, i32, %_IO_FILE*) local_unnamed_addr

declare i32 @i2c_smbus_write_block_data(i32, i32, i32, i32*) local_unnamed_addr

declare i32* @realloc(i32*, i32) local_unnamed_addr

declare i32 @strcasecmp(i8*, i8*) local_unnamed_addr

declare i32 @fwrite(i32*, i32, i32, %_IO_FILE*) local_unnamed_addr

declare i32 @ioctl(i32, i32, ...) local_unnamed_addr

declare i8* @strcpy(i8*, i8*) local_unnamed_addr

declare i32 @i2c_smbus_write_byte(i32, i32) local_unnamed_addr

declare %__dirstream* @opendir(i8*) local_unnamed_addr

declare i32 @open64(i8*, i32, ...) local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i32* @malloc(i32) local_unnamed_addr

declare i32 @__libc_start_main(i32, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare i8* @strerror(i32) local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare void @exit(i32) local_unnamed_addr

declare i32 @strtoul(i8*, i8**, i32) local_unnamed_addr

declare i32 @i2c_smbus_read_byte(i32) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare i8* @strchr(i8*, i32) local_unnamed_addr

declare i32 @fprintf(%_IO_FILE*, i8*, ...) local_unnamed_addr

declare i32 @i2c_smbus_write_byte_data(i32, i32, i32, i32) local_unnamed_addr

declare i32* @__errno_location() local_unnamed_addr

declare i32 @snprintf(i8*, i32, i8*, ...) local_unnamed_addr

declare i32 @sscanf(i8*, i8*, ...) local_unnamed_addr

declare i8* @__strdup(i8*) local_unnamed_addr

declare i32* @memset(i32*, i32, i32) local_unnamed_addr

declare i32 @fgetc(%_IO_FILE*) local_unnamed_addr

declare i32 @i2c_smbus_write_word_data(i32, i32, i32, i32) local_unnamed_addr

declare i32 @fclose(%_IO_FILE*) local_unnamed_addr

declare i32 @i2c_smbus_read_word_data(i32, i32) local_unnamed_addr

declare i8* @strrchr(i8*, i32) local_unnamed_addr

declare i32 @sprintf(i8*, i8*, ...) local_unnamed_addr

declare %dirent64* @readdir64(%__dirstream*) local_unnamed_addr

declare i32 @i2c_smbus_read_byte_data(i32, i32) local_unnamed_addr

declare %_IO_FILE* @fopen64(i8*, i8*) local_unnamed_addr

declare i32 @strncmp(i8*, i8*, i32) local_unnamed_addr

declare void @abort() local_unnamed_addr

declare i32 @close(i32) local_unnamed_addr

declare i32 @closedir(%__dirstream*) local_unnamed_addr

declare i32 @i2c_smbus_write_i2c_block_data(i32, i32, i32, i32*) local_unnamed_addr

declare void @__asm_svclt(i32) local_unnamed_addr

declare double @__asm_vqrshl.s8(double, double) local_unnamed_addr

!0 = !{i64 68340}
!1 = !{i64 68344}
!2 = !{i64 68376}
!3 = !{i64 68388}
!4 = !{i64 68400}
!5 = !{i64 68412}
!6 = !{i64 68424}
!7 = !{i64 68436}
!8 = !{i64 68448}
!9 = !{i64 68460}
!10 = !{i64 68472}
!11 = !{i64 68484}
!12 = !{i64 68496}
!13 = !{i64 68508}
!14 = !{i64 68520}
!15 = !{i64 68532}
!16 = !{i64 68544}
!17 = !{i64 68556}
!18 = !{i64 68568}
!19 = !{i64 68580}
!20 = !{i64 68592}
!21 = !{i64 68604}
!22 = !{i64 68616}
!23 = !{i64 68628}
!24 = !{i64 68640}
!25 = !{i64 68652}
!26 = !{i64 68664}
!27 = !{i64 68676}
!28 = !{i64 68688}
!29 = !{i64 68700}
!30 = !{i64 68712}
!31 = !{i64 68724}
!32 = !{i64 68736}
!33 = !{i64 68748}
!34 = !{i64 68760}
!35 = !{i64 68772}
!36 = !{i64 68784}
!37 = !{i64 68796}
!38 = !{i64 68808}
!39 = !{i64 68820}
!40 = !{i64 68832}
!41 = !{i64 68844}
!42 = !{i64 68856}
!43 = !{i64 68868}
!44 = !{i64 68880}
!45 = !{i64 68892}
!46 = !{i64 68904}
!47 = !{i64 68916}
!48 = !{i64 68928}
!49 = !{i64 68932}
!50 = !{i64 68944}
!51 = !{i64 68948}
!52 = !{i64 68960}
!53 = !{i64 68964}
!54 = !{i64 68968}
!55 = !{i64 69004}
!56 = !{i64 69008}
!57 = !{i64 69016}
!58 = !{i64 69176}
!59 = !{i64 69180}
!60 = !{i64 69188}
!61 = !{i64 69192}
!62 = !{i64 69196}
!63 = !{i64 69200}
!64 = !{i64 69204}
!65 = !{i64 69208}
!66 = !{i64 69212}
!67 = !{i64 69216}
!68 = !{i64 69224}
!69 = !{i64 69228}
!70 = !{i64 69236}
!71 = !{i64 69244}
!72 = !{i64 69248}
!73 = !{i64 69256}
!74 = !{i64 69272}
!75 = !{i64 69276}
!76 = !{i64 69280}
!77 = !{i64 69288}
!78 = !{i64 69292}
!79 = !{i64 69300}
!80 = !{i64 69308}
!81 = !{i64 69316}
!82 = !{i64 69320}
!83 = !{i64 69324}
!84 = !{i64 69328}
!85 = !{i64 69336}
!86 = !{i64 69340}
!87 = !{i64 69344}
!88 = !{i64 69348}
!89 = !{i64 69352}
!90 = !{i64 69356}
!91 = !{i64 69360}
!92 = !{i64 69368}
!93 = !{i64 69372}
!94 = !{i64 69376}
!95 = !{i64 69380}
!96 = !{i64 69388}
!97 = !{i64 69392}
!98 = !{i64 69396}
!99 = !{i64 69400}
!100 = !{i64 69404}
!101 = !{i64 69408}
!102 = !{i64 69412}
!103 = !{i64 69416}
!104 = !{i64 69464}
!105 = !{i64 69468}
!106 = !{i64 69472}
!107 = !{i64 70716}
!108 = !{i64 70720}
!109 = !{i64 69492}
!110 = !{i64 69504}
!111 = !{i64 69508}
!112 = !{i64 69520}
!113 = !{i64 69532}
!114 = !{i64 69544}
!115 = !{i64 69556}
!116 = !{i64 69560}
!117 = !{i64 69568}
!118 = !{i64 69592}
!119 = !{i64 69596}
!120 = !{i64 69600}
!121 = !{i64 69620}
!122 = !{i64 69632}
!123 = !{i64 69636}
!124 = !{i64 69656}
!125 = !{i64 69668}
!126 = !{i64 69676}
!127 = !{i64 69720}
!128 = !{i64 69724}
!129 = !{i64 69740}
!130 = !{i64 69744}
!131 = !{i64 69748}
!132 = !{i64 69752}
!133 = !{i64 69776}
!134 = !{i64 69796}
!135 = !{i64 69808}
!136 = !{i64 69812}
!137 = !{i64 69816}
!138 = !{i64 69820}
!139 = !{i64 69824}
!140 = !{i64 69828}
!141 = !{i64 69832}
!142 = !{i64 69836}
!143 = !{i64 69840}
!144 = !{i64 69876}
!145 = !{i64 69884}
!146 = !{i64 69888}
!147 = !{i64 69896}
!148 = !{i64 69900}
!149 = !{i64 69904}
!150 = !{i64 69908}
!151 = !{i64 69912}
!152 = !{i64 69972}
!153 = !{i64 69976}
!154 = !{i64 69980}
!155 = !{i64 69992}
!156 = !{i64 69996}
!157 = !{i64 70000}
!158 = !{i64 70004}
!159 = !{i64 70016}
!160 = !{i64 70124}
!161 = !{i64 70128}
!162 = !{i64 70132}
!163 = !{i64 70136}
!164 = !{i64 70140}
!165 = !{i64 70148}
!166 = !{i64 70152}
!167 = !{i64 70156}
!168 = !{i64 70160}
!169 = !{i64 70164}
!170 = !{i64 70168}
!171 = !{i64 70180}
!172 = !{i64 70184}
!173 = !{i64 70188}
!174 = !{i64 70196}
!175 = !{i64 70204}
!176 = !{i64 70208}
!177 = !{i64 70212}
!178 = !{i64 70224}
!179 = !{i64 70232}
!180 = !{i64 70280}
!181 = !{i64 70284}
!182 = !{i64 70304}
!183 = !{i64 70308}
!184 = !{i64 70312}
!185 = !{i64 70320}
!186 = !{i64 70324}
!187 = !{i64 70328}
!188 = !{i64 70348}
!189 = !{i64 70356}
!190 = !{i64 70400}
!191 = !{i64 70404}
!192 = !{i64 70424}
!193 = !{i64 70436}
!194 = !{i64 70444}
!195 = !{i64 70452}
!196 = !{i64 70456}
!197 = !{i64 70476}
!198 = !{i64 70488}
!199 = !{i64 70492}
!200 = !{i64 70500}
!201 = !{i64 70504}
!202 = !{i64 70524}
!203 = !{i64 70536}
!204 = !{i64 70540}
!205 = !{i64 70548}
!206 = !{i64 70552}
!207 = !{i64 70572}
!208 = !{i64 70584}
!209 = !{i64 70588}
!210 = !{i64 70596}
!211 = !{i64 70600}
!212 = !{i64 70620}
!213 = !{i64 70632}
!214 = !{i64 70636}
!215 = !{i64 70640}
!216 = !{i64 70648}
!217 = !{i64 70656}
!218 = !{i64 70676}
!219 = !{i64 70688}
!220 = !{i64 70692}
!221 = !{i64 70724}
!222 = !{i64 70728}
!223 = !{i64 70732}
!224 = !{i64 70748}
!225 = !{i64 70752}
!226 = !{i64 70772}
!227 = !{i64 70784}
!228 = !{i64 70788}
!229 = !{i64 70792}
!230 = !{i64 70800}
!231 = !{i64 70832}
!232 = !{i64 70852}
!233 = !{i64 70856}
!234 = !{i64 70860}
!235 = !{i64 70900}
!236 = !{i64 70904}
!237 = !{i64 70924}
!238 = !{i64 70936}
!239 = !{i64 70940}
!240 = !{i64 70944}
!241 = !{i64 70948}
!242 = !{i64 70952}
!243 = !{i64 70972}
!244 = !{i64 70984}
!245 = !{i64 70988}
!246 = !{i64 71020}
!247 = !{i64 71024}
!248 = !{i64 71028}
!249 = !{i64 71048}
!250 = !{i64 71060}
!251 = !{i64 71064}
!252 = !{i64 71068}
!253 = !{i64 71076}
!254 = !{i64 71188}
!255 = !{i64 71120}
!256 = !{i64 71124}
!257 = !{i64 71128}
!258 = !{i64 71132}
!259 = !{i64 71136}
!260 = !{i64 71148}
!261 = !{i64 71152}
!262 = !{i64 71160}
!263 = !{i64 71168}
!264 = !{i64 71172}
!265 = !{i64 71180}
!266 = !{i64 71224}
!267 = !{i64 71228}
!268 = !{i64 71236}
!269 = !{i64 71248}
!270 = !{i64 71252}
!271 = !{i64 71256}
!272 = !{i64 71272}
!273 = !{i64 71276}
!274 = !{i64 71304}
!275 = !{i64 71308}
!276 = !{i64 71316}
!277 = !{i64 71320}
!278 = !{i64 71324}
!279 = !{i64 71328}
!280 = !{i64 71332}
!281 = !{i64 71368}
!282 = !{i64 71376}
!283 = !{i64 71388}
!284 = !{i64 71392}
!285 = !{i64 71420}
!286 = !{i64 71424}
!287 = !{i64 71436}
!288 = !{i64 71440}
!289 = !{i64 71452}
!290 = !{i64 71460}
!291 = !{i64 71472}
!292 = !{i64 71480}
!293 = !{i64 71488}
!294 = !{i64 71496}
!295 = !{i64 71596}
!296 = !{i64 71608}
!297 = !{i64 71616}
!298 = !{i64 71624}
!299 = !{i64 71628}
!300 = !{i64 71640}
!301 = !{i64 71644}
!302 = !{i64 71716}
!303 = !{i64 71736}
!304 = !{i64 71744}
!305 = !{i64 71764}
!306 = !{i64 71776}
!307 = !{i64 71784}
!308 = !{i64 71796}
!309 = !{i64 71800}
!310 = !{i64 71808}
!311 = !{i64 71812}
!312 = !{i64 71832}
!313 = !{i64 71844}
!314 = !{i64 71852}
!315 = !{i64 71856}
!316 = !{i64 71860}
!317 = !{i64 71864}
!318 = !{i64 71876}
!319 = !{i64 71892}
!320 = !{i64 71912}
!321 = !{i64 71920}
!322 = !{i64 71924}
!323 = !{i64 71928}
!324 = !{i64 71940}
!325 = !{i64 71948}
!326 = !{i64 71992}
!327 = !{i64 72000}
!328 = !{i64 72024}
!329 = !{i64 72296}
!330 = !{i64 72080}
!331 = !{i64 72092}
!332 = !{i64 72104}
!333 = !{i64 72108}
!334 = !{i64 72112}
!335 = !{i64 72120}
!336 = !{i64 72124}
!337 = !{i64 72128}
!338 = !{i64 72136}
!339 = !{i64 72140}
!340 = !{i64 72160}
!341 = !{i64 72168}
!342 = !{i64 72188}
!343 = !{i64 72244}
!344 = !{i64 72248}
!345 = !{i64 72252}
!346 = !{i64 72224}
!347 = !{i64 72232}
!348 = !{i64 72236}
!349 = !{i64 72240}
!350 = !{i64 72308}
!351 = !{i64 72324}
!352 = !{i64 72328}
!353 = !{i64 72332}
!354 = !{i64 72348}
!355 = !{i64 72352}
!356 = !{i64 72356}
!357 = !{i64 72372}
!358 = !{i64 72376}
!359 = !{i64 72388}
!360 = !{i64 72392}
!361 = !{i64 72396}
!362 = !{i64 72400}
!363 = !{i64 72420}
!364 = !{i64 72424}
!365 = !{i64 72456}
!366 = !{i64 72460}
!367 = !{i64 72466}
!368 = !{i64 72488}
!369 = !{i64 72492}
!370 = !{i64 72496}
!371 = !{i64 72500}
!372 = !{i64 72512}
!373 = !{i64 72544}
!374 = !{i64 72568}
!375 = !{i64 72564}
!376 = !{i64 72576}
!377 = !{i64 72588}
!378 = !{i64 72592}
!379 = !{i64 72596}
!380 = !{i64 72598}
!381 = !{i64 72602}
!382 = !{i64 72604}
!383 = !{i64 72606}
!384 = !{i64 72612}
!385 = !{i64 72614}
!386 = !{i64 72616}
!387 = !{i64 72640}
!388 = !{i64 72652}
!389 = !{i64 72660}
!390 = !{i64 72664}
!391 = !{i64 72672}
!392 = !{i64 72676}
!393 = !{i64 72680}
!394 = !{i64 72684}
!395 = !{i64 72692}
!396 = !{i64 72740}
!397 = !{i64 72744}
!398 = !{i64 72748}
!399 = !{i64 72716}
!400 = !{i64 72736}
!401 = !{i64 72756}
!402 = !{i64 72760}
!403 = !{i64 72764}
!404 = !{i64 72768}
!405 = !{i64 72772}
!406 = !{i64 72776}
!407 = !{i64 72784}
!408 = !{i64 72788}
!409 = !{i64 72792}
!410 = !{i64 72800}
!411 = !{i64 72804}
!412 = !{i64 72808}
!413 = !{i64 72812}
!414 = !{i64 72816}
!415 = !{i64 72828}
!416 = !{i64 72832}
!417 = !{i64 72840}
!418 = !{i64 72852}
!419 = !{i64 72856}
!420 = !{i64 72860}
!421 = !{i64 72872}
!422 = !{i64 72880}
!423 = !{i64 72888}
!424 = !{i64 72896}
!425 = !{i64 72900}
!426 = !{i64 72904}
!427 = !{i64 72928}
!428 = !{i64 72932}
!429 = !{i64 72936}
!430 = !{i64 72940}
!431 = !{i64 72952}
!432 = !{i64 72944}
!433 = !{i64 72960}
!434 = !{i64 72984}
!435 = !{i64 72996}
!436 = !{i64 73000}
!437 = !{i64 73004}
!438 = !{i64 73012}
!439 = !{i64 73032}
!440 = !{i64 73044}
!441 = !{i64 73052}
!442 = !{i64 73064}
!443 = !{i64 73076}
!444 = !{i64 73084}
!445 = !{i64 73088}
!446 = !{i64 73136}
!447 = !{i64 73100}
!448 = !{i64 73148}
!449 = !{i64 73156}
!450 = !{i64 73160}
!451 = !{i64 73164}
!452 = !{i64 73176}
!453 = !{i64 73180}
!454 = !{i64 73184}
!455 = !{i64 73368}
!456 = !{i64 73380}
!457 = !{i64 73388}
!458 = !{i64 73392}
!459 = !{i64 73408}
!460 = !{i64 73412}
!461 = !{i64 73416}
!462 = !{i64 73436}
!463 = !{i64 73440}
!464 = !{i64 73448}
!465 = !{i64 73724}
!466 = !{i64 73736}
!467 = !{i64 73744}
!468 = !{i64 73480}
!469 = !{i64 73488}
!470 = !{i64 73512}
!471 = !{i64 73520}
!472 = !{i64 73544}
!473 = !{i64 73552}
!474 = !{i64 73588}
!475 = !{i64 73592}
!476 = !{i64 73604}
!477 = !{i64 73608}
!478 = !{i64 73612}
!479 = !{i64 73616}
!480 = !{i64 73516}
!481 = !{i64 73548}
!482 = !{i64 73576}
!483 = !{i64 73628}
!484 = !{i64 73632}
!485 = !{i64 73640}
!486 = !{i64 73644}
!487 = !{i64 73484}
!488 = !{i64 73624}
!489 = !{i64 73648}
!490 = !{i64 73652}
!491 = !{i64 73656}
!492 = !{i64 73660}
!493 = !{i64 73672}
!494 = !{i64 73676}
!495 = !{i64 73680}
!496 = !{i64 73692}
!497 = !{i64 73696}
!498 = !{i64 73700}
!499 = !{i64 73704}
!500 = !{i64 73728}
!501 = !{i64 73752}
!502 = !{i64 73764}
!503 = !{i64 73772}
!504 = !{i64 73808}
!505 = !{i64 73812}
!506 = !{i64 73816}
!507 = !{i64 73840}
!508 = !{i64 73852}
!509 = !{i64 73856}
!510 = !{i64 73860}
!511 = !{i64 73876}
!512 = !{i64 73892}
!513 = !{i64 73900}
!514 = !{i64 73908}
!515 = !{i64 73912}
!516 = !{i64 73884}
!517 = !{i64 73924}
!518 = !{i64 73932}
!519 = !{i64 73952}
!520 = !{i64 73964}
!521 = !{i64 73980}
!522 = !{i64 73984}
!523 = !{i64 73988}
!524 = !{i64 73992}
!525 = !{i64 73996}
!526 = !{i64 74000}
!527 = !{i64 74004}
!528 = !{i64 74040}
!529 = !{i64 74044}
!530 = !{i64 74048}
!531 = !{i64 74052}
!532 = !{i64 74056}
!533 = !{i64 74060}
!534 = !{i64 74088}
!535 = !{i64 74096}
!536 = !{i64 74108}
!537 = !{i64 74112}
!538 = !{i64 74116}
!539 = !{i64 74140}
!540 = !{i64 74156}
!541 = !{i64 74160}
!542 = !{i64 74164}
!543 = !{i64 74176}
!544 = !{i64 74188}
!545 = !{i64 74196}
!546 = !{i64 74204}
!547 = !{i64 74208}
!548 = !{i64 74212}
!549 = !{i64 74232}
!550 = !{i64 74236}
!551 = !{i64 74244}
!552 = !{i64 74248}
!553 = !{i64 74252}
!554 = !{i64 74256}
!555 = !{i64 74272}
!556 = !{i64 74280}
!557 = !{i64 74284}
!558 = !{i64 74288}
!559 = !{i64 74300}
!560 = !{i64 74304}
!561 = !{i64 74308}
!562 = !{i64 74316}
!563 = !{i64 74320}
!564 = !{i64 74324}
!565 = !{i64 74344}
!566 = !{i64 74352}
!567 = !{i64 74356}
!568 = !{i64 74360}
!569 = !{i64 74364}
!570 = !{i64 74368}
!571 = !{i64 74376}
!572 = !{i64 74380}
!573 = !{i64 74384}
!574 = !{i64 74404}
!575 = !{i64 74408}
!576 = !{i64 74412}
!577 = !{i64 74436}
!578 = !{i64 74444}
!579 = !{i64 74448}
!580 = !{i64 74476}
!581 = !{i64 74484}
!582 = !{i64 74496}
!583 = !{i64 74500}
!584 = !{i64 74504}
!585 = !{i64 74532}
!586 = !{i64 74540}
!587 = !{i64 74548}
!588 = !{i64 74552}
!589 = !{i64 74556}
!590 = !{i64 74584}
!591 = !{i64 74596}
!592 = !{i64 74604}
!593 = !{i64 74600}
!594 = !{i64 74608}
!595 = !{i64 74616}
!596 = !{i64 74620}
!597 = !{i64 74628}
!598 = !{i64 74636}
!599 = !{i64 74640}
!600 = !{i64 74668}
!601 = !{i64 74684}
!602 = !{i64 74688}
!603 = !{i64 74692}
!604 = !{i64 74696}
!605 = !{i64 74708}
!606 = !{i64 74728}
!607 = !{i64 74732}
!608 = !{i64 74736}
!609 = !{i64 74756}
!610 = !{i64 74760}
!611 = !{i64 74764}
!612 = !{i64 74772}
!613 = !{i64 74784}
!614 = !{i64 74788}
!615 = !{i64 74796}
!616 = !{i64 74832}
!617 = !{i64 74836}
!618 = !{i64 74856}
!619 = !{i64 74864}
!620 = !{i64 74868}
!621 = !{i64 74888}
!622 = !{i64 74896}
!623 = !{i64 74900}
!624 = !{i64 74904}
!625 = !{i64 74924}
!626 = !{i64 74928}
!627 = !{i64 74932}
!628 = !{i64 74936}
!629 = !{i64 74948}
!630 = !{i64 74940}
!631 = !{i64 74956}
!632 = !{i64 74964}
!633 = !{i64 74976}
!634 = !{i64 74980}
!635 = !{i64 74984}
!636 = !{i64 74988}
!637 = !{i64 74992}
!638 = !{i64 74996}
!639 = !{i64 75008}
!640 = !{i64 75016}
!641 = !{i64 75020}
!642 = !{i64 75024}
!643 = !{i64 75028}
!644 = !{i64 75032}
!645 = !{i64 75036}
!646 = !{i64 75044}
!647 = !{i64 75048}
!648 = !{i64 75052}
!649 = !{i64 75056}
!650 = !{i64 75060}
!651 = !{i64 75068}
!652 = !{i64 75080}
!653 = !{i64 75100}
!654 = !{i64 75116}
!655 = !{i64 75120}
!656 = !{i64 75140}
!657 = !{i64 75156}
!658 = !{i64 75160}
!659 = !{i64 75180}
!660 = !{i64 75196}
!661 = !{i64 75200}
!662 = !{i64 75220}
!663 = !{i64 75236}
!664 = !{i64 75240}
!665 = !{i64 75244}
!666 = !{i64 75276}
!667 = !{i64 75280}
!668 = !{i64 75284}
!669 = !{i64 75292}
!670 = !{i64 75304}
!671 = !{i64 75308}
!672 = !{i64 75316}
!673 = !{i64 75320}
!674 = !{i64 75344}
!675 = !{i64 75348}
!676 = !{i64 75352}
!677 = !{i64 75356}
!678 = !{i64 75360}
!679 = !{i64 75384}
!680 = !{i64 75392}
!681 = !{i64 75396}
!682 = !{i64 75400}
!683 = !{i64 75404}
!684 = !{i64 75408}
!685 = !{i64 75412}
!686 = !{i64 75416}
!687 = !{i64 75472}
!688 = !{i64 75448}
!689 = !{i64 75452}
!690 = !{i64 75456}
!691 = !{i64 75460}
!692 = !{i64 75464}
!693 = !{i64 75468}
!694 = !{i64 75476}
!695 = !{i64 75492}
!696 = !{i64 75508}
!697 = !{i64 75516}
!698 = !{i64 75536}
!699 = !{i64 75568}
!700 = !{i64 75580}
!701 = !{i64 75588}
