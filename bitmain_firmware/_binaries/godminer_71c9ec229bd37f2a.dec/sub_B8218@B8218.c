int __fastcall sub_B8218(int a1, _BYTE *a2)
{
  int v2; // r3
  char s[2048]; // [sp+10h] [bp-1808h] BYREF
  char v5[4104]; // [sp+810h] [bp-1008h] BYREF

  if ( dword_16E49C[0] && *(_BYTE *)(dword_16E49C[0] + 80) )
  {
    v2 = *(_DWORD *)(dword_16E49C[0] + 4 * a1);
    *a2 = *(_BYTE *)(v2 + 2);
    return 0;
  }
  else
  {
    snprintf(s, 0x800u, "No work mode freq, chain = %d.\n", a1);
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/eeprom/bitmain_eeprom.c",
      163,
      "eeprom_get_fmt_version",
      22,
      960,
      100,
      v5);
    return 255;
  }
}
