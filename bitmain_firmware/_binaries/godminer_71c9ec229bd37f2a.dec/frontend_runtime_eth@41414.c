void *frontend_runtime_eth()
{
  int v0; // r0
  _DWORD *v1; // r4
  int v2; // r1
  int v3; // r2
  int v4; // r3
  int v5; // r12
  void *v6; // r0

  LOWORD(v0) = 8712;
  LOWORD(v1) = 32548;
  LOWORD(v2) = 9624;
  HIWORD(v1) = (unsigned int)&unk_165F0C >> 16;
  HIWORD(v0) = (unsigned int)&loc_31138 >> 16;
  HIWORD(v2) = (unsigned int)&loc_314C8 >> 16;
  LOWORD(v3) = 7456;
  LOWORD(v4) = 7208;
  v1[2] = v0;
  v1[3] = v2;
  HIWORD(v3) = (unsigned int)&loc_30C50 >> 16;
  HIWORD(v4) = (unsigned int)&loc_30B58 >> 16;
  LOWORD(v5) = -12256;
  LOWORD(v2) = -12208;
  v1[4] = v3;
  HIWORD(v5) = (unsigned int)&loc_3BF54 >> 16;
  v1[5] = v4;
  HIWORD(v2) = (unsigned int)&loc_3BF84 >> 16;
  v1[6] = v5;
  v1[7] = 265792;
  v1[8] = v2;
  v1[10] = 264040;
  v1[11] = 265588;
  LOWORD(v3) = -14264;
  v1[12] = 263932;
  HIWORD(v3) = (unsigned int)&loc_3B77C >> 16;
  v1[9] = 263620;
  v1[13] = 263832;
  LOWORD(v0) = -25640;
  LOWORD(v2) = -25644;
  v1[14] = v3;
  v1[15] = 264252;
  HIWORD(v0) = (unsigned int)&loc_E7AA0 >> 16;
  HIWORD(v2) = (unsigned int)&loc_E7A9C >> 16;
  LOWORD(v3) = -25636;
  LOWORD(v4) = 17456;
  HIWORD(v3) = (unsigned int)&loc_E7AA4 >> 16;
  v1[17] = 263612;
  HIWORD(v4) = (unsigned int)"ten to add a port, have not set up workers, or the network was disconnected." >> 16;
  v1[19] = v0;
  v1[20] = v2;
  v1[21] = v3;
  v1[22] = v4;
  v1[23] = 120;
  v1[16] = 0;
  v1[18] = 0;
  v6 = calloc(1u, 0x60u);
  return memcpy(v6, v1 + 1, 0x60u);
}
