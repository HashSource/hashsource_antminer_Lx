_DWORD *__fastcall new_iterator_c_map(int a1)
{
  _DWORD *result; // r0
  int v3; // r12
  int v4; // r1
  int v5; // r2

  result = malloc(0x18u);
  LOWORD(v3) = -18764;
  LOWORD(v4) = -18888;
  LOWORD(v5) = -18860;
  HIWORD(v3) = (unsigned int)&loc_BA204 >> 16;
  HIWORD(v4) = (unsigned int)&loc_BA188 >> 16;
  HIWORD(v5) = (unsigned int)&loc_BA1A4 >> 16;
  result[3] = a1;
  *result = v3;
  result[2] = v4;
  result[1] = v5;
  result[4] = 0;
  result[5] = 0;
  return result;
}
