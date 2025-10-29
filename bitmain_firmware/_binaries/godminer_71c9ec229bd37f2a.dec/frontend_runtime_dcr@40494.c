void *frontend_runtime_dcr()
{
  __int64 v0; // r2
  int v1; // r4
  int v2; // r12
  int v3; // r1
  int v4; // r0
  void *v5; // r0

  WORD2(v0) = 8712;
  LOWORD(v1) = 32448;
  HIWORD(v0) = (unsigned int)&loc_31138 >> 16;
  HIWORD(v1) = (unsigned int)&unk_165EA8 >> 16;
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
  *(_DWORD *)(v1 + 0x14) = v4;
  LOWORD(v2) = -12208;
  LOWORD(v4) = -3296;
  *(_DWORD *)(v1 + 0x18) = v0;
  HIWORD(v0) = (unsigned int)&loc_3B4CC >> 16;
  *(_DWORD *)(v1 + 0x1C) = HIDWORD(v0);
  HIWORD(v4) = (unsigned int)&loc_3E254 >> 16;
  LOWORD(v0) = -2344;
  HIWORD(v2) = (unsigned int)&loc_3BF84 >> 16;
  *(_DWORD *)(v1 + 0x20) = v2;
  *(_DWORD *)(v1 + 0x28) = 263108;
  WORD1(v0) = (unsigned int)&loc_3E60C >> 16;
  *(_DWORD *)(v1 + 0x2C) = v4;
  LOWORD(v2) = -3332;
  LOWORD(v3) = -14264;
  LOWORD(v4) = -13012;
  *(_DWORD *)(v1 + 0x30) = v0;
  *(_DWORD *)(v1 + 0x24) = 262684;
  HIWORD(v2) = (unsigned int)&loc_3E230 >> 16;
  HIWORD(v3) = (unsigned int)&loc_3B77C >> 16;
  HIWORD(v4) = (unsigned int)&loc_3BC60 >> 16;
  LOWORD(v0) = -2288;
  WORD2(v0) = -3244;
  *(_DWORD *)(v1 + 0x34) = v2;
  WORD1(v0) = (unsigned int)&loc_3E644 >> 16;
  *(_DWORD *)(v1 + 0x38) = v3;
  HIWORD(v0) = (unsigned int)&loc_3E288 >> 16;
  *(_DWORD *)(v1 + 0x3C) = v4;
  LOWORD(v2) = -15820;
  LOWORD(v3) = -25712;
  LOWORD(v4) = -25952;
  *(_DWORD *)(v1 + 0x40) = v0;
  HIWORD(v2) = (unsigned int)&loc_3B168 >> 16;
  *(_DWORD *)(v1 + 0x44) = HIDWORD(v0);
  HIWORD(v3) = (unsigned int)&loc_E7A58 >> 16;
  HIWORD(v4) = (unsigned int)&loc_E7968 >> 16;
  LOWORD(v0) = -26104;
  WORD2(v0) = 20980;
  WORD1(v0) = (unsigned int)&loc_E78D0 >> 16;
  *(_DWORD *)(v1 + 0x48) = v2;
  HIWORD(v0) = (unsigned int)"ent_pool %d" >> 16;
  *(_DWORD *)(v1 + 0x4C) = v3;
  *(_DWORD *)(v1 + 0x50) = v4;
  *(_QWORD *)(v1 + 0x54) = v0;
  *(_DWORD *)(v1 + 0x5C) = 60;
  v5 = calloc(1u, 0x60u);
  return memcpy(v5, (const void *)(v1 + 4), 0x60u);
}
