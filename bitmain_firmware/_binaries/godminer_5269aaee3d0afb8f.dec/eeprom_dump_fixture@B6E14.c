int __fastcall eeprom_dump_fixture(unsigned __int8 *a1)
{
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  char v4[4100]; // [sp+820h] [bp-1004h] BYREF

  snprintf(s, 0x800u, "%-30s : 0x%04x", "key_version", *a1 & 0xF);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    377,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : 0x%04x", "algorithm_code", *a1 >> 4);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    378,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : 0x%04x", "fixture_info_len", a1[1]);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    379,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : 0x%04x", "fixture_standard", a1[45]);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    380,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : 0x%04x", "test_standard", a1[46]);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    381,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : %s", "chip_technology", *(const char **)(a1 + 31));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    382,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : 0x%02x", "fixture_fmt_version", a1[2]);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    383,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : %s", "SN", *(const char **)(a1 + 3));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    385,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : 0x%02x-%02x", "pcb", a1[27], a1[28]);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    386,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : 0x%02x-%02x", "bom", a1[29], a1[30]);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    387,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : %u", "hash_board_voltage", *(unsigned __int16 *)(a1 + 35));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    388,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : %u", "hash_board_freq", *(unsigned __int16 *)(a1 + 37));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    389,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : %.2f", "nonce_response_rate", *(float *)(a1 + 39));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    390,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : %u", "inlet_temperature", a1[43]);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    391,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : %u", "outlet_temperature", a1[44]);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    392,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : 0x%02x-%02x", "asic sensor", a1[20] >> 7, a1[20] & 0x7F);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    393,
    100,
    v4);
  snprintf(
    s,
    0x800u,
    "%-30s : 0x%02x-%02x-%02x-%02x",
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
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    394,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : 0x%02x-%02x", "pic sensor", a1[25] >> 7, a1[25] & 0x7F);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    395,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : 0x%02x", "pic sensor addr", a1[26]);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    396,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : bin%d", "chip_bin", a1[15]);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    397,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : %s", "FT", *((const char **)a1 + 4));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    398,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : %s", "chip_die", *(const char **)(a1 + 7));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    399,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : %s", "chip_marking", *(const char **)(a1 + 11));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
           "igin_master/backend/device/hal/eeprom/bitmain_eeprom.c",
           163,
           "eeprom_dump_fixture",
           19,
           400,
           100,
           v4);
}
