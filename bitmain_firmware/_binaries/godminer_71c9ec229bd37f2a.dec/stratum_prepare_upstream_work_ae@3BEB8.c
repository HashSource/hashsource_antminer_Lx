int __fastcall stratum_prepare_upstream_work_ae(_DWORD *a1, int a2, char *a3)
{
  const char *v6; // r6
  int v7; // r4
  int v8; // r3
  size_t v9; // r0
  char *v10; // r7
  int v11; // r3
  const char *v12; // r2
  int v13; // lr
  int v14; // r12
  size_t v15; // r0
  int v16; // r0
  int *v17; // r3
  int v18; // r2
  int v19; // r0
  char src[32]; // [sp+10h] [bp-240h] BYREF
  char v22[32]; // [sp+30h] [bp-220h] BYREF
  char s[512]; // [sp+50h] [bp-200h] BYREF

  LOWORD(v6) = 17368;
  bin2hex((int)v22, a1[290], a1[289]);
  v7 = 0;
  memset(s, 0, sizeof(s));
  do
  {
    HIWORD(v6) = (unsigned int)"st below of the servers you have input." >> 16;
    v8 = *(_DWORD *)(a1[291] + v7);
    v7 += 4;
    snprintf(src, 0x20u, v6, v8);
    v9 = strlen(s);
    v10 = (char *)stpcpy(&s[v9], src);
  }
  while ( v7 != 164 );
  snprintf(src, 0x20u, "\"%08x\"", *(_DWORD *)(a1[291] + 164));
  strcpy(v10, src);
  v11 = *(_DWORD *)(a2 + 2088);
  LOWORD(v12) = 17384;
  v13 = a1[288];
  HIWORD(v12) = (unsigned int)"servers you have input." >> 16;
  v14 = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a2 + 2088) = v11 + 1;
  snprintf(a3, 0x400u, v12, v11, v14, v13, v22);
  v15 = strlen(a3);
  v16 = stpcpy(&a3[v15], s);
  LOWORD(v17) = 17448;
  v18 = v16;
  HIWORD(v17) = (unsigned int)", forgotten to add a port, have not set up workers, or the network was disconnected." >> 16;
  v19 = *v17;
  LOWORD(v17) = *((_WORD *)v17 + 2);
  *(_DWORD *)v18 = v19;
  *(_WORD *)(v18 + 4) = (_WORD)v17;
  return 0;
}
