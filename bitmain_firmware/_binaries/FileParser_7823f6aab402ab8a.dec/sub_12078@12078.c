unsigned __int64 __fastcall sub_12078(unsigned __int8 *a1, unsigned int a2)
{
  __int64 v3; // r4
  int v4; // r1
  __int64 v5; // r4
  __int64 v6; // r0
  __int64 v7; // r2
  __int64 v8; // r4
  __int64 v9; // r0
  unsigned __int64 v10; // r0
  __int64 v11; // r2
  __int64 v12; // r4
  __int64 v13; // r0
  unsigned __int64 v14; // r0
  __int64 v15; // r2
  double v16; // r4
  __int64 v17; // r0
  unsigned __int64 v18; // r0
  __int64 v19; // r2
  double v20; // r2
  double v21; // r4
  __int64 v22; // r0
  __int64 v23; // r4
  __int64 v24; // r0
  __int64 v25; // r4
  __int64 v26; // r0
  __int64 v27; // r4
  __int64 v28; // r0
  unsigned __int8 *v29; // r6
  double v30; // r4
  __int64 v31; // r0
  unsigned __int64 v32; // r4
  __int64 v33; // r0
  __int64 v34; // r2
  unsigned __int64 v35; // r4
  unsigned __int64 v36; // r0
  double v38; // [sp+8h] [bp-84h] BYREF
  double v39; // [sp+10h] [bp-7Ch]
  unsigned int v40; // [sp+18h] [bp-74h]
  unsigned __int8 *v41; // [sp+1Ch] [bp-70h]
  double v42; // [sp+20h] [bp-6Ch] BYREF
  __int64 v43; // [sp+28h] [bp-64h]
  double v44; // [sp+30h] [bp-5Ch] BYREF
  double v45; // [sp+38h] [bp-54h]
  __int64 v46; // [sp+40h] [bp-4Ch]
  unsigned __int8 *v47; // [sp+48h] [bp-44h]
  unsigned __int8 *v48; // [sp+4Ch] [bp-40h]
  __int64 v49; // [sp+50h] [bp-3Ch]
  unsigned __int64 v50; // [sp+58h] [bp-34h]
  __int64 v51; // [sp+60h] [bp-2Ch]
  __int64 v52; // [sp+68h] [bp-24h]

  v41 = a1;
  v40 = a2;
  v49 = 81;
  if ( a2 <= 0x10 )
    return sub_11674(v41, v40);
  if ( v40 <= 0x20 )
    return sub_11980((int)v41, v40);
  if ( v40 <= 0x40 )
    return sub_11B58((int)v41, v40);
  v3 = 3197694579LL * (unsigned int)v49;
  HIDWORD(v3) += -1265453457 * v49 - 1097272717 * HIDWORD(v49);
  v51 = v3 + 113;
  v4 = -1696503237 * (v3 + 113) + 797982799 * ((unsigned __int64)(v3 + 113) >> 32);
  v5 = 797982799LL * (unsigned int)(v3 + 113);
  HIDWORD(v5) += v4;
  v6 = sub_11498(v5 + 113);
  v7 = 797982799LL * (unsigned int)v6;
  HIDWORD(v7) += 797982799 * HIDWORD(v6) - 1696503237 * v6;
  v50 = v7;
  v44 = 0.0;
  v45 = 0.0;
  v42 = 0.0;
  v43 = 0;
  v52 = sub_11460(v41) - 0x651E95C4D06FBFB1LL * v49;
  v48 = &v41[(v40 - 1) & 0xFFFFFFC0];
  v47 = &v48[(((_BYTE)v40 - 1) & 0x3F) - 63];
  do
  {
    v8 = v52 + v51 + *(_QWORD *)&v44;
    v9 = sub_11460(v41 + 8);
    v10 = sub_114E4(v8 + v9, 37);
    v11 = 3197694579LL * (unsigned int)v10;
    HIDWORD(v11) += -1097272717 * HIDWORD(v10) - 1265453457 * v10;
    v52 = v11;
    v12 = *(_QWORD *)&v45 + v51;
    v13 = sub_11460(v41 + 48);
    v14 = sub_114E4(v12 + v13, 42);
    v15 = 3197694579LL * (unsigned int)v14;
    HIDWORD(v15) += -1097272717 * HIDWORD(v14) - 1265453457 * v14;
    v51 = v15;
    v52 ^= v43;
    v16 = v44;
    v17 = sub_11460(v41 + 40);
    v51 += v17 + *(_QWORD *)&v16;
    v18 = sub_114E4(*(_QWORD *)&v42 + v50, 33);
    v19 = 3197694579LL * (unsigned int)v18;
    HIDWORD(v19) += -1097272717 * HIDWORD(v18) - 1265453457 * v18;
    v50 = v19;
    *(_QWORD *)&v20 = 3197694579LL * LODWORD(v45);
    HIDWORD(v20) += -1097272717 * HIDWORD(v45) - 1265453457 * LODWORD(v45);
    sub_11FD4(&v44, (int)v41, v20, COERCE_DOUBLE(v52 + *(_QWORD *)&v42));
    *(_QWORD *)&v21 = v43 + v50;
    v22 = sub_11460(v41 + 16);
    sub_11FD4(&v42, (int)(v41 + 32), v21, COERCE_DOUBLE(v51 + v22));
    v50 ^= v52;
    v52 ^= v50;
    v50 ^= v52;
    v41 += 64;
  }
  while ( v41 != v48 );
  v46 = ((2 * v50) & 0x1FE) - 0x4B6D499041670D8DLL;
  v41 = v47;
  *(_QWORD *)&v42 += (v40 - 1) & 0x3FLL;
  *(_QWORD *)&v44 += *(_QWORD *)&v42;
  *(_QWORD *)&v42 += *(_QWORD *)&v44;
  v23 = v52 + v51 + *(_QWORD *)&v44;
  v24 = sub_11460(v47 + 8);
  v52 = sub_114E4(v23 + v24, 37) * v46;
  v25 = *(_QWORD *)&v45 + v51;
  v26 = sub_11460(v41 + 48);
  v51 = sub_114E4(v25 + v26, 42) * v46;
  v52 ^= vshld_n_s64(v43, 3u) + v43;
  v27 = vshld_n_s64(*(__int64 *)&v44, 3u) + *(_QWORD *)&v44;
  v28 = sub_11460(v41 + 40);
  v51 += v28 + v27;
  v50 = sub_114E4(*(_QWORD *)&v42 + v50, 33) * v46;
  sub_11FD4(&v38, (int)v41, COERCE_DOUBLE(v46 * *(_QWORD *)&v45), COERCE_DOUBLE(v52 + *(_QWORD *)&v42));
  v44 = v38;
  v45 = v39;
  v29 = v41 + 32;
  *(_QWORD *)&v30 = v43 + v50;
  v31 = sub_11460(v41 + 16);
  sub_11FD4(&v38, (int)v29, v30, COERCE_DOUBLE(v51 + v31));
  v42 = v38;
  v43 = *(_QWORD *)&v39;
  v50 ^= v52;
  v52 ^= v50;
  v50 ^= v52;
  v32 = sub_11550(SLODWORD(v44), SHIDWORD(v44), *(__int64 *)&v38, v46);
  v33 = sub_11498(v51);
  v34 = 2546676007LL * (unsigned int)v33;
  HIDWORD(v34) += -1748291289 * HIDWORD(v33) - 1012545444 * v33;
  v35 = v32 + v34 + v50;
  v36 = sub_11550(SLODWORD(v45), SHIDWORD(v45), v43, v46);
  return sub_11550(v35, SHIDWORD(v35), v36 + v52, v46);
}
