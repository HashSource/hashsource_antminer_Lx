int __fastcall sub_FAB28(int a1, unsigned int *a2, int a3, unsigned int *a4, int a5)
{
  int result; // r0
  int v6; // r1
  int v8; // r1
  int v14; // [sp+14h] [bp+14h]

  v14 = 1;
  for ( result = sub_FAAD4(a1, 0, *a2, *a4); a3--; result = sub_FAAD4(a1, v6, a2[(a3 + 1) & 0xFFFFFFFE], a2[a3 | 1]) )
    v6 = v14++;
  while ( a5-- )
  {
    v8 = v14++;
    result = sub_FAAD4(a1, v8, a4[a5 | 1], a4[(a5 + 1) & 0xFFFFFFFE]);
  }
  if ( v14 == 42 )
    gSols[172 * a1] = 1;
  return result;
}
