void *__fastcall sub_19B854(int a1, const void *a2)
{
  void *result; // r0

  result = memcpy((void *)(a1 + 36), a2, 0x80u);
  *(_DWORD *)(a1 + 32) = 0;
  return result;
}
