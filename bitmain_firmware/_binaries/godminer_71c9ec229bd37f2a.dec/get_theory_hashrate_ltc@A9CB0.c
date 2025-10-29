int __fastcall get_theory_hashrate_ltc(int a1, double *a2)
{
  int v2; // s15
  int v3; // r2
  int v4; // r3
  int v5; // s12
  int result; // r0
  float v7; // s15
  float v8; // s14
  int v9; // r3
  double v10; // d6

  v2 = *(_DWORD *)(a1 + 280);
  v3 = *(unsigned __int8 *)(a1 + 788);
  v4 = *(_DWORD *)(a1 + 208);
  v5 = *(_DWORD *)(a1 + 204);
  result = 0;
  v7 = (float)v2;
  if ( v3 )
    v8 = 91136.0;
  else
    v8 = 130050.0;
  v9 = 8 * v4;
  v10 = (double)v5;
  if ( !v3 )
    v7 = v7 + v7;
  *a2 = (double)(v9 - 5) * (v10 * (float)(v7 / v8)) * 1000.0 * 1000.0;
  return result;
}
