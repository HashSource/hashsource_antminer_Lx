void *__fastcall sph_cubehash384_addbits_and_close(_DWORD *a1, char a2, char a3, _WORD *a4)
{
  void *result; // r0

  sub_EC700(a1, a2, a3, a4, 12);
  result = memcpy(a1 + 9, &unk_149994, 0x80u);
  a1[8] = 0;
  return result;
}
