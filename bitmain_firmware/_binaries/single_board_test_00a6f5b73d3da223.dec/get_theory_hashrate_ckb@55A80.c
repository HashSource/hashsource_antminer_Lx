int __fastcall get_theory_hashrate_ckb(int a1, double *a2)
{
  if ( *(_BYTE *)(a1 + 268) )
    *a2 = *(double *)(a1 + 280) * 1000.0 * 1000.0 * 1000.0;
  else
    *a2 = *(float *)(a1 + 760) * 540.0 * 1000.0 * 1000.0;
  return 0;
}
