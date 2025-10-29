int __fastcall sub_48A5C(int a1)
{
  double v1; // d0
  int *v3; // r3
  int v4; // r4
  double *v5; // r12
  int v6; // lr
  int v7; // r3
  int v8; // r1
  int result; // r0
  int v10; // r2
  double v11; // d16
  int32x2_t v12; // d17
  int v13; // r3
  double v14; // d16
  double v15; // d17
  double v16; // d18
  double v17; // d18
  double v18; // d20
  int v19; // r2
  double v20; // d19
  double v21; // d22
  double v22; // d17
  double v23; // d19
  double v24; // d16
  int v25; // r7
  double v26; // d16
  double v27; // d17
  int v28; // r2
  double v29; // d17
  int v30; // r1
  double *v31; // r7
  double v32; // d8
  double v33; // d18
  int v34; // r1
  double v35; // d8
  bool v36; // zf
  double v37; // d18
  int v38; // r1
  double v39; // d16
  double v40; // d8
  int v41; // r2
  double v42; // d16
  int v43; // r1
  int v44; // lr
  int v45; // r2
  double v46; // r0
  double v47; // d0
  double v48; // d0
  __int64 v49; // r10
  int v50; // r12
  int v51; // r1
  unsigned int v52; // r0
  int v53; // r3
  double *v54; // r4

  v3 = *(int **)(a1 + 84);
  v4 = *v3;
  v5 = (double *)(*v3 + 3152);
  v6 = *(_DWORD *)(*v3 + 3180);
  v7 = (*(_DWORD *)(*v3 + 3164) + 1) % 80;
  v8 = v7 & 7;
  result = v4 + 8 * v7;
  *(_DWORD *)(v4 + 3164) = v7;
  if ( v7 <= 0 )
    v8 = -(-v7 & 7);
  v10 = v4 + 8 * v8;
  v11 = (v1 - *(double *)(result + 64)) / (double)(5 * v6) + *(double *)(result + 64);
  *(double *)(result + 64) = v11;
  *(double *)(v10 + 3016) = v1;
  *(double *)(v10 + 3080) = v11;
  if ( *(v5 - 1) > 0.0 && v11 <= 0.0 )
  {
    v12.n64_u32[0] = v8 - 4;
    v12.n64_u32[1] = v8 - 4;
    *(double *)(v4 + 720) = *(double *)(v4 + 720) + vcvt_n_f64_s32(v12, 3u);
  }
  *(v5 - 1) = v11;
  if ( !v7 )
  {
    v13 = *(_DWORD *)(v4 + 768);
    v14 = *(double *)(v4 + 2992);
    v15 = *(double *)(v4 + 2984);
    *(double *)(v4 + 3000) = v14;
    *(double *)(v4 + 3008) = v15;
    if ( v14 < 100.0 )
      v13 |= 1u;
    *(_QWORD *)(v4 + 2984) = 0x412E848000000000LL;
    *(_QWORD *)(v4 + 2992) = 0xC12E848000000000LL;
    if ( v14 < 100.0 )
      *(_DWORD *)(v4 + 768) = v13;
    if ( v14 <= 0.0 )
    {
      *(_DWORD *)(v4 + 744) = 0;
      *(_DWORD *)(v4 + 748) = 0;
    }
    else
    {
      v16 = (v14 - v15) / v14;
      *(double *)(v4 + 744) = v16;
      if ( v16 >= 0.5 )
      {
LABEL_13:
        if ( (v13 & 0xF) != 0 )
        {
          v18 = 16.0;
          *(_DWORD *)(v4 + 3180) = 2;
          *(_DWORD *)(v4 + 3184) = 0;
          v17 = 2.0;
        }
        else
        {
          v17 = (double)*(int *)(v4 + 3180);
          v18 = v17 * 4.0 * v17;
        }
        v19 = *(_DWORD *)(v4 + 3160);
        result = 0;
        v20 = *(double *)(v4 + 720);
        *(_DWORD *)(v4 + 720) = 0;
        *(_DWORD *)(v4 + 724) = 0;
        v21 = *(double *)(v4 + 712);
        v22 = *(double *)(v4 + 704);
        v23 = (double)v19 * v20 / 80.0;
        *(double *)(v4 + 728) = v23;
        v24 = v23 / v18 + v21;
        *(double *)(v4 + 704) = v22 + v23 / v17;
        if ( v24 <= 2.0 )
        {
          if ( v24 < -2.0 )
          {
            *(_DWORD *)(v4 + 768) = v13 | 2;
            *(double *)(v4 + 712) = -2.0;
          }
          else
          {
            *(double *)(v4 + 712) = v24;
          }
        }
        else
        {
          *(_DWORD *)(v4 + 768) = v13 | 2;
          *(double *)(v4 + 712) = 2.0;
        }
        return result;
      }
    }
    v13 |= 4u;
    *(_DWORD *)(v4 + 768) = v13;
    goto LABEL_13;
  }
  if ( v8 != 7 )
    return result;
  v25 = *(_DWORD *)(v4 + 3192) + 1;
  v26 = (*(double *)(v4 + 3096) - *(double *)(v4 + 3128)) * 0.5;
  v27 = *(double *)(v4 + 2984);
  if ( *(double *)(v4 + 2992) < v26 )
    *(double *)(v4 + 2992) = v26;
  if ( v27 > v26 )
    *(double *)(v4 + 2984) = v26;
  v28 = v25 % 10;
  v29 = *(double *)(v4 + 3000) + *(double *)(v4 + 3008);
  v30 = 2 * *(_DWORD *)(v4 + 3196);
  *(_DWORD *)(v4 + 3196) = v30;
  *(_DWORD *)(v4 + 3192) = v25 % 10;
  if ( v29 * 0.5 <= v26 )
  {
    v30 |= 1u;
    *(_DWORD *)(v4 + 3196) = v30;
  }
  if ( (v30 & 0x303C0F03) != 0x300C0300 )
  {
    result = v4 + 3072;
    v31 = (double *)(v4 + 2976);
    v32 = *(double *)(v4 + 3032);
    v33 = *(double *)(v4 + 3064);
    v34 = 2 * *(_DWORD *)(v4 + 3200);
    *(_DWORD *)(v4 + 3200) = v34;
    v35 = (v32 - v33) * 0.5;
    if ( *(double *)(v4 + 2976) > v35 )
      goto LABEL_28;
    goto LABEL_27;
  }
  v36 = v28 == 0;
  result = v4 + 3072;
  v31 = (double *)(v4 + 2976);
  if ( v28 )
    v28 = *(_DWORD *)(v4 + 768);
  v37 = *(double *)(v4 + 3064);
  if ( !v36 )
    v28 |= 8u;
  v38 = *(_DWORD *)(v4 + 3200);
  if ( !v36 )
    *(_DWORD *)(v4 + 768) = v28;
  v39 = *v31;
  v34 = 2 * v38;
  v40 = *(double *)(v4 + 3032);
  v28 = 0;
  *(_DWORD *)(v4 + 3200) = v34;
  *(_DWORD *)(v4 + 3192) = 0;
  v35 = (v40 - v37) * 0.5;
  if ( v39 > v35 )
  {
LABEL_45:
    v41 = *(_DWORD *)(v4 + 3176) - v7;
    v42 = -*(double *)(v4 + 728);
    *(double *)(v4 + 736) = v42;
    if ( (unsigned int)(v41 + 1) <= 2 )
    {
      v43 = *(_DWORD *)(v4 + 3184) + 1;
      *(_DWORD *)(v4 + 3184) = v43;
      if ( v43 <= 20 * v6 )
      {
        v42 = v42 - (double)v41;
        *(double *)(v4 + 736) = v42;
LABEL_51:
        v45 = *(_DWORD *)(v4 + 3160);
        HIDWORD(v46) = *(_DWORD *)(v4 + 52);
        v47 = *v5;
        *(_DWORD *)(v4 + 56) = *(_DWORD *)(v4 + 48);
        *(_DWORD *)(v4 + 60) = HIDWORD(v46);
        v48 = v47 + (double)v45 * (v42 / 8000.0);
        LODWORD(v46) = 32;
        ldexp(v46, v45);
        if ( v48 < 0.0 )
          v49 = -sub_8BBA8(COERCE_UNSIGNED_INT64(-v48), HIDWORD(COERCE_UNSIGNED_INT64(-v48)));
        else
          v49 = sub_8BBA8(LODWORD(v48), HIDWORD(v48));
        v50 = *(unsigned __int8 *)(v4 + 3200);
        v51 = *(_DWORD *)(v4 + 28);
        *(_DWORD *)(v4 + 48) = *(_DWORD *)(v4 + 24);
        *(_DWORD *)(v4 + 52) = v51;
        v52 = *(_DWORD *)(v4 + 52);
        v53 = *(_DWORD *)(v4 + 48) - HIDWORD(v49);
        if ( v52 < (unsigned int)v49 )
          --v53;
        *(_DWORD *)(v4 + 48) = v53;
        *(_DWORD *)(v4 + 52) = v52 - v49;
        if ( v50 == 224 )
          goto LABEL_72;
        if ( v50 <= 224 )
        {
          if ( v50 == 128 )
            goto LABEL_73;
          if ( v50 != 192 )
          {
            if ( v50 )
            {
LABEL_60:
              sub_48440(a1, 0);
              *(_DWORD *)(v4 + 768) |= 0x10u;
LABEL_61:
              v54 = (double *)(v4 + 2960);
              result = 0;
              if ( *v54 <= v35 )
                v35 = *v54;
              *v31 = (v35 + *(v31 - 1)) * 0.5;
              *v54 = 1000000.0;
              *(v31 - 1) = -1000000.0;
              return result;
            }
LABEL_73:
            sub_48440(a1, 0);
            goto LABEL_61;
          }
LABEL_72:
          sub_48440(a1, 1);
          goto LABEL_61;
        }
        if ( v50 != 248 )
        {
          if ( v50 <= 248 )
          {
            if ( v50 != 240 )
              goto LABEL_60;
            goto LABEL_72;
          }
          if ( v50 != 252 && v50 != 254 )
            goto LABEL_60;
        }
        sub_48440(a1, 2);
        goto LABEL_61;
      }
      v44 = v6 + 1;
      if ( v44 > 10 )
        *(_DWORD *)(v4 + 3180) = 10;
      else
        *(_DWORD *)(v4 + 3180) = v44;
    }
    *(_DWORD *)(v4 + 3176) = v7;
    *(_DWORD *)(v4 + 3184) = 0;
    goto LABEL_51;
  }
LABEL_27:
  *(_DWORD *)(v4 + 3200) = v34 | 1;
LABEL_28:
  switch ( v28 )
  {
    case 0:
      goto LABEL_45;
    case 1:
      goto LABEL_36;
    case 2:
      if ( *(v31 - 1) < v35 )
LABEL_36:
        *(v31 - 1) = v35;
      break;
    case 9:
      *(double *)(v4 + 2960) = v35;
      break;
    default:
      return result;
  }
  return result;
}
