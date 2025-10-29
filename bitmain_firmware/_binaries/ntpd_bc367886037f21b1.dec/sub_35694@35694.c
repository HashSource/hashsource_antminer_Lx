int __fastcall sub_35694(int a1, unsigned __int8 *a2, int a3)
{
  double v5; // d9
  unsigned int v6; // s16
  int v7; // r6
  unsigned int v8; // r3
  unsigned int v9; // r8
  __int64 v10; // r0
  unsigned int v11; // r12
  int v12; // lr
  double v13; // d9
  unsigned int v14; // lr
  unsigned int v15; // r12
  unsigned int v16; // r11
  int v17; // r1
  double v18; // d8
  int v19; // r2
  int v20; // r1
  int v21; // r10
  int v22; // r9
  unsigned int v23; // r1
  unsigned __int8 v24; // r2
  int v25; // r3
  bool v26; // cc
  int v27; // r3
  int v28; // r3
  int v29; // r3
  int v30; // r3
  const char *v31; // r2
  int v32; // r3
  __int64 v33; // r2
  unsigned int v34; // r12
  double v35; // r0
  double v36; // d0
  int v37; // r2
  double v38; // d9
  int v39; // r2
  int v40; // r0
  unsigned int v41; // r1
  __int64 v42; // r2
  double v43; // r0
  double v44; // d0
  int v45; // r2
  double v46; // r0
  int v47; // r2
  double v48; // d8
  int result; // r0
  unsigned int v50; // lr
  int v51; // r2
  double v52; // r0
  double v53; // d0
  int v54; // r2
  double v55; // d8
  __int64 v56; // r2
  double v57; // r0
  double v58; // d0
  int v59; // r2
  double v60; // r0
  int v61; // r2
  double v62; // r0
  int v63; // r2
  double v64; // r0
  int v65; // r2
  unsigned int v66; // r1
  double v67; // r0
  double v68; // d0
  int v69; // r2
  double v70; // r0
  double v71; // d0
  int v72; // r2
  double v73; // r0
  double v74; // d0
  int v75; // r2
  unsigned int v76; // lr
  int v77; // r2
  double v78; // r0
  double v79; // d0
  int v80; // r2
  double v81; // d8
  __int64 v82; // r2
  unsigned int v83; // r12
  double v84; // r0
  double v85; // d0
  int v86; // r2
  unsigned int v87; // r1
  int v88; // r1
  double v89; // r0
  double v90; // d0
  int v91; // r2
  unsigned int v92; // lr
  __int64 v93; // r2
  int v94; // r5
  __int64 v95; // r0
  double v96; // r0
  int v97; // r2
  int v98; // r3
  double v99; // d8
  double v100; // d8
  double v101; // r0
  double v102; // d0
  int v103; // r2
  double v104; // r0
  double v105; // d0
  int v106; // r2
  double v107; // r0
  double v108; // d0
  int v109; // r2
  int v110; // [sp+0h] [bp-164h]
  int v111; // [sp+4h] [bp-160h]
  int v112; // [sp+8h] [bp-15Ch]
  int v113; // [sp+Ch] [bp-158h]
  int v114; // [sp+10h] [bp-154h]
  int v115; // [sp+14h] [bp-150h]
  int v116; // [sp+18h] [bp-14Ch]
  int v117; // [sp+1Ch] [bp-148h]
  int v118; // [sp+20h] [bp-144h]
  int v119; // [sp+24h] [bp-140h]
  int v120; // [sp+28h] [bp-13Ch]
  int v121; // [sp+2Ch] [bp-138h]
  int v122; // [sp+30h] [bp-134h]
  unsigned int v123; // [sp+38h] [bp-12Ch]
  _DWORD *v124; // [sp+3Ch] [bp-128h]
  int v125; // [sp+40h] [bp-124h]
  int v126; // [sp+44h] [bp-120h] BYREF
  int v127; // [sp+48h] [bp-11Ch]
  int v128; // [sp+4Ch] [bp-118h] BYREF
  unsigned int v129; // [sp+50h] [bp-114h]
  int v130; // [sp+54h] [bp-110h] BYREF
  int v131; // [sp+58h] [bp-10Ch]
  int v132[13]; // [sp+5Ch] [bp-108h] BYREF
  double v133; // [sp+90h] [bp-D4h]
  int v134; // [sp+98h] [bp-CCh]
  int v135; // [sp+9Ch] [bp-C8h]
  int v136; // [sp+A0h] [bp-C4h]
  int v137; // [sp+A4h] [bp-C0h]
  int v138; // [sp+A8h] [bp-BCh]
  int v139; // [sp+ACh] [bp-B8h]
  int v140; // [sp+B0h] [bp-B4h]
  int v141; // [sp+B4h] [bp-B0h]
  int v142; // [sp+B8h] [bp-ACh]
  int v143; // [sp+BCh] [bp-A8h]
  int v144; // [sp+C0h] [bp-A4h]
  int v145; // [sp+C4h] [bp-A0h]
  int v146; // [sp+C8h] [bp-9Ch]
  double v147; // [sp+D0h] [bp-94h]

  v5 = (double)bswap32(*((_DWORD *)a2 + 1));
  v6 = bswap32(*((_DWORD *)a2 + 2));
  v7 = a2[1];
  v8 = *a2;
  v9 = v8 >> 6;
  v10 = *((_QWORD *)a2 + 3);
  if ( !v7 )
    v7 = 16;
  v11 = *((_DWORD *)a2 + 9);
  v12 = bswap32(*((_DWORD *)a2 + 8));
  v130 = bswap32(v10);
  LODWORD(v10) = *((_DWORD *)a2 + 10);
  v131 = bswap32(HIDWORD(v10));
  HIDWORD(v10) = *((_DWORD *)a2 + 11);
  v126 = v12;
  v13 = v5 * 0.0000152587891;
  v14 = *((_DWORD *)a2 + 4);
  v127 = bswap32(v11);
  v15 = *((_DWORD *)a2 + 5);
  v128 = bswap32(v10);
  v129 = bswap32(HIDWORD(v10));
  v123 = bswap32(v14);
  v16 = bswap32(v15);
  v17 = *(_DWORD *)(a1 + 300);
  v18 = (double)v6 * 0.0000152587891;
  if ( v9 == 3 || v7 < sys_floor || v7 >= sys_ceiling )
  {
    v17 |= 0x20u;
    *(_DWORD *)(a1 + 300) = v17;
  }
  if ( v18 + v13 * 0.5 >= 16.0 )
  {
    v17 |= 0x40u;
    *(_DWORD *)(a1 + 300) = v17;
  }
  if ( (v17 & 0x1FF) != 0 )
  {
    v66 = *(unsigned __int8 *)(a1 + 64);
    ++*(_DWORD *)(a1 + 768);
    return sub_33F78(a1, v66);
  }
  v19 = a3 - 48;
  v20 = *(_DWORD *)(a1 + 56);
  v21 = *((_DWORD *)a2 + 3);
  if ( v20 )
    v20 += 24;
  v22 = sys_processed;
  ++*(_DWORD *)(a1 + 748);
  sys_processed = v22 + 1;
  LOBYTE(v22) = v8 & 7;
  v124 = (_DWORD *)(a1 + 576);
  sub_41E50(
    a1 + 16,
    v20,
    &v130,
    &v126,
    &v128,
    a1 + 576,
    v9,
    (v8 >> 3) & 7,
    v8 & 7,
    v7,
    a2[2],
    (char)a2[3],
    v21,
    v19,
    a2 + 48);
  *(_BYTE *)(a1 + 92) = v22;
  *(_BYTE *)(a1 + 91) = v9;
  if ( (unsigned int)v7 >= 0x10 )
    LOBYTE(v7) = 16;
  *(_BYTE *)(a1 + 93) = v7;
  v24 = a2[3];
  v25 = *(_DWORD *)(a1 + 312);
  *(double *)(a1 + 96) = v13;
  *(_BYTE *)(a1 + 95) = v24;
  v26 = v25 <= 0;
  v27 = *((_DWORD *)a2 + 3);
  if ( v26 )
    v23 = *(unsigned __int8 *)(a1 + 64);
  *(double *)(a1 + 104) = v18;
  *(_DWORD *)(a1 + 116) = v123;
  *(_DWORD *)(a1 + 112) = v27;
  *(_DWORD *)(a1 + 120) = v16;
  if ( !v26 )
  {
    v28 = *(unsigned __int8 *)(a1 + 298);
    v23 = *(unsigned __int8 *)(a1 + 64);
    *(_DWORD *)(a1 + 312) = 0;
    if ( v28 )
    {
      v29 = 1 << (v23 - *(_BYTE *)(a1 + 65));
      if ( v29 >= 8 )
        v29 = 8;
      v30 = v29 - 1;
      *(_DWORD *)(a1 + 308) = v30;
      if ( v30 <= 0 )
        goto LABEL_20;
    }
    else
    {
      *(_DWORD *)(a1 + 308) = 5;
    }
    *(_DWORD *)(a1 + 720) = current_time;
  }
LABEL_20:
  sub_33F78(a1, v23);
  v31 = (const char *)*(unsigned __int8 *)(a1 + 298);
  if ( !*(_BYTE *)(a1 + 298) )
  {
    sub_25C8C((__int16 *)&dword_84, a1, v31);
    LOBYTE(v31) = *(_BYTE *)(a1 + 298);
    *(_DWORD *)(a1 + 736) = current_time;
  }
  v32 = *(_DWORD *)(a1 + 316);
  *(_BYTE *)(a1 + 298) = (unsigned __int8)v31 | 1;
  if ( !v32 )
  {
    if ( *(_BYTE *)(a1 + 92) != 5 )
    {
      v50 = *(_DWORD *)(a1 + 580);
      v51 = v128 - *(_DWORD *)(a1 + 576);
      if ( v129 < v50 )
        --v51;
      if ( v51 < 0 )
      {
        v67 = COERCE_DOUBLE(sub_8BA5C(v50 - v129, (unsigned __int64)-(__int64)(__PAIR64__(v51, 0) + v129 - v50) >> 32));
        v68 = v67;
        LODWORD(v67) = -32;
        ldexp(v67, v69);
        v55 = -v68;
      }
      else
      {
        v52 = COERCE_DOUBLE(sub_8BA5C(v129 - v50, (__PAIR64__(v51, 0) + v129 - v50) >> 32));
        v53 = v52;
        LODWORD(v52) = -32;
        ldexp(v52, v54);
        v55 = v53;
      }
      HIDWORD(v56) = v126 - v130;
      if ( v127 < (unsigned int)v131 )
        --HIDWORD(v56);
      LODWORD(v56) = v127 - v131;
      if ( v56 < 0 )
      {
        v89 = COERCE_DOUBLE(sub_8BA5C(v131 - v127, (unsigned __int64)-v56 >> 32));
        v90 = v89;
        LODWORD(v89) = -32;
        v46 = ldexp(v89, v91);
        v58 = -v90;
      }
      else
      {
        v57 = COERCE_DOUBLE(sub_8BA5C(v56, HIDWORD(v56)));
        v58 = v57;
        LODWORD(v57) = -32;
        v46 = ldexp(v57, v59);
      }
      v48 = fabs(v58 - v55);
      goto LABEL_52;
    }
    if ( (*(_DWORD *)(a1 + 68) & 0x2000) != 0 )
    {
      v76 = *(_DWORD *)(a1 + 588);
      v77 = v130 - *(_DWORD *)(a1 + 584);
      if ( v131 < v76 )
        --v77;
      if ( v77 < 0 )
      {
        v101 = COERCE_DOUBLE(sub_8BA5C(v76 - v131, (unsigned __int64)-(__int64)(__PAIR64__(v77, 0) + v131 - v76) >> 32));
        v102 = v101;
        LODWORD(v101) = -32;
        ldexp(v101, v103);
        v81 = -v102;
      }
      else
      {
        v78 = COERCE_DOUBLE(sub_8BA5C(v131 - v76, (__PAIR64__(v77, 0) + v131 - v76) >> 32));
        v79 = v78;
        LODWORD(v78) = -32;
        ldexp(v78, v80);
        v81 = v79;
      }
      HIDWORD(v82) = v130 - *(_DWORD *)(a1 + 592);
      v83 = *(_DWORD *)(a1 + 596);
      if ( v131 < v83 )
        --HIDWORD(v82);
      LODWORD(v82) = v131 - v83;
      if ( v82 < 0 )
      {
        v107 = COERCE_DOUBLE(sub_8BA5C(v83 - v131, (unsigned __int64)-v82 >> 32));
        v108 = v107;
        LODWORD(v107) = -32;
        ldexp(v107, v109);
        v85 = -v108;
      }
      else
      {
        v84 = COERCE_DOUBLE(sub_8BA5C(v82, HIDWORD(v82)));
        v85 = v84;
        LODWORD(v84) = -32;
        ldexp(v84, v86);
      }
      v87 = v129;
      *(_DWORD *)(a1 + 584) = v128;
      *(_DWORD *)(a1 + 588) = v87;
      v88 = *(_DWORD *)(a1 + 580);
      *(_DWORD *)(a1 + 592) = *v124;
      *(_DWORD *)(a1 + 596) = v88;
      if ( v81 < 0.0 || v81 > 1.0 )
      {
        if ( (*(_DWORD *)(a1 + 68) & 0x10) == 0 )
        {
          sub_6BCB0(v132, 256, "offset %.6f delay %.6f", v85, v81);
          return (int)sub_25C8C((__int16 *)((char *)&dword_8C + 3), a1, (const char *)v132);
        }
        return sub_31CC8(a1);
      }
      *(double *)(a1 + 640) = v81;
    }
    else
    {
      v92 = *(_DWORD *)(a1 + 580);
      HIDWORD(v93) = v128 - *(_DWORD *)(a1 + 576);
      if ( v129 < v92 )
        v94 = 1;
      else
        v94 = *(_DWORD *)(a1 + 68) & 0x2000;
      if ( v94 )
        --HIDWORD(v93);
      LODWORD(v93) = *(_DWORD *)(a1 + 68) & 0x2000;
      v95 = v93 + v129 - v92;
      if ( v93 < 0 )
      {
        v104 = COERCE_DOUBLE(sub_8BA5C(-(int)v95, (unsigned __int64)-v95 >> 32));
        v105 = v104;
        LODWORD(v104) = -32;
        ldexp(v104, v106);
        v85 = -v105;
      }
      else
      {
        v96 = COERCE_DOUBLE(sub_8BA5C(v95, HIDWORD(v95)));
        v85 = v96;
        LODWORD(v96) = -32;
        ldexp(v96, v97);
      }
    }
    v98 = *(_DWORD *)(a1 + 68);
    if ( (v98 & 0x10) != 0 )
    {
      v99 = *(double *)(a1 + 608);
      *(_DWORD *)(a1 + 68) = v98 & 0xFFFFFFEF;
      v100 = fabs(v99 - v85);
      v48 = v100 + v100;
      *(double *)(a1 + 616) = v48;
      if ( v48 > fabs(sys_bdelay) )
        return sub_31CC8(a1);
    }
    else
    {
      v48 = *(double *)(a1 + 616);
    }
    v47 = 1484;
    HIDWORD(v46) = *(unsigned __int8 *)(a1 + 94);
    *(_DWORD *)(a1 + 720) = current_time - 2 + (1 << SBYTE4(v46));
    goto LABEL_52;
  }
  HIDWORD(v33) = v128 - *(_DWORD *)(a1 + 576);
  v34 = *(_DWORD *)(a1 + 580);
  if ( v129 < v34 )
    --HIDWORD(v33);
  LODWORD(v33) = v129 - v34;
  if ( v33 < 0 )
  {
    v73 = COERCE_DOUBLE(sub_8BA5C(v34 - v129, (unsigned __int64)-v33 >> 32));
    v74 = v73;
    LODWORD(v73) = -32;
    ldexp(v73, v75);
    v38 = -v74;
  }
  else
  {
    v35 = COERCE_DOUBLE(sub_8BA5C(v33, HIDWORD(v33)));
    v36 = v35;
    LODWORD(v35) = -32;
    ldexp(v35, v37);
    v38 = v36;
  }
  v39 = *(_DWORD *)(a1 + 316);
  if ( v39 <= 0 )
    v40 = *(_DWORD *)(a1 + 584);
  else
    v40 = *(_DWORD *)(a1 + 592);
  if ( v39 <= 0 )
    v41 = *(_DWORD *)(a1 + 588);
  else
    v41 = *(_DWORD *)(a1 + 596);
  HIDWORD(v42) = v126 - v40;
  if ( v127 < v41 )
    --HIDWORD(v42);
  LODWORD(v42) = v127 - v41;
  if ( v42 < 0 )
  {
    v70 = COERCE_DOUBLE(sub_8BA5C(v41 - v127, (unsigned __int64)-v42 >> 32));
    v71 = v70;
    LODWORD(v70) = -32;
    v46 = ldexp(v70, v72);
    v44 = -v71;
  }
  else
  {
    v43 = COERCE_DOUBLE(sub_8BA5C(v42, HIDWORD(v42)));
    v44 = v43;
    LODWORD(v43) = -32;
    v46 = ldexp(v43, v45);
  }
  v48 = v44 - v38;
  if ( v44 - v38 < 0.0 || v48 > 1.0 )
  {
    sub_6BCB0(v132, 256, "t21 %.6f t34 %.6f", v44, v38);
    return (int)sub_25C8C((__int16 *)((char *)&dword_8C + 3), a1, (const char *)v132);
  }
LABEL_52:
  LODWORD(v46) = sys_precision;
  v60 = ldexp(v46, v47);
  if ( v48 <= 1.0 )
  {
    LODWORD(v60) = sys_precision;
    v60 = ldexp(v60, v61);
  }
  LODWORD(v60) = sys_precision;
  v62 = ldexp(v60, v61);
  LODWORD(v62) = *(char *)(a1 + 95);
  v64 = ldexp(v62, v63);
  result = sub_35218(
             a1,
             SHIDWORD(v64),
             v65,
             (int)&clock_phi,
             v110,
             v111,
             v112,
             v113,
             v114,
             v115,
             v116,
             v117,
             v118,
             v119,
             v120,
             v121,
             v122,
             (int)&_stack_chk_guard,
             v123,
             (int)v124,
             v125,
             v126,
             v127,
             v128,
             v129,
             v130,
             v131,
             v132[0],
             v132[1],
             v132[2],
             v132[3],
             v132[4],
             v132[5],
             v132[6],
             v132[7],
             v132[8],
             v132[9],
             v132[10],
             v132[11],
             v133,
             v134,
             v135,
             v136,
             v137,
             v138,
             v139,
             v140,
             v141,
             v142,
             v143,
             v144,
             v145,
             v146,
             v147);
  if ( (*(_DWORD *)(a1 + 68) & 0x10) != 0 && *(_BYTE *)(a1 + 63) == 3 )
  {
    result = sub_32CE4(a1);
    if ( (result & 0x400) == 0 && ((*(_DWORD *)(a1 + 68) & 0x800) == 0 || (~*(_DWORD *)(a1 + 136) & 0x7F00) == 0) )
      *(_BYTE *)(a1 + 63) = 6;
  }
  return result;
}
