int __fastcall api_get_eeprom_nonce_response_rate(int a1, _DWORD *a2)
{
  char s[2048]; // [sp+18h] [bp+8h] BYREF
  _BYTE v5[4096]; // [sp+818h] [bp+808h] BYREF

  if ( dword_479E64 && *(_BYTE *)(dword_479E64 + 80) )
  {
    if ( a2 )
    {
      *a2 = *(_DWORD *)(*(_DWORD *)(dword_479E64 + 4 * dword_479E68[a1]) + 39);
      return 0;
    }
    else
    {
      snprintf(
        s,
        0x800u,
        "%s: chain = %d nonce response rate in eeprom is invalid\n",
        "api_get_eeprom_nonce_response_rate",
        dword_479E68[a1]);
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
        92,
        "api_get_eeprom_nonce_response_rate",
        34,
        813,
        100,
        v5);
      return -2;
    }
  }
  else
  {
    snprintf(
      s,
      0x800u,
      "%s: g_eeprom_data is not ready, chain = %d.\n",
      "api_get_eeprom_nonce_response_rate",
      dword_479E68[a1]);
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
      92,
      "api_get_eeprom_nonce_response_rate",
      34,
      804,
      100,
      v5);
    return -1;
  }
}
