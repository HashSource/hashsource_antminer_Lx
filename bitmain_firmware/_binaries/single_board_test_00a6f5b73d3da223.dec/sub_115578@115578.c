_DWORD *__fastcall sub_115578(char *a1, void *a2)
{
  _DWORD v5[68]; // [sp+8h] [bp+8h] BYREF

  sph_groestl512_init(v5);
  sph_groestl512((int)v5, a1, 0x40u);
  return sph_groestl512_close((int)v5, a2);
}
