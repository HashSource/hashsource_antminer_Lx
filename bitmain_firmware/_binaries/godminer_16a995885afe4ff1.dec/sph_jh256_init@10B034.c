void *__fastcall sph_jh256_init(int a1)
{
  void *result; // r0

  *(_DWORD *)(a1 + 64) = 0;
  result = memcpy((void *)(a1 + 72), &unk_1505D0, 0x80u);
  *(_QWORD *)(a1 + 200) = 0;
  return result;
}
