int __fastcall api_get_eeprom_chain_load_state(int a1)
{
  char s[2048]; // [sp+18h] [bp+8h] BYREF
  _BYTE v4[4096]; // [sp+818h] [bp+808h] BYREF

  if ( dword_479E64 )
    return *(unsigned __int8 *)(dword_479E68[a1] + dword_479E64 + 64);
  snprintf(
    s,
    0x800u,
    "%s: g_eeprom_data is not ready, chain = %d.\n",
    "api_get_eeprom_chain_load_state",
    dword_479E68[a1]);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
    92,
    "api_get_eeprom_chain_load_state",
    31,
    862,
    100,
    v4);
  return -1;
}
