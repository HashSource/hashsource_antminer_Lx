int __fastcall sub_493E8(int a1)
{
  char s[2048]; // [sp+18h] [bp+8h] BYREF
  _BYTE v4[4096]; // [sp+818h] [bp+808h] BYREF

  if ( dword_479E64 && *(_BYTE *)(dword_479E64 + 80) )
    return *(unsigned __int8 *)(*(_DWORD *)(dword_479E64 + 4 * a1) + 15);
  snprintf(s, 0x800u, "%s: g_eeprom_data is not ready, chain = %d.\n", "get_chip_bin", a1);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
    92,
    "get_chip_bin",
    12,
    729,
    100,
    v4);
  return 255;
}
