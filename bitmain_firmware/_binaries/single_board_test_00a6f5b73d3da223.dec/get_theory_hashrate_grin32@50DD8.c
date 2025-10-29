int __fastcall get_theory_hashrate_grin32(int a1, double *a2)
{
  if ( *(_BYTE *)(a1 + 268) )
    *a2 = *(double *)(a1 + 280);
  else
    *a2 = (double)*(int *)(a1 + 272) * 0.5 / (double)*(unsigned int *)(a1 + 204) * 1000.0 * 1000.0;
  return 0;
}
