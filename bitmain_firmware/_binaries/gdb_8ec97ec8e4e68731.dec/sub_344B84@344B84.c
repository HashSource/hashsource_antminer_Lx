int __fastcall sub_344B84(const void **a1, const void **a2)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r1
  size_t v4; // r5
  size_t v5; // r4
  size_t v6; // r2
  int result; // r0

  v2 = *a1;
  v3 = *a2;
  v4 = *(v2 - 3);
  v5 = *(v3 - 3);
  v6 = v5;
  if ( v5 >= v4 )
    v6 = *(v2 - 3);
  if ( !v6 )
    return v4 - v5;
  result = memcmp(v2, v3, v6);
  if ( !result )
    return v4 - v5;
  return result;
}
