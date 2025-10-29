void *frontend_runtime_ckb()
{
  __int64 v0; // r2
  int v1; // r4
  int v2; // r12
  int v3; // r1
  int v4; // r0
  void *v5; // r0

  WORD2(v0) = 5068;
  LOWORD(v1) = 24032;
  HIWORD(v0) = (unsigned int)&loc_30A14 >> 16;
  HIWORD(v1) = (unsigned int)&unk_164DD0 >> 16;
  LOWORD(v2) = 5980;
  LOWORD(v3) = 3812;
  LOWORD(v4) = 3564;
  *(_DWORD *)(v1 + 0xC) = HIDWORD(v0);
  HIWORD(v2) = (unsigned int)&loc_30DA4 >> 16;
  HIWORD(v3) = (unsigned int)&loc_3052C >> 16;
  HIWORD(v4) = (unsigned int)&loc_30434 >> 16;
  LOWORD(v0) = -15904;
  WORD2(v0) = -18600;
  *(_DWORD *)(v1 + 0x10) = v2;
  WORD1(v0) = (unsigned int)&loc_3B7F0 >> 16;
  *(_DWORD *)(v1 + 0x14) = v3;
  HIWORD(v0) = (unsigned int)&loc_3ADB0 >> 16;
  *(_DWORD *)(v1 + 0x18) = v4;
  LOWORD(v2) = -15856;
  LOWORD(v3) = -12664;
  LOWORD(v4) = -12560;
  *(_DWORD *)(v1 + 0x1C) = v0;
  HIWORD(v2) = (unsigned int)&loc_3B820 >> 16;
  *(_DWORD *)(v1 + 0x20) = HIDWORD(v0);
  HIWORD(v3) = (unsigned int)&loc_3C4A0 >> 16;
  HIWORD(v4) = (unsigned int)&loc_3C508 >> 16;
  LOWORD(v0) = -14176;
  WORD2(v0) = -12844;
  *(_DWORD *)(v1 + 0x24) = v2;
  *(_DWORD *)(v1 + 0x2C) = v3;
  WORD1(v0) = (unsigned int)&loc_3BEB4 >> 16;
  *(_DWORD *)(v1 + 0x30) = v4;
  HIWORD(v0) = (unsigned int)&loc_3C3EC >> 16;
  LOWORD(v2) = -13228;
  LOWORD(v3) = -17912;
  LOWORD(v4) = -16660;
  *(_DWORD *)(v1 + 0x34) = v0;
  *(_DWORD *)(v1 + 0x28) = HIDWORD(v0);
  HIWORD(v2) = (unsigned int)&loc_3C26C >> 16;
  HIWORD(v3) = (unsigned int)&loc_3B060 >> 16;
  HIWORD(v4) = (unsigned int)&loc_3B544 >> 16;
  LOWORD(v0) = -14120;
  WORD2(v0) = -15108;
  *(_DWORD *)(v1 + 0x38) = v2;
  WORD1(v0) = (unsigned int)stratum_authorize_base >> 16;
  *(_DWORD *)(v1 + 0x3C) = v3;
  HIWORD(v0) = (unsigned int)&loc_3BB0C >> 16;
  *(_DWORD *)(v1 + 0x40) = v4;
  LOWORD(v2) = -19468;
  LOWORD(v3) = 31280;
  LOWORD(v4) = 31276;
  *(_DWORD *)(v1 + 0x44) = v0;
  HIWORD(v2) = (unsigned int)&loc_3AA44 >> 16;
  *(_DWORD *)(v1 + 0x48) = HIDWORD(v0);
  HIWORD(v3) = (unsigned int)&loc_E6810 >> 16;
  HIWORD(v4) = (unsigned int)&loc_E680C >> 16;
  LOWORD(v0) = 31284;
  WORD2(v0) = 9320;
  WORD1(v0) = (unsigned int)&loc_E6814 >> 16;
  *(_DWORD *)(v1 + 0x4C) = v2;
  HIWORD(v0) = (unsigned int)&unk_131044 >> 16;
  *(_DWORD *)(v1 + 0x50) = v3;
  *(_DWORD *)(v1 + 0x54) = v4;
  *(_QWORD *)(v1 + 0x58) = v0;
  *(_DWORD *)(v1 + 0x60) = 60;
  v5 = calloc(1u, 0x60u);
  return memcpy(v5, (const void *)(v1 + 8), 0x60u);
}
