int __fastcall chip_setting_seed_x7(int a1, const void *a2, unsigned __int8 a3, void *a4, unsigned __int8 a5)
{
  unsigned __int8 src[5]; // [sp+10h] [bp-20Ch] BYREF
  unsigned __int8 v9; // [sp+15h] [bp-207h]
  __int16 v10; // [sp+16h] [bp-206h]
  int v11; // [sp+18h] [bp-204h] BYREF

  src[0] = 85;
  src[1] = -86;
  src[2] = 2;
  src[3] = a5;
  src[4] = -1;
  v9 = a3;
  v10 = 0;
  memcpy(&v11, a2, a3);
  v10 = BM_CRC16((char *)src, v9 + 8);
  memcpy(a4, src, v9 + 8);
  return set_chip_reg_x7(a1, src);
}
