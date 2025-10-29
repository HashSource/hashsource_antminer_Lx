int __fastcall sub_662C8(int a1, int a2)
{
  unsigned __int8 v3; // [sp+Bh] [bp+Bh]
  int i; // [sp+Ch] [bp+Ch]

  v3 = 1;
  for ( i = 0; i <= 31; ++i )
  {
    if ( *(unsigned __int8 *)(i + a1) < (unsigned int)*(unsigned __int8 *)(i + a2) )
      return 1;
    if ( *(unsigned __int8 *)(i + a1) > (unsigned int)*(unsigned __int8 *)(i + a2) )
      return 0;
  }
  return v3;
}
