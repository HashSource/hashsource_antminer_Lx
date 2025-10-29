int __fastcall sub_49078(int a1)
{
  double v1; // d0
  int v3; // r4
  double v4; // d18
  double v5; // d19
  double v6; // d20
  double v7; // d21
  double v8; // d22
  double v9; // d23
  double v10; // d24
  double v11; // d25
  double v12; // d1
  double v13; // d17
  double v14; // d16
  double v15; // d12
  double v16; // d18
  double v17; // d19
  double v18; // d20
  int v19; // r0
  int v20; // r1
  double v21; // d0
  double v22; // d16
  double v23; // d8
  int result; // r0
  int v25; // r1

  v3 = **(_DWORD **)(a1 + 84);
  v4 = *(double *)(v3 + 2904);
  *(double *)(v3 + 2912) = v4;
  v5 = *(double *)(v3 + 2896);
  *(double *)(v3 + 2904) = v5;
  v6 = *(double *)(v3 + 2888);
  *(double *)(v3 + 2896) = v6;
  v7 = *(double *)(v3 + 2880);
  *(double *)(v3 + 2888) = v7;
  v8 = *(double *)(v3 + 2872);
  *(double *)(v3 + 2880) = v8;
  v9 = *(double *)(v3 + 2864);
  *(double *)(v3 + 2872) = v9;
  v10 = *(double *)(v3 + 2856);
  *(double *)(v3 + 2864) = v10;
  v11 = *(double *)(v3 + 2848);
  v12 = *(double *)(v3 + 752);
  v13 = *(double *)(v3 + 2944);
  *(double *)(v3 + 2856) = v11;
  v14 = v1
      - (v5 * -3.87518
       + v4 * 0.6505491
       + v6 * 11.5118
       + v7 * -21.41264
       + v8 * 27.12837
       + v9 * -23.84486
       + v10 * 14.27663
       + v11 * -5.352734);
  *(double *)(v3 + 2848) = v14;
  v15 = v11 * -0.02055878
      + v14 * 0.004952157
      + v10 * 0.04401413
      + v9 * -0.06558851
      + v8 * 0.07462108
      + v7 * -0.06558851
      + v6 * 0.04401413
      + v5 * -0.02055878
      + v4 * 0.004952157;
  *(double *)(v3 + 752) = v12 + v15 * v15;
  *(double *)(v3 + 2952) = v13;
  v16 = *(double *)(v3 + 2936);
  *(double *)(v3 + 2944) = v16;
  v17 = *(double *)(v3 + 2928);
  *(double *)(v3 + 2936) = v17;
  v18 = *(double *)(v3 + 2920);
  v19 = *(_DWORD *)(v3 + 3188);
  v20 = *(_DWORD *)(v3 + 3160);
  *(double *)(v3 + 2928) = v18;
  v21 = v1 - (v16 * -3.589893 + v13 * 0.8694604 + v17 * 5.570154 + v18 * -3.849667);
  v22 = *(double *)(v3 + 760);
  *(double *)(v3 + 2920) = v21;
  v23 = v18 * -0.01174951 + v21 * 0.003215696 + v17 * 0.01712074 + v16 * -0.01174951 + v13 * 0.003215696;
  *(double *)(v3 + 760) = v22 + v23 * v23;
  result = sub_8B734(v19 + 1, v20);
  *(_DWORD *)(v3 + 3188) = v25;
  if ( !v25 )
    return sub_48A5C(a1);
  return result;
}
