void *__fastcall sph_simd512_addbits_and_close(_DWORD *a1, char a2, int a3, int a4)
{
  void *result; // r0

  sub_12BDA8(a1, a2, a3, a4, 16);
  result = memcpy(a1 + 33, &unk_152578, 0x80u);
  a1[66] = 0;
  a1[65] = 0;
  a1[32] = 0;
  return result;
}
