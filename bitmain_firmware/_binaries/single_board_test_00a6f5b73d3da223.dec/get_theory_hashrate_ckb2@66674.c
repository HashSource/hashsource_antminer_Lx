int __fastcall get_theory_hashrate_ckb2(int a1, double *a2)
{
  *a2 = *(float *)(a1 + 760) * 352.0 * 1000.0 * 1000.0;
  return 0;
}
