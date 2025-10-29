int __fastcall sub_6ED48(int a1, int a2)
{
  int v5; // [sp+10h] [bp+8h]
  unsigned int i; // [sp+14h] [bp+Ch]

  v5 = a2 + 35;
  printf("nonce wc %d\n", *(unsigned __int8 *)(a2 + 16));
  printf("nonce: %llx\n", *(_QWORD *)(a2 + 25));
  printf(
    "chain %d asic %d core %d addr_interval %d\n",
    *(_DWORD *)(a1 + 136),
    *(_DWORD *)(a2 + 8),
    *(_DWORD *)(a2 + 12),
    *(_DWORD *)(a1 + 240));
  printf("order len %d, order: ", *(unsigned __int16 *)(a2 + 33));
  for ( i = 0; *(unsigned __int16 *)(a2 + 33) > i; ++i )
    printf("%02x ", *(unsigned __int8 *)(i + v5));
  return putchar(10);
}
