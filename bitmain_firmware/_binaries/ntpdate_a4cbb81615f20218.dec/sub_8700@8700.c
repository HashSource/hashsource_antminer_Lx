int __fastcall sub_8700(int a1, int a2, int a3, unsigned int a4)
{
  int v8; // r0
  bool v9; // cc

  ++authdecryptions;
  if ( !a1 )
    return 0;
  v8 = sub_7EF4(a1);
  v9 = v8 != 0;
  if ( v8 )
    v9 = a4 > 3;
  if ( v9 )
    return sub_1307C(cache_type, cache_secret, cache_secretsize, a2, a3, a4);
  else
    return 0;
}
