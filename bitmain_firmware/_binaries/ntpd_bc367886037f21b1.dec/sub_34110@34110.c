int sub_34110()
{
  double v0; // d0
  _DWORD *v1; // r3
  int v2; // r2
  int v3; // r12
  int v4; // r1
  int v5; // r0
  unsigned int v6; // r3
  unsigned int v7; // r2
  unsigned int v8; // r3
  int v9; // r4
  double v10; // d8
  int v11; // r6
  int v12; // r10
  int v13; // r2
  int v14; // r3
  double v15; // d16
  int v16; // r2
  __int64 v17; // d17
  int v18; // r1
  int v19; // r3
  int v20; // r2
  int v21; // r10
  int v22; // r3
  _DWORD *v23; // r7
  int v24; // r2
  int v25; // r8
  int v26; // r0
  int v27; // r9
  int v28; // t1
  double v29; // d17
  _DWORD *v30; // r1
  int v31; // r12
  int v32; // r2
  int v33; // t1
  double *v34; // r3
  int v35; // r3
  int v36; // r0
  double v37; // d16
  double v38; // d17
  int v39; // r3
  int v40; // r2
  int v41; // r10
  int v42; // r1
  int v43; // t1
  int v44; // r3
  int v45; // r3
  int v46; // r1
  int v47; // r10
  int v48; // r2
  int v49; // t1
  int v50; // r3
  int v52; // r6
  int v53; // r8
  int v54; // r7
  double v55; // d19
  _DWORD *v56; // r12
  int v57; // r1
  int v58; // r2
  int v59; // r3
  int v60; // r1
  int v61; // r2
  int v62; // r3
  int v63; // r2
  int v64; // r3
  double v65; // r2
  int v66; // r2
  double v67; // r0
  int v68; // r8
  int v69; // s20
  int v70; // r4
  double v71; // d13
  int v72; // r11
  double v73; // d9
  double v74; // d14
  int v75; // r10
  double v76; // d16
  double v77; // d11
  double v78; // d17
  int j; // r3
  double v80; // d0
  double v81; // d16
  double v82; // r0
  int v83; // r2
  int v84; // r3
  int v85; // r11
  _DWORD *v86; // r10
  _DWORD *v87; // r11
  _DWORD *v88; // r12
  int v89; // r1
  int v90; // r2
  int v91; // r3
  int v92; // r3
  int v93; // r3
  unsigned int v94; // r11
  unsigned int v95; // r0
  int i; // r3
  int v97; // r2
  int v98; // r1
  _BOOL4 v99; // r3
  int v100; // r4
  int v101; // r8
  int v102; // r7
  int v103; // lr
  int v104; // r11
  double *v105; // r2
  double v106; // d20
  int v107; // r1
  double v108; // d19
  double v109; // d18
  double v110; // d17
  double v111; // d16
  int v112; // r3
  int v113; // r0
  int v114; // r12
  bool v115; // zf
  double v116; // d16
  double v117; // r10
  int k; // r2
  unsigned int v119; // r0
  unsigned int v120; // r1
  unsigned int v121; // r0
  unsigned int v122; // r1
  char v123; // r2
  double v124; // d16
  double v125; // d17
  bool v126; // cc
  double v127; // d16
  int v128; // r0
  int v129; // r1
  int v130; // r3
  int v131; // r1
  _BOOL4 v132; // r3
  int v133; // r2
  int v134; // r12
  bool v135; // zf
  double v136; // d16
  int v137; // r8
  double v138; // d16
  double v139; // r0
  bool v140; // zf
  double v141; // r0
  int v142; // r3
  int v143; // r3
  double v144; // d16
  double v145; // d18
  double v146; // d17
  double v147; // d19
  int v148; // t1
  double v149; // d21
  double v150; // d0
  double v151; // d8
  int v152; // r3
  int v154; // [sp+4h] [bp-40h]
  int v155; // [sp+4h] [bp-40h]
  int v156; // [sp+4h] [bp-40h]
  int v157; // [sp+8h] [bp-3Ch]
  int v158; // [sp+8h] [bp-3Ch]
  int v159; // [sp+8h] [bp-3Ch]
  int v160; // [sp+10h] [bp-34h]
  int v161; // [sp+18h] [bp-2Ch]
  int v162; // [sp+20h] [bp-24h]
  int v163; // [sp+24h] [bp-20h]
  int v164; // [sp+2Ch] [bp-18h]
  int v165[2]; // [sp+34h] [bp-10h] BYREF

  sys_survivors = 0;
  v1 = (_DWORD *)peer_list;
  v161 = sys_peer;
  if ( peer_list )
  {
    v2 = 1;
    do
    {
      v1 = (_DWORD *)*v1;
      ++v2;
    }
    while ( v1 );
    v3 = 32 * v2;
    v4 = 72 * v2;
  }
  else
  {
    v4 = 72;
    v3 = 32;
  }
  dword_BB6E0 = v3;
  dword_BB6E4 = v3;
  v5 = sub_637E4(dword_BB6E8, v4, 0, 0);
  if ( dword_BB6E0 )
    v6 = (dword_BB6E0 + 7) & 0xFFFFFFF8;
  else
    v6 = 8;
  v7 = v5 + v6;
  dword_BB6EC = v5 + v6;
  dword_BB6E8 = v5;
  if ( dword_BB6E4 )
    v8 = (dword_BB6E4 + 7) & 0xFFFFFFF8;
  else
    v8 = 8;
  v9 = peer_list;
  dword_BB6F0 = v7 + v8;
  if ( !peer_list )
  {
    *(_QWORD *)(v7 + 16) = 0;
    v52 = 0;
    *(double *)(v7 + 8) = sys_mindisp;
    goto LABEL_68;
  }
  v10 = 8589934590.0;
  v11 = 0;
  v12 = 0;
  v163 = 0;
  v160 = 0;
  v164 = 0;
  do
  {
    *(_BYTE *)(v9 + 297) = 0;
    if ( sub_32CE4(v9) )
      goto LABEL_20;
    v13 = *(unsigned __int8 *)(v9 + 93);
    if ( v13 == sys_orphan )
    {
      v93 = *(_DWORD *)(v9 + 56);
      if ( v93 )
        v94 = *(_DWORD *)(v93 + 152);
      else
        v94 = -1;
      if ( v93 )
        v94 = bswap32(v94);
      v95 = bswap32(sub_60478(v9 + 16));
      if ( v94 > v95 && (double)v95 < v10 )
      {
        v10 = (double)v95;
        v164 = v9;
      }
    }
    else
    {
      if ( v13 > sys_orphan )
        goto LABEL_20;
      if ( (*(_DWORD *)(v9 + 68) & 0x20) != 0 )
      {
LABEL_19:
        *(_BYTE *)(v9 + 297) = 1;
        sub_32C28();
        v15 = *(double *)(v9 + 608);
        v16 = dword_BB6E8;
        v17 = *(_QWORD *)(v9 + 624);
        v18 = dword_BB6EC + 32 * v12;
        *(_DWORD *)v18 = v9;
        v19 = v16 + 16 * v11;
        v20 = v16 + 16 * v11 + 16;
        v11 += 2;
        ++v12;
        *(_QWORD *)(v18 + 16) = v17;
        *(double *)(v18 + 8) = v0;
        *(_DWORD *)(v19 + 8) = -1;
        *(double *)v19 = v15 - v0;
        *(_DWORD *)(v20 + 8) = 1;
        *(double *)v20 = v0 + v15;
        goto LABEL_20;
      }
      v14 = *(unsigned __int8 *)(v9 + 88);
      if ( v14 == 1 )
      {
        v131 = v163;
        v132 = current_time > (unsigned int)orphwait;
        if ( v163 )
          v132 = 0;
        if ( v132 )
          v131 = v9;
        v163 = v131;
      }
      else
      {
        if ( v14 != 18 )
          goto LABEL_19;
        v98 = v160;
        v99 = current_time > (unsigned int)orphwait;
        if ( v160 )
          v99 = 0;
        if ( v99 )
          v98 = v9;
        v160 = v98;
      }
    }
LABEL_20:
    v9 = *(_DWORD *)v9;
  }
  while ( v9 );
  v157 = v12;
  v154 = dword_BB6EC;
  if ( v11 )
  {
    v21 = dword_BB6F0;
    v22 = 0;
    v23 = (_DWORD *)(dword_BB6F0 - 4);
    v24 = dword_BB6F0 - 4;
    do
    {
      *(_DWORD *)(v24 + 4) = v22;
      v24 += 4;
      ++v22;
    }
    while ( v11 != v22 );
    v25 = 0;
    v26 = dword_BB6E8;
    while ( 1 )
    {
      v28 = v23[1];
      ++v23;
      v27 = v28;
      v29 = *(double *)(v26 + 16 * v28);
      if ( v11 <= v25 + 1 )
        break;
      v30 = v23;
      v31 = v25;
      v32 = v25 + 1;
      do
      {
        v33 = v30[1];
        ++v30;
        v34 = (double *)(v26 + 16 * v33);
        if ( *v34 < v29 )
          v31 = v32;
        ++v32;
        if ( *v34 < v29 )
          v29 = *v34;
      }
      while ( v11 != v32 );
      if ( v31 != v25 )
      {
        v35 = *(_DWORD *)(v21 + 4 * v31);
        *(_DWORD *)(v21 + 4 * v31) = v27;
        *v23 = v35;
        if ( v11 <= v25 + 1 )
          break;
      }
      ++v25;
    }
  }
  v36 = v157;
  if ( !v157 )
    goto LABEL_64;
  v37 = 1000000000.0;
  v38 = -1000000000.0;
  do
  {
    if ( v11 )
    {
      v39 = dword_BB6E8 + 16 * *(_DWORD *)dword_BB6F0;
      v37 = *(double *)v39;
      v40 = -*(_DWORD *)(v39 + 8);
      if ( v36 > v40 )
      {
        v41 = dword_BB6F0;
        v42 = 0;
        do
        {
          if ( v11 == ++v42 )
            break;
          v43 = *(_DWORD *)(v41 + 4);
          v41 += 4;
          v44 = dword_BB6E8 + 16 * v43;
          v37 = *(double *)v44;
          v40 -= *(_DWORD *)(v44 + 8);
        }
        while ( v40 < v36 );
      }
    }
    if ( v11 )
    {
      v45 = dword_BB6E8 + 16 * *(_DWORD *)(dword_BB6F0 + 4 * (v11 - 1));
      v46 = *(_DWORD *)(v45 + 8);
      v38 = *(double *)v45;
      if ( v36 > v46 )
      {
        v47 = dword_BB6F0 + 4 * (v11 + 0x3FFFFFFF);
        v48 = v11 - 1;
        do
        {
          if ( v48-- == 0 )
            break;
          v49 = *(_DWORD *)(v47 - 4);
          v47 -= 4;
          v50 = dword_BB6E8 + 16 * v49;
          v38 = *(double *)v50;
          v46 += *(_DWORD *)(v50 + 8);
        }
        while ( v46 < v36 );
      }
    }
    if ( v38 > v37 )
      break;
    --v36;
  }
  while ( v157 - 1 - ((unsigned int)(v157 - 1) >> 1) != v36 );
  v52 = 0;
  v53 = 0;
  v54 = v154 + 8;
  do
  {
    while ( 1 )
    {
      v63 = *(_DWORD *)(v54 - 8);
      v64 = *(_DWORD *)(v63 + 68);
      if ( v38 > v37 )
      {
        v55 = *(double *)(v63 + 608);
        if ( v55 + *(double *)v54 >= v37 && v55 - *(double *)v54 <= v38 )
          break;
      }
      if ( (v64 & 0x400) != 0 )
        break;
      ++v53;
      v54 += 32;
      if ( v157 == v53 )
        goto LABEL_63;
    }
    if ( (v64 & 0x80) == 0 )
      goto LABEL_56;
    if ( !v9 )
      v9 = *(_DWORD *)(v54 - 8);
    if ( (v64 & 0x10000) != 0 )
    {
LABEL_56:
      if ( v52 != v53 )
      {
        v56 = (_DWORD *)(v154 + 32 * v52);
        v57 = *(_DWORD *)(v54 - 4);
        v58 = *(_DWORD *)v54;
        v59 = *(_DWORD *)(v54 + 4);
        *v56 = *(_DWORD *)(v54 - 8);
        v56[1] = v57;
        v56[2] = v58;
        v56[3] = v59;
        v56 += 4;
        v60 = *(_DWORD *)(v54 + 12);
        v61 = *(_DWORD *)(v54 + 16);
        v62 = *(_DWORD *)(v54 + 20);
        *v56 = *(_DWORD *)(v54 + 8);
        v56[1] = v60;
        v56[2] = v61;
        v56[3] = v62;
      }
      ++v52;
    }
    ++v53;
    v54 += 32;
  }
  while ( v157 != v53 );
LABEL_63:
  if ( v52 )
  {
    for ( i = 0; i != v52; ++i )
    {
      v97 = *(_DWORD *)(v154 + 32 * i);
      *(_BYTE *)(v97 + 297) = 3;
    }
  }
  else
  {
LABEL_64:
    *(_QWORD *)(v154 + 16) = 0;
    v65 = sys_mindisp;
    if ( v160 )
      *(_DWORD *)v154 = v160;
    *(double *)(v154 + 8) = v65;
    if ( v160 )
    {
LABEL_67:
      v52 = 1;
      *(_BYTE *)(v160 + 297) = 3;
    }
    else
    {
      v152 = v163;
      if ( v163 || (v152 = v164) != 0 )
      {
        v160 = v152;
        *(_DWORD *)v154 = v152;
        goto LABEL_67;
      }
      v52 = 0;
    }
  }
LABEL_68:
  v66 = 1400;
  HIDWORD(v67) = v52 - 1;
  v68 = 32 * v52;
  v69 = v52 - 1;
  v155 = v9;
  if ( v52 )
    goto LABEL_69;
  while ( 2 )
  {
    LODWORD(v67) = sys_precision;
    v82 = ldexp(v67, v66);
    v73 = 1000000000.0;
    v70 = v52;
LABEL_97:
    LODWORD(v82) = sys_precision;
    v82 = ldexp(v82, v83);
    v74 = 1.0;
LABEL_85:
    v84 = sys_minclock;
    if ( sys_minclock < 1 )
      v84 = 1;
    if ( v84 >= v52 )
    {
      v100 = v155;
      dword_BB6F4 = 0;
      dword_BB6F8 = 0;
      if ( v52 )
        goto LABEL_116;
      if ( !v155 )
        goto LABEL_171;
      v103 = 0;
LABEL_141:
      if ( fabs(sys_offset) >= 0.4 )
      {
LABEL_171:
        if ( v161 )
        {
          if ( (int)sys_orphwait > 0 )
            orphwait = (int)sys_orphwait + current_time;
          LODWORD(v82) = sub_25C8C((__int16 *)byte_8, 0, 0);
        }
        v130 = peer_list;
        for ( sys_peer = 0; v130; v130 = *(_DWORD *)v130 )
          *(_BYTE *)(v130 + 296) = *(_BYTE *)(v130 + 297);
        return LODWORD(v82);
      }
      v115 = v103 == 0;
      if ( !v103 )
        v115 = *(_BYTE *)(v100 + 88) == 22;
      if ( !v115 )
        goto LABEL_145;
      goto LABEL_226;
    }
    if ( v74 > v73 )
    {
      v85 = dword_BB6EC;
      v86 = (_DWORD *)(dword_BB6EC + 32 * v70);
      if ( (*(_DWORD *)(*v86 + 68) & 0x420) == 0 )
      {
        HIDWORD(v67) = v70 + 1;
        v66 = sys_maxclock;
        if ( sys_maxclock < v52 )
        {
          v66 = 5;
          *(_BYTE *)(*v86 + 297) = 5;
        }
        if ( v52 > SHIDWORD(v67) )
        {
          v87 = (_DWORD *)(v85 - 32 + v68);
          do
          {
            v88 = v86;
            v86 += 8;
            v89 = v86[1];
            v90 = v86[2];
            v91 = v86[3];
            *v88 = *v86;
            v88[1] = v89;
            v88[2] = v90;
            v88[3] = v91;
            v88 += 4;
            HIDWORD(v67) = v86[5];
            v66 = v86[6];
            v92 = v86[7];
            *v88 = v86[4];
            v88[1] = HIDWORD(v67);
            v88[2] = v66;
            v88[3] = v92;
          }
          while ( v87 != v86 );
        }
        --v52;
        v68 -= 32;
        --v69;
        if ( !v52 )
          continue;
LABEL_69:
        v70 = 0;
        v71 = -1000000000.0;
        v72 = 0;
        v73 = 1000000000.0;
        LODWORD(v67) = dword_BB6EC;
        v74 = 0.0;
        v75 = dword_BB6EC;
        do
        {
          v76 = *(double *)(v75 + 16);
          *(_QWORD *)(v75 + 24) = 0;
          if ( v76 < v73 )
            v73 = v76;
          if ( v52 == 1 )
          {
            v77 = 0.0;
          }
          else
          {
            v78 = 0.0;
            for ( j = 0; j != v52; ++j )
            {
              v66 = *(_DWORD *)(LODWORD(v67) + 32 * j);
              v78 = v78
                  + (*(double *)(v66 + 608) - *(double *)(*(_DWORD *)v75 + 608))
                  * (*(double *)(v66 + 608) - *(double *)(*(_DWORD *)v75 + 608));
            }
            v80 = v78 / (double)v69;
            v77 = sqrt(v80);
            if ( v80 < 0.0 )
            {
              v159 = LODWORD(v67);
              v67 = sqrt(v67);
              LODWORD(v67) = v159;
            }
            *(double *)(v75 + 24) = v77;
          }
          v75 += 32;
          v81 = v77 * *(double *)(v75 - 24);
          if ( v81 > v71 )
            v70 = v72;
          ++v72;
          if ( v81 > v71 )
          {
            v74 = v77;
            v71 = v77 * *(double *)(v75 - 24);
          }
        }
        while ( v52 != v72 );
        LODWORD(v67) = sys_precision;
        v82 = ldexp(v67, v66);
        if ( v74 <= 1.0 )
          goto LABEL_97;
        goto LABEL_85;
      }
    }
    break;
  }
  v100 = v155;
  dword_BB6F4 = 0;
  dword_BB6F8 = 0;
LABEL_116:
  v101 = 0;
  v102 = 0;
  v156 = 0;
  v158 = 0;
  v103 = 0;
  v104 = 0;
  v105 = (double *)dword_BB6EC;
  v106 = sys_mindisp;
  v107 = 0;
  v108 = 1000000000.0;
  v162 = sys_survivors;
  do
  {
    v112 = *(_DWORD *)v105;
    v113 = *(unsigned __int8 *)(*(_DWORD *)v105 + 91);
    *(_DWORD *)(v112 + 708) = 0;
    *(_BYTE *)(v112 + 297) = 4;
    v114 = *(_DWORD *)(v112 + 68);
    if ( v113 == 1 )
    {
      if ( (v114 & 8) != 0 )
      {
        v158 = 1;
        v102 = v52;
      }
      else if ( v52 > v102 )
      {
        v158 = 1;
        ++v102;
      }
    }
    else if ( v113 == 2 )
    {
      if ( (v114 & 8) != 0 )
      {
        v156 = v52;
        v101 = 1;
      }
      else if ( v156 < v52 )
      {
        ++v156;
        v101 = 1;
      }
    }
    LODWORD(v82) = *(unsigned __int8 *)(v112 + 93);
    v109 = v105[3];
    v105 += 4;
    if ( (v114 & 0x20) != 0 )
      v103 = v112;
    v110 = *(v105 - 3);
    v111 = (double)SLODWORD(v82) * v106 + v109 * v110;
    if ( v111 < v108 )
      v104 = v107;
    ++v107;
    if ( v111 < v108 )
      v108 = (double)SLODWORD(v82) * v106 + v109 * v110;
  }
  while ( v52 != v107 );
  sys_survivors = v52 + v162;
  if ( v158 )
    dword_BB6F4 = v102;
  if ( v101 )
    dword_BB6F8 = v156;
  if ( sys_minsane > v52 )
  {
    if ( v100 )
      goto LABEL_141;
    goto LABEL_171;
  }
  v133 = dword_BB6EC;
  v134 = dword_BB6EC + 32 * v104;
  LODWORD(v82) = *(_DWORD *)v134;
  v135 = v161 == *(_DWORD *)v134;
  if ( v161 != *(_DWORD *)v134 )
    v135 = v161 == 0;
  if ( v135 )
  {
    dbl_BB700 = 0.0;
    if ( LODWORD(v82) )
    {
      v137 = LODWORD(v82);
      goto LABEL_192;
    }
    if ( !v100 || fabs(sys_offset) >= 0.4 )
      goto LABEL_171;
    v140 = v103 == 0;
    if ( !v103 )
      v140 = *(_BYTE *)(v100 + 88) == 22;
    if ( !v140 )
      goto LABEL_145;
LABEL_226:
    if ( sys_minsane )
      goto LABEL_171;
    goto LABEL_145;
  }
  v136 = fabs(*(double *)(LODWORD(v82) + 608) - *(double *)(v161 + 608));
  if ( sys_mindisp <= v136 )
  {
    v137 = *(_DWORD *)(dword_BB6EC + 32 * v104);
    dbl_BB700 = 0.0;
  }
  else if ( dbl_BB700 == 0.0 )
  {
    dbl_BB700 = sys_mindisp;
    v137 = v161;
  }
  else if ( dbl_BB700 * 0.5 <= v136 )
  {
    dbl_BB700 = 0.0;
    v137 = LODWORD(v82);
  }
  else
  {
    dbl_BB700 = dbl_BB700 * 0.5;
    v137 = v161;
  }
LABEL_192:
  if ( v103 )
  {
    v138 = *(double *)(v103 + 608);
    *(_BYTE *)(v103 + 297) = 6;
    dbl_BB700 = 0.0;
    v139 = *(double *)(v103 + 624);
    sys_offset = v138;
    sys_jitter = v139;
    if ( !v100 || fabs(v138) >= 0.4 )
    {
LABEL_195:
      v100 = v103;
      goto LABEL_146;
    }
LABEL_145:
    v116 = *(double *)(v100 + 624);
    v117 = *(double *)(v100 + 608);
    *(_BYTE *)(v100 + 297) = 7;
    sys_jitter = v116;
    sys_offset = v117;
    dbl_BB700 = 0.0;
    goto LABEL_146;
  }
  HIDWORD(v82) = 6;
  *(_BYTE *)(v137 + 297) = 6;
  if ( sys_survivors <= 0 )
  {
    v144 = 0.0;
    v145 = 0.0;
    v146 = 0.0;
  }
  else
  {
    v143 = v133 + 32 * sys_survivors;
    v144 = 0.0;
    v145 = 0.0;
    v146 = 0.0;
    do
    {
      v147 = *(double *)(v133 + 8);
      v148 = *(_DWORD *)v133;
      v133 += 32;
      HIDWORD(v82) = v148;
      v149 = *(double *)(v148 + 608);
      v146 = v146 + 1.0 / v147;
      v145 = v145 + 1.0 / v147 * v149;
      v144 = v144 + (v149 - *(double *)(LODWORD(v82) + 608)) * (v149 - *(double *)(LODWORD(v82) + 608)) * (1.0 / v147);
    }
    while ( v143 != v133 );
  }
  v150 = v144 / v146 + *(double *)(v134 + 24) * *(double *)(v134 + 24);
  sys_offset = v145 / v146;
  v151 = sqrt(v150);
  if ( v150 < 0.0 )
    sqrt(v82);
  sys_jitter = v151;
  if ( !v100 || fabs(sys_offset) >= 0.4 )
  {
    v103 = v137;
    goto LABEL_195;
  }
  if ( *(_BYTE *)(v100 + 88) != 22 )
    goto LABEL_145;
  v100 = v137;
LABEL_146:
  LODWORD(v82) = *(_DWORD *)(v100 + 304);
  if ( LODWORD(v82) <= sys_epoch )
    return LODWORD(v82);
  if ( v161 != v100 )
  {
    sub_25C8C((_WORD *)&dword_88 + 1, v100, 0);
    LODWORD(v82) = *(_DWORD *)(v100 + 304);
  }
  for ( k = peer_list; k; k = *(_DWORD *)k )
    *(_BYTE *)(k + 296) = *(_BYTE *)(k + 297);
  sys_epoch = LODWORD(v82);
  sys_peer = v100;
  v119 = *(unsigned __int8 *)(v100 + 65);
  v120 = (unsigned __int8)sys_poll;
  if ( v119 > (unsigned __int8)sys_poll )
  {
    sys_poll = *(_BYTE *)(v100 + 65);
    v120 = v119;
  }
  v121 = *(unsigned __int8 *)(v100 + 66);
  if ( v121 < v120 )
  {
    sys_poll = *(_BYTE *)(v100 + 66);
    v120 = v121;
  }
  sub_33F78(v100, v120);
  v122 = *(unsigned __int8 *)(v100 + 93);
  if ( v122 >= 0xF )
    v123 = 15;
  else
    v123 = *(_BYTE *)(v100 + 93);
  sys_stratum = v123 + 1;
  if ( (v122 & 0xEF) != 0 )
    sys_refid = sub_60478(v100 + 16);
  else
    sys_refid = *(_DWORD *)(v100 + 112);
  v124 = *(double *)(v100 + 104)
       + *(double *)(v100 + 632)
       + sys_jitter
       + (double)(unsigned int)(current_time - *(_DWORD *)(v100 + 704)) * clock_phi
       + fabs(sys_offset);
  v125 = *(double *)(v100 + 96);
  v126 = v124 <= sys_mindisp;
  if ( v124 > sys_mindisp )
    sys_rootdisp = v124;
  v127 = *(double *)(v100 + 616);
  if ( v126 )
    sys_rootdisp = sys_mindisp;
  v128 = *(_DWORD *)(v100 + 576);
  v129 = *(_DWORD *)(v100 + 580);
  sys_rootdelay = v127 + v125;
  sys_reftime = v128;
  dword_107C0C = v129;
  LODWORD(v82) = sub_2F1B4(v100);
  switch ( LODWORD(v82) )
  {
    case 1:
      if ( sys_leap == 3 )
      {
        sub_332A4(0);
        if ( crypto_flags )
          sub_277A4();
        LODWORD(v82) = waitsync_fd_to_close;
        if ( waitsync_fd_to_close != -1 )
        {
          LODWORD(v82) = close(waitsync_fd_to_close);
          waitsync_fd_to_close = -1;
        }
      }
      if ( !leapsec )
      {
        HIDWORD(v82) = dword_BB6F4;
        v142 = dword_BB6F8;
        if ( dword_BB6F4 > dword_BB6F8 )
        {
          if ( dword_BB6F4 <= sys_survivors / 2 )
            return LODWORD(v82);
          sub_5F334(v165);
          LODWORD(v82) = sub_2D9FC(1, v165[0], 0);
          v142 = dword_BB6F8;
          HIDWORD(v82) = dword_BB6F4;
        }
        if ( v142 > SHIDWORD(v82) && v142 > sys_survivors / 2 )
        {
          sub_5F334(v165);
          LODWORD(v82) = sub_2D9FC(0, v165[0], 0);
        }
      }
      break;
    case 2:
      sub_31A14();
      sub_332A4(3);
      sys_refid = 1346720851;
      LODWORD(v141) = sys_precision;
      HIDWORD(v141) = 16;
      sys_rootdelay = 0.0;
      sys_stratum = 16;
      dword_107C0C = 0;
      sys_rootdisp = 0.0;
      sys_reftime = 0;
      ldexp(v141, 0);
      sys_jitter = 1.0;
      LODWORD(v82) = sub_2D820();
      break;
    case 0xFFFFFFFF:
      exit(-1);
      break;
  }
  return LODWORD(v82);
}
