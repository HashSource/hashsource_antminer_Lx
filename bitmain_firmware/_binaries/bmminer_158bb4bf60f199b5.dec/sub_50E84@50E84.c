void __fastcall sub_50E84(int a1, char *a2, int a3)
{
  int v5; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r3
  int v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int *v13; // lr
  _DWORD *v14; // r12
  int v15; // r1
  int v16; // r2
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int v20; // r1
  int v21; // r2
  int v22; // r3
  char v23; // r3
  char v24; // t1
  char v25; // t1
  char *v26; // r2
  _DWORD *v27; // r3
  char v28; // t1
  char v29; // r1
  _DWORD *v30; // r3
  char *v31; // r2
  char v32; // r1
  char v33; // t1
  char v34; // t1
  const char *v35; // r5
  char *v36; // r8
  char *v37; // r7
  char *v38; // r9
  char *v39; // r6
  unsigned __int64 v40; // r0
  size_t v41; // r0
  int v42; // r4
  size_t v43; // r0
  unsigned __int64 v44; // r2
  int i; // r4
  size_t v46; // r0
  size_t v47; // r0
  char *ptr; // [sp+20h] [bp-C7Ch]
  char *v50; // [sp+28h] [bp-C74h]
  __int64 v51; // [sp+2Ch] [bp-C70h]
  char *v52; // [sp+34h] [bp-C68h] BYREF
  _DWORD v53[3]; // [sp+38h] [bp-C64h] BYREF
  _DWORD v54[5]; // [sp+44h] [bp-C58h] BYREF
  int v55; // [sp+58h] [bp-C44h] BYREF
  _DWORD v56[2]; // [sp+5Ch] [bp-C40h] BYREF
  _DWORD v57[4]; // [sp+64h] [bp-C38h] BYREF
  int v58; // [sp+74h] [bp-C28h] BYREF
  _DWORD v59[3]; // [sp+78h] [bp-C24h] BYREF
  _DWORD v60[5]; // [sp+84h] [bp-C18h] BYREF
  char s[1024]; // [sp+98h] [bp-C04h] BYREF
  char v62[2052]; // [sp+498h] [bp-804h] BYREF

  memset(s, 0, sizeof(s));
  v5 = *(_DWORD *)(a1 + 128);
  memset(v57, 0, sizeof(v57));
  v6 = *(_DWORD *)(a1 + 132);
  v7 = *(_DWORD *)(a1 + 136);
  v8 = *(_DWORD *)(a1 + 140);
  v53[0] = v5;
  v53[1] = v6;
  v53[2] = v7;
  v54[0] = v8;
  v9 = *(_DWORD *)(a1 + 144);
  v10 = *(_DWORD *)(a1 + 148);
  v11 = *(_DWORD *)(a1 + 152);
  v12 = *(_DWORD *)(a1 + 156);
  v13 = &v55;
  v58 = 0;
  v54[1] = v9;
  v54[2] = v10;
  v54[3] = v11;
  v54[4] = v12;
  v14 = (char **)((char *)&v52 + 3);
  v15 = *(_DWORD *)(a1 + 68);
  v16 = *(_DWORD *)(a1 + 72);
  v55 = *(_DWORD *)(a1 + 64);
  v56[0] = v15;
  v56[1] = v16;
  v17 = *(_DWORD *)(a1 + 196);
  v18 = *(_DWORD *)(a1 + 200);
  v19 = *(_DWORD *)(a1 + 204);
  v59[0] = *(_DWORD *)(a1 + 192);
  v59[1] = v17;
  v59[2] = v18;
  v60[0] = v19;
  v20 = *(_DWORD *)(a1 + 212);
  v21 = *(_DWORD *)(a1 + 216);
  v22 = *(_DWORD *)(a1 + 220);
  v60[1] = *(_DWORD *)(a1 + 208);
  v60[2] = v20;
  v60[3] = v21;
  v60[4] = v22;
  do
  {
    v24 = *((_BYTE *)v14 + 1);
    v14 = (_DWORD *)((char *)v14 + 1);
    v23 = v24;
    v25 = *((_BYTE *)v13 - 1);
    v13 = (int *)((char *)v13 - 1);
    *(_BYTE *)v14 = v25;
    *(_BYTE *)v13 = v23;
  }
  while ( v14 != (_DWORD *)((char *)v54 + 3) );
  v26 = (char *)&v55;
  v27 = v57;
  do
  {
    v28 = *((_BYTE *)v27 - 1);
    v27 = (_DWORD *)((char *)v27 - 1);
    v29 = *v26;
    *v26++ = v28;
    *(_BYTE *)v27 = v29;
  }
  while ( (_DWORD *)((char *)v56 + 2) != v27 );
  v30 = (int *)((char *)&v58 + 3);
  v31 = s;
  do
  {
    v33 = *((_BYTE *)v30 + 1);
    v30 = (_DWORD *)((char *)v30 + 1);
    v32 = v33;
    v34 = *--v31;
    *(_BYTE *)v30 = v34;
    *v31 = v32;
  }
  while ( v30 != (_DWORD *)((char *)v60 + 3) );
  ptr = sub_4988C(a1, 128);
  v35 = "o";
  v36 = sub_4988C((int)v53, 32);
  v37 = sub_4988C((int)&v55, 12);
  v50 = sub_4988C((int)a2, 4);
  v38 = sub_4988C((int)a2, 5);
  v39 = sub_4988C((int)v59, 32);
  v40 = sub_532CC((__int64 *)a1);
  HIDWORD(v51) = HIDWORD(v40);
  if ( !a3 )
    v35 = "x";
  LODWORD(v51) = v40;
  sprintf(
    s,
    "%s %08x midstate %s data %s nonce %s hash %s diff %lld",
    v35,
    *(_DWORD *)(a1 + 340),
    v36,
    v37,
    v38,
    v39,
    v40);
  if ( !strcmp((const char *)dword_1AECD0, "screen") )
  {
    if ( byte_244080 || byte_1AECC4 || dword_9E320 > 2 )
    {
      snprintf(v62, 0x800u, s);
      sub_47AB4(3, v62, 0);
    }
  }
  else
  {
    v52 = &byte_244080;
    if ( byte_244080 || byte_1AECC4 || dword_9E320 > 2 )
    {
      snprintf(v62, 0x800u, s);
      sub_47AB4(3, v62, 0);
    }
    if ( dword_1B0D34 )
    {
      sprintf(
        s,
        "%s %08x work %s midstate %s data %s nonce %s hash %s diff %lld",
        v35,
        *(_DWORD *)(a1 + 340),
        ptr,
        v36,
        v37,
        v38,
        v39,
        v51);
      v41 = strlen(s);
      fwrite(s, v41, 1u, (FILE *)dword_1B0D34);
      fwrite(&word_8B454, 1u, 1u, (FILE *)dword_1B0D34);
      fflush((FILE *)dword_1B0D34);
      if ( a3 )
      {
        if ( dword_1B0B28 == 1 )
        {
          sprintf(s, "midstate %s data %s nonce %s hash %s", v36, v37, v50, v39);
          v47 = strlen(s);
          fwrite(s, v47, 1u, (FILE *)dword_1B0C30[0]);
          fwrite(&word_8B454, 1u, 1u, (FILE *)dword_1B0C30[0]);
          fflush((FILE *)dword_1B0C30[0]);
        }
        else if ( ((dword_1B0B28 - 32) & 0xFFFFFFDF) == 0 )
        {
          sprintf(s, "midstate %s data %s nonce %s hash %s", v36, v37, v50, v39);
          v42 = sub_50B9C(dword_1B0B28, *a2);
          v43 = strlen(s);
          fwrite(s, v43, 1u, (FILE *)dword_1B0C30[v42]);
          fwrite(&word_8B454, 1u, 1u, (FILE *)dword_1B0C30[v42]);
          fflush((FILE *)dword_1B0C30[v42]);
        }
        if ( byte_1B0B24 )
        {
          v44 = v51;
          for ( i = 0; i != 64; ++i )
          {
            v44 >>= 1;
            if ( !v44 )
              break;
          }
          if ( byte_1AECC5 && (*v52 || byte_1AECC4 || dword_9E320 > 6) )
          {
            snprintf(v62, 0x800u, "work diff %lld diffnum %d", v51, i);
            sub_47AB4(7, v62, 0);
          }
          sprintf(s, "midstate %s data %s nonce %s hash %s", v36, v37, v50, v39);
          v46 = strlen(s);
          fwrite(s, v46, 1u, *((FILE **)&unk_1B0B2C + i));
          fwrite(&word_8B454, 1u, 1u, *((FILE **)&unk_1B0B2C + i));
          fflush(*((FILE **)&unk_1B0B2C + i));
        }
      }
    }
  }
  if ( ptr )
    free(ptr);
  if ( v36 )
    free(v36);
  if ( v37 )
    free(v37);
  if ( v50 )
    free(v50);
  if ( v38 )
    free(v38);
  if ( v39 )
    free(v39);
}
