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

  LOWORD(v3) = 5884;
  HIWORD(v3) = (unsigned int)"miner_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/backend/device/hal/power/bitmain_power_APW9.c" >> 16;
  printf(v3);
  LOWORD(v5) = 5896;
  HIWORD(v5) = (unsigned int)"ease/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/backend/device/hal/power/bitmain_power_APW9.c" >> 16;
  printf(v5, a2, *a1);
  LOWORD(v6) = 5912;
  HIWORD(v6) = (unsigned int)"s/buildroot/tmp/release/build/godminer-origin_master/backend/device/hal/power/bitmain_power_APW9.c" >> 16;
  printf(v6, a2, a1[2]);
  LOWORD(v7) = 5928;
  HIWORD(v7) = (unsigned int)"release/build/godminer-origin_master/backend/device/hal/power/bitmain_power_APW9.c" >> 16;
  printf(v7, a2, v20);
  LOWORD(v8) = 5948;
  HIWORD(v8) = (unsigned int)"er-origin_master/backend/device/hal/power/bitmain_power_APW9.c" >> 16;
  printf(v8, a2, v18);
  LOWORD(v9) = 5968;
  HIWORD(v9) = (unsigned int)"kend/device/hal/power/bitmain_power_APW9.c" >> 16;
  printf(v9, a2, v19);
  LOWORD(v10) = 5988;
  HIWORD(v10) = (unsigned int)"r/bitmain_power_APW9.c" >> 16;
  printf(v10, a2, v17);
  LOWORD(v11) = 6008;
  HIWORD(v11) = (unsigned int)".c" >> 16;
  printf(v11, a2, v21);
  LOWORD(v12) = 6032;
  HIWORD(v12) = (unsigned int)"data\n" >> 16;
  printf(v12, a2, v22);
  LOWORD(v13) = 6056;
  HIWORD(v13) = (unsigned int)"x%02x) failed, retry %d\n" >> 16;
  printf(v13, a2, v23);
  LOWORD(v14) = 6076;
  HIWORD(v14) = (unsigned int)" %d\n" >> 16;
  printf(v14, a2, a1[63]);
  LOWORD(v15) = 6092;
  HIWORD(v15) = (unsigned int)"k_data[%d] = 0x%02x" >> 16;
  return printf(v15, a2, a1[64]);
}
