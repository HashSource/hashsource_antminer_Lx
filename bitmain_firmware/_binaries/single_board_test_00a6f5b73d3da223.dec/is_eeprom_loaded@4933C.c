int is_eeprom_loaded()
{
  char v2[2048]; // [sp+10h] [bp+0h] BYREF
  _BYTE v3[4096]; // [sp+810h] [bp+800h] BYREF

  if ( dword_479E64 && *(_BYTE *)(dword_479E64 + 80) )
    return *(unsigned __int8 *)(dword_479E64 + 80);
  snprintf(v2, 0x800u, "%s: g_eeprom_data is not ready\n", "is_eeprom_loaded");
  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, v2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
    92,
    "is_eeprom_loaded",
    16,
    718,
    20,
    v3);
  return 0;
}
