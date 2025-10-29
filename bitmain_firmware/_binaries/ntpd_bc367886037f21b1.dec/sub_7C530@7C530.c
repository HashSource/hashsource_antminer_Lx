int __fastcall sub_7C530(unsigned int a1, _DWORD *a2, const char **a3, int a4)
{
  bool v4; // cc
  FILE *v6; // r0
  unsigned int v7; // r10
  unsigned int v8; // r11
  int v9; // r2
  const char *v10; // r7
  int v11; // r3
  bool v12; // zf
  int v13; // r3
  const char **v14; // r5
  const char *v15; // r0
  int v16; // r8
  const char *v17; // t1
  size_t v18; // r0
  const char *v19; // r2
  int v20; // r6
  const char **i; // r7
  const char *v22; // t1
  FILE *v23; // r0
  int v25; // r7
  unsigned __int8 **v26; // r6
  int v27; // r8
  int v28; // r2
  int v29; // r9
  char *v30; // r1
  unsigned __int8 *v31; // r2
  unsigned __int8 *v32; // t1
  int v33; // r5
  const char *v34; // t1
  int v36; // [sp+Ch] [bp-38h]
  int v39; // [sp+1Ch] [bp-28h]
  const char **v40; // [sp+24h] [bp-20h]
  char s[16]; // [sp+2Ch] [bp-18h] BYREF

  v4 = a1 > 0xF;
  v6 = (FILE *)option_usage_fp;
  if ( v4 )
  {
    fprintf((FILE *)option_usage_fp, (const char *)dword_1062C0, *(_DWORD *)(a1 + 28), a2[6], a2[13]);
    v6 = (FILE *)option_usage_fp;
  }
  v7 = 0;
  v8 = 0;
  v36 = a4 - 1;
  fprintf(v6, off_B75F8[0]);
  v10 = *a3;
  v11 = *(unsigned __int8 *)*a3;
  v12 = v11 == 127;
  if ( v11 == 127 )
    v13 = a4;
  else
    v13 = 0;
  if ( v12 )
  {
    v10 = a3[1];
    ++a3;
    v9 = a4 - 1;
    v13 -= 2;
  }
  v40 = a3;
  v14 = a3;
  if ( v12 )
    v36 = v13;
  v15 = v10;
  if ( v12 )
    v13 = 1;
  v39 = v13;
  if ( v12 )
    a4 = v9;
  v16 = a4;
  while ( 1 )
  {
    --v16;
    v18 = strlen(v15) + 1;
    v7 += v18;
    if ( v8 < v18 )
      v8 = v18;
    if ( v16 <= 0 )
      break;
    v17 = v14[1];
    ++v14;
    v15 = v17;
  }
  if ( v8 > 0x23 )
  {
    v19 = v10;
    v20 = a4;
    for ( i = v40; ; ++i )
    {
      --v20;
      fprintf((FILE *)option_usage_fp, "  %s\n", v19);
      if ( v20 <= 0 )
        break;
      v22 = i[1];
      v19 = v22;
    }
    goto LABEL_23;
  }
  if ( v7 <= 0x4B )
  {
    fputc(32, (FILE *)option_usage_fp);
    v33 = a4;
    do
    {
      fputc(32, (FILE *)option_usage_fp);
      --v33;
      v34 = *a3++;
      fputs(v34, (FILE *)option_usage_fp);
    }
    while ( v33 > 0 );
    fputc(10, (FILE *)option_usage_fp);
LABEL_23:
    v23 = (FILE *)option_usage_fp;
    if ( a1 <= 0xF )
      goto LABEL_24;
    goto LABEL_36;
  }
  v25 = a4;
  v26 = (unsigned __int8 **)(a3 - 1);
  v27 = 0;
  sprintf(s, "%%-%ds", v8);
  v29 = sub_8B228(78, v8, v28);
  fwrite("  ", 1u, 2u, (FILE *)option_usage_fp);
  while ( 1 )
  {
    --v25;
    v32 = v26[1];
    ++v26;
    v31 = v32;
    if ( v25 <= 0 )
      break;
    if ( v29 == ++v27 )
      v30 = "%s\n  ";
    else
      v30 = s;
    if ( v29 == v27 )
      v27 = 0;
    fprintf((FILE *)option_usage_fp, v30);
  }
  fprintf((FILE *)option_usage_fp, "%s\n", v31);
  v23 = (FILE *)option_usage_fp;
  if ( a1 > 0xF )
  {
LABEL_36:
    fprintf(v23, off_B74D4[0], v39, v39 + v36);
    (*(void (__fastcall **)(unsigned int, int))(a1 + 84))(a1, 1);
    v23 = (FILE *)option_usage_fp;
  }
LABEL_24:
  if ( (unsigned __int16)a2[4] >> 12 != 4 )
    return fprintf(v23, off_B74D4[0], v39, v39 + v36);
  fprintf(v23, off_B7578[0], a4);
  return fputs(off_B75F0[0], (FILE *)option_usage_fp);
}
