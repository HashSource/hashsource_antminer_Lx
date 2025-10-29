int __fastcall hal_chain_plug_addr(int a1)
{
  int i; // [sp+Ch] [bp-8h]

  if ( !dword_1505F4 )
    return -1;
  for ( i = 0; i <= 15; ++i )
  {
    if ( a1 == dword_1505F8[4 * i] )
      return dword_1505F8[4 * i + 2];
  }
  return -2;
}
