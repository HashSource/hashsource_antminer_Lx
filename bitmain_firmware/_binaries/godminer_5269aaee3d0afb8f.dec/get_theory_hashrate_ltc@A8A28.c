int __fastcall get_theory_hashrate_ltc(int a1, double *a2)
{
  float v2; // s14
  int v3; // r2
  float v4; // s15
  int v5; // r3
  int v6; // s12
  int result; // r0

  v3 = *(unsigned __int8 *)(a1 + 780);
  v4 = *(float *)(a1 + 760);
  v5 = *(_DWORD *)(a1 + 200);
  v6 = *(_DWORD *)(a1 + 196);
  if ( *(_BYTE *)(a1 + 780) )
    v2 = 91136.0;
  result = 0;
  if ( !v3 )
  {
    v4 = v4 + v4;
    v2 = 130050.0;
  }
  *a2 = (double)(8 * v5 - 5) * ((double)v6 * (float)(v4 / v2)) * 1000.0 * 1000.0;
  return result;
}
