int __fastcall global_idx_init_ckb2(int a1)
{
  void *v2; // r0

  v2 = calloc(0x3E08u, 1u);
  *(_DWORD *)(a1 + 632) = v2;
  printf("__custom_data init %p\n", v2);
  return 0;
}
