unsigned int __fastcall sub_14A2C(_DWORD *a1, char *s)
{
  unsigned int v4; // r6
  int v5; // r0
  unsigned int result; // r0

  if ( !a1 || *a1 != 1114990113 )
    sub_10788();
  if ( !s )
    sub_10788();
  v4 = strlen(s);
  v5 = a1[3];
  if ( a1[2] - v5 < v4 )
    sub_10788();
  memcpy((void *)(a1[1] + v5), s, v4);
  result = a1[3] + v4;
  a1[3] = result;
  return result;
}
