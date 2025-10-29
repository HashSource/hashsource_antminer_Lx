int32_t detect_scan_code_gun()
{
  _DWORD s[73]; // [sp+4h] [bp+4h] BYREF
  unsigned int j; // [sp+128h] [bp+128h]
  unsigned int i; // [sp+12Ch] [bp+12Ch]

  i = 0;
  j = 0;
  memset(s, 0, sizeof(s));
  get_system_capability(s);
  for ( i = 0; s[0] > i; ++i )
  {
    for ( j = 0; s[18 * i + 2] > j; ++j )
    {
      if ( s[18 * i + 3 + j] == 3 )
        return 0;
    }
  }
  return -1;
}
