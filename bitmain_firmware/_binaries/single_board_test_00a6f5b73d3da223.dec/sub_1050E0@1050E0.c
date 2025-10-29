void *__fastcall sub_1050E0(_DWORD *a1, const void *a2, const void *a3)
{
  void *result; // r0

  memcpy(a1 + 17, a2, 0x20u);
  result = memcpy(a1 + 25, a3, 0x10u);
  a1[30] = 0;
  a1[29] = a1[30];
  a1[16] = 0;
  return result;
}
