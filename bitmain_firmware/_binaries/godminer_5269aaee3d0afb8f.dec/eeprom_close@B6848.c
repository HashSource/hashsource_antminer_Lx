int *__fastcall eeprom_close(unsigned int a1)
{
  unsigned int v1; // r4
  int *v2; // r3
  int *result; // r0
  _DWORD *v4; // r3
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v6[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( a1 > 0xF )
  {
    snprintf(s, 0x800u, "%s: Bad eeprom param, input chain is %d\n", "eeprom_close", a1);
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v4) = -14756;
    HIWORD(v4) = (unsigned int)&unk_16E68C >> 16;
    return (int *)zlog(
                    *v4,
                    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/go"
                    "dminer-origin_master/backend/device/hal/eeprom/bitmain_eeprom.c",
                    163,
                    "eeprom_close",
                    12,
                    68,
                    100,
                    v6);
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
