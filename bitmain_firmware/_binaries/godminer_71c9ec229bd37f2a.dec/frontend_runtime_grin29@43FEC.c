void *frontend_runtime_grin29()
{
  int v0; // r1
  _DWORD *v1; // r4
  int v2; // r0
  int v3; // r2
  int v4; // r12
  int v5; // r3
  void *v6; // r0

  LOWORD(v0) = 8712;
  LOWORD(v1) = 32648;
  LOWORD(v2) = 9624;
  HIWORD(v1) = (unsigned int)&unk_165F70 >> 16;
  HIWORD(v0) = (unsigned int)&loc_31138 >> 16;
  HIWORD(v2) = (unsigned int)&loc_314C8 >> 16;
  LOWORD(v3) = 7456;
  v1[2] = v0;
  HIWORD(v3) = (unsigned int)&loc_30C50 >> 16;
  v1[3] = v2;
  LOWORD(v4) = 7208;
  LOWORD(v5) = -12256;
  LOWORD(v0) = 10416;
  LOWORD(v2) = -12208;
  v1[4] = v3;
  HIWORD(v4) = (unsigned int)&loc_30B58 >> 16;
  HIWORD(v5) = (unsigned int)&loc_3BF54 >> 16;
  HIWORD(v0) = (unsigned int)&loc_417E0 >> 16;
  HIWORD(v2) = (unsigned int)&loc_3BF84 >> 16;
  LOWORD(v3) = 5744;
  v1[5] = v4;
  v1[6] = v5;
  HIWORD(v3) = (unsigned int)&loc_405A0 >> 16;
  v1[7] = v0;
  LOWORD(v4) = 6048;
  v1[8] = v2;
  LOWORD(v5) = 5572;
  LOWORD(v0) = 6440;
  LOWORD(v2) = 5432;
  v1[10] = v3;
  HIWORD(v4) = (unsigned int)&loc_406D0 >> 16;
  HIWORD(v5) = (unsigned int)&loc_404F4 >> 16;
  HIWORD(v0) = (unsigned int)&loc_40858 >> 16;
  HIWORD(v2) = (unsigned int)&loc_40468 >> 16;
  LOWORD(v3) = -14264;
  v1[11] = v4;
  HIWORD(v3) = (unsigned int)&loc_3B77C >> 16;
  v1[12] = v5;
  LOWORD(v4) = 8956;
  v1[9] = v0;
  LOWORD(v5) = -23456;
  v1[13] = v2;
  LOWORD(v0) = -23528;
  LOWORD(v2) = -23448;
  v1[14] = v3;
  HIWORD(v4) = (unsigned int)&loc_4122C >> 16;
  HIWORD(v5) = (unsigned int)&loc_E8338 >> 16;
  HIWORD(v0) = (unsigned int)&loc_E82F0 >> 16;
  HIWORD(v2) = (unsigned int)&loc_E8340 >> 16;
  v1[15] = v4;
  v1[19] = v5;
  v1[20] = v0;
  v1[21] = v2;
  v1[22] = 1254176;
  v1[23] = 60;
  v1[16] = 0;
  v1[17] = 0;
  v1[18] = 0;
  v6 = calloc(1u, 0x60u);
  return memcpy(v6, v1 + 1, 0x60u);
}
