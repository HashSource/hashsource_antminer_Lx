int __fastcall sub_5E890(double a1)
{
  _DWORD *v1; // r7
  int v2; // r8
  int v3; // r5
  double v4; // d0
  __int64 v5; // r10
  unsigned int v6; // r2
  char *v7; // r6
  int v8; // r3
  bool v9; // cc
  __int64 v10; // r0
  double v11; // d17
  int v12; // r4
  double v13; // d18
  double v14; // d19
  double v15; // d20
  double v16; // d21
  double v17; // d22
  double v18; // d23
  double v19; // d24
  double v20; // d0
  double v21; // d25
  double v22; // d17
  double v23; // d16
  int v24; // r3
  double *v25; // r3
  double v26; // d17
  double v27; // d0
  double v28; // r0
  double v29; // d25
  double v30; // d28
  double v31; // d16
  double v32; // d25
  double v33; // d7
  double v34; // d4
  double v35; // d23
  double v36; // d22
  double v37; // d21
  double v38; // d20
  double v39; // d19
  double v40; // d18
  double v41; // d3
  double v42; // d2
  double v43; // d1
  double v44; // d0
  double v45; // d8
  double v46; // d9
  double v47; // d10
  double v48; // d11
  double v49; // d12
  double v50; // d13
  double v51; // d5
  double v52; // d6
  double v53; // d31
  double v54; // d30
  double v55; // d29
  double v56; // d17
  double v57; // d26
  int v58; // r3
  int v59; // r2
  int v60; // r4
  bool v61; // cf
  int v62; // r3
  int v63; // r2
  int v64; // r3
  char v65; // t1
  double v66; // d17
  int v67; // r0
  int v68; // r1
  int v69; // r12
  bool v70; // nf
  int v71; // lr
  int v72; // r12
  int v73; // lr
  int v74; // lr
  int v75; // r11
  double v76; // d17
  int v77; // r2
  double v78; // d16
  double v79; // d4
  double v80; // d16
  int v81; // r1
  unsigned int v82; // r2
  double v83; // d18
  double *v84; // r0
  int v85; // r3
  double v86; // d19
  int v87; // r3
  double v88; // d16
  int v89; // r3
  int v90; // r3
  int v91; // r3
  int v92; // r12
  double v93; // d17
  int i; // r1
  int v95; // r12
  int v96; // r1
  int v97; // r2
  int v98; // r3
  double v99; // d8
  int v100; // r4
  int v101; // r2
  int v102; // r0
  int v103; // r0
  int v104; // r2
  int v105; // r3
  int v107; // [sp+Ch] [bp-18h]

  v1 = (_DWORD *)LODWORD(a1);
  v2 = *(_DWORD *)(LODWORD(a1) + 4);
  HIDWORD(a1) = *(_DWORD *)(v2 + 84);
  v107 = HIDWORD(a1);
  v3 = *(_DWORD *)HIDWORD(a1);
  if ( *(int *)(*(_DWORD *)HIDWORD(a1) + 1164) <= 0 )
  {
    LODWORD(v10) = sub_5DF80(
                     v2,
                     *(unsigned __int8 *)(LODWORD(a1) + 88),
                     *(_DWORD *)(LODWORD(a1) + 72),
                     *(_DWORD *)(LODWORD(a1) + 76));
    return v10;
  }
  v4 = (double)*(int *)(LODWORD(a1) + 84) / 8000.0;
  LODWORD(a1) = 32;
  ldexp(a1, _stack_chk_guard);
  if ( v4 < 0.0 )
    v5 = -sub_8BBA8(COERCE_UNSIGNED_INT64(-v4), HIDWORD(COERCE_UNSIGNED_INT64(-v4)));
  else
    v5 = sub_8BBA8(LODWORD(v4), HIDWORD(v4));
  v6 = v1[19];
  v7 = (char *)(v1 + 22);
  v8 = v1[18] - HIDWORD(v5);
  if ( v6 < (unsigned int)v5 )
    --v8;
  v9 = v1[21] <= 0;
  v1[19] = v6 - v5;
  v1[18] = v8;
  v10 = *((_QWORD *)v1 + 9);
  *(_QWORD *)(v3 + 888) = v10;
  if ( v9 )
    goto LABEL_63;
  while ( 2 )
  {
    v65 = *v7++;
    v11 = *(double *)(v3 + 8 * ((unsigned __int8)~v65 + 146));
    if ( v11 > 6000.0 )
    {
      v11 = 6000.0;
      ++*(_DWORD *)(v3 + 3224);
    }
    else if ( v11 < -6000.0 )
    {
      v11 = -6000.0;
      ++*(_DWORD *)(v3 + 3224);
    }
    v12 = **(_DWORD **)(v2 + 84);
    v13 = *(double *)(v12 + 3296);
    *(double *)(v12 + 3304) = v13;
    v14 = *(double *)(v12 + 3288);
    *(double *)(v12 + 3296) = v14;
    v15 = *(double *)(v12 + 3280);
    *(double *)(v12 + 3288) = v15;
    v16 = *(double *)(v12 + 3272);
    *(double *)(v12 + 3280) = v16;
    v17 = *(double *)(v12 + 3264);
    *(double *)(v12 + 3272) = v17;
    v18 = *(double *)(v12 + 3256);
    *(double *)(v12 + 3264) = v18;
    v19 = *(double *)(v12 + 3248);
    v20 = 1000.0;
    *(double *)(v12 + 3256) = v19;
    v21 = *(double *)(v12 + 3240);
    *(double *)(v12 + 3248) = v21;
    v22 = v11
        - (v14 * 0.488486
         + v13 * 0.5844676
         + v15 * 2.704384
         + v16 * 1.645032
         + v17 * 4.644557
         + v18 * 1.879165
         + v19 * 3.522634
         + v21 * 0.7315738);
    *(double *)(v12 + 3240) = v22;
    v23 = v21 * 0.003156599
        + v22 * 0.006176213
        + v19 * 0.007567487
        + v18 * 0.00434458
        + v17 * 0.01190128
        + v16 * 0.00434458
        + v15 * 0.007567487
        + v14 * 0.003156599
        + v13 * 0.006176213;
    *(double *)(v12 + 3608) = v23 * 0.25;
    if ( v23 > 1000.0 )
    {
      v23 = 1000.0;
      v20 = -1000.0;
    }
    else if ( v23 >= -1000.0 )
    {
      v20 = -v23;
    }
    else
    {
      v23 = -1000.0;
    }
    v24 = *(_DWORD *)(v12 + 3616);
    LODWORD(v28) = 10;
    HIDWORD(v28) = v24 + 1;
    v25 = (double *)(v12 + 8 * v24 + 3312);
    v26 = *v25;
    *v25 = v23;
    v27 = v20 * v26;
    SHIDWORD(v28) %= 10;
    *(_DWORD *)(v12 + 3616) = HIDWORD(v28);
    if ( v27 < 0.0 )
    {
      v99 = sqrt(-v27);
      if ( v27 > -0.0 )
        sqrt(v28);
      v29 = -v99;
    }
    else
    {
      v29 = sqrt(v27);
    }
    v30 = *(double *)(v12 + 3592);
    *(double *)(v12 + 3600) = v30;
    v31 = *(double *)(v12 + 3584);
    v32 = v29 * 0.02538771;
    *(double *)(v12 + 3592) = v31;
    v33 = *(double *)(v12 + 3576);
    *(double *)(v12 + 3584) = v33;
    v34 = *(double *)(v12 + 3568);
    *(double *)(v12 + 3576) = v34;
    v35 = *(double *)(v12 + 3560);
    *(double *)(v12 + 3568) = v35;
    v36 = *(double *)(v12 + 3552);
    *(double *)(v12 + 3560) = v36;
    v37 = *(double *)(v12 + 3544);
    *(double *)(v12 + 3552) = v37;
    v38 = *(double *)(v12 + 3536);
    *(double *)(v12 + 3544) = v38;
    v39 = *(double *)(v12 + 3528);
    *(double *)(v12 + 3536) = v39;
    v40 = *(double *)(v12 + 3520);
    *(double *)(v12 + 3528) = v40;
    v41 = *(double *)(v12 + 3512);
    *(double *)(v12 + 3520) = v41;
    v42 = *(double *)(v12 + 3504);
    *(double *)(v12 + 3512) = v42;
    v43 = *(double *)(v12 + 3496);
    *(double *)(v12 + 3504) = v43;
    v44 = *(double *)(v12 + 3488);
    *(double *)(v12 + 3496) = v44;
    v45 = *(double *)(v12 + 3480);
    *(double *)(v12 + 3488) = v45;
    v46 = *(double *)(v12 + 3472);
    *(double *)(v12 + 3480) = v46;
    v47 = *(double *)(v12 + 3464);
    *(double *)(v12 + 3472) = v47;
    v48 = *(double *)(v12 + 3456);
    *(double *)(v12 + 3464) = v48;
    v49 = *(double *)(v12 + 3448);
    *(double *)(v12 + 3456) = v49;
    v50 = *(double *)(v12 + 3440);
    *(double *)(v12 + 3448) = v50;
    v51 = *(double *)(v12 + 3432);
    *(double *)(v12 + 3440) = v51;
    v52 = *(double *)(v12 + 3424);
    *(double *)(v12 + 3432) = v52;
    v53 = *(double *)(v12 + 3416);
    *(double *)(v12 + 3424) = v53;
    v54 = *(double *)(v12 + 3408);
    *(double *)(v12 + 3416) = v54;
    v55 = *(double *)(v12 + 3400);
    v56 = *(double *)(v12 + 3624) + 0.000125;
    *(double *)(v12 + 3408) = v55;
    v57 = *(double *)(v12 + 3392);
    *(double *)(v12 + 3400) = v57;
    *(double *)(v12 + 3392) = v32;
    if ( v56 <= 0.000416666667 )
    {
      *(double *)(v12 + 3624) = v56;
      goto LABEL_18;
    }
    v66 = v56 - 0.000416666667;
    v67 = *(_DWORD *)(v12 + 888);
    v68 = *(_DWORD *)(v12 + 892);
    v69 = *(_DWORD *)(v12 + 4656) + 1;
    v71 = -v69;
    v70 = -v69 < 0;
    v72 = v69 & 7;
    v73 = v71 & 7;
    if ( !v70 )
      v72 = -v73;
    v74 = v72 << 7;
    v75 = v12 + (v72 << 7);
    *(double *)(v12 + 3624) = v66;
    *(_DWORD *)(v12 + 4656) = v72;
    *(_DWORD *)(v75 + 3632) = v67;
    *(_DWORD *)(v75 + 3636) = v68;
    v76 = 1000000.0;
    v77 = v12 + (v72 << 7) + 3728;
    v78 = v31 * 0.1084671 + v30 * 0.02538771 + v33 * 0.2003159 + v34 * 0.2985303;
    v79 = -1000000.0;
    *(double *)(v75 + 3640) = -((v78
                               + v35 * 0.4003697
                               + v36 * 0.5028552
                               + v37 * 0.6028795
                               + v38 * 0.6973249
                               + v39 * 0.7831828
                               + v40 * 0.8576717
                               + v41 * 0.9183463
                               + v42 * 0.9631951
                               + v43 * 0.9907208
                               + v44
                               + v45 * 0.9907208
                               + v46 * 0.9631951
                               + v47 * 0.9183463
                               + v48 * 0.8576717
                               + v49 * 0.7831828
                               + v50 * 0.6973249
                               + v51 * 0.6028795
                               + v52 * 0.5028552
                               + v53 * 0.4003697
                               + v54 * 0.2985303
                               + v55 * 0.2003159
                               + v57 * 0.1084671
                               + v32)
                              * 6.0);
    do
    {
      v80 = *(double *)(v77 - 8);
      v77 -= 8;
      *(double *)(v77 + 8) = v80;
      if ( v80 > v79 )
        v79 = v80;
      if ( v80 < v76 )
        v76 = v80;
    }
    while ( v12 + 3640 + (v72 << 7) != v77 );
    v81 = v12 + v74;
    v82 = 0;
    v83 = 0.0;
    v84 = (double *)(v12 + v74 + 3648);
    v85 = 0;
    *(double *)(v12 + v74 + 3736) = v79 - v76;
    v86 = v76 + (v79 - v76) * 0.45;
    while ( 1 )
    {
      v87 = 2 * v85;
      *(_DWORD *)(v81 + 3752) = v87;
      v88 = *v84++;
      if ( v86 < v88 )
        *(_DWORD *)(v81 + 3752) = v87 | 1;
      if ( v82 <= 1 )
        goto LABEL_42;
      if ( v82 == 10 )
        break;
      if ( v86 >= v88 )
      {
        ++v82;
        v83 = v83 + v79 - v88;
        if ( v82 == 11 )
          goto LABEL_43;
        goto LABEL_36;
      }
LABEL_42:
      ++v82;
      v83 = v83 + v88 - v76;
      if ( v82 == 11 )
        goto LABEL_43;
LABEL_36:
      v85 = *(_DWORD *)(v81 + 3752);
    }
    v83 = v83 + v79 - v88;
LABEL_43:
    *(double *)(v12 + v74 + 3744) = v83 / ((v79 - v76) * 11.0);
    v89 = *(_DWORD *)(v12 + 4664);
    if ( v89 <= 0 )
    {
      if ( v72 == *(_DWORD *)(v12 + 4660) )
        goto LABEL_47;
    }
    else
    {
      v90 = v89 - 1;
      *(_DWORD *)(v12 + 4664) = v90;
      if ( !v90 )
      {
        *(_DWORD *)(v12 + 4660) = v72;
LABEL_47:
        v91 = v12 + 3736;
        v92 = -1;
        v93 = 0.0;
        for ( i = 0; i != 8; ++i )
        {
          if ( (*(_DWORD *)(v91 + 16) & 0x601) == 0x600 && *(double *)v91 >= 800.0 && *(double *)(v91 + 8) > v93 )
          {
            v93 = *(double *)(v91 + 8);
            v92 = i;
          }
          v91 += 128;
        }
        if ( v92 != -1 )
        {
          v95 = v12 + (v92 << 7);
          v96 = (unsigned __int8)(*(_DWORD *)(v95 + 3752) >> 1);
          v97 = *(_DWORD *)(v95 + 3632);
          v98 = *(_DWORD *)(v95 + 3636);
          *(_QWORD *)(v12 + 1136) = *(_QWORD *)(v95 + 3736);
          sub_5DF80(v2, v96, v97, v98);
          *(_DWORD *)(v12 + 4664) = 88;
        }
      }
    }
LABEL_18:
    v58 = *(_DWORD *)(v3 + 892);
    v59 = *(_DWORD *)(v3 + 3236);
    v60 = *(_DWORD *)(v3 + 888);
    v61 = __CFADD__(v58, v59);
    v62 = v58 + v59;
    v63 = *(_DWORD *)(v3 + 3228);
    *(_DWORD *)(v3 + 892) = v62;
    ++v63;
    LODWORD(v10) = 274877907 * v63;
    *(_DWORD *)(v3 + 888) = v60 + *(_DWORD *)(v3 + 3232) + v61;
    v64 = v63 % 8000;
    *(_DWORD *)(v3 + 3228) = v63 % 8000;
    if ( v63 == 8000 * (v63 / 8000) )
    {
      v100 = **(_DWORD **)(v2 + 84);
      v101 = *(_DWORD *)(v100 + 3224);
      v102 = *(_DWORD *)(v100 + 1144);
      if ( v101 )
      {
        if ( v101 <= 100 )
          goto LABEL_62;
        v103 = v102 - 4;
        if ( v103 < 0 )
        {
          *(_DWORD *)(v100 + 1144) = v64;
          goto LABEL_62;
        }
      }
      else
      {
        v103 = v102 + 4;
        if ( v103 > 255 )
          v103 = 255;
      }
      *(_DWORD *)(v100 + 1144) = v103;
LABEL_62:
      LODWORD(v10) = sub_60F24();
      *(_DWORD *)(v100 + 3224) = 0;
    }
    if ( v1[21] > v7 - (char *)(v1 + 22) )
      continue;
    break;
  }
LABEL_63:
  if ( (*(_BYTE *)(v107 + 768) & 2) != 0 )
    v104 = 2;
  else
    v104 = 1;
  v105 = *(_BYTE *)(v107 + 768) & 4;
  *(_DWORD *)(v3 + 3216) = v104;
  if ( v105 )
    v105 = 127;
  *(_DWORD *)(v3 + 3220) = v105;
  return v10;
}
