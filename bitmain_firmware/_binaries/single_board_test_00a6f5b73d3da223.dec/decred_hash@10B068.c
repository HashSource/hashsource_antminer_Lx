void *__fastcall decred_hash(int a1, char *a2)
{
  _DWORD v5[31]; // [sp+Ch] [bp+Ch] BYREF

  set_total_hash_rate(14);
  sph_blake256_init(v5);
  sph_blake256((unsigned int)v5, a2, 0xB4u);
  return sph_blake256_close(v5, a1);
}
