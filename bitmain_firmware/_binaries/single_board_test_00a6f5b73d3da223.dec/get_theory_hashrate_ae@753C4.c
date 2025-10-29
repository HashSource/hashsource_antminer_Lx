int __fastcall get_theory_hashrate_ae(int a1, double *a2)
{
  if ( *(_BYTE *)(a1 + 268) )
    *a2 = *(double *)(a1 + 280);
  else
    *a2 = (double)*(int *)(a1 + 272) * 4.0 / (double)*(unsigned int *)(a1 + 204) * 1000.0 * 1000.0;
  return 0;
}
