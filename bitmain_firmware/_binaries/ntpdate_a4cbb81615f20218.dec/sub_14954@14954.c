void *__fastcall sub_14954(_DWORD *a1, const void *a2, size_t a3)
{
  int v4; // r3
  void *result; // r0

  if ( !a1 || *a1 != 1114990113 )
    sub_10788();
  v4 = a1[3];
  if ( v4 + a3 > a1[2] )
    sub_10788();
  result = memcpy((void *)(a1[1] + v4), a2, a3);
  a1[3] += a3;
  return result;
}
