void *frontend_runtime_dcr()
{
  __int64 v0; // r2
  int v1; // r4
  int v2; // r12
  int v3; // r1
  int v4; // r0
  void *v5; // r0

  WORD2(v0) = 5068;
  LOWORD(v1) = 24232;
  HIWORD(v0) = (unsigned int)&loc_30A14 >> 16;
  HIWORD(v1) = (unsigned int)&unk_164E98 >> 16;
  LOWORD(v2) = 5980;
  LOWORD(v3) = 3812;
  LOWORD(v4) = 3564;
  *(_DWORD *)(v1 + 8) = HIDWORD(v0);
  HIWORD(v2) = (unsigned int)&loc_30DA4 >> 16;
  HIWORD(v3) = (unsigned int)&loc_3052C >> 16;
  HIWORD(v4) = (unsigned int)&loc_30434 >> 16;
  LOWORD(v0) = -15904;
  WORD2(v0) = -18600;
  *(_DWORD *)(v1 + 0xC) = v2;
  WORD1(v0) = (unsigned int)&loc_3B7F0 >> 16;
  *(_DWORD *)(v1 + 0x10) = v3;
  HIWORD(v0) = (unsigned int)&loc_3ADB0 >> 16;
  *(_DWORD *)(v1 + 0x14) = v4;
  LOWORD(v2) = -15856;
  LOWORD(v3) = -2684;
  LOWORD(v4) = -6944;
  *(_DWORD *)(v1 + 0x18) = v0;
  HIWORD(v2) = (unsigned int)&loc_3B820 >> 16;
  *(_DWORD *)(v1 + 0x1C) = HIDWORD(v0);
  HIWORD(v3) = (unsigned int)&loc_3EBAC >> 16;
  HIWORD(v4) = (unsigned int)&loc_3DB00 >> 16;
  LOWORD(v0) = -5992;
  WORD2(v0) = -3108;
  *(_DWORD *)(v1 + 0x20) = v2;
  *(_DWORD *)(v1 + 0x28) = v3;
  WORD1(v0) = (unsigned int)&loc_3DEBC >> 16;
  *(_DWORD *)(v1 + 0x2C) = v4;
  HIWORD(v0) = (unsigned int)&loc_3EA04 >> 16;
  LOWORD(v2) = -6980;
  LOWORD(v3) = -17912;
  LOWORD(v4) = -16660;
  *(_DWORD *)(v1 + 0x30) = v0;
  *(_DWORD *)(v1 + 0x24) = HIDWORD(v0);
  HIWORD(v2) = (unsigned int)&loc_3DADC >> 16;
  HIWORD(v3) = (unsigned int)&loc_3B060 >> 16;
  HIWORD(v4) = (unsigned int)&loc_3B544 >> 16;
  LOWORD(v0) = -5936;
  WORD2(v0) = -6892;
  *(_DWORD *)(v1 + 0x34) = v2;
  WORD1(v0) = (unsigned int)&loc_3DEF4 >> 16;
  *(_DWORD *)(v1 + 0x38) = v3;
  HIWORD(v0) = (unsigned int)&loc_3DB34 >> 16;
  *(_DWORD *)(v1 + 0x3C) = v4;
  LOWORD(v2) = -19468;
  LOWORD(v3) = 32352;
  LOWORD(v4) = 32112;
  *(_DWORD *)(v1 + 0x40) = v0;
  HIWORD(v2) = (unsigned int)&loc_3AA44 >> 16;
  *(_DWORD *)(v1 + 0x44) = HIDWORD(v0);
  HIWORD(v3) = (unsigned int)&loc_E6C40 >> 16;
  HIWORD(v4) = (unsigned int)&loc_E6B50 >> 16;
  LOWORD(v0) = 31960;
  WORD2(v0) = 12844;
  WORD1(v0) = (unsigned int)&loc_E6AB8 >> 16;
  *(_DWORD *)(v1 + 0x48) = v2;
  HIWORD(v0) = (unsigned int)&off_131DEC >> 16;
  *(_DWORD *)(v1 + 0x4C) = v3;
  *(_DWORD *)(v1 + 0x50) = v4;
  *(_QWORD *)(v1 + 0x54) = v0;
  *(_DWORD *)(v1 + 0x5C) = 60;
  v5 = calloc(1u, 0x60u);
  return memcpy(v5, (const void *)(v1 + 4), 0x60u);
}
