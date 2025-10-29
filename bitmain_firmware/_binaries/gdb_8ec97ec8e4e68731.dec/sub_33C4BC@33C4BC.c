size_t __fastcall sub_33C4BC(int *a1, _BYTE *dest, size_t n, unsigned int a4)
{
  unsigned int v4; // r4
  size_t v5; // r4
  int v6; // r2

  v4 = a1[1];
  if ( a4 > v4 )
    sub_33D20C("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::copy", a4, a1[1]);
  v5 = v4 - a4;
  if ( v5 >= n )
    v5 = n;
  if ( !v5 )
    return v5;
  v6 = *a1;
  if ( v5 != 1 )
  {
    memcpy(dest, (const void *)(*a1 + a4), v5);
    return v5;
  }
  *dest = *(_BYTE *)(v6 + a4);
  return 1;
}
