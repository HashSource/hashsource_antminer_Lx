_DWORD *new_siphash()
{
  _DWORD *v0; // r4
  int v1; // r0
  int v2; // r1
  __int64 v3; // r2

  v0 = calloc(1u, 0x60u);
  if ( !v0 )
    puts("siphash calloc failed!");
  LOWORD(v1) = -22740;
  LOWORD(v2) = -23160;
  LOWORD(v3) = -22840;
  WORD2(v3) = -23204;
  HIWORD(v1) = (unsigned int)&loc_E94DC >> 16;
  HIWORD(v2) = (unsigned int)&loc_E9338 >> 16;
  WORD1(v3) = (unsigned int)&loc_E9478 >> 16;
  HIWORD(v3) = (unsigned int)&loc_E930C >> 16;
  v0[18] = v1;
  v0[19] = v2;
  *((_QWORD *)v0 + 10) = v3;
  return v0;
}
