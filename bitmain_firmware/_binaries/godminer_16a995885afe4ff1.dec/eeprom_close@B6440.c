int *__fastcall eeprom_close(unsigned int a1)
{
  unsigned int v1; // r4
  int *v2; // r3
  int *result; // r0
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v5[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( a1 > 0xF )
  {
    snprintf(s, 0x800u, "%s: Bad eeprom param, input chain is %d\n", "eeprom_close", a1);
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, s);
    V_UNLOCK();
    return (int *)zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/r"
                    "elease/build/godminer-origin_master/backend/device/hal/eeprom/bitmain_eeprom.c",
                    178,
                    "eeprom_close",
                    12,
                    68,
                    100,
                    v5);
  }
  else
  {
    v1 = 2 * a1;
    v2 = &dword_16C470[2 * a1];
    result = (int *)v2[18];
    if ( result || v2[19] )
    {
      iic_uninit((int)result);
      result = &dword_16C470[v1];
      result[18] = 0;
      result[19] = 0;
    }
  }
  return result;
}
