int __fastcall sub_49938(int a1, void *a2)
{
  size_t v2; // r0
  char s[2048]; // [sp+18h] [bp+8h] BYREF
  _BYTE v7[4100]; // [sp+818h] [bp+808h] BYREF

  if ( dword_479E64 && *(_BYTE *)(dword_479E64 + 80) )
  {
    v2 = strlen(*(const char **)(*(_DWORD *)(dword_479E64 + 4 * a1) + 47));
    memcpy(a2, *(const void **)(*(_DWORD *)(dword_479E64 + 4 * a1) + 47), v2);
  }
  else
  {
    snprintf(s, 0x800u, "%s: g_eeprom_data is not ready, chain = %d.\n", "get_miner_type", a1);
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
      92,
      "get_miner_type",
      14,
      792,
      100,
      v7);
  }
  return 0;
}
