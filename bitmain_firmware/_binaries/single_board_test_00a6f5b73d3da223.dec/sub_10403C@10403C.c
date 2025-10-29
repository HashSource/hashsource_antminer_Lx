int __fastcall sub_10403C(int a1, int a2, unsigned int a3, int a4, int a5, unsigned int a6, __int64 a7)
{
  unsigned int *v7; // r5
  unsigned int v8; // r1
  int result; // r0

  memset((void *)(a1 + 40), 0, 0x20u);
  v7 = (unsigned int *)(a2 + a3 - 8);
  *v7 = _bswap_64(a5, a6);
  v7[1] = v8;
  result = blake2b((_DWORD *)(a1 + 40), a2, a3);
  *(_QWORD *)(a1 + 32) = a7;
  return result;
}
