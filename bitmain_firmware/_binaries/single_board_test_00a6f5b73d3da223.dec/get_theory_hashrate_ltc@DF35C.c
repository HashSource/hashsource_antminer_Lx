int __fastcall get_theory_hashrate_ltc(int a1, double *a2)
{
  *a2 = (double)*(int *)(a1 + 196)
      * (float)((float)(*(float *)(a1 + 760) + *(float *)(a1 + 760)) / 130050.0)
      * (double)(8 * *(_DWORD *)(a1 + 200) - 5)
      * 1000.0
      * 1000.0;
  return 0;
}
