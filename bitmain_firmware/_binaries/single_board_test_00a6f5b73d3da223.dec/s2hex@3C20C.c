int __cdecl s2hex(unsigned __int8 *dst, const char *src, int inlen)
{
  int v7; // [sp+14h] [bp+14h]
  int v8; // [sp+18h] [bp+18h]
  int i; // [sp+1Ch] [bp+1Ch]

  if ( src && inlen > 0 && dst )
  {
    v8 = inlen / 2;
    v7 = inlen & 1;
    for ( i = 0; i < v8; ++i )
      dst[i] = twoc2hex(src[2 * i], src[2 * i + 1]);
    if ( v7 )
      dst[i] = twoc2hex(src[2 * i], 0);
    return v7 + v8;
  }
  else
  {
    printf("s2hex para error dst(%p), src(%p), inlen(%d)\n", dst, src, inlen);
    return -1;
  }
}
