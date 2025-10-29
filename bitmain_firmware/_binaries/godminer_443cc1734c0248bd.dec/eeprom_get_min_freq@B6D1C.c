int eeprom_get_min_freq()
{
  char *v0; // r3
  int result; // r0
  int v2; // t1
  int v3; // r2
  char s[2048]; // [sp+10h] [bp-1808h] BYREF
  char v5[4104]; // [sp+810h] [bp-1008h] BYREF

  if ( dword_16B370[0] && *(_BYTE *)(dword_16B370[0] + 80) )
  {
    if ( dword_16B374 <= 0 )
    {
      return 0xFFFF;
    }
    else
    {
      v0 = (char *)&unk_16B378;
      result = 0xFFFF;
      do
      {
        v2 = *(_DWORD *)v0;
        v0 += 4;
        v3 = *(unsigned __int16 *)(*(_DWORD *)(dword_16B370[0] + 4 * v2) + 37);
        if ( result >= v3 )
          result = v3;
      }
      while ( v0 != (char *)&unk_16B378 + 4 * dword_16B374 );
    }
  }
  else
  {
    snprintf(s, 0x800u, "%s: g_eeprom_data is not ready\n", "eeprom_get_min_freq");
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/eeprom/bitmain_eeprom.c",
      163,
      "eeprom_get_min_freq",
      19,
      702,
      100,
      v5);
    return -1;
  }
  return result;
}
