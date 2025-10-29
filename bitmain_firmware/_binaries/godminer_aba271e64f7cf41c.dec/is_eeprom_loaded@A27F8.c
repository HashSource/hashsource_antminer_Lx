int is_eeprom_loaded()
{
  char v2[4]; // [sp+10h] [bp-1804h] BYREF
  char v3[4]; // [sp+810h] [bp-1004h] BYREF

  if ( dword_15FA68 && *(_BYTE *)(dword_15FA68 + 80) )
    return *(unsigned __int8 *)(dword_15FA68 + 80);
  snprintf(v2, 0x800u, "%s: g_eeprom_data is not ready", "is_eeprom_loaded");
  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, v2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/device/hal/eeprom/bitmain_eeprom.c",
    180,
    "is_eeprom_loaded",
    16,
    1121,
    20,
    v3);
  return 0;
}
