int __fastcall sweep_check_nonce_ltc(int a1, int a2, int a3, int a4)
{
  int v7; // r2
  int v9[8]; // [sp+0h] [bp-70h] BYREF
  _DWORD dest[20]; // [sp+20h] [bp-50h] BYREF

  memcpy(dest, (const void *)(*(_DWORD *)(a1 + 632) + 80 * *(unsigned __int8 *)(a2 + 85) + 9216), sizeof(dest));
  dest[19] = bswap32(*(_DWORD *)(a2 + 80));
  scrypt_regenhash(v9, (int)dest);
  if ( (unsigned int)target_to_diff_ltc((int)v9) <= 0x1A )
  {
    v7 = dword_16DF70;
    ++*(_DWORD *)(a4 + 4 * a3);
    dword_16DF70 = v7 + 1;
  }
  return 0;
}
