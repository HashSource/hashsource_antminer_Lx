int __fastcall decred_hash(int a1, char *a2)
{
  unsigned int v5[32]; // [sp+4h] [bp-80h] BYREF

  blake256_rounds = 14;
  sub_C2BC8(v5, dword_13FE08);
  sph_blake224_0(v5, a2, 0xB4u);
  return sph_blake256_addbits_and_close(v5, 0, 0, a1);
}
