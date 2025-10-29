_DWORD *__fastcall update_hashrate(int a1, int a2, _DWORD *a3)
{
  int v5; // r11
  float v6; // s13
  float v7; // s17
  int v8; // r7
  int v9; // r4
  bool v10; // cc
  int v11; // r2
  unsigned int v12; // r6
  float v13; // s14
  int v14; // r3
  float v15; // s15
  int v16; // r2
  float v17; // s15
  int v18; // r0
  int v19; // r7
  int v20; // lr
  int v21; // r7
  __int64 v22; // kr00_8
  __int64 *v23; // r0
  __int64 v24; // t1
  int v25; // lr
  float v26; // s13
  float v27; // s15
  int v28; // r11
  int i; // r2
  float v30; // s16
  int v31; // r4
  int v32; // r3
  int v33; // r2
  double v34; // d6
  int v36; // r7
  __int64 v37; // kr08_8
  float v38; // s16
  _DWORD *v39; // r4
  int v40; // r1
  char *v41; // r3
  __int64 v42; // r0
  unsigned int v43; // r3
  int v44; // r2
  float v45; // s16
  float v46; // r0
  int v47; // r0
  char v48; // r1
  int v49; // r3
  __int64 v50; // r0
  float v51; // s16
  unsigned __int64 v52; // [sp+8h] [bp-2Ch]
  int v54; // [sp+18h] [bp-1Ch]
  int v55; // [sp+1Ch] [bp-18h]
  int v56; // [sp+20h] [bp-14h]
  int v57; // [sp+20h] [bp-14h]
  int v58; // [sp+24h] [bp-10h]
  double v59; // [sp+28h] [bp-Ch] BYREF

  (*(void (__fastcall **)(int, double *))(a1 + 88))(a1, &v59);
  v5 = *(_DWORD *)(a1 + 136);
  *(double *)(a2 + 48) = v59;
  if ( v5 > 4 )
    return a3;
  v54 = 16 * v5;
  if ( !*((_BYTE *)&unk_167878 + v5) )
  {
    clock_gettime(1, (struct timespec *)&unk_16787C + 2 * v5);
    clock_gettime(1, (struct timespec *)&unk_1678BC + 2 * v5);
    clock_gettime(1, (struct timespec *)&unk_1678FC + 2 * v5);
    *((_QWORD *)&unk_167878 + v5 + 25) = 0;
    *((_BYTE *)&unk_167878 + v5) = 1;
  }
  if ( *(_QWORD *)(a1 + 256) )
  {
    v55 = 16 * v5 + 8;
    clock_gettime(1, (struct timespec *)((char *)&unk_16787C + v55));
    v6 = (float)(1000LL * (*((_DWORD *)&unk_167878 + 4 * v5 + 3) - *((_DWORD *)&unk_167878 + 4 * v5 + 1))
               + (*((_DWORD *)&unk_167878 + 4 * v5 + 4) - *((_DWORD *)&unk_167878 + 4 * v5 + 2)) / 1000000);
    v7 = v6 / 1000.0;
    if ( (float)(v6 / 1000.0) >= 5.0 )
    {
      v36 = *(_DWORD *)(a1 + 260);
      v57 = *(_DWORD *)(a1 + 256);
      v58 = *(_DWORD *)(a1 + 188);
      v37 = *(_QWORD *)(a1 + 256) - *((_QWORD *)&unk_167878 + v5 + 25);
      if ( !strcmp((const char *)v58, "grin29")
        || *(_BYTE *)v58 == 97 && *(_BYTE *)(v58 + 1) == 101 && !*(_BYTE *)(v58 + 2) )
      {
        v38 = (float)(COERCE_FLOAT(sub_12D5D0(v37)) / v7) * (float)*(unsigned int *)(a1 + 244);
      }
      else
      {
        v47 = *(_DWORD *)(a1 + 244);
        v48 = 32 - v47;
        v49 = 1 << (v47 - 32);
        LODWORD(v50) = 1 << v47;
        HIDWORD(v50) = v49 | (1u >> v48);
        v51 = COERCE_FLOAT(sub_12D5D0(v50));
        v38 = v51 * (float)(COERCE_FLOAT(sub_12D5D0(v37)) / v7);
      }
      v39 = (_DWORD *)((char *)&unk_167960 + 2896 * v5);
      clock_gettime(1, (struct timespec *)&unk_16787C + 2 * v5);
      v40 = v39[720];
      v41 = (char *)&unk_167878 + 8 * v5;
      *((_DWORD *)v41 + 51) = v36;
      *((_DWORD *)v41 + 50) = v57;
      LODWORD(v42) = v39[722];
      LODWORD(v52) = v42 + 1;
      v43 = v39[723];
      v44 = (v40 + 1) % 720;
      *((float *)&unk_167960 + 724 * v5 + v40) = v38;
      HIDWORD(v42) = v43;
      v39[720] = v44;
      HIDWORD(v52) = (__PAIR64__(v43, v42) + 1) >> 32;
      v45 = v38 + (float)(COERCE_FLOAT(sub_12D5D0(v42)) * *(float *)(a2 + 40));
      v46 = COERCE_FLOAT(sub_12D5D0(v52));
      *((_QWORD *)v39 + 361) = v52;
      *(float *)(a2 + 40) = v45 / v46;
    }
    else
    {
      v52 = *((_QWORD *)&unk_167960 + 362 * v5 + 361);
    }
    v8 = HIDWORD(v52);
    v9 = *((_DWORD *)&unk_167960 + 724 * v5 + 720);
    if ( v52 )
    {
      v56 = *((_DWORD *)&unk_167960 + 724 * v5 + 720);
      v10 = HIDWORD(v52) != 0;
      v11 = 359;
      if ( !HIDWORD(v52) )
        v10 = (unsigned int)v52 > 0x167;
      if ( v10 )
        v6 = 360.0;
      else
        v11 = v52;
      if ( !v10 )
        v8 = v11;
      LOWORD(v12) = 23302;
      v13 = *((float *)&unk_167960 + 724 * v5 + (v9 + 719) % 720);
      if ( v10 )
        v8 = 360;
      v14 = v9 + 719;
      HIWORD(v12) = 1456;
      v15 = v13 + 0.0;
      *(float *)(a2 + 32) = v13 + 0.0;
      if ( !v10 )
        v15 = *(float *)&v11;
      v16 = 0;
      if ( !v10 )
        v6 = (float)SLODWORD(v15);
      v17 = 0.0;
      while ( 1 )
      {
        ++v16;
        v17 = v17 + v13;
        v18 = v14 % 720;
        if ( v8 <= v16 )
          break;
        v14 = v18 + 719;
        v13 = *((float *)&unk_167960
              + 724 * v5
              + v18
              + 719
              - 720 * ((((unsigned int)(v18 + 719) >> 4) * (unsigned __int64)v12) >> 32));
      }
      v9 = v56;
    }
    else
    {
      v6 = 0.0;
      v17 = 0.0;
      *(float *)(a2 + 32) = 0.0 / 0.0;
    }
    v19 = *(_DWORD *)(a1 + 196);
    *(float *)(a2 + 36) = v17 / v6;
    if ( v19 <= 0 )
    {
      v22 = 0;
    }
    else
    {
      v20 = *(_DWORD *)(a1 + 264) + 16;
      v21 = v20 + 48 * v19;
      v22 = 0;
      do
      {
        v23 = (__int64 *)v20;
        do
        {
          v24 = *v23++;
          v22 += v24;
        }
        while ( v23 != (__int64 *)(v20 + 32) );
        v20 += 48;
      }
      while ( v21 != v20 );
    }
    *(_QWORD *)(a2 + 72) = v22;
    clock_gettime(1, (struct timespec *)((char *)&unk_1678BC + v55));
    if ( (float)((float)(1000LL
                       * (*(_DWORD *)((char *)&unk_167878 + v54 + 76) - *(_DWORD *)((char *)&unk_167878 + v54 + 68))
                       + (*(_DWORD *)((char *)&unk_167878 + v54 + 80) - *(_DWORD *)((char *)&unk_167878 + v54 + 72))
                       / 1000000)
               / 1000.0) < 900.0 )
      goto LABEL_41;
    if ( v52 > 0xB3 )
    {
      v26 = 180.0;
      v25 = 180;
    }
    else
    {
      v25 = v52;
      v26 = (float)(int)v52;
      if ( !(_DWORD)v52 )
      {
        v27 = 0.0;
        goto LABEL_35;
      }
    }
    v27 = 0.0;
    v28 = 724 * v5;
    for ( i = 0; i < v25; ++i )
    {
      v9 = (v9 + 719) % 720;
      v27 = v27 + *((float *)&unk_167960 + v28 + v9);
    }
LABEL_35:
    v30 = v27 / v26;
    v31 = *(_DWORD *)(a2 + 192);
    if ( v31 > 23 )
    {
      memcpy((void *)(a2 + 96), (const void *)(a2 + 100), 0x5Cu);
      *(float *)(a2 + 188) = v30;
    }
    else
    {
      *(float *)(a2 + 4 * v31 + 96) = v30;
    }
    v32 = *(_DWORD *)(a2 + 200);
    v33 = *(_DWORD *)(a2 + 204);
    v34 = v59 * 0.8;
    *(_DWORD *)(a2 + 192) = v31 + 1;
    *(_DWORD *)(a2 + 200) = v32 + 1;
    *(_DWORD *)(a2 + 204) = __CFADD__(v32, 1) + v33;
    if ( v30 <= v34 )
      *a3 |= 1u;
    clock_gettime(1, (struct timespec *)((char *)&unk_1678BC + v54));
LABEL_41:
    if ( !strcmp(*(const char **)(a1 + 188), "dash") )
    {
      clock_gettime(1, (struct timespec *)((char *)&unk_1678FC + v55));
      if ( (float)((float)(1000LL
                         * (*(_DWORD *)((char *)&unk_167878 + v54 + 140) - *(_DWORD *)((char *)&unk_167878 + v54 + 132))
                         + (*(_DWORD *)((char *)&unk_167878 + v54 + 144) - *(_DWORD *)((char *)&unk_167878 + v54 + 136))
                         / 1000000)
                 / 1000.0) >= 3000.0 )
      {
        (*(void (__fastcall **)(int))(a1 + 128))(a1);
        clock_gettime(1, (struct timespec *)((char *)&unk_1678FC + v54));
      }
    }
    return a3;
  }
  clock_gettime(1, (struct timespec *)&unk_16787C + 2 * v5);
  clock_gettime(1, (struct timespec *)&unk_1678BC + 2 * v5);
  clock_gettime(1, (struct timespec *)&unk_1678FC + 2 * v5);
  *((_QWORD *)&unk_167878 + v5 + 25) = 0;
  return a3;
}
