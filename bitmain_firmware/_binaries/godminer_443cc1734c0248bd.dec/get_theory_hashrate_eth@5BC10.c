int __fastcall get_theory_hashrate_eth(int a1, __int64 *a2)
{
  __int64 v2; // r2

  if ( *(_BYTE *)(a1 + 268) )
    v2 = *(_QWORD *)(a1 + 280);
  else
    v2 = 0x41D1F39696969697LL;
  *a2 = v2;
  return 0;
}
