int __fastcall global_idx_init_grin32(int a1)
{
  void *v2; // r1
  const char *v3; // r0

  v2 = calloc(0xDF01u, 1u);
  LOWORD(v3) = 26672;
  *(_DWORD *)(a1 + 624) = v2;
  HIWORD(v3) = (unsigned int)"chip baud detected as %d" >> 16;
  return printf(v3);
}
