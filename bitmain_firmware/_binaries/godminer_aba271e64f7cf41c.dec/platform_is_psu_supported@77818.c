int __fastcall platform_is_psu_supported(__int16 a1)
{
  int i; // [sp+Ch] [bp-8h]

  for ( i = 0; i < dword_16129C; ++i )
  {
    if ( a1 == *(_WORD *)(dword_1612B4 + 2 * i) )
      return 1;
  }
  return 0;
}
