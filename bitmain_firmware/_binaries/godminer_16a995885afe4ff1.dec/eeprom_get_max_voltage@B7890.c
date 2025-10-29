int eeprom_get_max_voltage()
{
  int *v0; // r3
  int result; // r0
  int v2; // t1
  int v3; // r2
  char s[2048]; // [sp+10h] [bp-1808h] BYREF
  char v5[4104]; // [sp+810h] [bp-1008h] BYREF

  if ( dword_16C470[0] && *(_BYTE *)(dword_16C470[0] + 80) )
  {
    if ( dword_16C474 <= 0 )
    {
      return 0;
    }
    else
    {
      v0 = dword_16C478;
      result = 0;
      do
      {
        v2 = *v0++;
        v3 = *(unsigned __int16 *)(*(_DWORD *)(dword_16C470[0] + 4 * v2) + 35);
        if ( result < v3 )
          result = v3;
      }
      while ( v0 != &dword_16C478[dword_16C474] );
    }
  }
  else
  {
    snprintf(s, 0x800u, "%s: eeprom is not ready\n", "eeprom_get_max_voltage");
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/backend/device/hal/eeprom/bitmain_eeprom.c",
      178,
      "eeprom_get_max_voltage",
      22,
      689,
      100,
      v5);
    return -1;
  }
  return result;
}
