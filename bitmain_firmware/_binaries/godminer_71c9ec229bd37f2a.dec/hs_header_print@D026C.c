int __fastcall hs_header_print(_DWORD *a1, const char *a2)
{
  const char *v3; // r0
  const char *v5; // r0
  const char *v6; // r0
  const char *v7; // r0
  const char *v8; // r0
  const char *v9; // r0
  const char *v10; // r0
  const char *v11; // r0
  const char *v12; // r0
  const char *v13; // r0
  const char *v14; // r0
  const char *v15; // r0
  _BYTE v17[52]; // [sp+4h] [bp-1D0h] BYREF
  _BYTE v18[68]; // [sp+38h] [bp-19Ch] BYREF
  _BYTE v19[68]; // [sp+7Ch] [bp-158h] BYREF
  _BYTE v20[68]; // [sp+C0h] [bp-114h] BYREF
  _BYTE v21[68]; // [sp+104h] [bp-D0h] BYREF
  _BYTE v22[68]; // [sp+148h] [bp-8Ch] BYREF
  _BYTE v23[72]; // [sp+18Ch] [bp-48h] BYREF

  LOWORD(v3) = 14572;
  HIWORD(v3) = (unsigned int)"ener not registered before\n" >> 16;
  printf(v3);
  LOWORD(v5) = 14584;
  HIWORD(v5) = (unsigned int)"istered before\n" >> 16;
  printf(v5, a2, *a1);
  LOWORD(v6) = 14600;
  HIWORD(v6) = (unsigned int)"failed to init %s\n" >> 16;
  printf(v6, a2, a1[2]);
  LOWORD(v7) = 14616;
  HIWORD(v7) = (unsigned int)"s\n" >> 16;
  printf(v7, a2, v20);
  LOWORD(v8) = 14636;
  HIWORD(v8) = (unsigned int)"" >> 16;
  printf(v8, a2, v18);
  LOWORD(v9) = 14656;
  HIWORD(v9) = (unsigned int)"get_chip_bin" >> 16;
  printf(v9, a2, v19);
  LOWORD(v10) = 14676;
  HIWORD(v10) = (unsigned int)"chip_ft" >> 16;
  printf(v10, a2, v17);
  LOWORD(v11) = 14696;
  HIWORD(v11) = (unsigned int)"get_test_standard_code" >> 16;
  printf(v11, a2, v21);
  LOWORD(v12) = 14720;
  HIWORD(v12) = (unsigned int)"get_test_standard_code" >> 16;
  printf(v12, a2, v22);
  LOWORD(v13) = 14744;
  HIWORD(v13) = (unsigned int)"get_chip_sn" >> 16;
  printf(v13, a2, v23);
  LOWORD(v14) = 14764;
  HIWORD(v14) = (unsigned int)"_sn" >> 16;
  printf(v14, a2, a1[63]);
  LOWORD(v15) = 14780;
  HIWORD(v15) = (unsigned int)"crc_pass" >> 16;
  return printf(v15, a2, a1[64]);
}
