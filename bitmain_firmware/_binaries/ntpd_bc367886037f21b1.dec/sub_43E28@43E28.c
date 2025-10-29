int __fastcall sub_43E28(double a1, int a2, _DWORD *a3)
{
  int v4; // r6
  _DWORD *v5; // r4
  double v6; // d0
  int v7; // r2
  __int64 v8; // r0
  int v9; // r2
  double v10; // d0
  __int64 v11; // r8
  int v12; // r3
  int v13; // r2
  __int64 v14; // r0
  bool v15; // zf
  int v16; // r3
  int v17; // r2
  char v18; // r3

  v4 = a3[21];
  v5 = *(_DWORD **)v4;
  v6 = *(double *)(v4 + 744);
  v7 = *(_DWORD *)(*(_DWORD *)v4 + 8);
  if ( (_DWORD *)v7 == a3 )
  {
    LODWORD(a1) = 32;
    ldexp(a1, v7);
    if ( v6 < 0.0 )
      v14 = -sub_8BBA8(COERCE_UNSIGNED_INT64(-v6), HIDWORD(COERCE_UNSIGNED_INT64(-v6)));
    else
      v14 = sub_8BBA8(LODWORD(v6), HIDWORD(v6));
    v5[30] = v14;
    v5[29] = HIDWORD(v14);
    if ( (*(_BYTE *)(v4 + 768) & 1) == 0 )
      a3[17] &= ~0x80u;
  }
  else
  {
    LODWORD(a1) = 32;
    ldexp(a1, v7);
    if ( v6 < 0.0 )
      v8 = -sub_8BBA8(COERCE_UNSIGNED_INT64(-v6), HIDWORD(COERCE_UNSIGNED_INT64(-v6)));
    else
      v8 = sub_8BBA8(LODWORD(v6), HIDWORD(v6));
    v10 = *(double *)(v4 + 752);
    v5[28] = v8;
    v5[27] = HIDWORD(v8);
    LODWORD(v8) = 32;
    ldexp(*(double *)&v8, v9);
    if ( v10 < 0.0 )
      v11 = -sub_8BBA8(COERCE_UNSIGNED_INT64(-v10), HIDWORD(COERCE_UNSIGNED_INT64(-v10)));
    else
      v11 = sub_8BBA8(LODWORD(v10), HIDWORD(v10));
    v12 = a3[19];
    v13 = v5[4];
    v5[32] = v11;
    LODWORD(v14) = v13 ^ v12;
    v5[31] = HIDWORD(v11);
    if ( ((v13 ^ v12) & 3) != 0 )
    {
      v15 = (v13 & 3) == 2;
      v16 = v12 & 3;
      v17 = *(_DWORD *)a3[21];
      if ( v15 )
      {
        LODWORD(v14) = 0;
        BYTE4(v14) = *(_BYTE *)(v17 + 132);
        *(_DWORD *)(v17 + 72) = 0;
        *(_BYTE *)(v17 + 132) = BYTE4(v14) & 0xEF;
      }
      *(_BYTE *)(v17 + 132) &= 0xF9u;
      v5[4] = v16;
      if ( v16 == 2 )
      {
        v18 = *(_BYTE *)(v17 + 132);
        *(_DWORD *)(v17 + 72) = 30;
        *(_BYTE *)(v17 + 132) = v18 & 0xEF;
      }
      *(_BYTE *)(v17 + 132) &= 0xF9u;
    }
  }
  return v14;
}
