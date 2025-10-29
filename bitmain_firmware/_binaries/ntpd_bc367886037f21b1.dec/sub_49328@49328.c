int __fastcall sub_49328(double a1, int a2)
{
  _DWORD *v2; // r6
  int v3; // r8
  double *v4; // r9
  double v5; // d0
  int v6; // r4
  __int64 v7; // r10
  unsigned int v8; // r2
  int v9; // r3
  bool v10; // cc
  int result; // r0
  int v12; // r1
  char *v13; // r5
  double v14; // d16
  unsigned int v15; // kr00_4
  unsigned int v16; // kr04_4
  int v17; // r12
  double v18; // d0
  int v19; // r1
  __int64 v20; // r0
  int v21; // r1
  int v22; // r0
  double v23; // d17
  int v24; // r0
  char v25; // t1
  double v26; // d13
  double v27; // d16
  int v28; // r2
  int v29; // r3

  v2 = (_DWORD *)LODWORD(a1);
  v3 = *(_DWORD *)(LODWORD(a1) + 4);
  v4 = *(double **)(v3 + 84);
  v5 = (double)*(int *)(LODWORD(a1) + 84) / 8000.0;
  v6 = *(_DWORD *)v4;
  LODWORD(a1) = 32;
  ldexp(a1, a2);
  if ( v5 < 0.0 )
    v7 = -sub_8BBA8(COERCE_UNSIGNED_INT64(-v5), HIDWORD(COERCE_UNSIGNED_INT64(-v5)));
  else
    v7 = sub_8BBA8(LODWORD(v5), HIDWORD(v5));
  v8 = v2[19];
  v9 = v2[18] - HIDWORD(v7);
  if ( v8 < (unsigned int)v7 )
    --v9;
  v10 = v2[21] <= 0;
  v2[19] = v8 - v7;
  v2[18] = v9;
  result = v2[18];
  v12 = v2[19];
  *(_DWORD *)(v6 + 24) = result;
  *(_DWORD *)(v6 + 28) = v12;
  if ( !v10 )
  {
    v13 = (char *)(v2 + 22);
    while ( 1 )
    {
      v25 = *v13++;
      v26 = *(double *)(v6 + 8 * (unsigned __int8)~v25 + 776);
      v27 = (*(double *)(v6 + 712) + clock_codec) / 8000.0 + *(double *)(v6 + 704) + v4[94] / 1000000.0;
      *(double *)(v6 + 704) = v27;
      if ( v27 >= 0.5 )
      {
        *(double *)(v6 + 704) = v27 - 1.0;
      }
      else
      {
        if ( v27 < -0.5 )
        {
          *(double *)(v6 + 704) = v27 + 1.0;
          sub_49078(v3);
        }
        sub_49078(v3);
      }
      result = 8000;
      v14 = *(double *)(v6 + 2824);
      v15 = *(_DWORD *)(v6 + 28);
      v16 = *(_DWORD *)(v6 + 36);
      v17 = *(_DWORD *)(v6 + 24);
      v18 = fabs(v26);
      v19 = *(_DWORD *)(v6 + 2844) + 1;
      *(_DWORD *)(v6 + 28) = v16 + v15;
      if ( v14 < v18 )
        v14 = v18;
      *(_DWORD *)(v6 + 24) = (__PAIR64__(v17 + *(_DWORD *)(v6 + 32), v16) + v15) >> 32;
      *(double *)(v6 + 2824) = (v18 - v14) / 1000.0 + v14;
      *(_DWORD *)(v6 + 2844) = v19 % 8000;
      if ( v19 % 8000 )
        goto LABEL_18;
      if ( *(double *)(v6 + 752) <= *(double *)(v6 + 760) )
      {
        v20 = 0x3F7930BE0DED288DLL;
        *(_DWORD *)(v6 + 3160) = 10;
      }
      else
      {
        v20 = 0x3F6E646F15619114LL;
        *(_DWORD *)(v6 + 3160) = 1;
      }
      *(_QWORD *)(v6 + 3152) = v20;
      v21 = **(_DWORD **)(v3 + 84);
      *(_QWORD *)(v6 + 760) = 0;
      v22 = *(_DWORD *)(v21 + 2836);
      v23 = *(double *)(v21 + 3000);
      *(_QWORD *)(v6 + 752) = 0;
      if ( v23 >= 2000.0 )
        break;
      v24 = v22 + 4;
      if ( v24 <= 255 )
        goto LABEL_16;
      *(_DWORD *)(v21 + 2836) = 255;
LABEL_17:
      result = sub_60F24();
LABEL_18:
      if ( v2[21] <= v13 - (char *)(v2 + 22) )
        goto LABEL_29;
    }
    if ( v23 <= 3000.0 )
      goto LABEL_17;
    v24 = v22 - 4;
    if ( v24 < 0 )
      v24 = 0;
LABEL_16:
    *(_DWORD *)(v21 + 2836) = v24;
    goto LABEL_17;
  }
LABEL_29:
  if ( ((_BYTE)v4[96] & 2) != 0 )
    v28 = 2;
  else
    v28 = 1;
  v29 = (_BYTE)v4[96] & 4;
  *(_DWORD *)(v6 + 2832) = v28;
  if ( v29 )
    v29 = 127;
  *(_DWORD *)(v6 + 2840) = v29;
  return result;
}
