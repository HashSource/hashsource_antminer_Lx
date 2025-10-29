unsigned __int8 *__fastcall sub_4C21C(_DWORD *a1)
{
  char *v1; // r4
  unsigned __int8 *v2; // r9
  void *v3; // r11
  unsigned __int8 *result; // r0
  int v5; // r2
  bool v6; // cc
  int v7; // r3
  int v8; // r2
  unsigned __int8 *v9; // r5
  unsigned __int8 *v10; // r1
  char *v11; // r12
  unsigned __int8 v12; // t1
  int v13; // r1
  int v14; // r5
  int v15; // lr
  int v16; // r10
  int v17; // r8
  unsigned __int8 *v18; // r11
  unsigned __int8 *v19; // r1
  unsigned int v20; // r3
  int v21; // r7
  int *v22; // r6
  int v23; // r5
  int v24; // r3
  int (**v25)(); // r2
  const char *v26; // r8
  int (*v27)(); // r3
  int v28; // r6
  _DWORD *v29; // r5
  int v30; // r2
  unsigned int v31; // r3
  bool v32; // cc
  bool v33; // zf
  const char *v34; // r7
  int v35; // r6
  const char *v36; // r7
  const char *v37; // r10
  const char *v38; // r9
  const char *v39; // r1
  size_t v40; // r2
  const char *v41; // r5
  const char *v42; // t1
  const unsigned __int16 **v43; // r0
  unsigned __int8 *v44; // r12
  unsigned __int8 *v45; // r3
  const unsigned __int16 *v46; // r0
  unsigned __int8 v47; // r2
  int v48; // t1
  int v49; // r1
  int v50; // r3
  _BOOL4 v51; // r1
  unsigned __int8 *v52; // r9
  _BOOL4 v53; // r8
  int v54; // r6
  _DWORD *v55; // r5
  int v56; // r3
  int v57; // r3
  int v58; // r8
  _DWORD *v59; // r5
  int v60; // r3
  const char *v61; // r6
  int v62; // r7
  int v63; // r9
  int (**v64)(); // r3
  int v65; // r3
  _DWORD *v66; // r5
  int v67; // r3
  int v68; // r3
  __int16 v69; // r12
  int v70; // r1
  _DWORD *v71; // r5
  int v72; // r3
  bool v73; // zf
  const char *v74; // r3
  int v75; // r1
  int v76; // r2
  int v77; // r0
  int v78; // r7
  int v79; // r8
  int v80; // r1
  int v81; // r12
  int v82; // r3
  int v83; // r2
  int v84; // r12
  _DWORD *v85; // r5
  int v86; // r3
  int v87; // r7
  int v88; // r3
  int v89; // r0
  int v90; // r12
  int v91; // lr
  int v92; // r2
  int v93; // r1
  int v94; // r7
  int v95; // r8
  int v96; // r3
  int v97; // r0
  int v98; // r3
  int v99; // r1
  int v100; // r12
  int v101; // r2
  int v102; // r8
  int v103; // r9
  int v104; // r0
  __int16 *v105; // r9
  const char *v106; // r8
  unsigned int v107; // r7
  int v108; // r3
  int v109; // r1
  int v110; // r0
  __int16 v111; // r2
  int v112; // r3
  int v113; // r0
  int v114; // r2
  int v115; // r1
  int v116; // r3
  int v117; // lr
  __int16 v118; // r5
  int (**v119)(); // r3
  size_t v120; // r5
  int v121; // r2
  int v122; // r3
  int v123; // r3
  int v124; // r0
  int v125; // r1
  int v126; // r2
  int v127; // r12
  int v128; // r3
  unsigned __int8 *v129; // r3
  int v130; // r2
  int v131; // t1
  int v132; // r3
  int v133; // r1
  int v134; // r2
  int v135; // r12
  unsigned __int8 *v136; // r3
  char v137; // t1
  int v138; // r0
  int v139; // r7
  int v140; // r1
  int v141; // r8
  int v142; // r0
  int v143; // r12
  int v144; // r3
  int tm_year; // r2
  int v146; // r0
  int v147; // r2
  int v148; // r1
  int v149; // r5
  int v150; // r12
  int v151; // r3
  unsigned __int8 *v152; // r3
  char v153; // t1
  __int64 v154; // r2
  int v155; // r1
  bool v156; // zf
  char v157; // r3
  int v158; // r3
  struct tm *v159; // r0
  int v160; // r3
  int v161; // r3
  int v162; // r0
  int v163; // r1
  int v164; // r2
  int v165; // r12
  int v166; // r3
  int v167; // lr
  unsigned __int8 *v168; // r3
  unsigned __int8 *v169; // r2
  unsigned __int8 v170; // t1
  int v171; // r6
  int v172; // r0
  int v173; // r2
  int v174; // r1
  int v175; // r3
  int v176; // r12
  int v177; // r2
  int (**v178)(); // r3
  char *v179; // r6
  int v180; // r2
  int v181; // r3
  int v182; // r7
  int v183; // r1
  int v184; // r2
  int v185; // r3
  char *v186; // [sp+24h] [bp-150h]
  int v187; // [sp+28h] [bp-14Ch]
  int v189; // [sp+30h] [bp-144h]
  char *v190; // [sp+3Ch] [bp-138h]
  int v191; // [sp+3Ch] [bp-138h]
  int v192; // [sp+40h] [bp-134h]
  int v193; // [sp+54h] [bp-120h] BYREF
  time_t timer; // [sp+58h] [bp-11Ch] BYREF
  _DWORD v195[2]; // [sp+5Ch] [bp-118h] BYREF
  char v196; // [sp+64h] [bp-110h] BYREF
  unsigned __int8 v197; // [sp+65h] [bp-10Fh]
  char v198; // [sp+66h] [bp-10Eh]
  char v199[60]; // [sp+68h] [bp-10Ch] BYREF
  char v200[100]; // [sp+A4h] [bp-D0h] BYREF
  char v201[108]; // [sp+108h] [bp-6Ch] BYREF

  v1 = (char *)v195;
  v187 = a1[1];
  v186 = *(char **)(v187 + 84);
  v3 = v186 + 56;
  v2 = *(unsigned __int8 **)v186;
  if ( *(_WORD *)(*(_DWORD *)v186 + 8) == 32 )
  {
    result = (unsigned __int8 *)sub_39C64(a1, v3, 127, v195);
    *((_DWORD *)v186 + 46) = result;
    v7 = *((_DWORD *)v2 + 46);
    if ( (int)result > 0 && v7 <= 97 )
    {
      v8 = v7 + 1;
      v9 = &result[v7];
      v10 = &v2[v7 + 84];
      v11 = v186 + 55;
      do
      {
        v12 = *++v11;
        v7 = v8;
        *v10++ = v12;
        if ( v9 == (unsigned __int8 *)v8 )
          break;
        ++v8;
      }
      while ( v8 != 99 );
      *((_DWORD *)v2 + 46) = v7;
    }
    v2[v7 + 84] = 0;
  }
  else
  {
    result = sub_39BB4((int)a1, (bool *)v3, 128, v195);
    *((_DWORD *)v186 + 46) = result;
  }
  if ( !result )
    return result;
  v5 = *((__int16 *)v2 + 6);
  v6 = v5 != 0;
  if ( *((_WORD *)v2 + 6) )
    v6 = (unsigned __int16)(v5 - 3) > 1u;
  if ( !v6 )
  {
    *((_DWORD *)v2 + 46) = 0;
    return result;
  }
  result = (unsigned __int8 *)v195[0];
  v13 = v195[1];
  v14 = *((_DWORD *)v2 + 46);
  v15 = *((__int16 *)v2 + 4);
  *((_DWORD *)v186 + 58) = v195[0];
  *((_DWORD *)v186 + 59) = v13;
  v16 = v14 - 1;
  v192 = -84 - (_DWORD)v2;
  v17 = v15;
  v189 = 0;
  v18 = v2;
  ++*((_DWORD *)v2 + 5);
  *((_WORD *)v2 + 6) = 2;
  v2[14] = 1;
  while ( 1 )
  {
    if ( v17 != 32 )
    {
      v19 = (unsigned __int8 *)(v186 + 56);
      v1 = (char *)*((_DWORD *)v186 + 46);
      goto LABEL_19;
    }
    v35 = *((_DWORD *)v18 + 46);
    if ( v18[192] )
    {
      if ( v189 >= v35 )
        goto LABEL_69;
      v36 = (const char *)&v18[v189 + 84];
      v37 = (const char *)**((_DWORD **)v18 + 47);
      v190 = (char *)*((_DWORD *)v18 + 47);
      while ( 1 )
      {
        if ( v37 )
          v1 = v190;
        v38 = &v36[v192];
        if ( v37 )
          break;
LABEL_68:
        if ( ++v36 == (const char *)&v18[v35 + 84] )
          goto LABEL_69;
      }
      v39 = v37;
      while ( 1 )
      {
        v40 = *((_DWORD *)v1 + 1);
        v41 = &v38[v40];
        if ( (int)&v38[v40] <= v35 )
        {
          result = (unsigned __int8 *)strncmp(v36, v39, v40);
          if ( !result )
            break;
        }
        v42 = (const char *)*((_DWORD *)v1 + 2);
        v1 += 8;
        v39 = v42;
        if ( !v42 )
          goto LABEL_68;
      }
      v16 = (int)(v41 - 1);
      if ( !v41 )
      {
LABEL_69:
        if ( v35 <= 97 )
          goto LABEL_85;
        if ( v189 > 0 )
        {
          v52 = v18;
          goto LABEL_310;
        }
        v16 = v35 - 1;
        *((_DWORD *)v18 + 100) = 0;
        *((_DWORD *)v18 + 74) = 0;
LABEL_72:
        v43 = _ctype_b_loc();
        v44 = v18 + 192;
        v45 = &v18[v189 + 84];
        v46 = *v43;
        do
        {
          v48 = *v45++;
          v47 = v48;
          *++v44 = v48;
          if ( (v46[v48] & 2) == 0 )
          {
            v49 = *((_DWORD *)v18 + 100);
            v18[v49 + 300] = v47;
            *((_DWORD *)v18 + 100) = v49 + 1;
          }
        }
        while ( &v18[v16 + 85] != v45 );
        v50 = *((_DWORD *)v18 + 100);
        v1 = (char *)(v16 - v189 + 1);
        v51 = v50 == 0;
        *((_DWORD *)v18 + 74) = v1;
        goto LABEL_80;
      }
    }
    else
    {
      v16 = v35 - 1;
    }
    v50 = 0;
    *((_DWORD *)v18 + 100) = 0;
    *((_DWORD *)v18 + 74) = 0;
    if ( v16 >= v189 )
      goto LABEL_72;
    v51 = 1;
    v1 = 0;
LABEL_80:
    result = 0;
    v1[(_DWORD)v18 + 193] = 0;
    v18[v50 + 300] = 0;
    if ( !v18[404] )
      v51 = 0;
    if ( v51 )
    {
      if ( v16 + 1 >= v35 )
        goto LABEL_85;
      v189 = v16 + 1;
      goto LABEL_101;
    }
    v19 = v18 + 193;
LABEL_19:
    if ( (unsigned int)v1 >= 0x63 )
      v1 = (_BYTE *)(&dword_60 + 3);
    _memcpy_chk(v200, v19);
    v1 = &v201[(_DWORD)v1 + 104];
    *(v1 - 204) = 0;
    result = (unsigned __int8 *)sub_49E3C(v187, 3, v200);
    v20 = *v18;
    if ( v20 == 4 )
    {
      v54 = a1[1];
      v55 = *(_DWORD **)(v54 + 84);
      v1 = (char *)*v55;
      v56 = *(__int16 *)(*v55 + 8);
      if ( v56 == 32 )
        result = (unsigned __int8 *)(v1 + 300);
      else
        result = (unsigned __int8 *)(v55 + 14);
      if ( v56 == 32 )
        v57 = *((_DWORD *)v1 + 100);
      else
        v57 = v55[46];
      if ( *(_WORD *)(*v55 + 12) != 2 )
        goto LABEL_98;
      if ( v57 == 23 )
      {
        v97 = sscanf(
                (const char *)result,
                "%c%2s %2d/%2d/%2d %1d %2d:%2d:%2d",
                &v193,
                &v196,
                v1 + 24,
                v1 + 28,
                v1 + 32,
                &timer,
                v1 + 36,
                v1 + 40,
                v1 + 44);
        v198 = 0;
        v98 = v97;
        if ( v97 != 9 )
        {
          v99 = *((_DWORD *)v1 + 7);
          v100 = *((_DWORD *)v1 + 8);
          v101 = *((_DWORD *)v1 + 9);
          v102 = *((_DWORD *)v1 + 10);
          v103 = *((_DWORD *)v1 + 11);
          goto LABEL_319;
        }
        v99 = *((_DWORD *)v1 + 7);
        v100 = *((_DWORD *)v1 + 8);
        v101 = *((_DWORD *)v1 + 9);
        v102 = *((_DWORD *)v1 + 10);
        v103 = *((_DWORD *)v1 + 11);
        if ( (unsigned __int8)v193 != 39 )
          goto LABEL_319;
        if ( v196 == 79 )
        {
          v104 = v197;
          if ( v197 == 75 )
            goto LABEL_185;
LABEL_319:
          sub_6BCB0(
            v201,
            99,
            "# Invalid time : rc=%d year=%d month=%d day=%d hour=%d minute=%d second=%d",
            v98,
            *((_DWORD *)v1 + 6),
            v99,
            v100,
            v101,
            v102,
            v103);
LABEL_175:
          result = (unsigned __int8 *)sub_49E3C(v54, 7, v201);
          v1[15] = 1;
          goto LABEL_176;
        }
        if ( v196 == 78 )
        {
          v104 = v197;
          if ( v197 == 71 )
            goto LABEL_185;
          goto LABEL_319;
        }
        if ( v196 != 69 )
          goto LABEL_319;
        v104 = v197;
        if ( v197 != 82 )
          goto LABEL_319;
LABEL_185:
        if ( (unsigned int)(v99 - 1) > 0xB
          || (unsigned int)(v100 - 1) > 0x1E
          || timer > 6
          || v101 > 23
          || v102 > 59
          || v103 > 60 )
        {
          goto LABEL_319;
        }
        if ( v196 == 78 )
        {
          if ( v104 == 71 )
          {
LABEL_193:
            sub_6BCB0(v199, 15, "status=%s", &v196);
            v1 = v201;
            sub_6BCB0(v201, 99, "* Unsure timestamp : %s", v199);
            result = (unsigned __int8 *)sub_49E3C(v54, 6, v201);
            goto LABEL_98;
          }
        }
        else if ( v196 == 69 && v104 == 82 )
        {
          goto LABEL_193;
        }
        v185 = *((_DWORD *)v1 + 6);
        *((_DWORD *)v1 + 12) = 0;
        *((_DWORD *)v1 + 6) = v185 + 2000;
        result = (unsigned __int8 *)sub_4A86C(v54, v55, v1);
        goto LABEL_98;
      }
LABEL_174:
      sub_6BCB0(v201, 99, "# Invalid length : length=%d");
      goto LABEL_175;
    }
    if ( v20 <= 4 )
      break;
    if ( v20 == 6 )
    {
      v54 = a1[1];
      v66 = *(_DWORD **)(v54 + 84);
      v1 = (char *)*v66;
      v67 = *(__int16 *)(*v66 + 8);
      if ( v67 == 32 )
        result = (unsigned __int8 *)(v1 + 300);
      else
        result = (unsigned __int8 *)(v66 + 14);
      if ( v67 == 32 )
        v68 = *((_DWORD *)v1 + 100);
      else
        v68 = v66[46];
      if ( *(_WORD *)(*v66 + 12) == 2 )
      {
        v69 = *((_WORD *)v1 + 9);
        v70 = (__int16)(v69 + 1);
        *((_WORD *)v1 + 9) = v70;
        switch ( v68 )
        {
          case 1:
            if ( *result != 229 )
            {
              sub_6BCB0(v201, 99, "# Invalid reply : [%s]");
              goto LABEL_175;
            }
            if ( v70 == 1 )
            {
              *((_WORD *)v1 + 9) = v69;
              goto LABEL_99;
            }
            if ( v70 <= 2 )
            {
              tm_year = *((_DWORD *)v1 + 6);
              goto LABEL_297;
            }
            goto LABEL_213;
          case 8:
            v152 = result - 1;
            do
            {
              v153 = *++v152;
              *v152 = v153 & 0x7F;
            }
            while ( result + 7 != v152 );
            result = (unsigned __int8 *)sscanf((const char *)result + 1, "%2d:%2d:%2d", v1 + 36, v1 + 40, v1 + 44);
            v154 = *(_QWORD *)(v1 + 36);
            if ( result != (_BYTE *)&dword_0 + 3 )
            {
              v155 = *((_DWORD *)v1 + 11);
LABEL_355:
              sub_6BCB0(
                v201,
                99,
                "# Invalid time : rc=%d hour=%d minute=%d second=%d",
                result,
                (_DWORD)v154,
                HIDWORD(v154),
                v155);
              goto LABEL_175;
            }
            v155 = *((_DWORD *)v1 + 11);
            if ( (int)v154 > 23 || SHIDWORD(v154) > 59 || v155 > 60 )
              goto LABEL_355;
            v156 = (_DWORD)v154 == 23;
            if ( (_DWORD)v154 == 23 )
              v156 = HIDWORD(v154) == 59;
            v157 = v156;
            if ( v155 > 54 )
              v158 = v157 & 1;
            else
              v158 = 0;
            if ( !v158 )
            {
              time(&timer);
              v159 = localtime(&timer);
              tm_year = v159->tm_year;
              v160 = v159->tm_mon + 1;
              *((_DWORD *)v1 + 8) = v159->tm_mday;
              *((_DWORD *)v1 + 7) = v160;
              goto LABEL_297;
            }
            goto LABEL_99;
          case 13:
            v146 = sscanf(
                     (const char *)result,
                     "%2d%2d%2d%1d%2d%2d%2d",
                     v1 + 24,
                     v1 + 28,
                     v1 + 32,
                     &v193,
                     v1 + 36,
                     v1 + 40,
                     v1 + 44);
            v147 = *((_DWORD *)v1 + 7);
            v148 = *((_DWORD *)v1 + 8);
            v149 = v146;
            if ( v146 != 7 )
            {
              result = (unsigned __int8 *)*((_DWORD *)v1 + 9);
              v151 = *((_DWORD *)v1 + 10);
              v150 = *((_DWORD *)v1 + 11);
LABEL_274:
              sub_6BCB0(
                v201,
                99,
                "# Invalid time : rc=%d year=%d month=%d day=%d hour=%d minute=%d second=%d",
                v149,
                *((_DWORD *)v1 + 6),
                v147,
                v148,
                result,
                v151,
                v150);
              goto LABEL_175;
            }
            result = (unsigned __int8 *)*((_DWORD *)v1 + 9);
            v150 = *((_DWORD *)v1 + 11);
            v151 = *((_DWORD *)v1 + 10);
            if ( (unsigned int)(v147 - 1) > 0xB
              || (unsigned int)(v148 - 1) > 0x1E
              || v193 > 6
              || (int)result > 23
              || v151 > 59
              || v150 > 60 )
            {
              goto LABEL_274;
            }
            goto LABEL_99;
          case 17:
            v136 = result - 1;
            do
            {
              v137 = *++v136;
              *v136 = v137 & 0x7F;
            }
            while ( result + 16 != v136 );
            v138 = sscanf(
                     (const char *)result + 1,
                     "%2d%2d%2d%2d%2d%2d%1d",
                     v1 + 24,
                     v1 + 28,
                     v1 + 32,
                     v1 + 36,
                     v1 + 40,
                     v1 + 44,
                     &v193);
            v139 = *((_DWORD *)v1 + 7);
            v140 = *((_DWORD *)v1 + 8);
            v141 = v138;
            if ( v138 != 7 )
            {
              tm_year = *((_DWORD *)v1 + 6);
              v142 = *((_DWORD *)v1 + 9);
              v144 = *((_DWORD *)v1 + 10);
              v143 = *((_DWORD *)v1 + 11);
LABEL_266:
              sub_6BCB0(
                v201,
                99,
                "# Invalid time : rc=%d year=%d month=%d day=%d hour=%d minute=%d second=%d",
                v141,
                tm_year,
                v139,
                v140,
                v142,
                v144,
                v143);
              goto LABEL_175;
            }
            v142 = *((_DWORD *)v1 + 9);
            v143 = *((_DWORD *)v1 + 11);
            v144 = *((_DWORD *)v1 + 10);
            tm_year = *((_DWORD *)v1 + 6);
            if ( (unsigned int)(v139 - 1) > 0xB
              || (unsigned int)(v140 - 1) > 0x1E
              || v193 > 6
              || v142 > 23
              || v144 > 59
              || v143 > 60 )
            {
              goto LABEL_266;
            }
LABEL_297:
            *((_DWORD *)v1 + 6) = tm_year + 2000;
            *((_DWORD *)v1 + 12) = 0;
            result = (unsigned __int8 *)sub_4A86C(v54, v66, v1);
            break;
          default:
            goto LABEL_174;
        }
      }
      goto LABEL_98;
    }
    if ( v20 < 6 )
    {
      v58 = a1[1];
      v59 = *(_DWORD **)(v58 + 84);
      v1 = (char *)*v59;
      v60 = *(__int16 *)(*v59 + 8);
      if ( v60 == 32 )
        v61 = v1 + 300;
      else
        v61 = (const char *)(v59 + 14);
      if ( v60 == 32 )
        v62 = *((_DWORD *)v1 + 100);
      else
        v62 = v59[46];
      if ( v62 <= 5 )
      {
        if ( v62 == 5 )
        {
          result = (unsigned __int8 *)strncmp(v61, "$Cmd>", 5u);
          if ( !result )
            goto LABEL_99;
        }
      }
      else
      {
        result = (unsigned __int8 *)strncmp(v61, "$GP", 3u);
        if ( !result )
          goto LABEL_99;
        result = (unsigned __int8 *)strncmp(v61, "$PFEC", 5u);
        if ( !result )
          goto LABEL_99;
        if ( strncmp(v61, "$Cmd>", 5u) )
          goto LABEL_115;
        v62 -= 5;
        v61 += 5;
        if ( v62 > 5 )
        {
          result = (unsigned __int8 *)strncmp(v61, "$GP", 3u);
          if ( result )
          {
LABEL_115:
            result = (unsigned __int8 *)strncmp(v61, "$PFEC", 5u);
            if ( result )
              goto LABEL_116;
          }
LABEL_99:
          v17 = *((__int16 *)v18 + 4);
          if ( v17 != 32 )
            goto LABEL_100;
          goto LABEL_55;
        }
      }
LABEL_116:
      v63 = *((__int16 *)v1 + 8);
      v64 = &off_B36E4[4 * v63];
      if ( v64[241] )
      {
        if ( v64[243] == (int (*)())v62 )
        {
          v65 = *((unsigned __int8 *)v64 + 960);
          switch ( v65 )
          {
            case 2:
              v161 = *((_DWORD *)v1 + 14);
              if ( v161 > 1 )
              {
                sub_6BCB0(v201, 99, "# Too many reply : count=%d", v161);
              }
              else
              {
                v162 = sscanf(v61, "%2d:%2d:%2d", v1 + 36, v1 + 40, v1 + 44);
                v163 = *((_DWORD *)v1 + 9);
                v164 = *((_DWORD *)v1 + 10);
                if ( v162 == 3 )
                {
                  v165 = *((_DWORD *)v1 + 11);
                  if ( v163 <= 23 && v164 <= 59 && v165 <= 60 )
                  {
                    result = (unsigned __int8 *)&off_3C;
                    v166 = *((_DWORD *)v1 + 14);
                    v167 = v166 + 1;
                    *(_DWORD *)&v1[4 * v166 + 60] = v165 + 60 * (v164 + 60 * v163);
                    *((_DWORD *)v1 + 14) = v166 + 1;
                    *((_DWORD *)v1 + 12) = 0;
                    goto LABEL_305;
                  }
                }
                else
                {
                  v165 = *((_DWORD *)v1 + 11);
                }
                sub_6BCB0(
                  v201,
                  99,
                  "# Invalid time : rc=%d hour=%d minute=%d second=%d",
                  v162,
                  *((_DWORD *)v1 + 9),
                  v164,
                  v165);
              }
              break;
            case 4:
              result = (unsigned __int8 *)strncmp(v61, "*R", 2u);
              if ( !result
                || (result = (unsigned __int8 *)strncmp(v61, "*G", 2u)) == 0
                || (result = (unsigned __int8 *)strncmp(v61, "*U", 2u)) == 0
                || (result = (unsigned __int8 *)strncmp(v61, "+U", 2u)) == 0 )
              {
                if ( *((_DWORD *)v1 + 14) != 2 )
                  goto LABEL_348;
                goto LABEL_366;
              }
LABEL_121:
              sub_6BCB0(v201, 99, "# Invalid reply : [%s]", v61);
              break;
            case 1:
              v172 = sscanf(v61, "%4d/%2d/%2d", v1 + 24, v1 + 28, v1 + 32);
              v173 = *((_DWORD *)v1 + 6);
              v174 = *((_DWORD *)v1 + 7);
              v175 = v172;
              if ( v172 != 3 )
              {
                v176 = *((_DWORD *)v1 + 8);
                goto LABEL_342;
              }
              v176 = *((_DWORD *)v1 + 8);
              if ( (unsigned int)(v173 - 2000) <= 0x62 && (unsigned int)(v174 - 1) <= 0xB )
              {
                result = (unsigned __int8 *)(v176 - 1);
                if ( (unsigned int)(v176 - 1) <= 0x1E )
                {
                  v167 = *((_DWORD *)v1 + 14);
LABEL_305:
                  if ( v167 != 2 )
                  {
                    v63 = *((__int16 *)v1 + 8);
                    if ( !off_B36E4[4 * v63 + 241] )
                    {
LABEL_307:
                      result = (unsigned __int8 *)sub_4A86C(v58, v59, v1);
                      goto LABEL_98;
                    }
LABEL_348:
                    v177 = (__int16)(v63 + 1);
                    *((_WORD *)v1 + 8) = v177;
                    v178 = &off_B36E4[4 * v177];
                    v179 = (char *)v178[241];
                    if ( !v179 )
                    {
                      *((_WORD *)v1 + 6) = 3;
                      goto LABEL_98;
                    }
                    v1 = (char *)v178[242];
                    if ( v1 != (char *)write(v59[7], v178[241], (size_t)v1) )
                      sub_3918C((__int16 *)v58, 3);
                    result = (unsigned __int8 *)sub_49E3C(v58, 2, v179);
                    goto LABEL_99;
                  }
LABEL_366:
                  v180 = *((_DWORD *)v1 + 16);
                  v181 = *((_DWORD *)v1 + 15);
                  if ( v180 - 2 <= v181 )
                  {
                    if ( v180 >= v181 )
                      goto LABEL_307;
                  }
                  else if ( v180 >= v181 )
                  {
                    sub_6BCB0(v201, 99, "# Slow reply : timestamp=%d, %d", v181, v180);
                    break;
                  }
                  v1 = v201;
                  sub_6BCB0(v201, 99, "* Over midnight : timestamp=%d, %d", v181, v180);
                  result = (unsigned __int8 *)sub_49E3C(v58, 4, v201);
                  goto LABEL_98;
                }
              }
LABEL_342:
              sub_6BCB0(v201, 99, "# Invalid date : rc=%d year=%d month=%d day=%d", v175, v173, v174, v176);
              break;
            default:
              goto LABEL_121;
          }
        }
        else
        {
          sub_6BCB0(v201, 99, "# Invalid length : length=%d", v62);
        }
      }
      else
      {
        sub_6BCB0(v201, 99, "# Unexpected reply : [%s]", v61);
      }
      result = (unsigned __int8 *)sub_49E3C(v58, 7, v201);
      v1[15] = 1;
      goto LABEL_176;
    }
    if ( v20 != 100 )
      goto LABEL_150;
    v28 = a1[1];
    v29 = *(_DWORD **)(v28 + 84);
    v1 = (char *)*v29;
    v30 = *(__int16 *)(*v29 + 8);
    v31 = *(__int16 *)(*v29 + 500);
    v32 = v31 > 4;
    if ( v31 != 4 )
      v32 = (unsigned __int16)v31 > 1u;
    if ( v32 )
    {
      v33 = v30 == 32;
      if ( v30 == 32 )
        v34 = v1 + 300;
      else
        v34 = (const char *)(v29 + 14);
      if ( v30 == 32 )
        v30 = *((_DWORD *)v1 + 100);
      if ( !v33 )
        v30 = v29[46];
      *((_WORD *)v1 + 248) = 0;
      if ( v30 == 7 )
      {
        if ( strncmp(v34, "Name ? ", 7u) )
          goto LABEL_320;
        *((_WORD *)v1 + 251) = 5;
      }
      else if ( v30 == 1 )
      {
        v112 = *(unsigned __int8 *)v34;
        if ( v112 != 62 )
          goto LABEL_216;
        *((_WORD *)v1 + 251) = 6;
      }
      else
      {
        if ( v30 <= 0 )
          goto LABEL_53;
LABEL_320:
        v112 = *(unsigned __int8 *)v34;
LABEL_216:
        if ( v112 == 63 )
          *((_WORD *)v1 + 251) = 8;
        else
LABEL_53:
          *((_WORD *)v1 + 251) = 7;
      }
      result = (unsigned __int8 *)sub_496A0(v28, (int)v29, (int)v1);
      v17 = *((__int16 *)v18 + 4);
      if ( v17 != 32 )
        goto LABEL_100;
      goto LABEL_55;
    }
    v105 = (__int16 *)(v1 + 512);
    if ( v30 == 32 )
      v106 = v1 + 300;
    else
      v106 = (const char *)(v29 + 14);
    if ( v30 == 32 )
      v107 = *((_DWORD *)v1 + 100);
    else
      v107 = v29[46];
    v191 = *v105;
    switch ( v107 )
    {
      case 2u:
        if ( !strncmp(v106, "OK", 2u) )
        {
          *((_WORD *)v1 + 257) = 4;
          goto LABEL_207;
        }
        goto LABEL_256;
      case 7u:
        if ( !strncmp(v106, "CONNECT", 7u) )
        {
          *((_WORD *)v1 + 257) = 5;
          goto LABEL_207;
        }
        goto LABEL_256;
      case 4u:
        if ( !strncmp(v106, "RING", 4u) )
        {
          *((_WORD *)v1 + 257) = 6;
          goto LABEL_207;
        }
        if ( !strncmp(v106, "BUSY", 4u) )
        {
          *((_WORD *)v1 + 257) = 11;
          goto LABEL_207;
        }
        goto LABEL_256;
      case 0xAu:
        if ( !strncmp(v106, "NO CARRIER", 0xAu) )
        {
          *((_WORD *)v1 + 257) = 7;
          goto LABEL_207;
        }
        if ( strncmp(v106, "CONNECT ", 8u) )
          goto LABEL_256;
        break;
      case 5u:
        if ( !strncmp(v106, "ERROR", 5u) )
        {
          *((_WORD *)v1 + 257) = 8;
          goto LABEL_207;
        }
        goto LABEL_256;
      default:
        if ( v107 <= 7 )
          goto LABEL_403;
        if ( strncmp(v106, "CONNECT ", 8u) )
        {
          if ( v107 == 11 )
          {
            if ( !strncmp(v106, "NO DAILTONE", 0xBu) )
            {
              *((_WORD *)v1 + 257) = 10;
              goto LABEL_207;
            }
          }
          else
          {
LABEL_403:
            if ( v107 == 9 && !strncmp(v106, "NO ANSWER", 9u) )
            {
              *((_WORD *)v1 + 257) = 12;
              goto LABEL_207;
            }
          }
LABEL_256:
          *((_WORD *)v1 + 257) = 13;
          goto LABEL_207;
        }
        break;
    }
    *((_WORD *)v1 + 257) = 9;
LABEL_207:
    result = (unsigned __int8 *)sub_498C8(v28, (int)v29, v1);
    v108 = *v105;
    if ( v191 == v108 )
      goto LABEL_99;
    if ( *v105 )
    {
      if ( v108 != 3 )
        goto LABEL_99;
      v109 = (int)v29;
      v110 = v28;
      v111 = 2;
    }
    else
    {
      v109 = (int)v29;
      v110 = v28;
      v111 = 3;
    }
    *((_WORD *)v1 + 251) = v111;
    result = (unsigned __int8 *)sub_496A0(v110, v109, (int)v1);
    v17 = *((__int16 *)v18 + 4);
    if ( v17 != 32 )
      goto LABEL_100;
LABEL_55:
    v35 = *((_DWORD *)v18 + 46);
    v189 = v16 + 1;
    if ( v35 <= v16 + 1 )
    {
      v52 = v18;
      if ( v189 <= 0 )
        goto LABEL_89;
      goto LABEL_313;
    }
    v17 = 32;
LABEL_101:
    if ( *((_WORD *)v18 + 6) != 2 )
      goto LABEL_85;
  }
  if ( v20 != 2 )
  {
    if ( v20 > 2 )
    {
      v54 = a1[1];
      v85 = *(_DWORD **)(v54 + 84);
      v1 = (char *)*v85;
      v86 = *(__int16 *)(*v85 + 8);
      v87 = *(__int16 *)(*v85 + 2);
      if ( v86 == 32 )
        result = (unsigned __int8 *)(v1 + 300);
      else
        result = (unsigned __int8 *)(v85 + 14);
      if ( v86 == 32 )
        v88 = *((_DWORD *)v1 + 100);
      else
        v88 = v85[46];
      if ( v87 == 1 )
      {
        if ( v88 != 15 )
          goto LABEL_174;
        v129 = result - 1;
        v130 = 0;
        do
        {
          v131 = *++v129;
          v130 ^= v131;
        }
        while ( result + 12 != v129 );
        v132 = result[13];
        v133 = (v130 >> 4) | 0x30;
        v134 = v130 & 0xF | 0x30;
        v135 = result[14];
        if ( v133 != v132 || v134 != v135 )
        {
          sub_6BCB0(v199, 59, " BCC error : Recv=%02X,%02X / Calc=%02X,%02X ", v132, v135, v133, v134);
          sub_6BCB0(v201, 99, "# Invalid reply : [%s]");
          goto LABEL_175;
        }
      }
      else
      {
        if ( v87 != 2 && v87 != 3 )
          goto LABEL_98;
        if ( v88 != 17 )
          goto LABEL_174;
      }
      v89 = sscanf((const char *)result, "%2d%2d%2d%*1d%2d%2d%2d", v1 + 24, v1 + 28, v1 + 32, v1 + 36, v1 + 40, v1 + 44);
      v90 = *((_DWORD *)v1 + 7);
      v91 = *((_DWORD *)v1 + 8);
      if ( v89 == 6 )
      {
        v92 = *((_DWORD *)v1 + 9);
        v93 = *((_DWORD *)v1 + 10);
        v94 = *((_DWORD *)v1 + 11);
        v95 = *((_DWORD *)v1 + 6);
        if ( (unsigned int)(v90 - 1) <= 0xB && (unsigned int)(v91 - 1) <= 0x1E && v92 <= 23 && v93 <= 59 && v94 <= 60 )
        {
          v96 = *((unsigned __int16 *)v1 + 1);
          *((_DWORD *)v1 + 6) = v95 + 2000;
          if ( (unsigned int)(v96 - 2) <= 1 )
          {
            v182 = v94 - 1;
            *((_DWORD *)v1 + 11) = v182;
            *((_DWORD *)v1 + 12) = 500;
            if ( v182 < 0 )
            {
              v183 = v93 - 1;
              *((_DWORD *)v1 + 10) = v183;
              *((_DWORD *)v1 + 11) = 59;
              if ( v183 < 0 )
              {
                v184 = v92 - 1;
                *((_DWORD *)v1 + 10) = 59;
                *((_DWORD *)v1 + 9) = v184;
                if ( v184 < 0 )
                {
                  *((_DWORD *)v1 + 8) = v91 - 1;
                  *((_DWORD *)v1 + 9) = 23;
                  if ( v91 == 1 )
                  {
                    *((_DWORD *)v1 + 7) = v90 - 1;
                    if ( v90 == 1 )
                    {
                      *((_DWORD *)v1 + 7) = 12;
                      *((_DWORD *)v1 + 6) = v95 + 1999;
                    }
                  }
                }
              }
            }
          }
          result = (unsigned __int8 *)sub_4A86C(v54, v85, v1);
          if ( *((_WORD *)v1 + 1) == 3 )
          {
            if ( write(v85[7], "#", 1u) != 1 )
              sub_3918C((__int16 *)v54, 3);
            result = (unsigned __int8 *)sub_49E3C(v54, 2, "#");
          }
LABEL_98:
          *((_WORD *)v18 + 6) = 3;
          goto LABEL_99;
        }
      }
      else
      {
        v92 = *((_DWORD *)v1 + 9);
        v93 = *((_DWORD *)v1 + 10);
        v94 = *((_DWORD *)v1 + 11);
        v95 = *((_DWORD *)v1 + 6);
      }
      sub_6BCB0(
        v201,
        99,
        "# Invalid time : rc=%d year=%d month=%d day=%d hour=%d minute=%d second=%d",
        v89,
        v95,
        v90,
        v91,
        v92,
        v93,
        v94);
      goto LABEL_175;
    }
    if ( v20 == 1 )
    {
      v21 = a1[1];
      v22 = *(int **)(v21 + 84);
      v1 = (char *)*v22;
      v23 = *(__int16 *)(*v22 + 16);
      v24 = *(__int16 *)(*v22 + 8);
      v25 = &off_B36E4[5 * v23];
      if ( v24 == 32 )
        v26 = v1 + 300;
      else
        v26 = (const char *)(v22 + 14);
      if ( v24 == 32 )
        v27 = (int (*)())*((_DWORD *)v1 + 100);
      else
        v27 = (int (*)())v22[46];
      if ( v25[206] )
      {
        if ( v25[208] == v27 || v27 == v25[209] )
        {
          switch ( LOBYTE(off_B36E4[5 * v23 + 205]) )
          {
            case 1:
              v113 = sscanf(v26, "%4d/%2d/%2d", v1 + 24, v1 + 28, v1 + 32);
              v114 = *((_DWORD *)v1 + 6);
              v115 = *((_DWORD *)v1 + 7);
              v116 = v113;
              if ( v113 == 3 )
              {
                result = (unsigned __int8 *)*((_DWORD *)v1 + 8);
                if ( (unsigned int)(v114 - 2000) <= 0x62
                  && (unsigned int)(v115 - 1) <= 0xB
                  && (unsigned int)(result - 1) <= 0x1E )
                {
                  v117 = *((_DWORD *)v1 + 14);
                  goto LABEL_226;
                }
              }
              else
              {
                result = (unsigned __int8 *)*((_DWORD *)v1 + 8);
              }
              sub_6BCB0(v201, 99, "# Invalid date : rc=%d year=%d month=%d day=%d", v116, v114, v115, result);
              break;
            case 2:
            case 3:
              v123 = *((_DWORD *)v1 + 14);
              if ( v123 > 1 )
              {
                sub_6BCB0(v201, 99, "# Too many reply : count=%d", v123);
                break;
              }
              v124 = sscanf(v26, "%2d:%2d:%2d", v1 + 36, v1 + 40, v1 + 44);
              v125 = *((_DWORD *)v1 + 9);
              v126 = *((_DWORD *)v1 + 10);
              if ( v124 != 3 )
              {
                v127 = *((_DWORD *)v1 + 11);
LABEL_352:
                sub_6BCB0(
                  v201,
                  99,
                  "# Invalid time : rc=%d hour=%d minute=%d second=%d",
                  v124,
                  *((_DWORD *)v1 + 9),
                  v126,
                  v127);
                break;
              }
              v127 = *((_DWORD *)v1 + 11);
              if ( v125 > 23 || v126 > 59 || v127 > 60 )
                goto LABEL_352;
              result = (unsigned __int8 *)&off_3C;
              v128 = *((_DWORD *)v1 + 14);
              v117 = v128 + 1;
              *(_DWORD *)&v1[4 * v128 + 60] = v127 + 60 * (v126 + 60 * v125);
              *((_DWORD *)v1 + 14) = v128 + 1;
              *((_DWORD *)v1 + 12) = 0;
LABEL_226:
              if ( v117 != 2 )
              {
                v23 = *((__int16 *)v1 + 8);
                if ( !off_B36E4[5 * v23 + 206] )
                  goto LABEL_98;
LABEL_228:
                v118 = v23 + 1;
                *((_WORD *)v1 + 8) = v118;
                v119 = &off_B36E4[5 * v118];
                v1 = (char *)v119[206];
                if ( v1 )
                {
                  v120 = (size_t)v119[207];
                  if ( v120 != write(v22[7], v119[206], v120) )
                    sub_3918C((__int16 *)v21, 3);
                  result = (unsigned __int8 *)sub_49E3C(v21, 2, v1);
                  goto LABEL_99;
                }
                goto LABEL_98;
              }
LABEL_235:
              v121 = *((_DWORD *)v1 + 16);
              v122 = *((_DWORD *)v1 + 15);
              if ( v121 - 2 <= v122 )
              {
                if ( v121 < v122 )
                  goto LABEL_237;
                result = (unsigned __int8 *)sub_4A86C(v21, v22, v1);
                goto LABEL_98;
              }
              if ( v121 < v122 )
              {
LABEL_237:
                v1 = v201;
                sub_6BCB0(v201, 99, "* Over midnight : timestamp=%d, %d", v122, v121);
                result = (unsigned __int8 *)sub_49E3C(v21, 4, v201);
                goto LABEL_98;
              }
              sub_6BCB0(v201, 99, "# Slow reply : timestamp=%d, %d", v122, v121);
              break;
            case 4:
              result = (unsigned __int8 *)strncmp(v26, "adjusted", 8u);
              if ( !result )
                goto LABEL_234;
              result = (unsigned __int8 *)strncmp(v26, "unadjusted", 0xAu);
              if ( !result )
                goto LABEL_234;
              goto LABEL_247;
            case 5:
              result = (unsigned __int8 *)strncmp(v26, "valid", 5u);
              if ( result )
              {
                result = (unsigned __int8 *)strncmp(v26, "invalid", 7u);
                if ( result )
                  goto LABEL_247;
              }
LABEL_234:
              if ( *((_DWORD *)v1 + 14) == 2 )
                goto LABEL_235;
              goto LABEL_228;
            default:
LABEL_247:
              sub_6BCB0(v201, 99, "# Invalid reply : [%s]", v26);
              break;
          }
        }
        else
        {
          sub_6BCB0(v201, 99, "# Invalid length : length=%d", v27);
        }
      }
      else
      {
        sub_6BCB0(v201, 99, "# Unexpected reply : [%s]", v26);
      }
      result = (unsigned __int8 *)sub_49E3C(v21, 7, v201);
      v1[15] = 1;
      goto LABEL_176;
    }
LABEL_150:
    v17 = *((__int16 *)v18 + 4);
    *((_WORD *)v18 + 6) = 4;
    if ( v17 != 32 )
      goto LABEL_100;
    goto LABEL_55;
  }
  v54 = a1[1];
  v71 = *(_DWORD **)(v54 + 84);
  v1 = (char *)*v71;
  v72 = *(__int16 *)(*v71 + 8);
  v73 = v72 == 32;
  if ( v72 == 32 )
    v74 = v1 + 300;
  else
    v74 = (const char *)(v71 + 14);
  if ( v73 )
    v75 = *((_DWORD *)v1 + 100);
  else
    v75 = v71[46];
  if ( *(_WORD *)(*v71 + 16) != 1 )
  {
LABEL_213:
    sub_6BCB0(v201, 99, "# Unexpected reply : [%s]");
    goto LABEL_175;
  }
  v76 = *((_DWORD *)v1 + 74);
  if ( v76 > 16 && v1[v76 + 192] == 3 )
  {
    if ( v75 == 15 )
    {
      v77 = sscanf(v74, "J%2d%2d%2d%*1d%2d%2d%2d%1d", v1 + 24, v1 + 28, v1 + 32, v1 + 36, v1 + 40, v1 + 44, v1 + 48);
      v78 = *((_DWORD *)v1 + 7);
      v79 = *((_DWORD *)v1 + 8);
      if ( v77 == 7 )
      {
        v80 = *((_DWORD *)v1 + 9);
        v81 = *((_DWORD *)v1 + 11);
        v82 = *((_DWORD *)v1 + 10);
        v83 = *((_DWORD *)v1 + 6);
        if ( (unsigned int)(v78 - 1) <= 0xB && (unsigned int)(v79 - 1) <= 0x1E && v80 <= 23 && v82 <= 59 && v81 <= 60 )
        {
          v84 = *((_DWORD *)v1 + 12);
          *((_DWORD *)v1 + 6) = v83 + 2000;
          *((_DWORD *)v1 + 12) = 100 * v84;
          result = (unsigned __int8 *)sub_4A86C(v54, v71, v1);
          goto LABEL_98;
        }
      }
      else
      {
        v83 = *((_DWORD *)v1 + 6);
        v80 = *((_DWORD *)v1 + 9);
        v82 = *((_DWORD *)v1 + 10);
        v81 = *((_DWORD *)v1 + 11);
      }
      sub_6BCB0(
        v201,
        99,
        "# Invalid time : rc=%d year=%d month=%d day=%d hour=%d minute=%d second=%d",
        v77,
        v83,
        v78,
        v79,
        v80,
        v82,
        v81);
      goto LABEL_175;
    }
    sub_6BCB0(v201, 99, "# Invalid length : length=%d", v75);
    result = (unsigned __int8 *)sub_49E3C(v54, 7, v201);
    v1[15] = 1;
LABEL_176:
    *((_WORD *)v18 + 6) = 4;
    goto LABEL_99;
  }
  v17 = *((__int16 *)v18 + 4);
  if ( v17 != 32 )
  {
LABEL_100:
    if ( v17 == 1 )
    {
      v52 = v18;
      goto LABEL_89;
    }
    goto LABEL_101;
  }
LABEL_85:
  v52 = v18;
  v53 = v17 == 32;
  if ( v189 <= 0 )
    v53 = 0;
  if ( v53 )
  {
    v35 = *((_DWORD *)v18 + 46);
LABEL_310:
    if ( v189 < v35 )
    {
      v168 = &v52[v189 + 84];
      result = &v52[v35 + 84];
      v169 = v52 + 83;
      do
      {
        v170 = *v168++;
        *++v169 = v170;
      }
      while ( result != v168 );
    }
LABEL_313:
    v171 = v35 - v189;
    if ( v171 < 0 )
      *((_DWORD *)v52 + 46) = 0;
    else
      *((_DWORD *)v52 + 46) = v171;
  }
LABEL_89:
  v52[14] = 0;
  return result;
}
