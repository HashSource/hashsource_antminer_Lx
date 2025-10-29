_DWORD *__fastcall sub_115628(char *a1, void *a2)
{
  _DWORD v5[70]; // [sp+8h] [bp+8h] BYREF

  sph_echo512_init(v5);
  sph_echo512(v5, a1, 0x40u);
  return sph_echo512_close(v5, a2);
}
