int __fastcall get_theory_hashrate_eth(int a1, double *a2)
{
  if ( *(_BYTE *)(a1 + 268) )
    *a2 = *(double *)(a1 + 280);
  else
    *a2 = 51200.0 / (double)0x1A9u * 10.0 * 1000.0 * 1000.0;
  return 0;
}
