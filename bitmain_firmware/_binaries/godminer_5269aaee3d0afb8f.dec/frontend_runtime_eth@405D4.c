void *frontend_runtime_eth()
{
  int v0; // r0
  _DWORD *v1; // r4
  int v2; // r1
  int v3; // r2
  int v4; // r3
  int v5; // r12
  void *v6; // r0

  LOWORD(v0) = 5068;
  LOWORD(v1) = 24332;
  LOWORD(v2) = 5980;
  HIWORD(v1) = (unsigned int)&unk_164EFC >> 16;
  HIWORD(v0) = (unsigned int)&loc_30A14 >> 16;
  HIWORD(v2) = (unsigned int)&loc_30DA4 >> 16;
  LOWORD(v3) = 3812;
  LOWORD(v4) = 3564;
  v1[2] = v0;
  v1[3] = v2;
  HIWORD(v3) = (unsigned int)&loc_3052C >> 16;
  HIWORD(v4) = (unsigned int)&loc_30434 >> 16;
  LOWORD(v5) = -15904;
  LOWORD(v2) = -15856;
  v1[4] = v3;
  HIWORD(v5) = (unsigned int)&loc_3B7F0 >> 16;
  v1[5] = v4;
  HIWORD(v2) = (unsigned int)&loc_3B820 >> 16;
  LOWORD(v3) = -1752;
  LOWORD(v4) = -204;
  v1[6] = v5;
  v1[7] = 0x40000;
  HIWORD(v3) = (unsigned int)&loc_3EF1C >> 16;
  v1[8] = v2;
  HIWORD(v4) = (unsigned int)&loc_3F528 >> 16;
  LOWORD(v5) = -1860;
  LOWORD(v0) = -2172;
  LOWORD(v2) = -1960;
  v1[10] = v3;
  v1[11] = v4;
  HIWORD(v5) = (unsigned int)&loc_3EEBC >> 16;
  HIWORD(v0) = (unsigned int)&loc_3EDE8 >> 16;
  HIWORD(v2) = (unsigned int)&loc_3EDA4 >> 16;
  LOWORD(v3) = -17912;
  LOWORD(v4) = -1540;
  v1[12] = v5;
  HIWORD(v3) = (unsigned int)&loc_3B060 >> 16;
  v1[9] = v0;
  HIWORD(v4) = (unsigned int)&loc_3EFF0 >> 16;
  v1[13] = v2;
  LOWORD(v5) = -2180;
  LOWORD(v0) = 32424;
  LOWORD(v2) = 32420;
  v1[14] = v3;
  HIWORD(v5) = (unsigned int)&loc_3EDE0 >> 16;
  v1[15] = v4;
  HIWORD(v0) = (unsigned int)&loc_E6C88 >> 16;
  HIWORD(v2) = (unsigned int)&loc_E6C84 >> 16;
  LOWORD(v3) = 32428;
  LOWORD(v4) = 9320;
  HIWORD(v3) = (unsigned int)&loc_E6C8C >> 16;
  v1[17] = v5;
  HIWORD(v4) = (unsigned int)&unk_131044 >> 16;
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
