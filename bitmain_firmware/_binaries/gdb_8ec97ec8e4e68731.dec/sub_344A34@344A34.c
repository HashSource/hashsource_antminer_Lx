unsigned int __fastcall sub_344A34(_DWORD *a1, void *s, unsigned int a3, size_t n)
{
  unsigned int v4; // r7
  unsigned int v5; // r4
  int v8; // r5
  int v9; // t1

  v4 = *(_DWORD *)(*a1 - 12);
  if ( a3 >= v4 )
    return -1;
  v5 = a3;
  if ( n )
  {
    v8 = *a1 + a3 - 1;
    while ( 1 )
    {
      v9 = *(unsigned __int8 *)++v8;
      if ( !memchr(s, v9, n) )
        break;
      if ( ++v5 == v4 )
        return -1;
    }
  }
  return v5;
}
