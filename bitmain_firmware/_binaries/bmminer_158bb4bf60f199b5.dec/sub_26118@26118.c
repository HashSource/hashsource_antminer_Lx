void __fastcall sub_26118(_DWORD *a1, int a2, int a3)
{
  size_t v5; // r7
  size_t v6; // r4
  void *v7; // r0
  void *v8; // r3
  int v9; // r0
  _DWORD *v10; // r0
  int v11; // r3
  size_t v12; // r10
  _DWORD *v13; // r8
  size_t v14; // r7
  int *v15; // r4
  int v16; // r5
  _DWORD *v17; // r3
  int v18; // r12
  int v19; // r0
  int v20; // r1
  int v21; // r2
  int v22; // r0
  int v23; // r1
  int v24; // r2
  char *v25; // r4
  size_t v26; // r0
  size_t v27; // r10
  char *v28; // r4
  size_t v29; // r10
  _DWORD *v30; // r2
  int v31; // r1
  _DWORD *v32; // r9
  size_t v33; // r10
  int v34; // r1
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  memcpy(a1, (const void *)a2, 0x738u);
  v5 = a1[393];
  v6 = v5 + 1848;
  v7 = calloc(1u, v5);
  v8 = memcpy(v7, (const void *)(a2 + 1848), v5);
  v9 = a1[427];
  a1[392] = v8;
  v10 = sub_49624(4 * v9 + 1, "bmminer.c", "parse_job_buf", 567);
  v11 = a1[427];
  a1[169] = v10;
  if ( v11 > 0 )
  {
    v13 = v10;
    v14 = v5 + 1880;
    v15 = (int *)(a2 + v6);
    v16 = 0;
    while ( 1 )
    {
      v13[v16] = sub_49624(0x20u, "bmminer.c", "parse_job_buf", 570);
      v12 = v14 + 32 * v16;
      v17 = *(_DWORD **)(a1[169] + 4 * v16);
      if ( !v17 )
      {
        strcpy(s, "Failed to malloc local merkle_bin");
        sub_47AB4(3, s, 1);
        sub_62EC0(1);
      }
      v18 = *v15;
      ++v16;
      v19 = v15[1];
      v15 += 8;
      v20 = *(v15 - 6);
      v21 = *(v15 - 5);
      *v17 = v18;
      v17[1] = v19;
      v17[2] = v20;
      v17[3] = v21;
      v22 = *(v15 - 3);
      v23 = *(v15 - 2);
      v24 = *(v15 - 1);
      v17[4] = *(v15 - 4);
      v17[5] = v22;
      v17[6] = v23;
      v17[7] = v24;
      if ( a1[427] <= v16 )
        break;
      v13 = (_DWORD *)a1[169];
    }
  }
  else
  {
    v12 = v5 + 1848;
  }
  v25 = _strdup((const char *)(a2 + v12));
  v26 = strlen(v25);
  a1[168] = v25;
  v27 = v26 + 1 + v12;
  v28 = _strdup((const char *)(a2 + v27));
  v29 = v27 + strlen(v28);
  a1[153] = v28;
  v30 = (_DWORD *)(a2 + v29 + 1);
  v31 = v30[1];
  v32 = (_DWORD *)(a2 + v29 + 9);
  v33 = v29 + 17;
  unk_1385F8 = *v30;
  unk_1385FC = v31;
  v34 = v32[1];
  LODWORD(dbl_9ED90) = *v32;
  HIDWORD(dbl_9ED90) = v34;
  if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
  {
    snprintf(s, 0x800u, "parse job buf len:%d\n", v33);
    sub_47AB4(7, s, 0);
  }
  if ( v33 != a3 )
  {
    strcpy(s, "ERR: data trans/recv unmathced!");
    sub_47AB4(3, s, 1);
    sub_62EC0(1);
  }
}
