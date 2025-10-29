void *frontend_runtime_ae()
{
  __int64 v0; // r2
  int v1; // r4
  int v2; // r12
  int v3; // r1
  int v4; // r0
  void *v5; // r0

  WORD2(v0) = 8712;
  LOWORD(v1) = 32148;
  HIWORD(v0) = (unsigned int)&loc_31138 >> 16;
  HIWORD(v1) = (unsigned int)&unk_165D7C >> 16;
  LOWORD(v2) = 9624;
  LOWORD(v3) = 7456;
  LOWORD(v4) = 7208;
  *(_DWORD *)(v1 + 8) = HIDWORD(v0);
  HIWORD(v2) = (unsigned int)&loc_314C8 >> 16;
  HIWORD(v3) = (unsigned int)&loc_30C50 >> 16;
  HIWORD(v4) = (unsigned int)&loc_30B58 >> 16;
  LOWORD(v0) = -12256;
  WORD2(v0) = -14952;
  *(_DWORD *)(v1 + 0xC) = v2;
  WORD1(v0) = (unsigned int)&loc_3BF54 >> 16;
  *(_DWORD *)(v1 + 0x10) = v3;
  HIWORD(v0) = (unsigned int)&loc_3B4CC >> 16;
  *(_DWORD *)(v1 + 0x14) = v4;
  LOWORD(v2) = -12208;
  LOWORD(v3) = -16712;
  LOWORD(v4) = -16252;
  *(_DWORD *)(v1 + 0x18) = v0;
  HIWORD(v2) = (unsigned int)&loc_3BF84 >> 16;
  *(_DWORD *)(v1 + 0x1C) = HIDWORD(v0);
  HIWORD(v3) = (unsigned int)&loc_3ADEC >> 16;
  HIWORD(v4) = (unsigned int)&loc_3AFB8 >> 16;
  LOWORD(v0) = -16428;
  WORD2(v0) = -18696;
  *(_DWORD *)(v1 + 0x20) = v2;
  *(_DWORD *)(v1 + 0x28) = v3;
  WORD1(v0) = (unsigned int)&locret_3AF08 >> 16;
  *(_DWORD *)(v1 + 0x2C) = v4;
  HIWORD(v0) = (unsigned int)&loc_3A628 >> 16;
  LOWORD(v2) = -16360;
  LOWORD(v3) = -14264;
  LOWORD(v4) = -13012;
  *(_DWORD *)(v1 + 0x30) = v0;
  *(_DWORD *)(v1 + 0x24) = HIDWORD(v0);
  HIWORD(v2) = (unsigned int)&loc_3AF4C >> 16;
  HIWORD(v3) = (unsigned int)&loc_3B77C >> 16;
  HIWORD(v4) = (unsigned int)&loc_3BC60 >> 16;
  LOWORD(v0) = -17588;
  WORD2(v0) = -18532;
  *(_DWORD *)(v1 + 0x34) = v2;
  WORD1(v0) = (unsigned int)&loc_3AA7C >> 16;
  *(_DWORD *)(v1 + 0x38) = v3;
  HIWORD(v0) = (unsigned int)json_string_set >> 16;
  *(_DWORD *)(v1 + 0x3C) = v4;
  LOWORD(v2) = -15820;
  LOWORD(v3) = -29960;
  LOWORD(v4) = -29964;
  *(_DWORD *)(v1 + 0x40) = v0;
  HIWORD(v2) = (unsigned int)&loc_3B168 >> 16;
  *(_DWORD *)(v1 + 0x44) = HIDWORD(v0);
  HIWORD(v3) = (unsigned int)&loc_E69C0 >> 16;
  HIWORD(v4) = (unsigned int)&loc_E69BC >> 16;
  LOWORD(v0) = -29956;
  WORD2(v0) = 17456;
  WORD1(v0) = (unsigned int)&loc_E69C4 >> 16;
  *(_DWORD *)(v1 + 0x48) = v2;
  HIWORD(v0) = (unsigned int)"ten to add a port, have not set up workers, or the network was disconnected." >> 16;
  *(_DWORD *)(v1 + 0x4C) = v3;
  *(_DWORD *)(v1 + 0x50) = v4;
  *(_QWORD *)(v1 + 0x54) = v0;
  *(_DWORD *)(v1 + 0x5C) = 120;
  v5 = calloc(1u, 0x60u);
  return memcpy(v5, (const void *)(v1 + 4), 0x60u);
}
