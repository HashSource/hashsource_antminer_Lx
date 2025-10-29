_DWORD *__fastcall new_compressor(int a1, int a2)
{
  _DWORD *v4; // r4
  int v5; // r0
  int v6; // r3
  int v7; // r12

  v4 = calloc(1u, 0x38u);
  if ( !v4 )
    puts("alloc compressor failed!");
  LOWORD(v5) = -16232;
  LOWORD(v6) = -16096;
  HIWORD(v5) = (unsigned int)&loc_E9F70 >> 16;
  HIWORD(v6) = (unsigned int)&loc_E9FF8 >> 16;
  v4[9] = v5;
  LOWORD(v7) = -16048;
  v4[10] = v6;
  LOWORD(v5) = -16032;
  LOWORD(v6) = -16424;
  HIWORD(v7) = (unsigned int)&loc_EA028 >> 16;
  HIWORD(v6) = (unsigned int)&loc_E9EB0 >> 16;
  HIWORD(v5) = (unsigned int)&loc_EA038 >> 16;
  v4[12] = v5;
  v4[11] = v7;
  v4[13] = v6;
  compressor_init(v4, a1, a2);
  return v4;
}
