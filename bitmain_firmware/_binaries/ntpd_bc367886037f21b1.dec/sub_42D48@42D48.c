_DWORD *__fastcall sub_42D48(_DWORD *result)
{
  int *v1; // r1
  int v2; // r4
  char *v3; // r6
  int v4; // lr
  unsigned int v5; // r2
  int v6; // r1
  _DWORD *v7; // t0
  char *v8; // r1
  char v9; // t1
  _BOOL4 v10; // r3
  _BOOL4 v11; // r3
  unsigned int v12; // r0
  unsigned int v13; // r12
  int v14; // lr
  unsigned int v15; // r10
  unsigned int v16; // r9
  unsigned int v17; // r2
  int v18; // r3
  __int64 v19; // r0
  int v20; // r2
  int v21; // r3
  __int64 v22; // r0
  unsigned int v23; // r0
  unsigned int v24; // r1
  int v25; // r8
  unsigned int v26; // r6
  int v27; // r1
  int32x2_t v28; // d16
  double v29; // d16
  double v30; // d17
  bool v31; // nf
  double v32; // d18
  double v33; // d17
  bool v34; // nf

  v1 = *(int **)(result[1] + 84);
  v2 = *v1;
  v3 = (char *)(result + 22);
  v4 = result[21];
  v5 = *(unsigned __int8 *)(*v1 + 73);
  if ( *(_BYTE *)(*v1 + 73) )
  {
    v11 = v5 <= 7;
    if ( v4 <= 0 )
      v11 = 0;
    if ( !v11 )
      goto LABEL_7;
  }
  else
  {
    v7 = result + 18;
    result = (_DWORD *)result[18];
    v6 = v7[1];
    *(_DWORD *)(v2 + 16) = result;
    *(_DWORD *)(v2 + 20) = v6;
    if ( v4 <= 0 )
    {
      *(_BYTE *)(v2 + 73) = v5;
      return result;
    }
  }
  v8 = v3;
  result = (_DWORD *)(v2 + v5 + 65);
  do
  {
    v9 = *v8++;
    ++v5;
    *(_BYTE *)result = v9;
    result = (_DWORD *)((char *)result + 1);
    v10 = v8 - v3 < v4;
    if ( v5 > 7 )
      v10 = 0;
  }
  while ( v10 );
LABEL_7:
  *(_BYTE *)(v2 + 73) = v5;
  if ( v5 > 6 )
  {
    v12 = *(unsigned __int8 *)(v2 + 66);
    v13 = *(unsigned __int8 *)(v2 + 67);
    v14 = v12 & 0xF;
    v15 = v12 >> 4;
    v16 = *(unsigned __int8 *)(v2 + 69);
    LOWORD(v12) = *(_BYTE *)(v2 + 65) & 0xF;
    v17 = *(unsigned __int8 *)(v2 + 68);
    v18 = 100 * (*(unsigned __int8 *)(v2 + 70) >> 4)
        + 10 * (*(_BYTE *)(v2 + 70) & 0xF)
        + (*(unsigned __int8 *)(v2 + 71) >> 4);
    *(_DWORD *)(v2 + 56) = v18;
    HIDWORD(v19) = (v13 & 0xF) + 10 * ((v13 >> 4) & 3);
    *(_DWORD *)(v2 + 60) = 1000 * v18;
    v20 = (v17 & 0xF) + 10 * ((v17 >> 4) & 7);
    LODWORD(v19) = 100 * (__int16)v12 + 10 * v15 + v14;
    v21 = (v16 & 0xF) + 10 * ((v16 >> 4) & 7);
    *(_QWORD *)(v2 + 40) = v19;
    *(_DWORD *)(v2 + 48) = v20;
    *(_DWORD *)(v2 + 52) = v21;
    if ( sub_6300C(v19, HIDWORD(v19), v20, v21, 0, *(_DWORD *)(v2 + 16), v2 + 32, v2 + 24) )
    {
      v22 = vshld_n_s64(vshrd_n_s64(vdup_n_s32(*(_DWORD *)(v2 + 60)).n64_i64[0], 0x20u), 0x20u) + 500000;
      v23 = sub_8BB68(v22, HIDWORD(v22), &unk_F4240, 0);
      v24 = *(_DWORD *)(v2 + 20);
      v25 = *(_DWORD *)(v2 + 24) - *(_DWORD *)(v2 + 16);
      ++*(_DWORD *)(v2 + 36);
      v26 = v23 - v24;
      if ( v23 < v24 )
        --v25;
      v27 = *(_DWORD *)(v2 + 20);
      *(_DWORD *)(v2 + 24) = *(_DWORD *)(v2 + 16);
      *(_DWORD *)(v2 + 28) = v27;
      result = (_DWORD *)sub_39A1C(*(_DWORD *)v2);
      v28.n64_u32[0] = (v26 >> 12) | (v25 << 20);
      v28.n64_u32[1] = v28.n64_u32[0];
      v29 = vcvt_n_f64_s32(v28, 0x14u);
      v30 = *(double *)(v2 + 80);
      if ( v29 < 0.0 )
        v29 = -v29;
      if ( v30 == 0.0 )
      {
        v31 = v29 < 0.1;
        if ( v29 >= 0.1 )
          *(_QWORD *)(v2 + 80) = 0x3F847AE147AE147CLL;
        else
          v29 = v29 * v29;
        if ( v31 )
          *(double *)(v2 + 80) = v29;
      }
      else
      {
        v32 = 0.95;
        v33 = v30 * 0.95;
        v34 = v29 < 0.1;
        if ( v29 >= 0.1 )
          v29 = 0.0005;
        else
          v32 = 0.05;
        if ( v34 )
          v32 = v29 * v32;
        else
          v33 = v33 + v29;
        if ( v34 )
          v33 = v33 + v32 * v29;
        *(double *)(v2 + 80) = v33;
      }
    }
    else
    {
      return (_DWORD *)sub_64A18(3, "Datum_PTS: Bad clocktime");
    }
  }
  return result;
}
