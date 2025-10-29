void *frontend_runtime_dash()
{
  __int64 v0; // r2
  int v1; // r4
  int v2; // r12
  int v3; // r1
  int v4; // r0
  void *v5; // r0

  WORD2(v0) = 8712;
  LOWORD(v1) = 32352;
  HIWORD(v0) = (unsigned int)&loc_31138 >> 16;
  HIWORD(v1) = (unsigned int)&unk_165E48 >> 16;
  LOWORD(v2) = 9624;
  LOWORD(v3) = 7456;
  LOWORD(v4) = 7208;
  *(_DWORD *)(v1 + 4) = HIDWORD(v0);
  HIWORD(v2) = (unsigned int)&loc_314C8 >> 16;
  HIWORD(v3) = (unsigned int)&loc_30C50 >> 16;
  HIWORD(v4) = (unsigned int)&loc_30B58 >> 16;
  LOWORD(v0) = -12256;
  WORD2(v0) = -14952;
  *(_DWORD *)(v1 + 8) = v2;
  WORD1(v0) = (unsigned int)&loc_3BF54 >> 16;
  *(_DWORD *)(v1 + 0xC) = v3;
  HIWORD(v0) = (unsigned int)&loc_3B4CC >> 16;
  *(_DWORD *)(v1 + 0x10) = v4;
  LOWORD(v2) = -12208;
  LOWORD(v3) = -3904;
  LOWORD(v4) = -3732;
  *(_DWORD *)(v1 + 0x14) = v0;
  HIWORD(v2) = (unsigned int)&loc_3BF84 >> 16;
  *(_DWORD *)(v1 + 0x18) = HIDWORD(v0);
  HIWORD(v3) = (unsigned int)&loc_3DFF4 >> 16;
  HIWORD(v4) = (unsigned int)&loc_3E0A0 >> 16;
  LOWORD(v0) = -7728;
  WORD2(v0) = -4080;
  *(_DWORD *)(v1 + 0x1C) = v2;
  *(_DWORD *)(v1 + 0x24) = v3;
  WORD1(v0) = (unsigned int)&loc_3D104 >> 16;
  *(_DWORD *)(v1 + 0x28) = v4;
  HIWORD(v0) = (unsigned int)&loc_3DF44 >> 16;
  LOWORD(v2) = -4588;
  LOWORD(v3) = -14264;
  LOWORD(v4) = -13012;
  *(_DWORD *)(v1 + 0x2C) = v0;
  *(_DWORD *)(v1 + 0x20) = HIDWORD(v0);
  HIWORD(v2) = (unsigned int)&loc_3DD48 >> 16;
  HIWORD(v3) = (unsigned int)&loc_3B77C >> 16;
  HIWORD(v4) = (unsigned int)&loc_3BC60 >> 16;
  LOWORD(v0) = -7672;
  WORD2(v0) = -8532;
  *(_DWORD *)(v1 + 0x30) = v2;
  WORD1(v0) = (unsigned int)&loc_3D13C >> 16;
  *(_DWORD *)(v1 + 0x34) = v3;
  HIWORD(v0) = (unsigned int)&loc_3CDE0 >> 16;
  *(_DWORD *)(v1 + 0x38) = v4;
  LOWORD(v2) = -15820;
  LOWORD(v3) = -26176;
  LOWORD(v4) = -26624;
  *(_DWORD *)(v1 + 0x3C) = v0;
  HIWORD(v2) = (unsigned int)&loc_3B168 >> 16;
  *(_DWORD *)(v1 + 0x40) = HIDWORD(v0);
  HIWORD(v3) = (unsigned int)&loc_E7888 >> 16;
  HIWORD(v4) = (unsigned int)&loc_E76C8 >> 16;
  LOWORD(v0) = -26776;
  WORD2(v0) = 17456;
  WORD1(v0) = (unsigned int)&loc_E7630 >> 16;
  *(_DWORD *)(v1 + 0x44) = v2;
  HIWORD(v0) = (unsigned int)"ten to add a port, have not set up workers, or the network was disconnected." >> 16;
  *(_DWORD *)(v1 + 0x48) = v3;
  *(_DWORD *)(v1 + 0x4C) = v4;
  *(_QWORD *)(v1 + 0x50) = v0;
  *(_DWORD *)(v1 + 0x58) = 60;
  v5 = calloc(1u, 0x60u);
  return memcpy(v5, (const void *)v1, 0x60u);
}
