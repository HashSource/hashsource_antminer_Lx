void *__fastcall sph_cubehash512_init(int a1)
{
  void *result; // r0

  result = memcpy((void *)(a1 + 36), &unk_14B014, 0x80u);
  *(_DWORD *)(a1 + 32) = 0;
  return result;
}
