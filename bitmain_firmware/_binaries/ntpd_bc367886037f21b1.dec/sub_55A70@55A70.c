int __fastcall sub_55A70(double a1, double *a2)
{
  double v2; // d17
  int v3; // r6
  int *v4; // r9
  int v5; // r8
  int v6; // r4
  double v7; // d0
  int v8; // r10
  double *v9; // r2
  double *v10; // lr
  int v11; // r7
  double v12; // d19
  double *v13; // r3
  double v14; // d16
  double v15; // d17
  double v16; // d18
  double v17; // d17
  int v18; // r12
  double v19; // d0
  double v20; // d17
  int v21; // r3
  bool v22; // cc
  int v23; // r3
  int v24; // r2
  char v26[128]; // [sp+3Ch] [bp-84h] BYREF

  v2 = *a2;
  v3 = LODWORD(a1);
  v4 = *(int **)(LODWORD(a1) + 84);
  v5 = HIDWORD(a1);
  v6 = *v4;
  if ( *a2 == 0.0 )
  {
    v8 = 0;
    *(_QWORD *)(HIDWORD(a1) + 16) = 0xC0B7700000000000LL;
LABEL_31:
    *(_QWORD *)(HIDWORD(a1) + 24) = 0;
    goto LABEL_12;
  }
  v7 = -6000.0;
  v8 = 0;
  v9 = a2 + 1;
  v10 = (double *)(HIDWORD(a1) + 32);
  v11 = 0;
  v12 = -6000.0;
  do
  {
    v13 = v9;
    LODWORD(a1) = &unk_BE670;
    v14 = unk_BE668 * v2 + 0.0;
    do
    {
      v15 = *v13++;
      v16 = *(double *)LODWORD(a1);
      LODWORD(a1) += 8;
      v14 = v14 + v16 * v15;
    }
    while ( v9 + 3 != v13 );
    v17 = *v10 + (v14 - *v10) * 0.0625;
    *v10++ = v17;
    if ( v17 > v12 )
    {
      v7 = v12;
      v8 = v11;
      v12 = v17;
    }
    else if ( v17 > v7 )
    {
      v7 = v17;
    }
    v9 += 4;
    v2 = *(v9 - 1);
    ++v11;
  }
  while ( v2 != 0.0 );
  *(double *)(HIDWORD(a1) + 16) = v12;
  if ( v12 <= 0.0 )
    goto LABEL_31;
  if ( v7 > 0.0 )
  {
    a1 = log10(a1);
    v19 = v12 / v7 * 20.0;
    if ( v19 <= 40.0 )
    {
      v20 = *(double *)(v5 + 16);
      *(double *)(v5 + 24) = v19;
      if ( v20 < 1000.0 || v19 < 3.0 )
        goto LABEL_12;
      goto LABEL_22;
    }
    v12 = *(double *)(v5 + 16);
  }
  *(_QWORD *)(v5 + 24) = 0x4044000000000000LL;
  if ( v12 < 1000.0 )
  {
LABEL_12:
    *(_DWORD *)(v6 + 4328) |= 0x40u;
    goto LABEL_13;
  }
LABEL_22:
  if ( *(_DWORD *)(v5 + 4) == v8 )
  {
    v23 = *(_DWORD *)(v5 + 8);
    if ( v23 <= 2 )
      *(_DWORD *)(v5 + 8) = ++v23;
    if ( v23 == 3 )
    {
      v24 = *(_DWORD *)(v6 + 4308);
      *(_DWORD *)(v6 + 4328) |= 4u;
      *(_DWORD *)(v6 + 4308) = v24 + 1;
    }
  }
  else
  {
    v21 = *(_DWORD *)(v5 + 8);
    v22 = v21 <= 0;
    if ( v21 > 0 )
      --v21;
    *(_DWORD *)(v6 + 4332) |= 1u;
    if ( !v22 )
      *(_DWORD *)(v5 + 8) = v21;
    if ( !v21 )
      *(_DWORD *)(v5 + 4) = v8;
  }
LABEL_13:
  if ( (v4[192] & 8) != 0 )
  {
    v18 = *(_DWORD *)(v6 + 4328);
    if ( (v18 & 8) == 0 )
    {
      sub_6BCB0(
        v26,
        128,
        "wwv4 %2d %04x %3d %4d %5.0f %2d %d %d %d %5.0f %5.1f",
        *(_DWORD *)(v6 + 4304) - 1,
        v18,
        *(_DWORD *)(v6 + 2116),
        *(_DWORD *)(v6 + 2132),
        *(double *)(v6 + 2144),
        *(_DWORD *)v5,
        *(_DWORD *)(v5 + 4),
        v8,
        *(_DWORD *)(v5 + 8),
        *(double *)(v5 + 16),
        *(double *)(v5 + 24));
      LODWORD(a1) = sub_41CA4(v3 + 16, v26);
    }
  }
  return LODWORD(a1);
}
