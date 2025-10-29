char *__fastcall sub_7F114(int a1, const char **a2)
{
  int v3; // r2
  char *v5; // r4
  int v6; // r1
  int v7; // r3
  int v8; // t1
  const char *v9; // r8
  int *v10; // r11
  char *v11; // r0
  int v12; // r5
  FILE *v13; // r7
  const char *v14; // r6
  char *v15; // r0
  char *v17; // r0
  _BYTE *v18; // r9
  char *v19; // r0
  int v20; // r4
  const char *v21; // r0
  char *v22; // r0
  const char *v23; // r11
  size_t v24; // r7
  size_t v25; // r7
  char *v26; // r0
  const char *v27; // r3
  size_t v28; // r11
  void *v29; // r0
  void *v30; // r11
  int *v31; // r8
  int v32; // r5
  FILE *v33; // r7
  const char *v34; // r6
  char *v35; // r0
  size_t v36; // [sp+10h] [bp-107Ch]
  int v37; // [sp+14h] [bp-1078h]
  const char *v38; // [sp+14h] [bp-1078h]
  _BYTE v39[16]; // [sp+18h] [bp-1074h] BYREF
  int v40; // [sp+28h] [bp-1064h]
  _BYTE dest[4092]; // [sp+84h] [bp-1008h] BYREF

  v3 = *(unsigned __int16 *)(a1 + 94);
  if ( (v3 & 0x7FFF) == 0 )
    return 0;
  v5 = *(char **)(*(_DWORD *)(a1 + 68) + (v3 << 6) + 24);
  if ( v5 && *v5 )
    goto LABEL_9;
  v6 = *(_DWORD *)(a1 + 52);
  if ( !v6 )
    return 0;
  if ( *(_DWORD *)(v6 + 4) )
  {
    v7 = v6 + 4;
    do
    {
      v6 = v7;
      v8 = *(_DWORD *)(v7 + 4);
      v7 += 4;
    }
    while ( v8 );
  }
  v5 = *(char **)v6;
  if ( **(_BYTE **)v6 != 36 )
  {
LABEL_9:
    v9 = 0;
    goto LABEL_10;
  }
  v18 = v5 + 1;
  v19 = strchr(v5 + 1, 47);
  v9 = v19;
  if ( !v19 )
  {
    v5 = getenv(v5 + 1);
    if ( v5 )
      goto LABEL_10;
LABEL_43:
    v5 = 0;
    fprintf(stderr, off_B7540[0], *(_DWORD *)(a1 + 28));
    fprintf(stderr, off_B7510[0], v18);
    return v5;
  }
  v20 = v19 - v18;
  if ( v19 - v18 > 127 )
    return 0;
  v21 = (const char *)memcpy(dest, v18, v19 - v18);
  dest[v20] = 0;
  v22 = getenv(v21);
  v23 = v22;
  if ( !v22 )
    goto LABEL_43;
  v24 = strlen(v22);
  v25 = v24 + strlen(v9) + 2;
  v26 = (char *)malloc(v25);
  v5 = v26;
  if ( !v26 )
    sub_C610(v25);
  v27 = v9;
  v9 = (_BYTE *)(&dword_0 + 1);
  sprintf(v26, "%s/%s", v23, v27);
LABEL_10:
  if ( !_xstat64(3, v5, v39) )
  {
    if ( (v40 & 0xF000) == 0x4000 )
    {
      v38 = *(const char **)(a1 + 36);
      v28 = strlen(v5);
      v36 = v28 + strlen(v38) + 2;
      v29 = malloc(v36);
      v30 = v29;
      if ( !v29 )
        sub_C610(v36);
      sub_6BCB0((int)v29, v36, "%s/%s", v5, v38);
      if ( v9 )
        free(v5);
      if ( _xstat64(3, v30, v39) )
      {
        v31 = _errno_location();
        if ( *v31 != 2 )
        {
          v5 = 0;
          fprintf(stderr, off_B7540[0], *(_DWORD *)(a1 + 28));
          v32 = *v31;
          v33 = stderr;
          v34 = off_B7500[0];
          v35 = strerror(*v31);
          fprintf(v33, v34, v32, v35, v30);
          free(v30);
          return v5;
        }
        v5 = (char *)v30;
        v40 = 0x8000;
        v9 = (_BYTE *)(&dword_0 + 1);
        goto LABEL_17;
      }
      if ( (v40 & 0xF000) == 0x8000 )
      {
        v5 = (char *)v30;
        v9 = (_BYTE *)(&dword_0 + 1);
        goto LABEL_17;
      }
      v5 = (char *)v30;
      fprintf(stderr, off_B7540[0], *(_DWORD *)(a1 + 28), v30);
      goto LABEL_25;
    }
    if ( (v40 & 0xF000) == 0x8000 )
      goto LABEL_17;
    fprintf(stderr, off_B7540[0], *(_DWORD *)(a1 + 28), v5);
    if ( v9 )
    {
LABEL_25:
      v17 = v5;
      v5 = 0;
      free(v17);
      return v5;
    }
    return 0;
  }
  v10 = _errno_location();
  if ( *v10 != 2
    || (v11 = strrchr(v5, 47)) != 0
    && ((unsigned int)(v11 - v5) >= 0x1000
     || (v37 = v11 - v5, memcpy(dest, v5, v11 - v5), dest[v37] = 0, _xstat64(3, dest, v39))
     || (v40 & 0xF000) != 0x4000) )
  {
    fprintf(stderr, off_B7540[0], *(_DWORD *)(a1 + 28));
    v12 = *v10;
    v13 = stderr;
    v14 = off_B7500[0];
    v15 = strerror(*v10);
    fprintf(v13, v14, v12, v15, v5);
    if ( v9 )
      free(v5);
    return 0;
  }
  v40 = 0x8000;
LABEL_17:
  unlink(v5);
  *a2 = v9;
  return v5;
}
