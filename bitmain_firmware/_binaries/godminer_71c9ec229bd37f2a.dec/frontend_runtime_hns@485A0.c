void *frontend_runtime_hns()
{
  __int64 v0; // r2
  int v1; // r4
  int v2; // r12
  int v3; // r1
  int v4; // r0
  void *v5; // r0

  WORD2(v0) = 8712;
  LOWORD(v1) = -32688;
  HIWORD(v0) = (unsigned int)&loc_31138 >> 16;
  HIWORD(v1) = (unsigned int)&unk_166038 >> 16;
  LOWORD(v2) = 9624;
  LOWORD(v3) = 7456;
  LOWORD(v4) = 7208;
  *(_DWORD *)(v1 + 0x48) = HIDWORD(v0);
  HIWORD(v2) = (unsigned int)&loc_314C8 >> 16;
  HIWORD(v3) = (unsigned int)&loc_30C50 >> 16;
  HIWORD(v4) = (unsigned int)&loc_30B58 >> 16;
  LOWORD(v0) = -12256;
  WORD2(v0) = -14952;
  *(_DWORD *)(v1 + 0x4C) = v2;
  WORD1(v0) = (unsigned int)&loc_3BF54 >> 16;
  *(_DWORD *)(v1 + 0x50) = v3;
  HIWORD(v0) = (unsigned int)&loc_3B4CC >> 16;
  *(_DWORD *)(v1 + 0x54) = v4;
  LOWORD(v2) = 28032;
  LOWORD(v3) = 29576;
  LOWORD(v4) = 27944;
  *(_DWORD *)(v1 + 0x58) = v0;
  HIWORD(v2) = (unsigned int)&loc_45CB0 >> 16;
  *(_DWORD *)(v1 + 0x5C) = HIDWORD(v0);
  HIWORD(v3) = (unsigned int)&loc_462B8 >> 16;
  HIWORD(v4) = (unsigned int)&loc_45C58 >> 16;
  LOWORD(v0) = 27976;
  WORD2(v0) = 29796;
  *(_DWORD *)(v1 + 0x60) = v2;
  *(_DWORD *)(v1 + 0x68) = v3;
  WORD1(v0) = (unsigned int)&loc_45C78 >> 16;
  *(_DWORD *)(v1 + 0x6C) = v4;
  HIWORD(v0) = (unsigned int)&loc_46394 >> 16;
  LOWORD(v2) = 27908;
  LOWORD(v3) = -14264;
  LOWORD(v4) = -13012;
  *(_DWORD *)(v1 + 0x70) = v0;
  *(_DWORD *)(v1 + 0x64) = HIDWORD(v0);
  HIWORD(v2) = (unsigned int)&loc_45C34 >> 16;
  HIWORD(v3) = (unsigned int)&loc_3B77C >> 16;
  HIWORD(v4) = (unsigned int)&loc_3BC60 >> 16;
  LOWORD(v0) = 30236;
  WORD2(v0) = 28744;
  *(_DWORD *)(v1 + 0x74) = v2;
  WORD1(v0) = (unsigned int)&loc_4654C >> 16;
  *(_DWORD *)(v1 + 0x78) = v3;
  HIWORD(v0) = (unsigned int)&loc_45F78 >> 16;
  *(_DWORD *)(v1 + 0x7C) = v4;
  LOWORD(v2) = -15820;
  LOWORD(v3) = -21432;
  LOWORD(v4) = -21744;
  *(_DWORD *)(v1 + 0x80) = v0;
  HIWORD(v2) = (unsigned int)&loc_3B168 >> 16;
  *(_DWORD *)(v1 + 0x84) = HIDWORD(v0);
  HIWORD(v3) = (unsigned int)&loc_E8B20 >> 16;
  HIWORD(v4) = (unsigned int)&off_E89E8 >> 16;
  LOWORD(v0) = -21896;
  WORD2(v0) = 20980;
  WORD1(v0) = (unsigned int)&loc_E8950 >> 16;
  *(_DWORD *)(v1 + 0x88) = v2;
  HIWORD(v0) = (unsigned int)"ent_pool %d" >> 16;
  *(_DWORD *)(v1 + 0x8C) = v3;
  *(_DWORD *)(v1 + 0x90) = v4;
  *(_QWORD *)(v1 + 0x94) = v0;
  *(_DWORD *)(v1 + 0x9C) = 60;
  v5 = calloc(1u, 0x60u);
  return memcpy(v5, (const void *)(v1 + 68), 0x60u);
}
