void *frontend_runtime_dash()
{
  __int64 v0; // r2
  int v1; // r4
  int v2; // r12
  int v3; // r1
  int v4; // r0
  void *v5; // r0

  WORD2(v0) = 5068;
  LOWORD(v1) = 24136;
  HIWORD(v0) = (unsigned int)&loc_30A14 >> 16;
  HIWORD(v1) = (unsigned int)&unk_164E38 >> 16;
  LOWORD(v2) = 5980;
  LOWORD(v3) = 3812;
  LOWORD(v4) = 3564;
  *(_DWORD *)(v1 + 4) = HIDWORD(v0);
  HIWORD(v2) = (unsigned int)&loc_30DA4 >> 16;
  HIWORD(v3) = (unsigned int)&loc_3052C >> 16;
  HIWORD(v4) = (unsigned int)&loc_30434 >> 16;
  LOWORD(v0) = -15904;
  WORD2(v0) = -18600;
  *(_DWORD *)(v1 + 8) = v2;
  WORD1(v0) = (unsigned int)&loc_3B7F0 >> 16;
  *(_DWORD *)(v1 + 0xC) = v3;
  HIWORD(v0) = (unsigned int)&loc_3ADB0 >> 16;
  *(_DWORD *)(v1 + 0x10) = v4;
  LOWORD(v2) = -15856;
  LOWORD(v3) = -7552;
  LOWORD(v4) = -7380;
  *(_DWORD *)(v1 + 0x14) = v0;
  HIWORD(v2) = (unsigned int)&loc_3B820 >> 16;
  *(_DWORD *)(v1 + 0x18) = HIDWORD(v0);
  HIWORD(v3) = (unsigned int)&loc_3D8A0 >> 16;
  HIWORD(v4) = (unsigned int)&loc_3D94C >> 16;
  LOWORD(v0) = -11376;
  WORD2(v0) = -7728;
  *(_DWORD *)(v1 + 0x1C) = v2;
  *(_DWORD *)(v1 + 0x24) = v3;
  WORD1(v0) = (unsigned int)&loc_3C9AC >> 16;
  *(_DWORD *)(v1 + 0x28) = v4;
  HIWORD(v0) = (unsigned int)&loc_3D7F0 >> 16;
  LOWORD(v2) = -8236;
  LOWORD(v3) = -17912;
  LOWORD(v4) = -16660;
  *(_DWORD *)(v1 + 0x2C) = v0;
  *(_DWORD *)(v1 + 0x20) = HIDWORD(v0);
  HIWORD(v2) = (unsigned int)&loc_3D5F4 >> 16;
  HIWORD(v3) = (unsigned int)&loc_3B060 >> 16;
  HIWORD(v4) = (unsigned int)&loc_3B544 >> 16;
  LOWORD(v0) = -11320;
  WORD2(v0) = -12180;
  *(_DWORD *)(v1 + 0x30) = v2;
  WORD1(v0) = (unsigned int)&loc_3C9E4 >> 16;
  *(_DWORD *)(v1 + 0x34) = v3;
  HIWORD(v0) = (unsigned int)&loc_3C684 >> 16;
  *(_DWORD *)(v1 + 0x38) = v4;
  LOWORD(v2) = -19468;
  LOWORD(v3) = 31888;
  LOWORD(v4) = 31440;
  *(_DWORD *)(v1 + 0x3C) = v0;
  HIWORD(v2) = (unsigned int)&loc_3AA44 >> 16;
  *(_DWORD *)(v1 + 0x40) = HIDWORD(v0);
  HIWORD(v3) = (unsigned int)&loc_E6A70 >> 16;
  HIWORD(v4) = (unsigned int)&loc_E68B0 >> 16;
  LOWORD(v0) = 31288;
  WORD2(v0) = 9320;
  WORD1(v0) = (unsigned int)&loc_E6818 >> 16;
  *(_DWORD *)(v1 + 0x44) = v2;
  HIWORD(v0) = (unsigned int)&unk_131044 >> 16;
  *(_DWORD *)(v1 + 0x48) = v3;
  *(_DWORD *)(v1 + 0x4C) = v4;
  *(_QWORD *)(v1 + 0x50) = v0;
  *(_DWORD *)(v1 + 0x58) = 60;
  v5 = calloc(1u, 0x60u);
  return memcpy(v5, (const void *)v1, 0x60u);
}
