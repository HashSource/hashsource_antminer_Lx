int hal_fan_number()
{
  int i; // [sp+0h] [bp-Ch]
  int v3; // [sp+4h] [bp-8h]

  v3 = 0;
  if ( !dword_1505F4 )
    return -1;
  for ( i = 0; i <= 7; ++i )
  {
    if ( dword_1506F8[3 * i] != -1 )
      ++v3;
  }
  return v3;
}
