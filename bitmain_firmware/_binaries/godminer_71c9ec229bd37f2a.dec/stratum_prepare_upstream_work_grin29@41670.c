int __fastcall stratum_prepare_upstream_work_grin29(int a1, int a2, char *a3)
{
  int v3; // r10
  int v7; // r4
  int v8; // t1
  size_t v9; // r0
  int v10; // r0
  char *v11; // r6
  const char *v12; // r2
  size_t v13; // r0
  int v14; // r0
  int *v15; // r3
  int v16; // r2
  int v17; // r0
  void *v18; // r0
  int v20; // [sp+Ch] [bp-240h]
  __int64 v21; // [sp+18h] [bp-234h]
  char src[32]; // [sp+28h] [bp-224h] BYREF
  char s[516]; // [sp+48h] [bp-204h] BYREF

  v3 = *(_DWORD *)(a1 + 1164);
  v21 = *(_QWORD *)(a1 + 1136);
  memset(s, 0, 0x200u);
  v7 = v3 - 4;
  do
  {
    v8 = *(_DWORD *)(v7 + 4);
    v7 += 4;
    snprintf(src, 0x20u, "%d,", v8);
    v9 = strlen(s);
    v10 = stpcpy(&s[v9], src);
  }
  while ( v7 != v3 + 160 );
  v11 = (char *)v10;
  snprintf(src, 0x20u, "%d", *(_DWORD *)(v3 + 164));
  strcpy(v11, src);
  LOWORD(v12) = 21500;
  HIWORD(v12) = (unsigned int)&unk_133054 >> 16;
  snprintf(a3, 0x400u, v12, a2 + 1852, *(_DWORD *)(a1 + 1144), *(_DWORD *)(a1 + 1148), *(_DWORD *)(a1 + 1152), v20, v21);
  v13 = strlen(a3);
  v14 = stpcpy(&a3[v13], s);
  LOWORD(v15) = 21616;
  v16 = v14;
  HIWORD(v15) = (unsigned int)&unk_1330C8 >> 16;
  v17 = *v15;
  LOWORD(v15) = *((_WORD *)v15 + 2);
  *(_DWORD *)v16 = v17;
  *(_WORD *)(v16 + 4) = (_WORD)v15;
  v18 = *(void **)(a1 + 1164);
  if ( v18 )
    free(v18);
  return 0;
}
