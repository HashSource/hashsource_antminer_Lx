void *frontend_runtime_vbk()
{
  int v0; // r1
  _DWORD *v1; // r4
  int v2; // r0
  int v3; // r2
  int v4; // r12
  int v5; // r3
  void *v6; // r0

  LOWORD(v0) = 8712;
  LOWORD(v1) = -32312;
  LOWORD(v2) = 9624;
  HIWORD(v1) = (unsigned int)&unk_1661B0 >> 16;
  HIWORD(v0) = (unsigned int)&loc_31138 >> 16;
  HIWORD(v2) = (unsigned int)&loc_314C8 >> 16;
  LOWORD(v3) = 7456;
  v1[3] = v0;
  HIWORD(v3) = (unsigned int)&loc_30C50 >> 16;
  v1[4] = v2;
  LOWORD(v4) = 7208;
  LOWORD(v5) = -16800;
  LOWORD(v0) = -21084;
  LOWORD(v2) = -18940;
  v1[5] = v3;
  HIWORD(v4) = (unsigned int)&loc_30B58 >> 16;
  HIWORD(v5) = (unsigned int)&loc_4AD90 >> 16;
  HIWORD(v0) = (unsigned int)&loc_49CD4 >> 16;
  HIWORD(v2) = (unsigned int)&loc_4A534 >> 16;
  LOWORD(v3) = -24092;
  v1[6] = v4;
  v1[7] = v5;
  HIWORD(v3) = (unsigned int)&loc_49114 >> 16;
  v1[8] = v0;
  LOWORD(v4) = -23588;
  v1[9] = v2;
  LOWORD(v5) = -23776;
  LOWORD(v0) = -24272;
  LOWORD(v2) = -24004;
  v1[11] = v3;
  HIWORD(v4) = (unsigned int)&loc_4930C >> 16;
  HIWORD(v5) = (unsigned int)&loc_49250 >> 16;
  HIWORD(v0) = (unsigned int)&loc_49060 >> 16;
  HIWORD(v2) = (unsigned int)&loc_4916C >> 16;
  LOWORD(v3) = -22068;
  v1[12] = v4;
  HIWORD(v3) = (unsigned int)&loc_498FC >> 16;
  v1[13] = v5;
  LOWORD(v4) = -23088;
  v1[10] = v0;
  LOWORD(v5) = -19896;
  v1[14] = v2;
  LOWORD(v0) = -19808;
  LOWORD(v2) = -19824;
  v1[15] = v3;
  HIWORD(v4) = (unsigned int)&loc_49500 >> 16;
  HIWORD(v5) = (unsigned int)&loc_E9120 >> 16;
  HIWORD(v0) = (unsigned int)&loc_E9178 >> 16;
  HIWORD(v2) = (unsigned int)&loc_E9168 >> 16;
  LOWORD(v3) = 17456;
  v1[16] = v4;
  HIWORD(v3) = (unsigned int)"ten to add a port, have not set up workers, or the network was disconnected." >> 16;
  v1[20] = v5;
  v1[21] = v0;
  v1[22] = v2;
  v1[23] = v3;
  v1[24] = 60;
  v1[17] = 0;
  v1[18] = 0;
  v1[19] = 0;
  v6 = calloc(1u, 0x60u);
  return memcpy(v6, v1 + 2, 0x60u);
}
