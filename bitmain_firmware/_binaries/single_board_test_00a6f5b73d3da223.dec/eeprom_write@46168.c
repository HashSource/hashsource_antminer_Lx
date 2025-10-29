int __fastcall eeprom_write(unsigned int a1, char a2, int a3, unsigned int a4)
{
  char v10[12]; // [sp+24h] [bp+14h] BYREF
  _BYTE v11[12]; // [sp+824h] [bp+814h] BYREF
  unsigned __int8 v12; // [sp+1827h] [bp+1817h] BYREF
  int v13; // [sp+1828h] [bp+1818h]
  unsigned int i; // [sp+182Ch] [bp+181Ch]

  v13 = 0;
  i = 0;
  if ( a1 <= 0xF )
  {
    if ( dword_479DE4[2 * a1 + 1] || (v13 = eeprom_open(a1), v13 >= 0) )
    {
      for ( i = 0; i < a4; ++i )
      {
        v12 = a2 + i;
        v13 = iic_write_reg(dword_479DE4[2 * a1], &v12, 1, i + a3, 1u);
        if ( v13 != 1 )
        {
          snprintf(v10, 0x800u, "fail to write eeprom by iic, chain:%d, addr: %d", a1, v12);
          V_LOCK();
          logfmt_raw(v11, 0x1000u, 0, v10);
          V_UNLOCK();
          zlog(
            g_zc,
            "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
            92,
            "eeprom_write",
            12,
            116,
            100,
            v11);
          return -2147483392;
        }
      }
      sleep(1u);
      return 0;
    }
    else
    {
      snprintf(v10, 0x800u, "%s: auto exec eeprom_open, but chain %d open eeprom failed\n", "eeprom_write", a1);
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, v10);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
        92,
        "eeprom_write",
        12,
        96,
        100,
        v11);
      return v13;
    }
  }
  else
  {
    snprintf(v10, 0x800u, "%s: Bad eeprom param, input chain is %d\n", "eeprom_write", a1);
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, v10);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
      92,
      "eeprom_write",
      12,
      91,
      100,
      v11);
    return -2147483391;
  }
}
