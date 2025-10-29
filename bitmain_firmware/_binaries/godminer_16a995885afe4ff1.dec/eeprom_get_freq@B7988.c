int __fastcall eeprom_get_freq(int a1, _DWORD *a2)
{
  int v2; // r3
  int result; // r0
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v5[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( dword_16C470[0] && *(_BYTE *)(dword_16C470[0] + 80) )
  {
    v2 = *(unsigned __int16 *)(*(_DWORD *)(dword_16C470[0] + 4 * a1) + 37);
    if ( a2 )
    {
      result = 0;
      *a2 = v2;
    }
    else
    {
      strcpy(s, "freq level not match");
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build"
        "/godminer-origin_master/backend/device/hal/eeprom/bitmain_eeprom.c",
        178,
        "eeprom_get_freq",
        15,
        718,
        100,
        v5);
      return -2;
    }
  }
  else
  {
    snprintf(s, 0x800u, "No work mode freq, chain = %d.\n", a1);
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/backend/device/hal/eeprom/bitmain_eeprom.c",
      178,
      "eeprom_get_freq",
      15,
      707,
      100,
      v5);
    return -1;
  }
  return result;
}
