int __fastcall sub_743AC(int a1, int a2)
{
  int i; // [sp+14h] [bp+Ch]

  printf("nonce wc %d\n", *(unsigned __int8 *)(a2 + 48));
  printf("nonce: %08x\n", *(_DWORD *)(a2 + 81));
  printf(
    "chain %d asic %d core %d addr_interval %d\n",
    *(_DWORD *)(a1 + 136),
    *(_DWORD *)(a2 + 8),
    *(_DWORD *)(a2 + 12),
    *(_DWORD *)(a1 + 240));
  printf("sols[%3d]: ", *(_WORD *)(a2 + 85) >> 2);
  for ( i = 0; *(_WORD *)(a2 + 85) >> 2 > i; ++i )
    printf("%08x ", *(_DWORD *)(4 * (i + 20) + a2 + 7));
  return putchar(10);
}
