int eeprom_get_min_freq()
{
  char v2[8]; // [sp+10h] [bp+0h] BYREF
  _BYTE v3[8]; // [sp+810h] [bp+800h] BYREF
  int i; // [sp+1810h] [bp+1800h]
  int v5; // [sp+1814h] [bp+1804h]

  v5 = 0xFFFF;
  if ( dword_479E64 && *(_BYTE *)(dword_479E64 + 80) )
  {
    for ( i = 0; i < dword_479EA8; ++i )
    {
      if ( *(unsigned __int16 *)(*(_DWORD *)(dword_479E64 + 4 * dword_479E68[i]) + 37) < v5 )
        v5 = *(unsigned __int16 *)(*(_DWORD *)(dword_479E64 + 4 * dword_479E68[i]) + 37);
    }
    return v5;
  }
  else
  {
    snprintf(v2, 0x800u, "%s: g_eeprom_data is not ready\n", "eeprom_get_min_freq");
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
      92,
      "eeprom_get_min_freq",
      19,
      702,
      100,
      v3);
    return -1;
  }
}
