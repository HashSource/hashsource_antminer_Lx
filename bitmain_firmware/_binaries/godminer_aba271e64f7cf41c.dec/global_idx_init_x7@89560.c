int __fastcall global_idx_init_x7(int a1)
{
  _BYTE *s; // [sp+Ch] [bp-8h]

  s = malloc(0xBF88u);
  memset(s, 0, 0xBF88u);
  s[49024] = 1;
  *(_DWORD *)(a1 + 824) = s;
  printf("__custom_data init %p\n", s);
  return 0;
}
