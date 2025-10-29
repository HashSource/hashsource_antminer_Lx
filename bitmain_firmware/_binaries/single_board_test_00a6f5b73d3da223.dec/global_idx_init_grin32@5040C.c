int __fastcall global_idx_init_grin32(int a1)
{
  int v1; // r3
  void *s; // [sp+Ch] [bp+Ch]

  s = malloc(0xDF01u);
  memset(s, 0, 0xDF01u);
  *(_DWORD *)(a1 + 624) = s;
  printf("__custom_data init %p\n", s);
  return v1;
}
