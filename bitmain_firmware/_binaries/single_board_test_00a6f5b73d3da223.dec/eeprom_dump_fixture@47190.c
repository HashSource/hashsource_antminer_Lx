__int64 __fastcall eeprom_dump_fixture(int a1)
{
  char s[2048]; // [sp+18h] [bp+8h] BYREF
  _BYTE v4[4100]; // [sp+818h] [bp+808h] BYREF

  snprintf(s, 0x800u, "%-30s : 0x%04x\n", "key_version", *(_BYTE *)a1 & 0xF);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
    92,
    "eeprom_dump_fixture",
    19,
    364,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : 0x%04x\n", "algorithm_code", *(_BYTE *)a1 >> 4);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
    92,
    "eeprom_dump_fixture",
    19,
    365,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : 0x%04x\n", "fixture_info_len", *(unsigned __int8 *)(a1 + 1));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
    92,
    "eeprom_dump_fixture",
    19,
    366,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : 0x%04x\n", "fixture_standard", *(unsigned __int8 *)(a1 + 45));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
    92,
    "eeprom_dump_fixture",
    19,
    367,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : 0x%04x\n", "test_standard", *(unsigned __int8 *)(a1 + 46));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
    92,
    "eeprom_dump_fixture",
    19,
    368,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : %s\n", "chip_technology", *(const char **)(a1 + 31));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
    92,
    "eeprom_dump_fixture",
    19,
    369,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : 0x%02x\n", "fixture_fmt_version", *(unsigned __int8 *)(a1 + 2));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
    92,
    "eeprom_dump_fixture",
    19,
    370,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : %s\n", "SN", *(const char **)(a1 + 3));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
    92,
    "eeprom_dump_fixture",
    19,
    372,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : 0x%02x-%02x\n", "pcb", *(unsigned __int8 *)(a1 + 27), *(unsigned __int8 *)(a1 + 28));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
    92,
    "eeprom_dump_fixture",
    19,
    373,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : 0x%02x-%02x\n", "bom", *(unsigned __int8 *)(a1 + 29), *(unsigned __int8 *)(a1 + 30));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
    92,
    "eeprom_dump_fixture",
    19,
    374,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : %u\n", "hash_board_voltage", *(unsigned __int16 *)(a1 + 35));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
    92,
    "eeprom_dump_fixture",
    19,
    375,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : %u\n", "hash_board_freq", *(unsigned __int16 *)(a1 + 37));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
    92,
    "eeprom_dump_fixture",
    19,
    376,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : %.2f\n", "nonce_response_rate", *(float *)(a1 + 39));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
    92,
    "eeprom_dump_fixture",
    19,
    377,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : %u\n", "inlet_temperature", *(unsigned __int8 *)(a1 + 43));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
    92,
    "eeprom_dump_fixture",
    19,
    378,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : %u\n", "outlet_temperature", *(unsigned __int8 *)(a1 + 44));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
    92,
    "eeprom_dump_fixture",
    19,
    379,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : 0x%02x-%02x\n", "asic sensor", *(_BYTE *)(a1 + 20) >> 7, *(_BYTE *)(a1 + 20) & 0x7F);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
    92,
    "eeprom_dump_fixture",
    19,
    380,
    100,
    v4);
  snprintf(
    s,
    0x800u,
    "%-30s : 0x%02x-%02x-%02x-%02x\n",
    "asic sensor addr",
    **(unsigned __int8 **)(a1 + 21),
    *(unsigned __int8 *)(*(_DWORD *)(a1 + 21) + 1),
    *(unsigned __int8 *)(*(_DWORD *)(a1 + 21) + 2),
    *(unsigned __int8 *)(*(_DWORD *)(a1 + 21) + 3));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
    92,
    "eeprom_dump_fixture",
    19,
    381,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : 0x%02x-%02x\n", "pic sensor", *(_BYTE *)(a1 + 25) >> 7, *(_BYTE *)(a1 + 25) & 0x7F);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
    92,
    "eeprom_dump_fixture",
    19,
    382,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : 0x%02x\n", "pic sensor addr", *(unsigned __int8 *)(a1 + 26));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
    92,
    "eeprom_dump_fixture",
    19,
    383,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : bin%d\n", "chip_bin", *(unsigned __int8 *)(a1 + 15));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
    92,
    "eeprom_dump_fixture",
    19,
    384,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : %s\n", "FT", *(const char **)(a1 + 16));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
    92,
    "eeprom_dump_fixture",
    19,
    385,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : %s\n", "chip_die", *(const char **)(a1 + 7));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
    92,
    "eeprom_dump_fixture",
    19,
    386,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : %s\n", "chip_marking", *(const char **)(a1 + 11));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
    92,
    "eeprom_dump_fixture",
    19,
    387,
    100,
    v4);
  strcpy(s, "\n");
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
           92,
           "eeprom_dump_fixture",
           19,
           388,
           100,
           v4);
}
