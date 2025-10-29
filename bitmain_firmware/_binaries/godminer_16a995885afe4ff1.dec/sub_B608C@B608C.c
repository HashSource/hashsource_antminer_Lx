int __fastcall sub_B608C(int a1, char *s)
{
  char sa[2048]; // [sp+10h] [bp-1800h] BYREF
  char v4[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_16C470[0] && *(_BYTE *)(dword_16C470[0] + 80) )
  {
    sprintf(
      s,
      "%x%02x",
      *(unsigned __int8 *)(*(_DWORD *)(dword_16C470[0] + 4 * a1) + 27),
      *(unsigned __int8 *)(*(_DWORD *)(dword_16C470[0] + 4 * a1) + 28));
    return 0;
  }
  else
  {
    snprintf(sa, 0x800u, "%s: g_eeprom_data is not ready, chain = %d.\n", "get_pcb_version", a1);
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, sa);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/backend/device/hal/eeprom/bitmain_eeprom.c",
      178,
      "get_pcb_version",
      15,
      795,
      100,
      v4);
    return 255;
  }
}
