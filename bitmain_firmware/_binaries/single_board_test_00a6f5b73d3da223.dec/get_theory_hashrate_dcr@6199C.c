int __fastcall get_theory_hashrate_dcr(int a1, double *a2)
{
  *a2 = *(float *)(a1 + 760) * 760.0 * 1000.0 * 1000.0;
  return 0;
}
