int __fastcall global_idx_init_dcr(int a1)
{
  void *s; // [sp+Ch] [bp+Ch]

  s = malloc(0x8008u);
  memset(s, 0, 0x8008u);
  *(_DWORD *)(a1 + 624) = s;
  printf("__custom_data init %p\n", s);
  return 0;
}
