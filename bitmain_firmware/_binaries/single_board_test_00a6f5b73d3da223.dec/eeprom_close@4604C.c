unsigned int __fastcall eeprom_close(unsigned int result)
{
  unsigned int v1; // [sp+14h] [bp+4h]
  char s[2048]; // [sp+18h] [bp+8h] BYREF
  _BYTE v3[4096]; // [sp+818h] [bp+808h] BYREF

  v1 = result;
  if ( result <= 0xF )
  {
    if ( dword_479DE4[2 * result] || dword_479DE4[2 * result + 1] )
    {
      result = iic_uninit(dword_479DE4[2 * result]);
      dword_479DE4[2 * v1] = 0;
      dword_479DE4[2 * v1 + 1] = 0;
    }
  }
  else
  {
    snprintf(s, 0x800u, "%s: Bad eeprom param, input chain is %d\n", "eeprom_close", result);
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, s);
    V_UNLOCK();
    return zlog(
             g_zc,
             "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
             92,
             "eeprom_close",
             12,
             74,
             100,
             v3);
  }
  return result;
}
