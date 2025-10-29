void *__fastcall sub_1156A0(char *a1, int a2)
{
  _DWORD v5[67]; // [sp+Ch] [bp+Ch] BYREF

  sph_simd512_init(v5);
  sph_simd512((unsigned __int8 *)v5, a1, 0x40u);
  return sph_simd512_close(v5, a2);
}
