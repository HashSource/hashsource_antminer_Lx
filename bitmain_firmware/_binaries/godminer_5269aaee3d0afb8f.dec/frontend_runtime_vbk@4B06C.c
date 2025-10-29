void *frontend_runtime_vbk()
{
  int v0; // r1
  _DWORD *v1; // r4
  int v2; // r0
  int v3; // r2
  int v4; // r12
  int v5; // r3
  void *v6; // r0

  LOWORD(v0) = 5068;
  LOWORD(v1) = 25008;
  LOWORD(v2) = 5980;
  HIWORD(v1) = (unsigned int)&g_miner_type[216] >> 16;
  HIWORD(v0) = (unsigned int)&loc_30A14 >> 16;
  HIWORD(v2) = (unsigned int)&loc_30DA4 >> 16;
  LOWORD(v3) = 3812;
  v1[3] = v0;
  HIWORD(v3) = (unsigned int)&loc_3052C >> 16;
  v1[4] = v2;
  LOWORD(v4) = 3564;
  LOWORD(v5) = -20448;
  LOWORD(v0) = -24732;
  LOWORD(v2) = -22588;
  v1[5] = v3;
  HIWORD(v4) = (unsigned int)&loc_30434 >> 16;
  HIWORD(v5) = (unsigned int)&loc_4A61C >> 16;
  HIWORD(v0) = (unsigned int)&loc_49558 >> 16;
  HIWORD(v2) = (unsigned int)&loc_49DC0 >> 16;
  LOWORD(v3) = -27740;
  v1[6] = v4;
  v1[7] = v5;
  HIWORD(v3) = (unsigned int)&loc_48998 >> 16;
  v1[8] = v0;
  LOWORD(v4) = -27236;
  v1[9] = v2;
  LOWORD(v5) = -27424;
  LOWORD(v0) = -27920;
  LOWORD(v2) = -27652;
  v1[11] = v3;
  HIWORD(v4) = (unsigned int)&loc_48B90 >> 16;
  HIWORD(v5) = (unsigned int)&loc_48AD4 >> 16;
  HIWORD(v0) = (unsigned int)&loc_488E4 >> 16;
  HIWORD(v2) = (unsigned int)&loc_489F0 >> 16;
  LOWORD(v3) = -25716;
  v1[12] = v4;
  HIWORD(v3) = (unsigned int)&loc_49180 >> 16;
  v1[13] = v5;
  LOWORD(v4) = -26736;
  v1[10] = v0;
  LOWORD(v5) = -27368;
  v1[14] = v2;
  LOWORD(v0) = -27280;
  LOWORD(v2) = -27296;
  v1[15] = v3;
  HIWORD(v4) = (unsigned int)&loc_48D84 >> 16;
  HIWORD(v5) = (unsigned int)&loc_E82C8 >> 16;
  HIWORD(v0) = (unsigned int)&loc_E8320 >> 16;
  HIWORD(v2) = (unsigned int)&loc_E8310 >> 16;
  LOWORD(v3) = 9320;
  v1[16] = v4;
  HIWORD(v3) = (unsigned int)&unk_131044 >> 16;
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
