int __fastcall sub_5760C(int a1)
{
  double v1; // d0
  double v2; // d8
  int v3; // r4
  double v4; // d26
  double v5; // d27
  double v6; // d25
  double v7; // d24
  double v8; // d23
  double v9; // d22
  double v10; // d30
  double v11; // d31
  double v12; // d21
  double v13; // d29
  double v14; // d20
  double v15; // d28
  double v16; // d17
  double v17; // d18
  double v18; // d4
  double v19; // d2
  double v20; // d16
  double v21; // d1
  double v22; // d10
  double v23; // d0
  double v24; // d3
  double v25; // d19
  double v26; // d5
  double v27; // d9
  double v28; // d11
  double v29; // d7
  int v30; // r1
  int v31; // lr
  int v32; // r9
  int v33; // r12
  double v34; // d17
  double v35; // d26
  double *v36; // r1
  double *v37; // r9
  double v38; // d27
  double v39; // d22
  double v40; // d2
  double v41; // d17
  double v42; // d2
  double v43; // d5
  double v44; // d16
  double v45; // d16
  double v46; // d0
  double v47; // d18
  double v48; // d16
  double v49; // d11
  int v50; // r9
  double *v51; // r7
  double v52; // d19
  double v53; // d21
  double v54; // d20
  double *v55; // r2
  double v56; // d17
  int v57; // r0
  double v58; // d22
  int v59; // r6
  double v60; // d20
  double v61; // d0
  int v62; // r5
  int v63; // r8
  double *v64; // r1
  double *v65; // r3
  int v66; // r6
  double v67; // d21
  double v68; // d28
  double v69; // d19
  double v70; // d0
  double v71; // r0
  double v72; // d16
  double v73; // d0
  double v74; // d8
  int v75; // r6
  double *v76; // r12
  double v77; // d16
  double v78; // d22
  double v79; // d19
  double v80; // d17
  double *v81; // r9
  double v82; // d24
  double *v83; // r8
  double v84; // d10
  double v85; // r0
  int v86; // r11
  double v87; // d0
  double v88; // d23
  double v89; // d21
  double v90; // d18
  double v91; // d16
  double v92; // d11
  double v93; // d19
  double v94; // d0
  double v95; // d8
  int v96; // r11
  int v97; // r12
  int v98; // r6
  double v99; // r0
  int v100; // r6
  int v101; // r3
  int v102; // r2
  int v103; // r1
  double *v104; // r2
  double v105; // d16
  int v106; // r3
  double v107; // d16
  int v108; // r3
  double v109; // d18
  double *v110; // r3
  double v111; // r0
  double v112; // d16
  bool v113; // fzf
  bool v114; // fnf
  int v115; // r12
  double v116; // d16
  bool v117; // fcf
  bool v118; // fzf
  int v119; // r0
  int *v120; // r6
  int v121; // r4
  double v122; // d16
  int v123; // r3
  int v124; // r2
  double v125; // d17
  int v126; // r2
  int v127; // r3
  int v128; // r2
  bool v129; // zf
  int v130; // r3
  double v131; // d0
  double v132; // d16
  double v133; // d0
  double v134; // d8
  double v135; // r0
  double v136; // r0
  double v137; // d0
  double v138; // d0
  int v139; // r12
  int v140; // lr
  char *v141; // r10
  int v142; // r9
  int v143; // lr
  int v144; // r1
  int v145; // r9
  int v146; // lr
  double v147; // d16
  double v148; // d18
  double v149; // d17
  double v150; // d16
  double v151; // d0
  double v152; // d8
  int v153; // s15
  int v154; // r2
  double v155; // d18
  double v156; // d0
  double v157; // d16
  double v158; // d0
  double v159; // d9
  double *v160; // r8
  double v161; // r0
  double v162; // d8
  int v163; // r3
  int v164; // r3
  double v165; // d0
  int v167; // [sp+38h] [bp-BCh]
  int v169; // [sp+44h] [bp-B0h]
  int v170; // [sp+58h] [bp-9Ch]
  int v171; // [sp+60h] [bp-94h]
  char v172[128]; // [sp+6Ch] [bp-88h] BYREF

  v2 = v1;
  v3 = **(_DWORD **)(a1 + 84);
  v171 = *(_DWORD *)(a1 + 84);
  if ( dword_BE878 )
  {
    v4 = dbl_BE8D8;
    v5 = dbl_BE8E0;
    v6 = dbl_BE8D0;
    v7 = dbl_BE8C8;
    v8 = dbl_BE8C0;
    v9 = dbl_BE8B8;
    v10 = dbl_BE890;
    v11 = dbl_BE898;
    v12 = dbl_BE8B0;
    v13 = dbl_BE888;
    v14 = dbl_BE8A8;
    v15 = dbl_BE880;
    v16 = dbl_BE890 * -3.48174 + dbl_BE898 * 0.8360961 + dbl_BE888 * 5.452988 + dbl_BE880 * -3.807229;
    v17 = dbl_BE880 * -0.01149947;
    v18 = dbl_BE888 * 0.01654858;
    v19 = dbl_BE898 * 0.003281435;
    v20 = dbl_BE8A8 * -0.02375732;
    v21 = dbl_BE8B0 * 0.03353214;
    v22 = dbl_BE8D0 * 0.03353214;
    v23 = dbl_BE8C0 * 0.04605479;
    v24 = dbl_BE890 * -0.01149947;
    v25 = dbl_BE8D8 * -0.02375732;
    v26 = dbl_BE8B8 * -0.04080258;
    v27 = dbl_BE8C8 * -0.04080258;
    v28 = dbl_BE8E0 * 0.008203628;
    v29 = v2
        - (dbl_BE8D8 * -2.765914
         + dbl_BE8E0 * 0.4897278
         + dbl_BE8D0 * 8.110921
         + dbl_BE8C8 * -15.17732
         + dbl_BE8C0 * 19.75197
         + dbl_BE8B8 * -18.14365
         + dbl_BE8B0 * 11.59783
         + dbl_BE8A8 * -4.73504);
  }
  else
  {
    dword_BE878 = 1;
    memset(&unk_BE8F0, 0, 0x148u);
    memset(&unk_103490, 0, 0x2A80u);
    memset(&unk_100A10, 0, 0x2A80u);
    memset(&unk_F4210, 0, 0xC800u);
    memset(&unk_E7A10, 0, 0xC800u);
    memset(&unk_BEA38, 0, 0x140u);
    memset(&unk_BEB78, 0, 0x140u);
    memset(&unk_DB210, 0, 0xC800u);
    memset(&unk_CEA10, 0, 0xC800u);
    memset(&unk_BECB8, 0, 0x140u);
    memset(&unk_BEDF8, 0, 0x140u);
    memset(dbl_BF010, 0, sizeof(dbl_BF010));
    v25 = -0.0;
    v16 = 0.0;
    v29 = v1;
    v27 = -0.0;
    v26 = -0.0;
    v20 = -0.0;
    v24 = -0.0;
    v17 = -0.0;
    v28 = 0.0;
    v22 = 0.0;
    v23 = 0.0;
    v21 = 0.0;
    v14 = 0.0;
    v12 = 0.0;
    v9 = 0.0;
    v8 = 0.0;
    v7 = 0.0;
    v6 = 0.0;
    v4 = 0.0;
    v5 = 0.0;
    v19 = 0.0;
    v18 = 0.0;
    v15 = 0.0;
    v13 = 0.0;
    v10 = 0.0;
    v11 = 0.0;
  }
  v30 = *(_DWORD *)(v3 + 2176);
  dbl_BE8A0 = v11;
  v31 = v30 + 20;
  dbl_BE898 = v10;
  dbl_BE890 = v13;
  v32 = 8 * dword_BEF38;
  v33 = dword_BEF38 + 1;
  dbl_BE888 = v15;
  *(_DWORD *)(v3 + 2176) = (v30 + 1) % 80;
  dbl_BE880 = v2 * 5.0 - v16;
  dbl_BE8E0 = v4;
  v34 = sintab[v30];
  v35 = *(double *)(v3 + 2160);
  dbl_BE8B0 = v14;
  v36 = (double *)((char *)&unk_103490 + v32);
  v37 = (double *)((char *)&unk_100A10 + v32);
  dword_BEF38 = v33 % 1360;
  dbl_BE8C0 = v9;
  dbl_BE8E8 = v5;
  v38 = *v36;
  dbl_BE8B8 = v12;
  v39 = sintab[v31 % 80];
  dbl_BE8D8 = v6;
  dbl_BE8D0 = v7;
  dbl_BE8C8 = v8;
  v40 = v17 + dbl_BE880 * 0.003281435 + v18 + v24 + v19;
  v41 = v40 * v34;
  v42 = v40 * v39;
  *(double *)(v3 + 2160) = v35 - v38;
  v43 = v20 + v29 * 0.008203628 + v21 + v26 + v23;
  *v36 = v41 / 680.0;
  v44 = *(double *)(v3 + 2168);
  *(double *)(v3 + 2160) = *(double *)(v3 + 2160) + v41 / 680.0;
  *(double *)(v3 + 2168) = v44 - *v37;
  *v37 = v42 / 680.0;
  v45 = *(double *)(v3 + 2168);
  v46 = dbl_BEF60;
  dbl_BE8A8 = v29;
  v47 = dbl_BEF68;
  *(double *)(v3 + 2168) = v45 + v42 / 680.0;
  v48 = dbl_BEF48;
  v49 = v43 + v27 + v22 + v25 + v28;
  v50 = 8 * dword_BEF40;
  v169 = dword_BEF40;
  v51 = (double *)((char *)&unk_E7A10 + 8 * dword_BEF40);
  v52 = v49 * sintab[dword_BEF3C];
  v53 = *v51;
  v54 = sintab[(dword_BEF3C + 20) % 80];
  v55 = (double *)((char *)&unk_F4210 + 8 * dword_BEF40);
  v56 = dbl_BEF58;
  v57 = *(_DWORD *)(v3 + 2196);
  dword_BEF3C = (dword_BEF3C + 10) % 80;
  v58 = *v55;
  v59 = v57 + 1 - (_DWORD)&loc_75300 * ((v57 + 1) / 480000);
  *(_DWORD *)(v3 + 2196) = v59;
  v60 = v49 * v54 * 0.25;
  v61 = v46 - v53;
  *v51 = v60;
  v62 = v59 % 8000;
  v63 = 8 * dword_BEF50;
  v170 = dword_BEF50;
  v64 = (double *)((char *)&unk_BEB78 + 8 * dword_BEF50);
  v65 = (double *)((char *)&unk_BE668 + 8 * dword_BEF50);
  v66 = *(_DWORD *)(v3 + 3292);
  v67 = *v64;
  v68 = v52 * 0.25;
  v69 = v65[122];
  *v64 = v60;
  v70 = v61 + v60;
  *v55 = v68;
  dbl_BEF60 = v70;
  v65[122] = v68;
  HIDWORD(v71) = &dbl_BEF48;
  LODWORD(v71) = &dbl_BEF58;
  v72 = v48 - v58 + v68;
  v73 = v70 * v70 + v72 * v72;
  dbl_BEF48 = v72;
  dbl_BEF68 = v47 - v67 + v60;
  dbl_BEF58 = v56 - v69 + v68;
  v74 = sqrt(v73);
  if ( v73 < 0.0 )
    sqrt(v71);
  v75 = 216 * v66;
  v167 = v3 + 4096;
  *(double *)(v3 + v75 + 2248) = v74 / 800.0;
  if ( (*(_DWORD *)(v3 + 4328) & 1) == 0 )
  {
    HIDWORD(v136) = v3 + v75 + 2208;
    LODWORD(v136) = a1;
    sub_55D60(v136, (int)(*(double *)(v171 + 744) * 8000.0));
    v169 = dword_BEF40;
    v50 = 8 * dword_BEF40;
    v170 = dword_BEF50;
    v63 = 8 * dword_BEF50;
  }
  v76 = (double *)((char *)&unk_CEA10 + v50);
  v77 = sintab[dword_BEF70];
  v78 = *(double *)((char *)&unk_CEA10 + v50);
  v79 = dbl_BEF78;
  v80 = dbl_BEF80;
  v81 = (double *)((char *)&unk_DB210 + v50);
  v82 = *v81;
  LODWORD(v85) = (char *)&unk_BECB8 + v63;
  v83 = (double *)((char *)&unk_BEDF8 + v63);
  v84 = sintab[(dword_BEF70 + 20) % 80];
  HIDWORD(v85) = &dbl_BEF98;
  v86 = *(_DWORD *)(v3 + 3292);
  v87 = dbl_BEF88 - v78;
  dword_BEF70 = (dword_BEF70 + 12) % 80;
  v88 = *(double *)LODWORD(v85);
  v89 = *v83;
  v90 = dbl_BEF90;
  v91 = v49 * v77 * 0.25;
  v92 = v49 * v84 * 0.25;
  *(double *)LODWORD(v85) = v91;
  *v81 = v91;
  *v76 = v92;
  *v83 = v92;
  dbl_BEF88 = v87 + v92;
  v93 = v79 - v82 + v91;
  v94 = dbl_BEF88 * dbl_BEF88 + v93 * v93;
  dbl_BEF78 = v93;
  dbl_BEF80 = v80 - v88 + v91;
  dbl_BEF90 = v90 - v89 + v92;
  v95 = sqrt(v94);
  if ( v94 < 0.0 )
    sqrt(v85);
  v96 = 216 * v86;
  *(double *)(v3 + v96 + 2352) = v95 / 800.0;
  v97 = *(_DWORD *)(v3 + 4328);
  v98 = v97 & 1;
  if ( (v97 & 1) == 0 )
  {
    LODWORD(v135) = a1;
    HIDWORD(v135) = v3 + v96 + 2312;
    sub_55D60(v135, (int)(*(double *)(v171 + 752) * 8000.0));
    v97 = *(_DWORD *)(v3 + 4328);
    v98 = v97 & 1;
    v169 = dword_BEF40;
    v170 = dword_BEF50;
  }
  LODWORD(v99) = (v169 + 1) / 6400;
  HIDWORD(v99) = *(_DWORD *)(v3 + 2196);
  dword_BEF40 = (v169 + 1) % 6400;
  dword_BEF50 = (v170 + 1) % 40;
  if ( !HIDWORD(v99) )
  {
    ++*(_DWORD *)(v3 + 56);
    if ( v98 )
    {
      if ( (v97 & 0x1000) != 0 )
        *(_DWORD *)(v3 + 2196) = sub_733C0;
LABEL_15:
      v100 = **(_DWORD **)(a1 + 84);
      v101 = *(_DWORD *)(v100 + 3292);
      v102 = v100 + 216 * v101;
      v103 = v102 + 2240;
      v104 = (double *)(v102 + 2256);
      v105 = *(double *)(v103 + 8);
      if ( v105 > *v104 )
        *v104 = v105;
      v106 = v100 + 216 * v101;
      v107 = *(double *)(v106 + 2352);
      if ( v107 > *(double *)(v106 + 2360) )
        *(double *)(v106 + 2360) = v107;
      v108 = *(_DWORD *)(v100 + 2192);
      switch ( v108 )
      {
        case 6400:
          *(_DWORD *)(v100 + 2136) = *(_DWORD *)(v100 + 2132);
          break;
        case 120:
          dbl_BEF98 = *(double *)(v100 + 2160);
          dbl_BEFA0 = dbl_BEF98;
          dbl_BEFA8 = dbl_BEF98;
          break;
        case 1600:
          v150 = *(double *)(v100 + 2168);
          dbl_BEFA0 = *(double *)(v100 + 2160);
          v151 = v150 * v150 + dbl_BEFA0 * dbl_BEFA0;
          v152 = sqrt(v151);
          if ( v151 < 0.0 )
          {
            HIDWORD(v99) = v100 + 2160;
            sqrt(v99);
            v108 = *(_DWORD *)(v100 + 2192);
            v150 = *(double *)(v100 + 2168);
          }
          v153 = *(_DWORD *)(v100 + 2128);
          dbl_BEFB0 = v152;
          v154 = *(_DWORD *)(v100 + 2176);
          v155 = v150 / (double)v153;
          *(double *)(v100 + 2184) = v155;
          if ( v155 < 0.0 )
          {
            *(_DWORD *)(v100 + 2176) = v154 - 1;
            if ( v154 - 1 < 0 )
              *(_DWORD *)(v100 + 2176) = v154 + 79;
          }
          else
          {
            *(_DWORD *)(v100 + 2176) = v154 + 1;
            if ( v154 + 1 > 79 )
              *(_DWORD *)(v100 + 2176) = v154 - 79;
          }
          break;
        case 4000:
          dbl_BEF98 = *(double *)(v100 + 2160);
          break;
      }
      HIDWORD(v99) = *(_DWORD *)(v100 + 2196);
      *(_DWORD *)(v100 + 2192) = v108 + 1;
      LODWORD(v99) = 8000;
      if ( SHIDWORD(v99) % 8000 != *(_DWORD *)(v100 + 2136) )
        goto LABEL_24;
      v156 = *(double *)(v100 + 2168);
      v157 = *(double *)(v100 + 2160);
      *(_DWORD *)(v100 + 4328) &= 0xFFFFFF9F;
      v158 = v156 * v156 + v157 * v157;
      v159 = sqrt(v158);
      if ( v158 < 0.0 )
        sqrt(v99);
      v160 = (double *)(v100 + 4320);
      HIDWORD(v161) = 0;
      v162 = dbl_BEFB0;
      *(double *)(v100 + 4312) = dbl_BEFB0;
      if ( v162 <= 0.0 )
      {
        *v160 = 0.0;
      }
      else if ( v159 <= 0.0 || (v161 = log10(0.0), v165 = v162 / v159 * 20.0, v165 > 40.0) )
      {
        *v160 = 40.0;
        if ( v162 >= 1000.0 )
        {
LABEL_145:
          LODWORD(v161) = a1;
          dbl_BEFA0 = dbl_BEFA0 - dbl_BEF98;
          dbl_BEF98 = dbl_BEF98 - dbl_BEFA8;
          sub_5603C(v161);
          goto LABEL_124;
        }
      }
      else
      {
        *v160 = v165;
        if ( v162 >= 1000.0 && v165 >= 10.0 )
          goto LABEL_145;
      }
      LODWORD(v161) = a1;
      *(_DWORD *)(v100 + 4328) |= 0x20u;
      sub_5603C(v161);
LABEL_124:
      v163 = *(_DWORD *)(v100 + 4340);
      if ( (*(_DWORD *)(v100 + 4328) & 0x60) != 0 )
        *(_DWORD *)(v100 + 4340) = ++v163;
      if ( v163 > 40 )
        *(_DWORD *)(v100 + 4332) |= 2u;
      sub_5536C(*(int **)(a1 + 84));
      v99 = 0.0;
      v164 = v100 + 216 * *(_DWORD *)(v100 + 3292);
      *(_QWORD *)(v164 + 2256) = 0;
      *(_QWORD *)(v164 + 2360) = 0;
      *(_DWORD *)(v100 + 2192) = 0;
LABEL_24:
      v97 = *(_DWORD *)(v3 + 4328);
      goto LABEL_25;
    }
    LODWORD(v99) = sub_554A4(a1);
    v97 = *(_DWORD *)(v3 + 4328);
    if ( !LODWORD(v99) )
      *(_DWORD *)(v3 + 56) = 0;
    v98 = v97 & 1;
  }
  if ( v98 )
    goto LABEL_15;
  v127 = *(_DWORD *)(v3 + 3280);
  if ( v127 )
  {
    if ( *(double *)(v127 + 72) >= 50.0 )
    {
      HIDWORD(v99) = *(_DWORD *)(v127 + 32);
      LODWORD(v99) = 8000;
      if ( SHIDWORD(v99) % 8000 == v62 )
      {
        v128 = SHIDWORD(v99) / -8000 + 60;
        v129 = (v97 & 2) == 0;
        v97 |= 1u;
        LODWORD(v99) = (unsigned __int64)(2290649225LL * v128) >> 32;
        HIDWORD(v99) = 60;
        v130 = v3 + 4096;
        *(_DWORD *)(v3 + 4304) = v128 % 60;
        *(_DWORD *)(v3 + 2192) = 0;
        *(_DWORD *)(v3 + 4328) = v97;
        if ( !v129 )
          v130 = *(_DWORD *)(v3 + 2132);
        *(_DWORD *)(v3 + 56) = 0;
        if ( v129 )
        {
          *(_DWORD *)(v3 + 2132) = v62;
          *(_DWORD *)(v3 + 2136) = v62;
        }
        else
        {
          *(_DWORD *)(v3 + 2136) = v130;
        }
      }
    }
  }
LABEL_25:
  if ( (v97 & 0x100) != 0 )
  {
    v131 = dbl_BEF68;
    v132 = dbl_BEF58;
  }
  else
  {
    if ( (v97 & 0x200) == 0 )
    {
      v109 = 0.0;
      goto LABEL_29;
    }
    v131 = dbl_BEF90;
    v132 = dbl_BEF80;
  }
  v133 = v131 * v131 + v132 * v132;
  v134 = sqrt(v133);
  if ( v133 < 0.0 )
    sqrt(v99);
  v109 = v134 / 5.0;
LABEL_29:
  v110 = &dbl_BF010[v62];
  HIDWORD(v111) = &unk_BE668;
  LODWORD(v111) = &dbl_BEFB8;
  v112 = (v109 - *v110) / (double)*(int *)(v3 + 2128) + *v110;
  v113 = v112 == dbl_BEFB8;
  v114 = v112 < dbl_BEFB8;
  *v110 = v112;
  if ( !v114 && !v113 )
  {
    v115 = v62 - 48;
    if ( v62 - 48 < 0 )
      v115 = v62 + 7936;
    dbl_BEFB8 = v112;
    if ( v62 - 48 < 0 )
      v115 += 16;
    dword_BEFC0 = v62;
    dbl_BEFC8 = fabs(dbl_BF010[v115]);
  }
  if ( !v62 )
  {
    v116 = dbl_BEFB8;
    v118 = dbl_BEFB8 == 0.0;
    v117 = dbl_BEFB8 >= 0.0;
    *(double *)(v3 + 2144) = dbl_BEFB8;
    if ( !v118 && v117 )
    {
      if ( dbl_BEFC8 <= 0.0 || (v138 = v116 / dbl_BEFC8, log10(v111), v137 = v138 * 20.0, v137 > 40.0) )
        v137 = 40.0;
    }
    else
    {
      v137 = 0.0;
    }
    *(double *)(v3 + 2152) = v137;
    v119 = dword_BEFC0 - 40;
    if ( dword_BEFC0 - 40 < 0 )
      v119 = dword_BEFC0 + 7960;
    dword_BEFC0 = v119;
    v120 = *(int **)(a1 + 84);
    v121 = *v120;
    if ( !dword_BEFD0 )
    {
      dword_BEFD0 = 1;
      *(_QWORD *)&dword_BEFD4 = 0;
      qword_BEFD8 = 0;
    }
    v122 = *(double *)(v121 + 2144);
    v123 = *(_DWORD *)(v121 + 4328);
    v124 = ++dword_BEFE0;
    if ( v122 < 2500.0 || (v125 = *(double *)(v121 + 2152), v125 < 15.0) )
    {
      *(_DWORD *)(v121 + 4328) = v123 & 0xFFFFFFED;
      dword_BEFE4 = 0;
      dword_BEFE8 = 0;
      dword_BEFEC = 0;
LABEL_47:
      LODWORD(v111) = 0;
      v126 = *(_DWORD *)(v167 + 232);
      if ( (v126 & 2) == 0 )
        *(_DWORD *)(v167 + 236) |= 8u;
      dbl_BEFB8 = 0.0;
      if ( (v126 & 1) == 0 )
        LODWORD(v111) = sub_5536C(*(int **)(a1 + 84));
      return LODWORD(v111);
    }
    if ( (v123 & 0x300) == 0 )
      goto LABEL_47;
    v140 = qword_BEFD8;
    v139 = dword_BEFD4;
    dword_BEFD4 = v119;
    qword_BEFD8 = __PAIR64__(qword_BEFD8, v139);
    if ( v139 < v119 )
    {
      if ( v140 >= v139 )
      {
        if ( v140 > v119 )
        {
LABEL_76:
          v139 = v119;
          dword_BEFF0 = v119;
          goto LABEL_77;
        }
        dword_BEFF0 = v140;
        v139 = v140;
LABEL_77:
        v141 = (char *)(v120[192] & 8);
        v142 = (v139 - dword_BEFF4) % 8000;
        if ( v142 )
        {
          if ( dword_BEFE4 <= dword_BEFE8 )
          {
            dword_BEFFC = v124;
            dword_BEFE4 = dword_BEFE8;
            dword_BEFE8 = 0;
            dword_BF000 = dword_BEFF4;
          }
        }
        else
        {
          v143 = dword_BEFE8 + 1;
          dword_BEFE8 = v143;
          if ( v143 > 10 )
          {
            if ( (v123 & 1) == 0 )
            {
              if ( !v141 )
              {
LABEL_85:
                v144 = *(_DWORD *)(v121 + 2128);
                goto LABEL_86;
              }
LABEL_147:
              v141 = v172;
              sub_6BCB0(
                v172,
                128,
                "wwv1 %04x %3d %4d %5.0f %5.1f %5d %4d %4d %4d",
                v123,
                *(_DWORD *)(v121 + 2116),
                v139,
                v122,
                v125,
                v142,
                dword_BEFEC,
                v143,
                dword_BEFE4);
              sub_41CA4(a1 + 16, v172);
              v139 = dword_BEFF0;
              goto LABEL_85;
            }
            if ( (v123 & 0x10) == 0 )
            {
              v144 = *(_DWORD *)(v121 + 2128);
              if ( v124 - dword_BEFF8 > v144 )
              {
LABEL_86:
                if ( ++dword_BEFEC >= v144 )
                {
                  v145 = dword_BEFE4;
                  if ( dword_BEFE8 >= dword_BEFE4 )
                  {
                    v145 = dword_BEFE8;
                    dword_BEFE4 = dword_BEFE8;
                    dword_BEFFC = dword_BEFE0;
                    dword_BF000 = dword_BEFF4;
                  }
                  v146 = *(_DWORD *)(v121 + 4328);
                  dword_BEFF4 = v139;
                  if ( v145 )
                    v139 = dword_BF000;
                  else
                    v141 = (char *)dword_BEFE0;
                  if ( v145 )
                  {
                    v141 = (char *)dword_BEFFC;
                  }
                  else
                  {
                    dword_BF000 = v139;
                    dword_BEFFC = (int)v141;
                  }
                  v147 = (double)((v139 - dword_BF004) % 8000);
                  if ( (v146 & 0x10) != 0 )
                  {
                    v148 = fabs(v147);
                    if ( v148 >= 12.0 )
                    {
                      if ( dword_BF008 < -2 )
                      {
                        if ( v144 > 8 )
                        {
                          *(_DWORD *)(v121 + 2128) = v144 >> 1;
                          dword_BF008 = 0;
                        }
                      }
                      else
                      {
                        --dword_BF008;
                      }
                    }
                    else
                    {
                      v149 = v147 * 0.5 / (double)(3 * (int)&v141[-dword_BEFF8]) + *(double *)(v121 + 24);
                      if ( v149 <= 1.5 )
                      {
                        if ( v149 < -1.5 )
                          v149 = -1.5;
                        *(double *)(v121 + 24) = v149;
                      }
                      else
                      {
                        *(double *)(v121 + 24) = 1.5;
                      }
                      if ( v148 < 6.0 )
                      {
                        if ( dword_BF008 > 2 )
                        {
                          if ( v144 < 1024 )
                          {
                            *(_DWORD *)(v121 + 2128) = 2 * v144;
                            dword_BF008 = 0;
                          }
                        }
                        else
                        {
                          ++dword_BF008;
                        }
                      }
                    }
                  }
                  if ( (v120[192] & 8) != 0 )
                  {
                    sub_6BCB0(
                      v172,
                      128,
                      "wwv2 %04x %5.0f %5.1f %5d %4d %4d %4d %4.0f %7.2f",
                      v146,
                      *(double *)(v121 + 2144),
                      *(double *)(v121 + 2152),
                      v139,
                      *(_DWORD *)(v121 + 2128),
                      v145,
                      &v141[-dword_BEFF8],
                      v147,
                      *(double *)(v121 + 24) * 1000000.0 / 8000.0);
                    sub_41CA4(a1 + 16, v172);
                    v139 = dword_BF000;
                    v141 = (char *)dword_BEFFC;
                    v146 = *(_DWORD *)(v121 + 4328);
                  }
                  *(_DWORD *)(v121 + 4328) = v146 | 0x10;
                  dword_BF004 = v139;
                  dword_BEFF8 = (int)v141;
                  dword_BEFE4 = 0;
                  dword_BEFE8 = 0;
                  dword_BEFEC = 0;
                }
                else
                {
                  dword_BEFF4 = v139;
                }
                goto LABEL_47;
              }
            }
            *(_DWORD *)(v121 + 4328) = v123 | 2;
            *(_DWORD *)(v121 + 2132) = v139;
          }
        }
        if ( !v141 )
          goto LABEL_85;
        v123 = *(_DWORD *)(v121 + 4328);
        if ( (v123 & 1) != 0 )
          goto LABEL_85;
        v143 = dword_BEFE8;
        goto LABEL_147;
      }
    }
    else if ( v140 <= v139 )
    {
      if ( v140 >= v119 )
      {
        dword_BEFF0 = v140;
        v139 = v140;
        goto LABEL_77;
      }
      goto LABEL_76;
    }
    dword_BEFF0 = v139;
    goto LABEL_77;
  }
  return LODWORD(v111);
}
