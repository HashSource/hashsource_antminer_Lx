int __fastcall global_idx_init_ckb(int a1)
{
  void *s; // [sp+Ch] [bp+Ch]

  s = malloc(0x7C08u);
  memset(s, 0, 0x7C08u);
  *(_DWORD *)(a1 + 624) = s;
  printf("__custom_data init %p\n", s);
  return 0;
}
