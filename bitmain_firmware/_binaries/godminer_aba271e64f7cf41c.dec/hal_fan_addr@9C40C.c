int __fastcall hal_fan_addr(int a1)
{
  int i; // [sp+Ch] [bp-8h]

  if ( !dword_1505F4 )
    return -1;
  for ( i = 0; i <= 7; ++i )
  {
    if ( a1 == dword_1506F8[3 * i] )
      return dword_1506F8[3 * i + 1];
  }
  return -2;
}
