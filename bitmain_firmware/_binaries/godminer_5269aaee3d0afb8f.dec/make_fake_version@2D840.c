int make_fake_version()
{
  int v0; // r3
  int v1; // r2
  int v2; // r4
  int *v3; // r3
  int result; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r3
  char v8[64]; // [sp+0h] [bp-40h] BYREF

  LOWORD(v0) = -1320;
  LOWORD(v1) = -1308;
  LOWORD(v2) = 20200;
  HIWORD(v0) = (unsigned int)"lu" >> 16;
  HIWORD(v1) = (unsigned int)"" >> 16;
  HIWORD(v2) = (unsigned int)&unk_163ED8 >> 16;
  sprintf(v8, "%s %s", v1, v0);
  strcpy((char *)(v2 + 224), v8);
  LOWORD(v3) = -1296;
  v2 += 480;
  HIWORD(v3) = (unsigned int)"al" >> 16;
  result = *v3;
  v5 = v3[1];
  v6 = v3[2];
  v7 = v3[3];
  *(_DWORD *)v2 = result;
  *(_DWORD *)(v2 + 4) = v5;
  *(_DWORD *)(v2 + 8) = v6;
  *(_DWORD *)(v2 + 12) = v7;
  return result;
}
