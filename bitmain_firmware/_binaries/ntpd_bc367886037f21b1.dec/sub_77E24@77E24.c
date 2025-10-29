void *__fastcall sub_77E24(_DWORD *a1, char *src, size_t n)
{
  char *v4; // r9
  unsigned int v6; // r2
  size_t v7; // r3
  int v8; // r5
  char *v9; // r10
  int v11; // r4
  bool v12; // cc

  if ( !a1 )
    sub_6E8F0((int)"./../lib/isc/sha1.c", 296, 2, "context != 0");
  v4 = src;
  if ( !src )
    sub_6E8F0((int)"./../lib/isc/sha1.c", 297, 2, "data != 0");
  v6 = a1[5];
  v7 = 8 * n + v6;
  a1[5] = v7;
  if ( __CFADD__(8 * n, v6) )
    v7 = n >> 29;
  v8 = (v6 >> 3) & 0x3F;
  if ( __CFADD__(8 * n, v6) )
    a1[6] += v7 + 1;
  v9 = (char *)a1 + v8 + 28;
  if ( n + v8 > 0x3F )
  {
    v11 = 64 - v8;
    v9 = (char *)(a1 + 7);
    memcpy((char *)a1 + v8 + 28, src, 64 - v8);
    sub_768A0(a1, a1 + 7);
    if ( n > 127 - v8 )
    {
      do
      {
        sub_768A0(a1, (unsigned int *)&v4[v11]);
        v12 = n > v11 + 127;
        v11 += 64;
      }
      while ( v12 );
    }
    v4 += v11;
    n -= v11;
  }
  return memcpy(v9, v4, n);
}
