void *__fastcall sub_109350(int a1, const void *a2, const void *a3)
{
  void *result; // r0

  memcpy((void *)(a1 + 136), a2, 0x40u);
  result = memcpy((void *)(a1 + 200), a3, 0x20u);
  *(_DWORD *)(a1 + 240) = 0;
  *(_DWORD *)(a1 + 244) = 0;
  *(_QWORD *)(a1 + 232) = *(_QWORD *)(a1 + 240);
  *(_DWORD *)(a1 + 128) = 0;
  return result;
}
