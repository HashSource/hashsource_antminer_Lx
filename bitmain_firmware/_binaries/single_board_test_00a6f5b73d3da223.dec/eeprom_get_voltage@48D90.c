int __fastcall eeprom_get_voltage(int a1, _DWORD *a2)
{
  char v4[2048]; // [sp+1Ch] [bp+Ch] BYREF
  int v5; // [sp+81Ch] [bp+80Ch] BYREF
  int v6; // [sp+181Ch] [bp+180Ch]

  if ( dword_479E64 && *(_BYTE *)(dword_479E64 + 80) )
  {
    v6 = *(unsigned __int16 *)(*(_DWORD *)(dword_479E64 + 4 * a1) + 35);
    if ( a2 )
    {
      *a2 = v6;
      return 0;
    }
    else
    {
      strcpy(v4, "voltage level not match");
      V_LOCK();
      logfmt_raw(&v5, 0x1000u, 0, v4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
        92,
        "eeprom_get_voltage",
        18,
        653,
        100,
        &v5);
      return -2;
    }
  }
  else
  {
    snprintf(v4, 0x800u, "No work mode voltage, chain = %d.\n", a1);
    V_LOCK();
    logfmt_raw(&v5, 0x1000u, 0, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
      92,
      "eeprom_get_voltage",
      18,
      642,
      100,
      &v5);
    return -1;
  }
}
