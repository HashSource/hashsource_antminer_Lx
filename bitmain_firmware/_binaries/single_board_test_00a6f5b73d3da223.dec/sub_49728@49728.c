int __fastcall sub_49728(int a1, char *a2)
{
  char s[2048]; // [sp+18h] [bp+8h] BYREF
  _BYTE v5[4096]; // [sp+818h] [bp+808h] BYREF

  if ( dword_479E64 && *(_BYTE *)(dword_479E64 + 80) )
  {
    sprintf(
      a2,
      "%x%02x",
      *(unsigned __int8 *)(*(_DWORD *)(dword_479E64 + 4 * a1) + 27),
      *(unsigned __int8 *)(*(_DWORD *)(dword_479E64 + 4 * a1) + 28));
    return 0;
  }
  else
  {
    snprintf(s, 0x800u, "%s: g_eeprom_data is not ready, chain = %d.\n", "get_pcb_version", a1);
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
      92,
      "get_pcb_version",
      15,
      769,
      100,
      v5);
    return 255;
  }
}
