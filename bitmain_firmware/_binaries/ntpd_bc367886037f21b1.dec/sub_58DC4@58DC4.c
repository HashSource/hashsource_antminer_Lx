__int16 *__fastcall sub_58DC4(int a1, int a2)
{
  int *v3; // r4
  char v4; // r1
  int v5; // r2
  int v6; // r3

  v3 = *(int **)(a2 + 84);
  v4 = *((_BYTE *)v3 + 768);
  ++v3[194];
  v5 = v3[49];
  v6 = *v3;
  if ( (v4 & 8) != 0 && *(unsigned __int8 *)(v6 + 12) > v5 )
    *(_BYTE *)(v6 + 13) = 15;
  *(_BYTE *)(v6 + 12) = v5;
  if ( v3[54] == v3[55] )
    return sub_3918C((__int16 *)a2, 1);
  sub_39A1C(a2);
  return (__int16 *)sub_41CA4(a2 + 16, (const char *)v3 + 56);
}
