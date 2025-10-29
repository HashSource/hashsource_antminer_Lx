int __fastcall global_idx_init_vbk(int a1)
{
  void *s; // [sp+Ch] [bp+Ch]

  s = malloc(0x7008u);
  memset(s, 0, 0x7008u);
  *(_DWORD *)(a1 + 624) = s;
  printf("__custom_data init %p\n", s);
  return 0;
}
