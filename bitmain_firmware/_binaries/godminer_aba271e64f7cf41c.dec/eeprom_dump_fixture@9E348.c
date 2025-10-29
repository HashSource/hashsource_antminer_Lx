__int64 __fastcall eeprom_dump_fixture(int a1)
{
  char v3[4]; // [sp+18h] [bp-1804h] BYREF
  char v4[4]; // [sp+818h] [bp-1004h] BYREF

  snprintf(v3, 0x800u, "%-30s : 0x%04x", "key_version", *(_BYTE *)a1 & 0xF);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/device/hal/eeprom/bitmain_eeprom.c",
    180,
    "eeprom_dump_fixture",
    19,
    469,
    100,
    v4);
  snprintf(v3, 0x800u, "%-30s : 0x%04x", "algorithm_code", *(_BYTE *)a1 >> 4);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/device/hal/eeprom/bitmain_eeprom.c",
    180,
    "eeprom_dump_fixture",
    19,
    470,
    100,
    v4);
  snprintf(v3, 0x800u, "%-30s : 0x%04x", "fixture_info_len", *(unsigned __int8 *)(a1 + 1));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/device/hal/eeprom/bitmain_eeprom.c",
    180,
    "eeprom_dump_fixture",
    19,
    471,
    100,
    v4);
  snprintf(v3, 0x800u, "%-30s : 0x%04x", "fixture_standard", *(unsigned __int8 *)(a1 + 49));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/device/hal/eeprom/bitmain_eeprom.c",
    180,
    "eeprom_dump_fixture",
    19,
    472,
    100,
    v4);
  snprintf(v3, 0x800u, "%-30s : 0x%04x", "test_standard", *(unsigned __int8 *)(a1 + 50));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/device/hal/eeprom/bitmain_eeprom.c",
    180,
    "eeprom_dump_fixture",
    19,
    473,
    100,
    v4);
  snprintf(v3, 0x800u, "%-30s : %s", "chip_technology", *(const char **)(a1 + 35));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/device/hal/eeprom/bitmain_eeprom.c",
    180,
    "eeprom_dump_fixture",
    19,
    474,
    100,
    v4);
  snprintf(v3, 0x800u, "%-30s : 0x%02x", "fixture_fmt_version", *(unsigned __int8 *)(a1 + 2));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/device/hal/eeprom/bitmain_eeprom.c",
    180,
    "eeprom_dump_fixture",
    19,
    475,
    100,
    v4);
  snprintf(v3, 0x800u, "%-30s : %s", "SN", *(const char **)(a1 + 3));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/device/hal/eeprom/bitmain_eeprom.c",
    180,
    "eeprom_dump_fixture",
    19,
    477,
    100,
    v4);
  snprintf(v3, 0x800u, "%-30s : 0x%02x-%02x", "pcb", *(unsigned __int8 *)(a1 + 31), *(unsigned __int8 *)(a1 + 32));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/device/hal/eeprom/bitmain_eeprom.c",
    180,
    "eeprom_dump_fixture",
    19,
    478,
    100,
    v4);
  snprintf(v3, 0x800u, "%-30s : 0x%02x-%02x", "bom", *(unsigned __int8 *)(a1 + 33), *(unsigned __int8 *)(a1 + 34));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/device/hal/eeprom/bitmain_eeprom.c",
    180,
    "eeprom_dump_fixture",
    19,
    479,
    100,
    v4);
  snprintf(v3, 0x800u, "%-30s : %u", "hash_board_voltage", *(unsigned __int16 *)(a1 + 39));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/device/hal/eeprom/bitmain_eeprom.c",
    180,
    "eeprom_dump_fixture",
    19,
    480,
    100,
    v4);
  snprintf(v3, 0x800u, "%-30s : %u", "hash_board_freq", *(unsigned __int16 *)(a1 + 41));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/device/hal/eeprom/bitmain_eeprom.c",
    180,
    "eeprom_dump_fixture",
    19,
    481,
    100,
    v4);
  snprintf(v3, 0x800u, "%-30s : %.2f", "nonce_response_rate", *(float *)(a1 + 43));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/device/hal/eeprom/bitmain_eeprom.c",
    180,
    "eeprom_dump_fixture",
    19,
    482,
    100,
    v4);
  snprintf(v3, 0x800u, "%-30s : %u", "inlet_temperature", *(unsigned __int8 *)(a1 + 47));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/device/hal/eeprom/bitmain_eeprom.c",
    180,
    "eeprom_dump_fixture",
    19,
    483,
    100,
    v4);
  snprintf(v3, 0x800u, "%-30s : %u", "outlet_temperature", *(unsigned __int8 *)(a1 + 48));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/device/hal/eeprom/bitmain_eeprom.c",
    180,
    "eeprom_dump_fixture",
    19,
    484,
    100,
    v4);
  snprintf(v3, 0x800u, "%-30s : 0x%02x-%02x", "asic sensor", *(_BYTE *)(a1 + 24) >> 7, *(_BYTE *)(a1 + 24) & 0x7F);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/device/hal/eeprom/bitmain_eeprom.c",
    180,
    "eeprom_dump_fixture",
    19,
    485,
    100,
    v4);
  snprintf(
    v3,
    0x800u,
    "%-30s : 0x%02x-%02x-%02x-%02x",
    "asic sensor addr",
    **(unsigned __int8 **)(a1 + 25),
    *(unsigned __int8 *)(*(_DWORD *)(a1 + 25) + 1),
    *(unsigned __int8 *)(*(_DWORD *)(a1 + 25) + 2),
    *(unsigned __int8 *)(*(_DWORD *)(a1 + 25) + 3));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/device/hal/eeprom/bitmain_eeprom.c",
    180,
    "eeprom_dump_fixture",
    19,
    486,
    100,
    v4);
  snprintf(v3, 0x800u, "%-30s : 0x%02x-%02x", "pic sensor", *(_BYTE *)(a1 + 29) >> 7, *(_BYTE *)(a1 + 29) & 0x7F);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/device/hal/eeprom/bitmain_eeprom.c",
    180,
    "eeprom_dump_fixture",
    19,
    487,
    100,
    v4);
  snprintf(v3, 0x800u, "%-30s : 0x%02x", "pic sensor addr", *(unsigned __int8 *)(a1 + 30));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/device/hal/eeprom/bitmain_eeprom.c",
    180,
    "eeprom_dump_fixture",
    19,
    488,
    100,
    v4);
  snprintf(v3, 0x800u, "%-30s : bin%d", "chip_bin", *(unsigned __int8 *)(a1 + 15));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/device/hal/eeprom/bitmain_eeprom.c",
    180,
    "eeprom_dump_fixture",
    19,
    489,
    100,
    v4);
  snprintf(v3, 0x800u, "%-30s : %s", "FT", *(const char **)(a1 + 16));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/device/hal/eeprom/bitmain_eeprom.c",
    180,
    "eeprom_dump_fixture",
    19,
    490,
    100,
    v4);
  snprintf(v3, 0x800u, "%-30s : %s", "chip_die", *(const char **)(a1 + 7));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/device/hal/eeprom/bitmain_eeprom.c",
    180,
    "eeprom_dump_fixture",
    19,
    491,
    100,
    v4);
  snprintf(v3, 0x800u, "%-30s : %s", "chip_marking", *(const char **)(a1 + 11));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/device/hal/eeprom/bitmain_eeprom.c",
    180,
    "eeprom_dump_fixture",
    19,
    492,
    100,
    v4);
  snprintf(v3, 0x800u, "%-30s : P%d", "phy_seq_level", *(unsigned __int8 *)(a1 + 55));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, v3);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godm"
           "iner-origin_godminer-branch1/backend/device/hal/eeprom/bitmain_eeprom.c",
           180,
           "eeprom_dump_fixture",
           19,
           493,
           100,
           v4);
}
