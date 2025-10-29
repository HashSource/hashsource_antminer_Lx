int __fastcall eeprom_get_fmt_version(int a1, _BYTE *a2)
{
  char v4[4]; // [sp+18h] [bp-1804h] BYREF
  char v5[4]; // [sp+818h] [bp-1004h] BYREF

  if ( dword_15FA68 && *(_BYTE *)(dword_15FA68 + 80) )
  {
    *a2 = *(_BYTE *)(*(_DWORD *)(dword_15FA68 + 4 * a1) + 2);
    return 0;
  }
  else
  {
    snprintf(v4, 0x800u, "%s: g_eeprom_data is not ready", "eeprom_get_fmt_version");
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/eeprom/bitmain_eeprom.c",
      180,
      "eeprom_get_fmt_version",
      22,
      1109,
      100,
      v5);
    return -1;
  }
}
