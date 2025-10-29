void *__fastcall sub_1155B8(char *a1, void *a2)
{
  _DWORD v5[52]; // [sp+8h] [bp+8h] BYREF

  sph_jh512_init(v5);
  sph_jh512((int)v5, a1, 0x40u);
  return sph_jh512_close((int)v5, a2);
}
