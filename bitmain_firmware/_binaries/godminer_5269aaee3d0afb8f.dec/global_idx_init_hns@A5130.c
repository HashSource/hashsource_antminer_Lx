int __fastcall global_idx_init_hns(int a1)
{
  void *v2; // r1
  const char *v3; // r0

  v2 = calloc(0xA608u, 1u);
  LOWORD(v3) = 26672;
  *(_DWORD *)(a1 + 624) = v2;
  HIWORD(v3) = (unsigned int)"chip baud detected as %d" >> 16;
  printf(v3);
  return 0;
}
