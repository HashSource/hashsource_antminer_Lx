int __fastcall sub_55D60(double a1, int a2)
{
  int v2; // r4
  _BYTE *v3; // r8
  double v4; // d16
  int v5; // r6
  int *v6; // r7
  double v7; // d17
  int v8; // r5
  bool v9; // fzf
  bool v10; // fnf
  int v11; // r2
  double v12; // d17
  int v13; // r3
  double v14; // d16
  double v15; // d17
  double v16; // d16
  double v17; // d0
  int v18; // r3
  double v19; // d18
  double v20; // d16
  int v21; // r2
  char v23[128]; // [sp+34h] [bp-88h] BYREF
  int v24; // [sp+B4h] [bp-8h]

  v2 = HIDWORD(a1);
  v3 = *(_BYTE **)(LODWORD(a1) + 84);
  v4 = *(double *)(HIDWORD(a1) + 40);
  v5 = LODWORD(a1);
  v6 = *(int **)v3;
  v7 = *(double *)(HIDWORD(a1) + 8);
  v8 = *(_DWORD *)(*(_DWORD *)v3 + 2196);
  v9 = v4 == v7;
  v10 = v4 < v7;
  v11 = v8 - a2;
  v12 = *(double *)(HIDWORD(a1) + 16);
  v13 = v11 - 6400;
  if ( v11 - 6400 < 0 )
    v13 = v11 + 473600;
  if ( !v10 && !v9 )
    *(double *)(HIDWORD(a1) + 8) = v4;
  HIDWORD(a1) = _stack_chk_guard;
  if ( !v10 && !v9 )
    *(_DWORD *)(v2 + 24) = v13;
  v14 = v4 + v12;
  v24 = HIDWORD(a1);
  *(double *)(v2 + 16) = v14;
  if ( !v8 )
  {
    v15 = *(double *)(v2 + 8);
    *(double *)(v2 + 56) = v15;
    if ( v15 <= 0.0 )
    {
      v17 = 0.0;
    }
    else
    {
      v16 = v14 - v15;
      if ( v16 / 480000.0 > 0.0 )
      {
        log10(a1);
        v17 = v15 / (v16 / 480000.0) * 20.0;
        if ( v17 > 40.0 )
          v17 = 40.0;
        v15 = *(double *)(v2 + 56);
      }
      else
      {
        v17 = 40.0;
      }
    }
    LODWORD(a1) = *(_DWORD *)(v2 + 84);
    HIDWORD(a1) = *(_DWORD *)(v2 + 24);
    *(double *)(v2 + 64) = v17;
    if ( LODWORD(a1) )
      v8 = HIDWORD(a1) - *(_DWORD *)(v2 + 28) - (_DWORD)&loc_75300 * ((HIDWORD(a1) - *(_DWORD *)(v2 + 28)) / 480000);
    else
      *(_DWORD *)(v2 + 28) = HIDWORD(a1);
    v18 = 2 * *(_DWORD *)(v2 + 80);
    *(_DWORD *)(v2 + 80) = v18;
    if ( (v18 & 0x40) != 0 )
      *(_DWORD *)(v2 + 84) = --LODWORD(a1);
    if ( v15 > 2500.0 && v17 > 20.0 )
    {
      LODWORD(a1) = v8 + 159;
      v21 = *(_DWORD *)(v2 + 84);
      if ( (unsigned int)(v8 + 159) > 0x13E )
      {
        if ( v21 == 1 )
          *(_DWORD *)(v2 + 28) = HIDWORD(a1);
      }
      else
      {
        *(_DWORD *)(v2 + 80) = v18 | 1;
        *(_DWORD *)(v2 + 84) = v21 + 1;
        *(_DWORD *)(v2 + 28) = HIDWORD(a1);
        *(_DWORD *)(v2 + 32) = HIDWORD(a1);
      }
    }
    if ( v6[14] <= 6 )
    {
      v19 = 6000.0;
      v20 = (double)*(int *)(v2 + 84) * 6000.0;
      if ( v15 < 6000.0 )
        v20 = v20 + v15;
      else
        v19 = 5999.0;
      if ( v15 >= 6000.0 )
        v20 = v20 + v19;
      *(double *)(v2 + 72) = v20 / 42000.0 * 100.0;
      if ( (v3[768] & 8) == 0 )
        goto LABEL_21;
    }
    else
    {
      *(_QWORD *)(v2 + 72) = 0;
      if ( (v3[768] & 8) == 0 )
      {
LABEL_21:
        *(_QWORD *)(v2 + 16) = 0;
        *(_QWORD *)(v2 + 8) = 0;
        return LODWORD(a1);
      }
    }
    sub_6BCB0(
      v23,
      128,
      "wwv8 %04x %3d %s %04x %.0f %.0f/%.1f %ld %ld",
      v6[1082],
      v6[529],
      (const char *)(v2 + 92),
      *(unsigned __int16 *)(v2 + 80),
      *(double *)(v2 + 72),
      v15,
      v17,
      SHIDWORD(a1) % 8000,
      v8);
    LODWORD(a1) = sub_41CA4(v5 + 16, v23);
    goto LABEL_21;
  }
  return LODWORD(a1);
}
