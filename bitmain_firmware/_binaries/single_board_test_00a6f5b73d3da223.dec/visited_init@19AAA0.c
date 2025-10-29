void *__fastcall visited_init(_DWORD *a1, unsigned int a2)
{
  void *result; // r0

  a1[2] = 32;
  a1[1] = a2 / a1[2];
  result = calloc(a1[1], 4u);
  *a1 = result;
  return result;
}
