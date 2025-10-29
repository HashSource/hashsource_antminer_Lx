size_t __fastcall sub_38F40(int a1)
{
  double v1; // d19
  int v2; // r3
  int v3; // lr
  size_t v6; // r5
  double *v7; // r7
  _QWORD *v8; // r12
  unsigned int v9; // r2
  unsigned int v10; // r12
  double v11; // r0
  double v12; // d17
  double v13; // d16
  double v14; // d18
  double v15; // d17
  double *v16; // r6
  unsigned int v17; // r3
  double v18; // d16
  double v19; // d8
  double v20; // d0
  double v21; // d9
  double v22; // r0
  int v23; // r2
  double v24; // d8
  double v25; // d0
  _DWORD v26[123]; // [sp+0h] [bp-1ECh] BYREF

  v2 = *(_DWORD *)(a1 + 220);
  v3 = *(_DWORD *)(a1 + 216);
  if ( v3 == v2 )
    return 0;
  v6 = 0;
  v7 = (double *)v26;
  v8 = v26;
  do
  {
    ++v6;
    v2 = (v2 + 1) % 60;
    *v8++ = *(_QWORD *)(a1 + 8 * v2 + 264);
  }
  while ( v2 != v3 );
  *(_DWORD *)(a1 + 220) = v2;
  if ( v6 != 1 )
    qsort(v26, v6, 8u, (__compar_fn_t)sub_38ED8);
  v9 = v6;
  v10 = 0;
  LODWORD(v11) = v6 - 4 * v6 / 0xA;
LABEL_8:
  HIDWORD(v11) = &v26[2 * v9];
  while ( v9 - v10 > LODWORD(v11) )
  {
    v12 = *(double *)(HIDWORD(v11) - 8);
    HIDWORD(v11) -= 8;
    v13 = *(double *)&v26[2 * ((2 * v10 + v9 - v10) >> 1)];
    if ( v12 - v13 < v13 - *v7 )
    {
      ++v10;
      ++v7;
      goto LABEL_8;
    }
    --v9;
  }
  v14 = 0.0;
  *(_QWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 256) = 0;
  if ( v9 > v10 )
  {
    HIDWORD(v11) = v10 + 1;
    v16 = (double *)&v26[2 * v10 + 2];
    v17 = v10;
    v15 = *(double *)&v26[2 * v10] + 0.0;
    *(double *)(a1 + 240) = v15;
    while ( v9 != ++v17 )
    {
      v18 = *v16++;
      if ( v10 < v17 )
        v1 = *(v16 - 2);
      v15 = v15 + v18;
      if ( v10 < v17 )
        v18 = v18 - v1;
      *(double *)(a1 + 240) = v15;
      if ( v10 < v17 )
      {
        v14 = v14 + v18 * v18;
        *(double *)(a1 + 256) = v14;
      }
    }
  }
  else
  {
    v15 = 0.0;
  }
  v19 = (double)LODWORD(v11);
  v20 = v14 / (double)LODWORD(v11);
  v21 = sqrt(v20);
  *(double *)(a1 + 240) = v15 / (double)LODWORD(v11);
  if ( v20 < 0.0 )
    v11 = sqrt(v11);
  LODWORD(v11) = sys_precision;
  v22 = ldexp(v11, v9);
  if ( v21 > 1.0 )
  {
    v25 = *(double *)(a1 + 256) / v19;
    v24 = sqrt(v25);
    if ( v25 < 0.0 )
      sqrt(v22);
  }
  else
  {
    LODWORD(v22) = sys_precision;
    ldexp(v22, v23);
    v24 = 1.0;
  }
  *(double *)(a1 + 256) = v24;
  return v6;
}
