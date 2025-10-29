int __fastcall eeprom_open(unsigned int a1)
{
  char v4[12]; // [sp+1Ch] [bp+Ch] BYREF
  _BYTE v5[12]; // [sp+81Ch] [bp+80Ch] BYREF
  unsigned int v6; // [sp+181Ch] [bp+180Ch] BYREF
  __int16 v7; // [sp+1820h] [bp+1810h]
  char v8; // [sp+1822h] [bp+1812h]
  char v9; // [sp+1823h] [bp+1813h]
  int v10; // [sp+1824h] [bp+1814h]

  v10 = 0;
  if ( a1 <= 0xF )
  {
    if ( dword_479DE4[2 * a1] && dword_479DE4[2 * a1 + 1] )
    {
      return dword_479DE4[2 * a1];
    }
    else
    {
      v6 = a1;
      v7 = 0;
      v8 = 10;
      v9 = a1;
      v10 = iic_init((int)&v6);
      if ( v10 >= 0 )
      {
        dword_479DE4[2 * a1] = v10;
        dword_479DE4[2 * a1 + 1] = 1;
      }
      return v10;
    }
  }
  else
  {
    snprintf(v4, 0x800u, "%s: Bad eeprom param, input chain is %d\n", "eeprom_open", a1);
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
      92,
      "eeprom_open",
      11,
      50,
      100,
      v5);
    return -2147483391;
  }
}
