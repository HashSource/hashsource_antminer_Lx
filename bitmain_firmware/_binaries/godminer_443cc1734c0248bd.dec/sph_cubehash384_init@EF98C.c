void *__fastcall sph_cubehash384_init(int a1)
{
  void *result; // r0

  result = memcpy((void *)(a1 + 36), &unk_149994, 0x80u);
  *(_DWORD *)(a1 + 32) = 0;
  return result;
}
