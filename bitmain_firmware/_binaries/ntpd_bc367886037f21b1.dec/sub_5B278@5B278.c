__int16 *__fastcall sub_5B278(int a1, int a2)
{
  const char *v3; // r4
  int v4; // r1

  v3 = *(const char **)(a2 + 84);
  v4 = *(_DWORD *)v3;
  ++*((_DWORD *)v3 + 194);
  *(_DWORD *)(v4 + 8) = 0;
  if ( write(*((_DWORD *)v3 + 7), "TQ", 2u) != 2 )
    sub_3918C((__int16 *)a2, 3);
  if ( *((_DWORD *)v3 + 54) == *((_DWORD *)v3 + 55) )
    return sub_3918C((__int16 *)a2, 1);
  sub_39A1C(a2);
  return (__int16 *)sub_41CA4(a2 + 16, v3 + 56);
}
