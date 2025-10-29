int get_total_nonce_rate()
{
  int result; // r0
  float v1; // [sp+4h] [bp-18h] BYREF
  _DWORD v2[2]; // [sp+8h] [bp-14h] BYREF
  int i; // [sp+10h] [bp-Ch]
  float v4; // [sp+14h] [bp-8h]

  v2[0] = 0;
  v4 = 0.0;
  v2[1] = get_all_created_runtime(v2);
  result = is_eeprom_loaded();
  if ( result )
  {
    for ( i = 0; i < v2[0]; ++i )
    {
      v1 = 0.0;
      result = api_get_eeprom_nonce_response_rate(i, &v1);
      if ( !result )
        v4 = v4 + v1;
    }
  }
  return result;
}
