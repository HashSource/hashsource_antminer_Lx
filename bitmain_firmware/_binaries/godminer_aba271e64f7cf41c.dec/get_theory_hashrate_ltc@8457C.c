int __fastcall get_theory_hashrate_ltc(int a1, double *a2)
{
  *a2 = (double)*(int *)(a1 + 336) * (*(float *)(a1 + 1104) / 50176.0) * 2048.0 * 1000.0 * 1000.0;
  return 0;
}
