int __fastcall sub_5603C(double a1)
{
  double v1; // d0
  double *v2; // r4
  double v3; // d8
  int v4; // r5
  int v5; // r11
  double *v6; // r3
  double v7; // d16
  _DWORD *v8; // r2
  int v9; // r7
  int v10; // r6
  int v11; // r3
  double v12; // d16
  double v13; // d0
  double v14; // d0
  int v15; // r3
  int v16; // r2
  int v17; // r2
  double v18; // d17
  int v19; // r3
  int v20; // r3
  int v21; // s15
  int v22; // r3
  double *v23; // r3
  double v24; // d0
  int v25; // r3
  int v26; // r1
  double *v27; // r0
  int v28; // r2
  double v29; // d17
  int v30; // r3
  int v31; // r2
  int v32; // r2
  int v33; // r6
  int v34; // r1
  double v35; // d17
  int v36; // r2
  int v37; // r12
  double v38; // r0
  int v39; // r1
  double **v40; // r3
  double v41; // r0
  int v42; // r3
  int v43; // r2
  int v44; // r2
  int v45; // r3
  int v46; // r2
  double *v47; // r10
  int v48; // r2
  __int64 v49; // r0
  double v50; // d16
  int v51; // r2
  __int64 v52; // t1
  double *v53; // r6
  unsigned int v54; // lr
  int v55; // r7
  int v56; // r2
  int v57; // r2
  int v58; // r6
  int v59; // lr
  int v60; // r3
  int v61; // r7
  int v62; // r2
  int v63; // r3
  char v64; // lr
  int v65; // r3
  int v66; // r7
  int v67; // r2
  int v68; // r6
  int v69; // r3
  int v70; // r3
  int v71; // r2
  int v72; // r3
  int v73; // r0
  int *v74; // r12
  int v75; // s15
  int v76; // r3
  __int64 v77; // t1
  int v78; // r2
  int v79; // r3
  int v80; // r0
  int v81; // s15
  int v82; // r3
  __int64 v83; // t1
  int v84; // r3
  bool v85; // zf
  double v86; // d16
  int v87; // r2
  int v88; // s15
  int v89; // r3
  __int64 v90; // d16
  int v91; // r2
  int v92; // r7
  int v93; // r2
  int v94; // r3
  int v95; // r3
  int v96; // r12
  int v97; // lr
  int v98; // r1
  int v99; // r12
  int v100; // r2
  int v101; // r7
  int v102; // r0
  int *v103; // r1
  int v104; // lr
  int v105; // r0
  double v106; // d16
  int v107; // s15
  int v108; // r2
  int v109; // r3
  __int64 v110; // d16
  int v111; // lr
  int v112; // r1
  double v113; // d16
  int v114; // s15
  int v115; // r2
  int v116; // r3
  __int64 v117; // d16
  int v118; // lr
  int v119; // r1
  double v120; // d16
  int v121; // r3
  __int64 v122; // t1
  double *v123; // r12
  int v124; // r3
  int v125; // r3
  double v126; // d0
  int v127; // r0
  int v128; // r1
  int *v129; // r7
  int v130; // r3
  int v131; // s15
  int v132; // r3
  __int64 v133; // t1
  double *v134; // r1
  double *v135; // r3
  int v136; // r1
  int v137; // s15
  int v138; // r3
  __int64 v139; // d16
  int v140; // r6
  double v141; // d16
  int v142; // s15
  int v143; // r0
  int v144; // r3
  __int64 v145; // d16
  int v146; // r6
  int v147; // r0
  double v148; // d16
  int v149; // s15
  int v150; // r2
  int v151; // r3
  __int64 v152; // d16
  double *v153; // r0
  int v154; // r1
  double v155; // d16
  int v156; // s15
  int v157; // r2
  int v158; // r3
  __int64 v159; // d16
  int v160; // r3
  int *v161; // r0
  int v162; // r2
  int v163; // s15
  int v164; // r3
  __int64 v165; // d16
  int v166; // r7
  double v167; // d16
  int v168; // r3
  int v169; // r2
  bool v170; // zf
  int v171; // r2
  int v172; // s15
  int v173; // r3
  __int64 v174; // t1
  double v175; // d16
  int v177; // [sp+6Ch] [bp-D0h]
  int v178; // [sp+74h] [bp-C8h]
  int v179; // [sp+74h] [bp-C8h]
  int v180; // [sp+78h] [bp-C4h]
  int v181; // [sp+7Ch] [bp-C0h]
  int v182; // [sp+7Ch] [bp-C0h]
  int v183; // [sp+80h] [bp-BCh]
  int v184; // [sp+84h] [bp-B8h]
  int v185; // [sp+84h] [bp-B8h]
  unsigned int v186; // [sp+88h] [bp-B4h]
  int v187; // [sp+88h] [bp-B4h]
  int v188; // [sp+8Ch] [bp-B0h]
  int v189; // [sp+90h] [bp-ACh]
  int v190; // [sp+94h] [bp-A8h]
  double *v191; // [sp+98h] [bp-A4h]
  int *v192; // [sp+9Ch] [bp-A0h]
  int v193; // [sp+9Ch] [bp-A0h]
  int v194; // [sp+A0h] [bp-9Ch]
  int v195; // [sp+A4h] [bp-98h]
  int v196; // [sp+ACh] [bp-90h] BYREF
  unsigned int v197; // [sp+B0h] [bp-8Ch]
  char v198[128]; // [sp+B4h] [bp-88h] BYREF

  v2 = *(double **)(LODWORD(a1) + 84);
  v3 = v1;
  v177 = LODWORD(a1);
  v4 = *(_DWORD *)v2;
  if ( !dword_BE688 )
  {
    dword_BE688 = 1;
    LODWORD(a1) = memset(&unk_BE690, 0, 0x1E8u);
  }
  v5 = *(_DWORD *)(v4 + 4304);
  *(_DWORD *)(v4 + 4304) = v5 + 1;
  v6 = (double *)((char *)&unk_BE668 + 8 * v5);
  v7 = v6[5] + (v1 - v6[5]) * 0.0625;
  v6[5] = v7;
  v8 = (_DWORD *)((char *)&progx + 8 * v5);
  v9 = v8[1];
  switch ( *v8 )
  {
    case 1:
      v37 = *(_DWORD *)(v4 + 4328);
      if ( (v37 & 4) != 0 )
      {
        *((double *)&unk_BE668 + v9) = v1;
        goto LABEL_33;
      }
      LODWORD(a1) = *((unsigned __int8 *)v2 + 768);
      *((_QWORD *)&unk_BE668 + v9) = 0;
      if ( (LOBYTE(a1) & 8) == 0 )
        goto LABEL_33;
      goto LABEL_36;
    case 2:
      *((double *)&unk_BE668 + v9) = v1;
      goto LABEL_31;
    case 3:
      *((_QWORD *)&unk_BE668 + v9) = 0;
      goto LABEL_31;
    case 4:
      v40 = (double **)&bcd9_ptr;
      goto LABEL_45;
    case 5:
      v40 = (double **)&bcd6_ptr;
      goto LABEL_45;
    case 6:
      v40 = (double **)&bcd3_ptr;
      goto LABEL_45;
    case 7:
      v40 = (double **)&bcd2_ptr;
LABEL_45:
      LODWORD(v41) = v177;
      HIDWORD(v41) = v4 + 112 * v9 + 3296;
      LODWORD(a1) = sub_55A70(v41, *v40);
      if ( ((_BYTE)v2[96] & 8) == 0 )
        goto LABEL_33;
      goto LABEL_32;
    case 8:
      goto LABEL_38;
    case 9:
      HIDWORD(v38) = v4 + 4192;
      LODWORD(v38) = v177;
      LODWORD(a1) = sub_55A70(v38, bcd9);
      v7 = *((double *)&unk_BE668 + v5 + 5);
LABEL_38:
      if ( v7 <= 1000.0 )
      {
        if ( v7 >= -1000.0 )
        {
          *(_DWORD *)(v4 + 4328) |= 0x40u;
        }
        else
        {
          v70 = *(_DWORD *)(v4 + 4336);
          *(_DWORD *)(v4 + 4336) = v70 & ~v9;
          if ( (v70 & v9) != 0 )
            *(_DWORD *)(v4 + 4332) |= 1u;
        }
      }
      else
      {
        v39 = *(_DWORD *)(v4 + 4336);
        *(_DWORD *)(v4 + 4336) = v39 | v9;
        if ( (v39 & v9) == 0 )
          *(_DWORD *)(v4 + 4332) |= 1u;
      }
      goto LABEL_31;
    case 0xA:
      v42 = *(_DWORD *)(v4 + 4328);
      if ( v7 > 1000.0 )
      {
        v71 = *(_DWORD *)(v4 + 4336);
        *(_DWORD *)(v4 + 4336) = v71 | v9;
        if ( (v71 & v9) == 0 )
          *(_DWORD *)(v4 + 4332) |= 1u;
      }
      else if ( v7 < -1000.0 )
      {
        v43 = *(_DWORD *)(v4 + 4336);
        *(_DWORD *)(v4 + 4336) = v43 & ~v9;
        if ( (v43 & v9) != 0 )
          *(_DWORD *)(v4 + 4332) |= 1u;
      }
      else
      {
        v42 |= 0x40u;
      }
      v44 = *(_DWORD *)(v4 + 48);
      *(_DWORD *)(v4 + 4328) = v42 & 0xFFFFFCFF;
      if ( v44 > 0 )
      {
        v102 = *(_DWORD *)(v4 + 3288) + 1;
        v103 = *(int **)(v177 + 84);
        *(_DWORD *)(v4 + 3288) = v102 % 5;
        LODWORD(a1) = sub_55404(*(_DWORD *)(v177 + 76), v103, v102 % 5);
      }
      else
      {
        *(_DWORD *)(v4 + 216 * *(_DWORD *)(v4 + 3292) + 2200) = *(_DWORD *)(v4 + 2116);
      }
      goto LABEL_31;
    case 0xB:
      v45 = *(_DWORD *)(v4 + 4328);
      if ( (v45 & 0x1000) == 0 )
        goto LABEL_60;
      goto LABEL_31;
    case 0xC:
      v45 = *(_DWORD *)(v4 + 4328);
LABEL_60:
      v46 = *(_DWORD *)(v177 + 84);
      *(_DWORD *)(v4 + 4328) = v45 & 0xFFFFEFFF;
      v47 = *(double **)v46;
      v180 = v46;
      v48 = *(_DWORD *)(*(_DWORD *)v46 + 3296);
      LODWORD(v49) = v48 - 1;
      HIDWORD(v49) = *((_DWORD *)v47 + 825) + 1;
      *((_DWORD *)v47 + 825) = HIDWORD(v49);
      v50 = v47[v48 + 415];
      if ( HIDWORD(v49) == v48 )
      {
        HIDWORD(v49) = 0;
        *((_DWORD *)v47 + 825) = 0;
      }
      if ( (int)v49 > 0 )
      {
        v51 = (int)&v47[v48 + 415];
        do
        {
          v52 = *(_QWORD *)(v51 - 8);
          v51 -= 8;
          LODWORD(v49) = v49 - 1;
          *(_QWORD *)(v51 + 8) = v52;
        }
        while ( (_DWORD)v49 );
      }
      v53 = (double *)*((_DWORD *)v47 + 993);
      v189 = *((_DWORD *)v47 + 937);
      v184 = *((_DWORD *)v47 + 1082);
      v190 = *((_DWORD *)v47 + 965);
      v54 = *((_DWORD *)v47 + 1084);
      v55 = *((_DWORD *)v47 + 1021);
      v47[416] = (double)(int)v50;
      v181 = v54 & 0x40;
      v191 = v53;
      v186 = v54;
      v188 = v55;
      v56 = *((_DWORD *)v47 + 853);
      v178 = v189 + 10 * v190 + 100 * (_DWORD)v53;
      if ( (v184 & 4) == 0 )
      {
        v91 = HIDWORD(v49) + 10 * v56;
        v58 = *((_DWORD *)v47 + 909);
        HIDWORD(v49) = *((_DWORD *)v47 + 881);
        v61 = v55 + 10 * *((_DWORD *)v47 + 1049);
        v183 = v91;
        goto LABEL_77;
      }
      if ( HIDWORD(v49) )
      {
        v57 = HIDWORD(v49) + 10 * v56;
        v58 = *((_DWORD *)v47 + 909);
        HIDWORD(v49) = *((_DWORD *)v47 + 881);
        v183 = v57;
        v59 = v57 + 60 * HIDWORD(v49) + 600 * v58;
        goto LABEL_68;
      }
      v72 = *((_DWORD *)v47 + 852);
      v73 = v56 + 1;
      v74 = (int *)(v47 + 426);
      *((_DWORD *)v47 + 853) = v56 + 1;
      if ( v56 + 1 == v72 )
      {
        *((_DWORD *)v47 + 853) = 0;
        v75 = (int)*(double *)&v74[2 * v56 + 8];
        if ( v56 <= 0 )
        {
          v183 = 0;
          v47[430] = (double)v75;
          goto LABEL_106;
        }
        v183 = 0;
        v73 = 0;
      }
      else
      {
        v56 = v72 - 1;
        v75 = (int)*(double *)&v74[2 * v72 + 6];
        v183 = 10 * v73;
        if ( v72 - 1 <= 0 )
          goto LABEL_105;
      }
      v76 = (int)&v47[v72 + 429];
      do
      {
        v77 = *(_QWORD *)(v76 - 8);
        v76 -= 8;
        --v56;
        *(_QWORD *)(v76 + 8) = v77;
      }
      while ( v56 );
LABEL_105:
      v47[430] = (double)v75;
      if ( v73 )
      {
        HIDWORD(v49) = *((_DWORD *)v47 + 881);
        v58 = *((_DWORD *)v47 + 909);
        v59 = v183 + 60 * HIDWORD(v49) + 600 * v58;
        goto LABEL_68;
      }
LABEL_106:
      v78 = *((_DWORD *)v47 + 881);
      v79 = *((_DWORD *)v47 + 880);
      v80 = v78 + 1;
      *((_DWORD *)v47 + 881) = v78 + 1;
      if ( v78 + 1 == v79 )
      {
        v192 = (int *)(v47 + 440);
        v80 = 0;
        *((_DWORD *)v47 + 881) = 0;
        v81 = (int)v47[v78 + 444];
        if ( v78 <= 0 )
        {
          v59 = v183;
          v47[444] = (double)v81;
          goto LABEL_111;
        }
        v59 = v183;
      }
      else
      {
        v192 = (int *)(v47 + 440);
        v78 = v79 - 1;
        v81 = (int)v47[v79 + 443];
        v59 = v183 + 60 * v80;
        if ( v79 - 1 <= 0 )
          goto LABEL_110;
      }
      v82 = (int)&v47[v79 + 443];
      do
      {
        v83 = *(_QWORD *)(v82 - 8);
        v82 -= 8;
        --v78;
        *(_QWORD *)(v82 + 8) = v83;
      }
      while ( v78 );
LABEL_110:
      *((double *)v192 + 4) = (double)v81;
      if ( v80 )
      {
        v58 = *((_DWORD *)v47 + 909);
        HIDWORD(v49) = v80;
        v59 += 600 * v58;
        goto LABEL_68;
      }
LABEL_111:
      v84 = *((_DWORD *)v47 + 908);
      v58 = *((_DWORD *)v47 + 909) + 1;
      *((_DWORD *)v47 + 909) = v58;
      v85 = v58 == v84;
      if ( v58 == v84 )
        v58 = 0;
      else
        v78 = 600;
      v86 = v47[v84 + 457];
      if ( !v85 )
        v59 += v78 * v58;
      v87 = v84 - 1;
      if ( v85 )
        *((_DWORD *)v47 + 909) = v58;
      v88 = (int)v86;
      if ( v87 > 0 )
      {
        v89 = (int)&v47[v84 + 457];
        do
        {
          v90 = *(_QWORD *)(v89 - 8);
          v89 -= 8;
          --v87;
          *(_QWORD *)(v89 + 8) = v90;
        }
        while ( v87 );
      }
      v47[458] = (double)v88;
LABEL_68:
      v194 = v55 & 3;
      if ( !v181 || (v184 & 8) == 0 )
        goto LABEL_75;
      if ( (v55 & 3) != 0 )
      {
        if ( v178 == 182 )
          goto LABEL_232;
        v60 = 365;
      }
      else
      {
        if ( v178 == 183 )
          goto LABEL_232;
        v60 = 366;
      }
      if ( v60 != v178 )
        goto LABEL_75;
LABEL_232:
      if ( v59 == 1439 )
      {
        v166 = *((_DWORD *)v47 + 1049);
        *((_DWORD *)v47 + 1082) = v184 | 0x1000;
        v184 |= 0x1000u;
        v61 = v188 + 10 * v166;
        goto LABEL_77;
      }
LABEL_75:
      if ( v59 != 1440 )
      {
        v61 = v55 + 10 * *((_DWORD *)v47 + 1049);
        goto LABEL_77;
      }
      v104 = *((_DWORD *)v47 + 880);
      v105 = v104 - 1;
      while ( 2 )
      {
        ++HIDWORD(v49);
        v106 = v47[v104 + 443];
        if ( HIDWORD(v49) != v104 )
        {
          v107 = (int)v106;
          if ( v105 <= 0 )
            goto LABEL_148;
          goto LABEL_146;
        }
        v107 = (int)v106;
        if ( v105 > 0 )
        {
          HIDWORD(v49) = 0;
LABEL_146:
          v108 = (int)&v47[v104 + 443];
          v109 = v104 - 1;
          do
          {
            v110 = *(_QWORD *)(v108 - 8);
            v108 -= 8;
            --v109;
            *(_QWORD *)(v108 + 8) = v110;
          }
          while ( v109 );
LABEL_148:
          v47[444] = (double)v107;
          if ( !HIDWORD(v49) )
            goto LABEL_149;
          continue;
        }
        break;
      }
      v47[444] = (double)v107;
LABEL_149:
      v111 = *((_DWORD *)v47 + 908);
      *((_DWORD *)v47 + 881) = 0;
      v112 = v111 - 1;
      while ( 2 )
      {
        ++v58;
        v113 = v47[v111 + 457];
        if ( v58 != v111 )
        {
          v114 = (int)v113;
          if ( v112 <= 0 )
            goto LABEL_154;
          goto LABEL_152;
        }
        v114 = (int)v113;
        if ( v112 > 0 )
        {
          v58 = 0;
LABEL_152:
          v115 = (int)&v47[v111 + 457];
          v116 = v111 - 1;
          do
          {
            v117 = *(_QWORD *)(v115 - 8);
            v115 -= 8;
            --v116;
            *(_QWORD *)(v115 + 8) = v117;
          }
          while ( v116 );
LABEL_154:
          v47[458] = (double)v114;
          if ( !v58 )
            goto LABEL_155;
          continue;
        }
        break;
      }
      v47[458] = (double)v114;
LABEL_155:
      v118 = *((_DWORD *)v47 + 936);
      v193 = v178 + 1;
      v119 = v118 - 1;
      v195 = v118 - 1;
      v179 = v189 + 1;
      *((_DWORD *)v47 + 937) = v189 + 1;
      if ( v189 + 1 == v118 )
        *((_DWORD *)v47 + 937) = 0;
      *((_DWORD *)v47 + 909) = 0;
      v120 = v47[v118 + 471];
      if ( v189 + 1 == v118 )
        v179 = 0;
      if ( v119 > 0 )
      {
        v121 = (int)&v47[v118 + 471];
        do
        {
          v122 = *(_QWORD *)(v121 - 8);
          v121 -= 8;
          --v119;
          *(_QWORD *)(v121 + 8) = v122;
        }
        while ( v119 );
      }
      v47[472] = (double)(int)v120;
      if ( v179 )
      {
        HIDWORD(v49) = *((_DWORD *)v47 + 965);
        v123 = (double *)*((_DWORD *)v47 + 993);
        goto LABEL_164;
      }
      v129 = (int *)(v47 + 482);
      v130 = *((_DWORD *)v47 + 964);
      HIDWORD(v49) = v190 + 1;
      *((_DWORD *)v47 + 965) = v190 + 1;
      if ( v190 + 1 == v130 )
      {
        LODWORD(v49) = v190;
        HIDWORD(v49) = &v129[2 * v190];
        *((_DWORD *)v47 + 965) = 0;
        v175 = *(double *)(HIDWORD(v49) + 32);
        if ( v190 > 0 )
          HIDWORD(v49) = 0;
        v131 = (int)v175;
        if ( v190 > 0 )
        {
LABEL_181:
          v123 = v47 + 482;
          v132 = (int)&v47[v130 + 485];
          do
          {
            v133 = *(_QWORD *)(v132 - 8);
            v132 -= 8;
            LODWORD(v49) = v49 - 1;
            *(_QWORD *)(v132 + 8) = v133;
          }
          while ( (_DWORD)v49 );
          v129 = (int *)(v47 + 482);
          goto LABEL_184;
        }
        v47[486] = (double)v131;
LABEL_187:
        v134 = v191;
        v135 = (double *)*((_DWORD *)v47 + 992);
        v123 = (double *)((char *)v191 + 1);
        *((_DWORD *)v47 + 993) = (char *)v191 + 1;
        if ( (double *)((char *)v191 + 1) == v135 )
        {
          v134 = 0;
          *((_DWORD *)v47 + 993) = 0;
        }
        if ( v123 == v135 )
          v123 = v134;
        v136 = (int)v135 - 1;
        v137 = (int)v47[(int)v135 + 499];
        if ( (int)v135 - 1 > 0 )
        {
          v138 = (int)&v47[(int)v135 + 499];
          do
          {
            v139 = *(_QWORD *)(v138 - 8);
            v138 -= 8;
            --v136;
            *(_QWORD *)(v138 + 8) = v139;
          }
          while ( v136 );
        }
        HIDWORD(v49) = 0;
        v47[500] = (double)v137;
      }
      else
      {
        v123 = (double *)&v129[2 * v130];
        LODWORD(v49) = v130 - 1;
        v131 = (int)v123[3];
        if ( v130 - 1 > 0 )
          goto LABEL_181;
LABEL_184:
        if ( HIDWORD(v49) )
          v123 = (double *)*((_DWORD *)v47 + 993);
        *((double *)v129 + 4) = (double)v131;
        if ( !HIDWORD(v49) )
          goto LABEL_187;
      }
LABEL_164:
      v124 = 366;
      if ( v194 )
        v124 = 365;
      if ( v193 != v124 )
      {
        v58 = 0;
        v125 = v179 + 10 * HIDWORD(v49);
        v61 = v188 + 10 * *((_DWORD *)v47 + 1049);
        HIDWORD(v49) = 0;
        v178 = v125 + 100 * (_DWORD)v123;
        goto LABEL_77;
      }
      v140 = v179;
      while ( 2 )
      {
        while ( 1 )
        {
          ++v140;
          v141 = v47[v118 + 471];
          if ( v118 != v140 )
            break;
          v142 = (int)v141;
          if ( v195 > 0 )
          {
            v140 = 0;
            goto LABEL_202;
          }
          v140 = 0;
          v47[472] = (double)v142;
        }
        v142 = (int)v141;
        if ( v195 <= 0 )
          goto LABEL_204;
LABEL_202:
        v143 = (int)&v47[v118 + 471];
        v144 = v118 - 1;
        do
        {
          v145 = *(_QWORD *)(v143 - 8);
          v143 -= 8;
          --v144;
          *(_QWORD *)(v143 + 8) = v145;
        }
        while ( v144 );
LABEL_204:
        v47[472] = (double)v142;
        if ( v140 != 1 )
          continue;
        break;
      }
      v178 = 1;
      v146 = *((_DWORD *)v47 + 964);
      *((_DWORD *)v47 + 937) = 1;
      v147 = v146 - 1;
      while ( 2 )
      {
        ++HIDWORD(v49);
        v148 = v47[v146 + 485];
        if ( HIDWORD(v49) != v146 )
        {
          v149 = (int)v148;
          if ( v147 > 0 )
          {
LABEL_208:
            v150 = (int)&v47[v146 + 485];
            v151 = v146 - 1;
            do
            {
              v152 = *(_QWORD *)(v150 - 8);
              v150 -= 8;
              --v151;
              *(_QWORD *)(v150 + 8) = v152;
            }
            while ( v151 );
          }
          v47[486] = (double)v149;
          if ( !HIDWORD(v49) )
            goto LABEL_211;
          continue;
        }
        break;
      }
      v149 = (int)v148;
      if ( v147 > 0 )
      {
        HIDWORD(v49) = 0;
        goto LABEL_208;
      }
      v47[486] = (double)v149;
LABEL_211:
      v153 = (double *)*((_DWORD *)v47 + 992);
      *((_DWORD *)v47 + 965) = 0;
      v154 = (int)v153 - 1;
      while ( 2 )
      {
        v123 = (double *)((char *)v123 + 1);
        v155 = v47[(int)v153 + 3 + 496];
        if ( v123 != v153 )
        {
          v156 = (int)v155;
          if ( v154 > 0 )
          {
LABEL_214:
            v157 = (int)&v47[(int)v153 + 499];
            v158 = (int)v153 - 1;
            do
            {
              v159 = *(_QWORD *)(v157 - 8);
              v157 -= 8;
              --v158;
              *(_QWORD *)(v157 + 8) = v159;
            }
            while ( v158 );
          }
          v47[500] = (double)v156;
          if ( !v123 )
            goto LABEL_217;
          continue;
        }
        break;
      }
      v156 = (int)v155;
      if ( v154 > 0 )
      {
        v123 = 0;
        goto LABEL_214;
      }
      v47[500] = (double)v156;
LABEL_217:
      v160 = *((_DWORD *)v47 + 1020);
      v161 = (int *)(v47 + 510);
      v162 = v188 + 1;
      *((_DWORD *)v47 + 993) = 0;
      *((_DWORD *)v47 + 1021) = v188 + 1;
      if ( v188 + 1 == v160 )
      {
        v61 = v188;
        *((_DWORD *)v47 + 1021) = 0;
        v162 = (int)&v161[2 * v188];
        v167 = *(double *)(v162 + 32);
        if ( v188 > 0 )
          v162 = 0;
        v163 = (int)v167;
        if ( v188 > 0 )
        {
LABEL_219:
          v164 = (int)&v47[v160 + 513];
          do
          {
            v165 = *(_QWORD *)(v164 - 8);
            v164 -= 8;
            --v61;
            *(_QWORD *)(v164 + 8) = v165;
          }
          while ( v61 );
          goto LABEL_221;
        }
        v47[514] = (double)v163;
      }
      else
      {
        v61 = v160 - 1;
        v163 = (int)*(double *)&v161[2 * v160 + 6];
        if ( v160 - 1 > 0 )
          goto LABEL_219;
LABEL_221:
        v47[514] = (double)v163;
        if ( v162 )
        {
          v58 = 0;
          HIDWORD(v49) = 0;
          v61 = v162 + 10 * *((_DWORD *)v47 + 1049);
          goto LABEL_77;
        }
      }
      v168 = *((_DWORD *)v47 + 1048);
      v169 = *((_DWORD *)v47 + 1049) + 1;
      *((_DWORD *)v47 + 1049) = v169;
      v170 = v169 == v168;
      if ( v169 == v168 )
        v169 = (int)(v47 + 512);
      else
        v61 = 10 * v169;
      if ( v170 )
      {
        v61 = 0;
        *(_DWORD *)(v169 + 100) = 0;
      }
      v171 = v168 - 1;
      v172 = (int)v47[v168 + 527];
      if ( v168 - 1 > 0 )
      {
        v173 = (int)&v47[v168 + 527];
        do
        {
          v174 = *(_QWORD *)(v173 - 8);
          v173 -= 8;
          --v171;
          *(_QWORD *)(v173 + 8) = v174;
        }
        while ( v171 );
      }
      v58 = 0;
      HIDWORD(v49) = 0;
      v47[528] = (double)v172;
LABEL_77:
      v62 = *((_DWORD *)v47 + 1077);
      *(_DWORD *)(v4 + 4304) = 0;
      v63 = *((_DWORD *)v47 + 1083);
      if ( (v184 & 2) != 0 )
      {
        if ( v62 <= 8 )
        {
LABEL_79:
          *((_DWORD *)v47 + 1083) = v63 | 4;
        }
        else if ( !v63 )
        {
          *((_DWORD *)v47 + 1082) = v184 | 8;
        }
      }
      else
      {
        v63 |= 8u;
        *((_DWORD *)v47 + 1083) = v63;
        if ( v62 <= 8 )
          goto LABEL_79;
      }
      if ( ((_DWORD)v47[541] & 0xA) == 0xA )
      {
        v92 = v61 + 2000;
        LODWORD(v49) = v178;
        if ( v181 )
        {
          v93 = v180;
          v94 = 1;
        }
        else
        {
          v94 = v180;
          v93 = 0;
        }
        if ( v181 )
          *(_BYTE *)(v93 + 40) = v94;
        else
          *(_BYTE *)(v94 + 40) = v93;
        HIDWORD(v49) += 10 * v58;
        v95 = *((_DWORD *)v47 + 1076);
        *(_DWORD *)(v180 + 188) = v92;
        *(_QWORD *)(v180 + 192) = v49;
        *(_DWORD *)(v180 + 204) = v95;
        *(_DWORD *)(v180 + 200) = v183;
        v196 = 0;
        v96 = *(_DWORD *)v47;
        v197 = 0;
        if ( sub_6300C(v178, HIDWORD(v49), v183, v95, 0, v96, v180 + 212, &v196) )
        {
          v127 = *(_DWORD *)v47;
          v128 = *((_DWORD *)v47 + 1);
          *((_DWORD *)v47 + 14) = 0;
          *(_QWORD *)(v180 + 248) = 0;
          *(_DWORD *)(v180 + 224) = v127;
          *(_DWORD *)(v180 + 228) = v128;
          sub_39754((_DWORD *)v180, v196, v197);
          sub_39A1C(v177);
          v183 = *((_DWORD *)v47 + 825) + 10 * *((_DWORD *)v47 + 853);
          v186 = *((_DWORD *)v47 + 1084);
          v178 = *((_DWORD *)v47 + 937) + 10 * *((_DWORD *)v47 + 965) + 100 * *((_DWORD *)v47 + 993);
          v61 = *((_DWORD *)v47 + 1021) + 10 * *((_DWORD *)v47 + 1049);
          HIDWORD(v49) = *((_DWORD *)v47 + 881);
          v58 = *((_DWORD *)v47 + 909);
          v181 = v186 & 0x40;
        }
        else
        {
          v97 = *((_DWORD *)v47 + 993);
          v98 = *((_DWORD *)v47 + 937) + 10 * *((_DWORD *)v47 + 965);
          v99 = *((_DWORD *)v47 + 853);
          v100 = *((_DWORD *)v47 + 825);
          v101 = *((_DWORD *)v47 + 1049);
          *((_DWORD *)v47 + 13) = 6;
          v183 = v100 + 10 * v99;
          v178 = v98 + 100 * v97;
          v61 = *((_DWORD *)v47 + 1021) + 10 * v101;
          v186 = *((_DWORD *)v47 + 1084);
          v181 = v186 & 0x40;
          HIDWORD(v49) = *((_DWORD *)v47 + 881);
          v58 = *((_DWORD *)v47 + 909);
        }
      }
      v185 = v61 + 2000;
      v64 = v186;
      if ( ((_DWORD)v47[541] & 8) != 0 )
        v65 = 32;
      else
        v65 = 63;
      v66 = v186 & 7;
      if ( v181 )
        v67 = 76;
      else
        v67 = 32;
      LODWORD(v49) = (unsigned __int8)dstcod[(v186 >> 4) & 3];
      v187 = v67;
      v68 = HIDWORD(v49) + 10 * v58;
      v182 = v49;
      if ( (v64 & 8) == 0 )
        v66 = -v66;
      sub_6BCB0(v180 + 56, 128, "%c%1X", v65, *((_DWORD *)v47 + 1083));
      sub_6BCB0(v198, 50, " %4d %03d %02d:%02d:%02d %c%c %+d", v185, v178, v68, v183, 0, v187, v182, v66);
      sub_6D1DC(v180 + 56, v198);
      sub_6BCB0(
        v198,
        50,
        " %d %d %s %.0f %d %.1f %d",
        *((_DWORD *)v47 + 14),
        LODWORD(v47[27 * *((_DWORD *)v47 + 821) + 275]),
        (const char *)(*((_DWORD *)v47 + 820) + 92),
        *(double *)(*((_DWORD *)v47 + 820) + 72),
        *((_DWORD *)v47 + 1085),
        v47[3] / 8000.0 * 1000000.0,
        *((_DWORD *)v47 + 532));
      sub_6D1DC(v180 + 56, v198);
      *(_DWORD *)(v180 + 184) = strlen((const char *)(v180 + 56));
      LODWORD(a1) = sub_41CA4(v177 + 16, (const char *)(v180 + 56));
      if ( ((_BYTE)v2[96] & 8) != 0 )
        goto LABEL_32;
LABEL_33:
      v2[31] = v2[31] + 0.000005;
      return LODWORD(a1);
    case 0xD:
      v69 = v4 + 216 * *(_DWORD *)(v4 + 3292);
      *(_QWORD *)(v69 + 2264) = *(_QWORD *)(v69 + 2256);
      a1 = *(double *)(v69 + 2360);
      *(double *)(v69 + 2368) = a1;
      goto LABEL_31;
    case 0xE:
      v10 = *(_DWORD *)(v4 + 3292);
      v11 = v4 + 216 * v10;
      v12 = *(double *)(v11 + 2264);
      if ( v12 <= 0.0 )
      {
        v14 = 0.0;
      }
      else
      {
        v13 = *(double *)(v11 + 2248);
        if ( v13 <= 0.0 || (HIDWORD(a1) = v5 + 1, a1 = log10(a1), v14 = v12 / v13 * 20.0, v14 > 40.0) )
          v14 = 40.0;
      }
      v15 = v4 + 216 * v10;
      *(double *)(v15 + 2272) = v14;
      v16 = 2 * *(_DWORD *)(v15 + 2288);
      *(_DWORD *)(v15 + 2288) = v16;
      if ( (v16 & 0x40) != 0 )
        --*(_DWORD *)(v15 + 2292);
      v17 = v4 + 216 * v10;
      v18 = *(double *)(v17 + 2264);
      if ( v18 < 2500.0 || *(double *)(v17 + 2272) < 20.0 || (*(_DWORD *)(v4 + 4328) & 0x60) != 0 )
      {
        v20 = *(_DWORD *)(v17 + 2292);
      }
      else
      {
        v19 = *(_DWORD *)(v17 + 2292);
        LODWORD(a1) = *(_DWORD *)(v17 + 2288) | 1;
        *(_DWORD *)(v17 + 2288) = LODWORD(a1);
        v20 = v19 + 1;
        *(_DWORD *)(v17 + 2292) = v20;
        v18 = *(double *)(v17 + 2264);
      }
      v21 = v20;
      v22 = v4 + 216 * v10;
      HIDWORD(a1) = v22 + 2368;
      if ( v18 >= 6000.0 )
        v18 = 5999.0;
      *(double *)(v22 + 2280) = ((double)v21 * 6000.0 + v18) / 42000.0 * 100.0;
      if ( *(double *)HIDWORD(a1) <= 0.0 )
      {
        v24 = 0.0;
      }
      else
      {
        v23 = (double *)(v22 + 2352);
        if ( *v23 <= 0.0 || (v126 = *(double *)HIDWORD(a1) / *v23, log10(a1), v24 = v126 * 20.0, v24 > 40.0) )
          v24 = 40.0;
      }
      v25 = v4 + 216 * v10;
      v26 = v25;
      *(double *)(v25 + 2376) = v24;
      v27 = (double *)(v25 + 2368);
      v28 = 2 * *(_DWORD *)(v25 + 2392);
      *(_DWORD *)(v25 + 2392) = v28;
      if ( (v28 & 0x40) != 0 )
        --*(_DWORD *)(v25 + 2396);
      v29 = *v27;
      v30 = *(_DWORD *)(v4 + 4328);
      if ( *v27 < 2500.0 || *(double *)(v26 + 2376) < 20.0 || (v30 & 0x60) != 0 )
      {
        v32 = *(_DWORD *)(v26 + 2396);
      }
      else
      {
        v31 = *(_DWORD *)(v26 + 2396);
        *(_DWORD *)(v26 + 2392) |= 1u;
        v32 = v31 + 1;
        *(_DWORD *)(v26 + 2396) = v32;
        v29 = *v27;
      }
      v33 = 216 * v10;
      if ( v29 >= 6000.0 )
        v29 = 5999.0;
      v35 = ((double)v32 * 6000.0 + v29) / 42000.0 * 100.0;
      *(double *)(v4 + v33 + 2384) = v35;
      if ( ((_BYTE)v2[96] & 8) != 0 )
      {
        v34 = v4 + v33;
        sub_6BCB0(
          v198,
          128,
          "wwv5 %04x %3d %4d %.0f/%.1f %.0f/%.1f %s %04x %.0f %.0f/%.1f %s %04x %.0f %.0f/%.1f",
          v30,
          *(_DWORD *)(v4 + 2116),
          *(_DWORD *)(v4 + 2132),
          *(double *)(v4 + 2144),
          *(double *)(v4 + 2152),
          *(double *)(v4 + 4312),
          *(double *)(v4 + 4320),
          (const char *)(v4 + v33 + 2300),
          (unsigned __int16)*(_DWORD *)(v34 + 2288),
          *(double *)(v34 + 2280),
          *(double *)(v34 + 2264),
          *(double *)(v34 + 2272),
          (const char *)(v4 + v33 + 2404),
          (unsigned __int16)*(_DWORD *)(v34 + 2392),
          v35,
          *(double *)(v34 + 2368),
          *(double *)(v34 + 2376));
        sub_41CA4(v177 + 16, v198);
        v30 = *(_DWORD *)(v4 + 4328);
      }
      *(_DWORD *)(v4 + 4332) = 0;
      *(_DWORD *)(v4 + 4308) = 0;
      *(_DWORD *)(v4 + 4340) = 0;
      v36 = *(_DWORD *)(v4 + 56);
      if ( (v30 & 8) != 0 )
      {
        if ( v36 <= 2880 )
        {
LABEL_30:
          LODWORD(a1) = sub_554A4(v177);
LABEL_31:
          if ( ((_BYTE)v2[96] & 8) == 0 )
            goto LABEL_33;
LABEL_32:
          v37 = *(_DWORD *)(v4 + 4328);
          if ( (v37 & 4) == 0 )
          {
LABEL_36:
            sub_6BCB0(
              v198,
              128,
              "wwv3 %2d %04x %3d %4d %5.0f %5.1f %5.0f %5.1f %5.0f",
              v5,
              v37,
              *(_DWORD *)(v4 + 2116),
              *(_DWORD *)(v4 + 2132),
              *(double *)(v4 + 2144),
              *(double *)(v4 + 2152),
              *(double *)(v4 + 4312),
              *(double *)(v4 + 4320),
              v3);
            LODWORD(a1) = sub_41CA4(v177 + 16, v198);
          }
          goto LABEL_33;
        }
      }
      else if ( (v30 & 4) != 0 )
      {
        if ( v36 <= 40 )
          goto LABEL_30;
      }
      else if ( v36 <= 15 )
      {
        goto LABEL_30;
      }
      LODWORD(a1) = sub_5564C(v177);
      return LODWORD(a1);
    default:
      goto LABEL_31;
  }
}
