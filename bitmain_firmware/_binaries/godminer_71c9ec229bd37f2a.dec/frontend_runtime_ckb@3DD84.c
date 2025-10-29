void *frontend_runtime_ckb()
{
  __int64 v0; // r2
  int v1; // r4
  int v2; // r12
  int v3; // r1
  int v4; // r0
  void *v5; // r0

  WORD2(v0) = 8712;
  LOWORD(v1) = 32248;
  HIWORD(v0) = (unsigned int)&loc_31138 >> 16;
  HIWORD(v1) = (unsigned int)&unk_165DE0 >> 16;
  LOWORD(v2) = 9624;
  LOWORD(v3) = 7456;
  LOWORD(v4) = 7208;
  *(_DWORD *)(v1 + 0xC) = HIDWORD(v0);
  HIWORD(v2) = (unsigned int)&loc_314C8 >> 16;
  HIWORD(v3) = (unsigned int)&loc_30C50 >> 16;
  HIWORD(v4) = (unsigned int)&loc_30B58 >> 16;
  LOWORD(v0) = -12256;
  WORD2(v0) = -14952;
  *(_DWORD *)(v1 + 0x10) = v2;
  WORD1(v0) = (unsigned int)&loc_3BF54 >> 16;
  *(_DWORD *)(v1 + 0x14) = v3;
  HIWORD(v0) = (unsigned int)&loc_3B4CC >> 16;
  *(_DWORD *)(v1 + 0x18) = v4;
  LOWORD(v2) = -12208;
  LOWORD(v3) = -9016;
  LOWORD(v4) = -8912;
  *(_DWORD *)(v1 + 0x1C) = v0;
  HIWORD(v2) = (unsigned int)&loc_3BF84 >> 16;
  *(_DWORD *)(v1 + 0x20) = HIDWORD(v0);
  HIWORD(v3) = (unsigned int)&loc_3CBFC >> 16;
  HIWORD(v4) = (unsigned int)&loc_3CC64 >> 16;
  LOWORD(v0) = -10528;
  WORD2(v0) = -9196;
  *(_DWORD *)(v1 + 0x24) = v2;
  *(_DWORD *)(v1 + 0x2C) = v3;
  WORD1(v0) = (unsigned int)&loc_3C614 >> 16;
  *(_DWORD *)(v1 + 0x30) = v4;
  HIWORD(v0) = (unsigned int)&loc_3CB48 >> 16;
  LOWORD(v2) = -9580;
  LOWORD(v3) = -14264;
  LOWORD(v4) = -13012;
  *(_DWORD *)(v1 + 0x34) = v0;
  *(_DWORD *)(v1 + 0x28) = HIDWORD(v0);
  HIWORD(v2) = (unsigned int)&loc_3C9C8 >> 16;
  HIWORD(v3) = (unsigned int)&loc_3B77C >> 16;
  HIWORD(v4) = (unsigned int)&loc_3BC60 >> 16;
  LOWORD(v0) = -10472;
  WORD2(v0) = -11460;
  *(_DWORD *)(v1 + 0x38) = v2;
  WORD1(v0) = (unsigned int)&loc_3C64C >> 16;
  *(_DWORD *)(v1 + 0x3C) = v3;
  HIWORD(v0) = (unsigned int)&loc_3C270 >> 16;
  *(_DWORD *)(v1 + 0x40) = v4;
  LOWORD(v2) = -15820;
  LOWORD(v3) = -26784;
  LOWORD(v4) = -26788;
  *(_DWORD *)(v1 + 0x44) = v0;
  HIWORD(v2) = (unsigned int)&loc_3B168 >> 16;
  *(_DWORD *)(v1 + 0x48) = HIDWORD(v0);
  HIWORD(v3) = (unsigned int)&loc_E7628 >> 16;
  HIWORD(v4) = (unsigned int)&loc_E7624 >> 16;
  LOWORD(v0) = -26780;
  WORD2(v0) = 17456;
  WORD1(v0) = (unsigned int)&loc_E762C >> 16;
  *(_DWORD *)(v1 + 0x4C) = v2;
  HIWORD(v0) = (unsigned int)"ten to add a port, have not set up workers, or the network was disconnected." >> 16;
  *(_DWORD *)(v1 + 0x50) = v3;
  *(_DWORD *)(v1 + 0x54) = v4;
  *(_QWORD *)(v1 + 0x58) = v0;
  *(_DWORD *)(v1 + 0x60) = 60;
  v5 = calloc(1u, 0x60u);
  return memcpy(v5, (const void *)(v1 + 8), 0x60u);
}
