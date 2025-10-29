void *frontend_runtime_kda()
{
  __int64 v0; // r2
  int v1; // r4
  int v2; // r12
  int v3; // r1
  int v4; // r0
  void *v5; // r0

  WORD2(v0) = 8712;
  LOWORD(v1) = -32520;
  HIWORD(v0) = (unsigned int)&loc_31138 >> 16;
  HIWORD(v1) = (unsigned int)&unk_1660E0 >> 16;
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
  LOWORD(v3) = -28708;
  LOWORD(v4) = -28600;
  *(_DWORD *)(v1 + 0x1C) = v0;
  HIWORD(v2) = (unsigned int)&loc_3BF84 >> 16;
  *(_DWORD *)(v1 + 0x20) = HIDWORD(v0);
  HIWORD(v3) = (unsigned int)&loc_47F0C >> 16;
  LOWORD(v0) = -29672;
  WORD2(v0) = -28932;
  *(_DWORD *)(v1 + 0x24) = v2;
  *(_DWORD *)(v1 + 0x2C) = v3;
  WORD1(v0) = (unsigned int)&loc_47B48 >> 16;
  HIWORD(v4) = (unsigned int)&loc_47F78 >> 16;
  *(_DWORD *)(v1 + 0x30) = v4;
  HIWORD(v0) = (unsigned int)&loc_47E2C >> 16;
  LOWORD(v2) = -30636;
  LOWORD(v3) = -14264;
  LOWORD(v4) = -13012;
  *(_DWORD *)(v1 + 0x34) = v0;
  *(_DWORD *)(v1 + 0x28) = HIDWORD(v0);
  HIWORD(v2) = (unsigned int)&loc_47784 >> 16;
  HIWORD(v3) = (unsigned int)&loc_3B77C >> 16;
  HIWORD(v4) = (unsigned int)&loc_3BC60 >> 16;
  LOWORD(v0) = -29616;
  WORD2(v0) = -30388;
  *(_DWORD *)(v1 + 0x38) = v2;
  WORD1(v0) = (unsigned int)&loc_47B80 >> 16;
  *(_DWORD *)(v1 + 0x3C) = v3;
  *(_DWORD *)(v1 + 0x40) = v4;
  LOWORD(v2) = -15820;
  LOWORD(v3) = -20648;
  LOWORD(v4) = -21128;
  *(_DWORD *)(v1 + 0x44) = v0;
  HIWORD(v2) = (unsigned int)&loc_3B168 >> 16;
  HIWORD(v0) = (unsigned int)&loc_4787C >> 16;
  *(_DWORD *)(v1 + 0x48) = HIDWORD(v0);
  HIWORD(v3) = (unsigned int)&loc_E8E30 >> 16;
  HIWORD(v4) = (unsigned int)&loc_E8C50 >> 16;
  LOWORD(v0) = -21360;
  WORD2(v0) = 17456;
  WORD1(v0) = (unsigned int)&loc_E8B68 >> 16;
  *(_DWORD *)(v1 + 0x4C) = v2;
  HIWORD(v0) = (unsigned int)"ten to add a port, have not set up workers, or the network was disconnected." >> 16;
  *(_DWORD *)(v1 + 0x50) = v3;
  *(_DWORD *)(v1 + 0x54) = v4;
  *(_QWORD *)(v1 + 0x58) = v0;
  *(_DWORD *)(v1 + 0x60) = 70;
  v5 = calloc(1u, 0x60u);
  return memcpy(v5, (const void *)(v1 + 8), 0x60u);
}
