int __fastcall sub_5DC4C(int a1)
{
  __int64 v1; // d0
  _DWORD *v3; // r7
  _DWORD *v4; // r4
  int v5; // r0
  int v6; // r8
  int v7; // r12
  double v8; // d8
  double *v9; // r2
  int v10; // r1
  int v11; // r3
  double *v12; // lr
  int v13; // lr
  double v14; // d17
  double v15; // d16
  int v16; // r2
  double v17; // d16
  int v18; // r2
  int v19; // r2
  _BOOL4 v20; // r3
  int v21; // r3
  int v22; // r1
  int v23; // r1
  int v24; // r3

  v3 = *(_DWORD **)(a1 + 84);
  v4 = (_DWORD *)*v3;
  v5 = *(_DWORD *)(*v3 + 932);
  if ( v5 <= 0 )
    return 0;
  v7 = v4[234];
  v8 = 0.0;
  v9 = (double *)&v4[10 * v7];
  v7 *= 5;
  v10 = 0;
  v11 = *v3;
  v12 = (double *)&v4[2 * v7 + 236 + 2 * *((_DWORD *)v9 + 244)];
  v9[121] = v9[121] - *v12;
  *(_QWORD *)v12 = v1;
  v13 = *((_DWORD *)v9 + 244);
  v14 = v9[121];
  v15 = *(double *)&v4[2 * v7 + 236 + 2 * v13];
  *((_DWORD *)v9 + 245) = 0;
  *((_DWORD *)v9 + 244) = (v13 + 1) % 3;
  v9[121] = v15 + v14;
  do
  {
    v16 = *(_DWORD *)(v11 + 980);
    v11 += 40;
    v17 = *(double *)(v11 + 928);
    v18 = v16 + 1;
    *(_DWORD *)(v11 + 940) = v18;
    if ( v17 > v8 )
    {
      v18 = v4[230];
      v4[234] = v10;
    }
    ++v10;
    if ( v17 > v8 )
    {
      v8 = v17;
      v4[230] = v18 | 0x800;
    }
  }
  while ( v10 != 3 );
  v19 = v4[235] + 1;
  v4[235] = v19 % 5;
  if ( v19 % 5 )
    v20 = v8 == 0.0;
  else
    v20 = 1;
  if ( v20 )
  {
    v21 = v4[245];
    v22 = *(_DWORD *)(a1 + 76);
    if ( v21 <= 0 )
      v21 = 0;
    else
      v4[234] = 0;
    v23 = v22 & 0x7F;
    if ( v21 < v4[255] )
    {
      v21 = v4[255];
      v4[234] = 1;
    }
    if ( v4[265] > v21 )
      v4[234] = 2;
    v6 = sub_63A00(v5, v23);
    sub_6BCB0(v4 + 231, 5, "CHU%d", v4[234]);
    v3[191] = v4[231];
    *(_DWORD *)(a1 + 112) = v4[231];
    if ( v8 == 0.0 )
    {
      v24 = v4[230];
      if ( (v24 & 0x800) != 0 )
      {
        v4[230] = v24 & 0xFFFFF7FF;
        sub_3918C((__int16 *)a1, 4);
      }
    }
  }
  else
  {
    v6 = sub_63A00(v5, *(_DWORD *)(a1 + 76) & 0x7F);
    sub_6BCB0(v4 + 231, 5, "CHU%d", v4[234]);
    v3[191] = v4[231];
    *(_DWORD *)(a1 + 112) = v4[231];
  }
  return v6;
}
