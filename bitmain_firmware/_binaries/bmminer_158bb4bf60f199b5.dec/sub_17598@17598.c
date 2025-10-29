int __fastcall sub_17598(int a1, char a2)
{
  _DWORD *v3; // r4
  int i; // r5
  int v6; // r1
  int result; // r0

  v3 = &dword_9F80C[27 * a1];
  for ( i = 0; i != 4; ++i )
  {
    v6 = *((unsigned __int8 *)v3 + 13);
    v3 += 6;
    result = sub_1A958(a1, v6, 0, a2);
  }
  return result;
}
