size_t __fastcall sub_623CC(size_t result, int a2, int a3)
{
  unsigned int v5; // r3
  bool v6; // zf
  unsigned int v7; // r2

  v5 = a3 & 0xFFFFFFFC;
  v6 = result == 0;
  v7 = bswap32(result);
  if ( !result )
    result = 4;
  ++authencryptions;
  *(_DWORD *)(a2 + v5) = v7;
  if ( !v6 )
  {
    result = sub_61C88(result);
    if ( result )
      return sub_6030C(cache_type, cache_secret, cache_secretsize, a2, a3);
  }
  return result;
}
