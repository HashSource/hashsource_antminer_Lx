int __fastcall stratum_handle_method_grin29(int a1, int a2, int a3)
{
  double v3; // d0
  double *v5; // r0
  double *v6; // r4
  _DWORD *v7; // r0
  const char *v8; // r9
  char *v9; // r1
  _DWORD *v10; // r7
  int v11; // r5
  const char *v12; // r1
  const char *v13; // r1
  _BYTE *v14; // r1
  int v15; // r0
  unsigned int *v16; // r3
  unsigned int v17; // r2
  unsigned int v18; // r2
  int v20; // r3
  _DWORD *v21; // r3
  int v22; // r1
  char *v23; // r1
  int v24; // r0
  const char *v25; // r1
  _DWORD *v26; // r10
  const char *v27; // r1
  const char *v28; // r1
  const char *v29; // r1
  const char *v30; // r1
  const char *v31; // r1
  const char *v32; // r1
  const char *v33; // r1
  const char *v34; // r1
  _DWORD *v35; // r5
  _DWORD *v36; // r0
  int v37; // r3
  _DWORD *v38; // r3
  int v39; // r1
  _DWORD *v40; // r0
  _DWORD *v41; // r7
  unsigned int *v42; // r3
  unsigned int v43; // r2
  char *v44; // r1
  _DWORD *v45; // r0
  char *v46; // r1
  _DWORD *v47; // r0
  char *v48; // r1
  char *v49; // r8
  unsigned int *v50; // r3
  unsigned int v51; // r2
  unsigned int v52; // r2
  const char *v53; // r1
  int v54; // r11
  const char *v55; // r1
  _DWORD *v56; // r0
  _DWORD *v57; // r0
  unsigned __int8 *v58; // r0
  int v59; // r2
  unsigned int v60; // r10
  unsigned int v61; // r1
  _DWORD *v62; // r0
  _DWORD *v63; // r0
  char *v64; // r10
  _DWORD *v65; // r0
  char *v66; // r1
  _DWORD *v67; // r0
  int v68; // r3
  _DWORD *v69; // r3
  int v70; // r1
  int v71; // r0
  const char *v72; // r1
  _DWORD *v73; // r0
  const char *v74; // r1
  _DWORD *v75; // r10
  _DWORD *v76; // r0
  _DWORD *v77; // r0
  _DWORD *v78; // r0
  const char *v79; // r0
  int v80; // r3
  _DWORD *v81; // r3
  int v82; // r2
  int v83; // r1
  _DWORD *v84; // r0
  char *v85; // r8
  _DWORD *v86; // r0
  int v87; // r0
  int v88; // r7
  void *v89; // r0
  size_t v90; // r9
  void *v91; // r0
  int v92; // r3
  int v93; // r12
  _DWORD *v94; // r3
  int v95; // r2
  int v96; // r1
  _DWORD *v97; // r0
  _DWORD *v98; // r0
  unsigned __int8 *v99; // r0
  _DWORD *v100; // r0
  const char *v101; // r9
  _DWORD *v102; // r0
  int v103; // r7
  _BOOL4 v104; // r5
  size_t v105; // r0
  char *v106; // r0
  const char *v107; // r1
  char *v108; // r8
  int v109; // r3
  _DWORD *v110; // r3
  int v111; // r1
  void *v112; // r0
  int v113; // r3
  _DWORD *v114; // r3
  int v115; // r1
  _DWORD *v116; // r0
  _DWORD *v117; // r8
  unsigned int *v118; // r3
  unsigned int v119; // r2
  char *v120; // r1
  _DWORD *v121; // r0
  char *v122; // r1
  char *v123; // r0
  char *v124; // r1
  char *v125; // r7
  unsigned int *v126; // r3
  unsigned int v127; // r2
  unsigned int v128; // r2
  _DWORD *v129; // r0
  _DWORD *v130; // r0
  _DWORD *v131; // r0
  const char *v132; // r0
  int v133; // r3
  _DWORD *v134; // r0
  _DWORD *v135; // r0
  _DWORD *v136; // r0
  _DWORD *v137; // r0
  _DWORD *v138; // r3
  bool v139; // zf
  bool v140; // zf
  signed int v141; // r7
  int v142; // r3
  _DWORD *v143; // r0
  _DWORD *v144; // r7
  unsigned int *v145; // r3
  unsigned int v146; // r2
  char *v147; // r1
  int *v148; // r3
  int v149; // r0
  _DWORD *v150; // r5
  char *v151; // r0
  char *v152; // r0
  char *v153; // r1
  _DWORD *v154; // r0
  char *v155; // r1
  _DWORD *v156; // r0
  char *v157; // r1
  _DWORD *v158; // r0
  char *v159; // r1
  double *v160; // r0
  char *v161; // r1
  char *v162; // r0
  char *v163; // r1
  char *v164; // r0
  char *v165; // r1
  char *v166; // r1
  _DWORD *v167; // r0
  char *v168; // r1
  unsigned int *v169; // r3
  unsigned int v170; // r2
  unsigned int v171; // r2
  _DWORD *v172; // r0
  _DWORD *v173; // r0
  _DWORD *v174; // r0
  unsigned int *v175; // r3
  unsigned int v176; // r2
  char *v177; // r1
  _DWORD *v178; // r0
  char *v179; // r1
  char *v180; // r0
  char *v181; // r1
  unsigned int *v182; // r3
  unsigned int v183; // r2
  int v184; // r3
  _DWORD *v185; // r3
  int v186; // r1
  _DWORD *v187; // r0
  unsigned int *v188; // r3
  unsigned int v189; // r2
  char *v190; // r1
  _DWORD *v191; // r0
  char *v192; // r1
  char *v193; // r2
  unsigned int *v194; // r3
  unsigned int v195; // r2
  const char *v196; // r0
  char *v197; // r2
  char *v198; // r0
  _DWORD *v199; // r3
  _DWORD *v200; // r8
  _DWORD *v201; // r0
  const char *v202; // r0
  unsigned __int8 *v203; // r4
  void *v204; // r0
  int v205; // r3
  _DWORD *v206; // r3
  int v207; // r1
  char *i; // r7
  void *v209; // r0
  void *v210; // t1
  int v211; // r8
  size_t v212; // r5
  size_t v213; // r9
  void *v214; // r0
  size_t v215; // r1
  char *v216; // r0
  int v217; // r12
  const char *v218; // r0
  void *v219; // r0
  int v220; // r1
  unsigned __int8 *v221; // r2
  unsigned int v222; // r1
  bool v223; // cc
  int v224; // r3
  _DWORD *v225; // r3
  int v226; // r1
  _BOOL4 v227; // r0
  int v228; // r3
  int v229; // r5
  _DWORD *v230; // r2
  int v231; // r3
  void *v232; // r1
  int v233; // r1
  int v234; // r3
  void *v235; // r2
  char *v236; // [sp+10h] [bp-1184h]
  unsigned __int8 *v237; // [sp+10h] [bp-1184h]
  unsigned __int8 *v238; // [sp+14h] [bp-1180h]
  char *s2; // [sp+18h] [bp-117Ch]
  unsigned __int8 *v240; // [sp+1Ch] [bp-1178h]
  int v241; // [sp+20h] [bp-1174h]
  unsigned __int8 *v242; // [sp+20h] [bp-1174h]
  unsigned int v243; // [sp+24h] [bp-1170h]
  unsigned __int8 *v244; // [sp+24h] [bp-1170h]
  int v245; // [sp+28h] [bp-116Ch]
  char *v246; // [sp+2Ch] [bp-1168h]
  unsigned int v247; // [sp+30h] [bp-1164h]
  bool v248; // [sp+30h] [bp-1164h]
  _DWORD *ptr; // [sp+34h] [bp-1160h]
  _DWORD *ptra; // [sp+34h] [bp-1160h]
  char *ptrb; // [sp+34h] [bp-1160h]
  int v252; // [sp+38h] [bp-115Ch]
  double *v253; // [sp+3Ch] [bp-1158h]
  int v254; // [sp+4Ch] [bp-1148h] BYREF
  __int16 v255; // [sp+50h] [bp-1144h]
  char s1[64]; // [sp+54h] [bp-1140h] BYREF
  int v257[23]; // [sp+94h] [bp-1100h] BYREF
  char v258[160]; // [sp+F0h] [bp-10A4h] BYREF
  char s[4100]; // [sp+190h] [bp-1004h] BYREF

  v5 = json_loads(a3, 0, (char *)v257);
  v6 = v5;
  if ( !v5 )
  {
    v11 = 0;
    V_LOCK();
    LOWORD(v20) = 9784;
    HIWORD(v20) = (unsigned int)"NG_SUBSCRIBE_FAILURE" >> 16;
    logfmt_raw(s, 0x1000u, 0, v20, v257[0], v258);
    V_UNLOCK();
    LOWORD(v21) = -14756;
    HIWORD(v21) = (unsigned int)&unk_16E68C >> 16;
    LOWORD(v22) = 13488;
    HIWORD(v22) = (unsigned int)"ction_to_pool" >> 16;
    zlog(*v21, v22, 163, "stratum_handle_method_grin29", 28, 746, 100, s);
    return v11;
  }
  v7 = (_DWORD *)json_object_get(v5, "method");
  v8 = (const char *)json_string_value(v7);
  if ( !v8 )
    goto LABEL_10;
  LOWORD(v9) = 9812;
  HIWORD(v9) = (unsigned int)"NG_SUBSCRIBE_SUCCESS" >> 16;
  v10 = (_DWORD *)json_object_get(v6, v9);
  if ( !v10 )
  {
    LOWORD(v66) = 9820;
    HIWORD(v66) = (unsigned int)"RIBE_SUCCESS" >> 16;
    v10 = (_DWORD *)json_object_get(v6, v66);
  }
  v11 = *(unsigned __int8 *)(a2 + 1824);
  if ( *(_BYTE *)(a2 + 1824) )
  {
    LOWORD(v12) = 14508;
    HIWORD(v12) = (unsigned int)"ase/build/godminer-origin_master/miner_util/miner_monitor/check_working_voltage.c" >> 16;
    if ( !strcasecmp(v8, v12)
      || (LOWORD(v13) = 14360,
          HIWORD(v13) = (unsigned int)" working_voltage = %d, compensate_voltage = %d, abs = %d" >> 16,
          !strcasecmp(v8, v13)) )
    {
      v11 = rpc2_job_decode(v10, a2);
      v14 = (_BYTE *)(a2 + 2084);
      v15 = a2;
      if ( v11 )
      {
        pool_tset(a2, v14, 1);
        goto LABEL_11;
      }
LABEL_48:
      pool_tclear(v15, v14, 0);
      goto LABEL_11;
    }
LABEL_10:
    v11 = 0;
    goto LABEL_11;
  }
  LOWORD(v23) = 13888;
  HIWORD(v23) = (unsigned int)"e last_30min: %f" >> 16;
  v24 = json_object_get(v6, v23);
  LOWORD(v25) = 9828;
  v26 = (_DWORD *)v24;
  HIWORD(v25) = (unsigned int)"CESS" >> 16;
  if ( !strcasecmp(v8, v25) )
  {
    memset(s1, 0, sizeof(s1));
    get_currentalgo(s1, 0x40u);
    LOWORD(v53) = 14524;
    HIWORD(v53) = (unsigned int)"er-origin_master/miner_util/miner_monitor/check_working_voltage.c" >> 16;
    v54 = strcmp(s1, v53);
    if ( v54 )
    {
      LOWORD(v55) = 14532;
      HIWORD(v55) = (unsigned int)"n_master/miner_util/miner_monitor/check_working_voltage.c" >> 16;
      v54 = strcmp(s1, v55);
      if ( v54 )
      {
        v56 = json_array_get(v10, 0);
        s2 = (char *)json_string_value(v56);
        v245 = 0;
        v57 = json_array_get(v10, 1u);
        v58 = (unsigned __int8 *)json_string_value(v57);
        v54 = 0;
        v59 = 4;
        v60 = 3;
        v61 = 2;
        v240 = v58;
        v241 = 2;
        v243 = 5;
        v238 = 0;
        goto LABEL_45;
      }
      if ( json_array_size(v10) != (_DWORD *)10 )
      {
        v97 = json_array_get(v10, 0);
        s2 = (char *)json_string_value(v97);
        v245 = 0;
        v98 = json_array_get(v10, 1u);
        v99 = (unsigned __int8 *)json_string_value(v98);
        v61 = 2;
        v240 = v99;
        v59 = 4;
        v241 = 2;
        v60 = 3;
        v243 = 5;
        v238 = 0;
        goto LABEL_45;
      }
      v172 = json_array_get(v10, 0);
      s2 = (char *)json_string_value(v172);
      v173 = json_array_get(v10, 1u);
      v240 = (unsigned __int8 *)json_string_value(v173);
LABEL_96:
      v131 = json_array_get(v10, 2u);
      v132 = (const char *)json_string_value(v131);
      v238 = (unsigned __int8 *)v132;
      if ( !v132 || strlen(v132) != 128 )
      {
        V_LOCK();
        LOWORD(v133) = 14580;
        HIWORD(v133) = (unsigned int)"voltage.c" >> 16;
        logfmt_raw(s, 0x1000u, 0, v133);
        V_UNLOCK();
        LOWORD(v81) = -14756;
        HIWORD(v81) = (unsigned int)&unk_16E68C >> 16;
        v82 = 206;
        goto LABEL_59;
      }
      v61 = 3;
      v245 = 0;
      v241 = 3;
      v59 = 5;
      v243 = 6;
      v60 = 4;
      v54 = 1;
      goto LABEL_45;
    }
    v73 = json_array_size(v10);
    LOWORD(v74) = 14532;
    v75 = v73;
    HIWORD(v74) = (unsigned int)"n_master/miner_util/miner_monitor/check_working_voltage.c" >> 16;
    if ( !strcmp(s1, v74) && json_array_size(v10) == (_DWORD *)10 )
    {
      v129 = json_array_get(v10, 0);
      s2 = (char *)json_string_value(v129);
      v130 = json_array_get(v10, 1u);
      v240 = (unsigned __int8 *)json_string_value(v130);
      if ( v75 != (_DWORD *)10 )
        goto LABEL_96;
      v54 = 1;
    }
    else
    {
      v76 = json_array_get(v10, 0);
      s2 = (char *)json_string_value(v76);
      v77 = json_array_get(v10, 1u);
      v240 = (unsigned __int8 *)json_string_value(v77);
      if ( v75 != (_DWORD *)10 )
      {
        v61 = 2;
        v245 = 0;
        v59 = 4;
        v238 = 0;
        v241 = 2;
        v60 = 3;
        v243 = 5;
        goto LABEL_45;
      }
    }
    v78 = json_array_get(v10, 2u);
    v79 = (const char *)json_string_value(v78);
    v238 = (unsigned __int8 *)v79;
    if ( !v79 || strlen(v79) != 64 )
    {
      V_LOCK();
      LOWORD(v80) = 14540;
      HIWORD(v80) = (unsigned int)"/miner_util/miner_monitor/check_working_voltage.c" >> 16;
      logfmt_raw(s, 0x1000u, 0, v80);
      V_UNLOCK();
      LOWORD(v81) = -14756;
      HIWORD(v81) = (unsigned int)&unk_16E68C >> 16;
      v82 = 199;
      goto LABEL_59;
    }
    v61 = 3;
    v243 = 6;
    v59 = 5;
    v241 = 3;
    v60 = 4;
    v245 = 1;
LABEL_45:
    v236 = (char *)v59;
    v62 = json_array_get(v10, v61);
    v246 = (char *)json_string_value(v62);
    v63 = json_array_get(v10, v60);
    v64 = (char *)json_string_value(v63);
    v65 = json_array_get(v10, (unsigned int)v236);
    if ( !v65 || *v65 != 1 )
      goto LABEL_47;
    ptr = v65;
    v252 = (int)json_array_size(v65);
    v134 = json_array_get(v10, v243);
    v237 = (unsigned __int8 *)json_string_value(v134);
    v247 = v241 + 6;
    v135 = json_array_get(v10, v241 + 4);
    v244 = (unsigned __int8 *)json_string_value(v135);
    v136 = json_array_get(v10, v241 + 5);
    v242 = (unsigned __int8 *)json_string_value(v136);
    v137 = json_array_get(v10, v247);
    v138 = ptr;
    if ( v137 )
    {
      v248 = *json_array_get(v10, v247) == 5;
      v138 = ptr;
    }
    else
    {
      v248 = 0;
    }
    v139 = v240 == 0;
    if ( v240 )
      v139 = s2 == 0;
    if ( !v139 )
    {
      v140 = v64 == 0;
      if ( v64 )
        v140 = v246 == 0;
      if ( !v140 )
      {
        if ( v237 )
          v141 = v244 == 0;
        else
          v141 = 1;
        if ( !v242 )
          v141 = 1;
        if ( !v141 )
        {
          ptra = v138;
          if ( strlen((const char *)v240) == 64
            && strlen((const char *)v237) == 8
            && strlen((const char *)v244) == 8
            && strlen((const char *)v242) == 8 )
          {
            v198 = (char *)malloc(4 * v252);
            v199 = ptra;
            ptrb = v198;
            v200 = v199;
            v253 = v6;
            while ( v252 > v141 )
            {
              v201 = json_array_get(v200, v141);
              v202 = (const char *)json_string_value(v201);
              v203 = (unsigned __int8 *)v202;
              if ( !v202 || strlen(v202) != 64 )
              {
                v6 = v253;
                for ( i = &ptrb[4 * v141]; i != ptrb; i -= 4 )
                {
                  v210 = (void *)*((_DWORD *)i - 1);
                  v209 = v210;
                  if ( v210 )
                    free(v209);
                }
                if ( i )
                  free(i);
                V_LOCK();
                LOWORD(v224) = 14624;
                HIWORD(v224) = (unsigned int)"= %d, min_chip_temp = %d, max_chip_temp = %d" >> 16;
                logfmt_raw(s, 0x1000u, 0, v224);
                V_UNLOCK();
                LOWORD(v225) = -14756;
                HIWORD(v225) = (unsigned int)&unk_16E68C >> 16;
                LOWORD(v226) = 13488;
                HIWORD(v226) = (unsigned int)"ction_to_pool" >> 16;
                zlog(*v225, v226, 163, "stratum_notify", 14, 235, 100, s);
                goto LABEL_47;
              }
              v204 = malloc(0x20u);
              *(_DWORD *)&ptrb[4 * v141++] = v204;
              hex2bin((int)v204, v203, 32);
            }
            v211 = 0;
            v6 = v253;
            pthread_mutex_lock((pthread_mutex_t *)(a2 + 1760));
            v212 = strlen(v246) >> 1;
            v213 = strlen(v64) >> 1;
            v214 = *(void **)(a2 + 292);
            v215 = *(_DWORD *)(a2 + 72) + *(_DWORD *)(a2 + 80) + v212 + v213;
            *(_DWORD *)(a2 + 288) = v215;
            v216 = (char *)realloc(v214, v215);
            v217 = *(_DWORD *)(a2 + 72);
            *(_DWORD *)(a2 + 292) = v216;
            *(_DWORD *)(a2 + 296) = &v216[v212 + v217];
            hex2bin((int)v216, (unsigned __int8 *)v246, v212);
            memcpy((void *)(*(_DWORD *)(a2 + 292) + v212), *(const void **)(a2 + 76), *(_DWORD *)(a2 + 72));
            v218 = *(const char **)(a2 + 88);
            if ( !v218 || strcmp(v218, s2) )
              memset(*(void **)(a2 + 296), 0, *(_DWORD *)(a2 + 80));
            hex2bin(*(_DWORD *)(a2 + 296) + *(_DWORD *)(a2 + 80), (unsigned __int8 *)v64, v213);
            v219 = *(void **)(a2 + 88);
            if ( v219 )
              free(v219);
            *(_DWORD *)(a2 + 88) = _strdup(s2);
            hex2bin(a2 + 92, v240, 32);
            if ( v245 )
              hex2bin(a2 + 372, v238, 32);
            if ( v54 )
              hex2bin(a2 + 372, v238, 64);
            v220 = *(_DWORD *)(a2 + 292);
            v221 = (unsigned __int8 *)(v220 + 32);
            v222 = v220 + 160;
            while ( 1 )
            {
              v223 = 0;
              if ( *v221 != 255 )
                v223 = v222 > (unsigned int)v221;
              if ( !v223 )
                break;
              ++v221;
            }
            while ( 1 )
            {
              v227 = *v221 == 255;
              if ( v222 <= (unsigned int)v221 )
                v227 = 0;
              if ( !v227 )
                break;
              ++v221;
            }
            v228 = 0;
            if ( *(v221 - 1) == 255 && *(v221 - 2) == 255 )
            {
              v233 = v221[1];
              v228 = (unsigned __int16)(v221[2] + (v221[3] << 8));
              if ( v233 == 3 )
              {
                v228 += v221[4] << 16;
              }
              else if ( v233 == 4 )
              {
                v228 += (v221[4] + (v221[5] << 8)) << 16;
              }
            }
            *(_DWORD *)(a2 + 1812) = v228;
            v229 = 0;
            v230 = *(_DWORD **)(a2 + 320);
            v231 = *(_DWORD *)(a2 + 316);
            while ( v229 < v231 )
            {
              v232 = (void *)v230[v229++];
              if ( v232 )
              {
                free(v232);
                v230 = *(_DWORD **)(a2 + 320);
                v231 = *(_DWORD *)(a2 + 316);
              }
            }
            if ( v230 )
              free(v230);
            *(_DWORD *)(a2 + 320) = ptrb;
            v234 = v252;
            *(_DWORD *)(a2 + 316) = v252;
            while ( v211 < v234 )
            {
              v235 = *(void **)&ptrb[4 * v211++];
              if ( v235 )
              {
                free(v235);
                v234 = *(_DWORD *)(a2 + 316);
              }
            }
            if ( ptrb )
              free(ptrb);
            v11 = 1;
            hex2bin(a2 + 324, v237, 4);
            hex2bin(a2 + 336, v244, 4);
            hex2bin(a2 + 348, v242, 4);
            *(_BYTE *)(a2 + 436) = v248;
            *(_QWORD *)(a2 + 440) = *(_QWORD *)(a2 + 1976);
            pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1760));
            pool_tset(a2, (_BYTE *)(a2 + 2084), 1);
            goto LABEL_11;
          }
        }
      }
    }
    V_LOCK();
    LOWORD(v142) = 9092;
    HIWORD(v142) = (unsigned int)"tum_handle_method_vbk" >> 16;
    logfmt_raw(s, 0x1000u, 0, v142);
    V_UNLOCK();
    LOWORD(v81) = -14756;
    HIWORD(v81) = (unsigned int)&unk_16E68C >> 16;
    v82 = 224;
LABEL_59:
    LOWORD(v83) = 13488;
    HIWORD(v83) = (unsigned int)"ction_to_pool" >> 16;
    zlog(*v81, v83, 163, "stratum_notify", 14, v82, 100, s);
LABEL_47:
    v15 = a2;
    v14 = (_BYTE *)(a2 + 2084);
    goto LABEL_48;
  }
  LOWORD(v27) = 14664;
  HIWORD(v27) = (unsigned int)"= %d" >> 16;
  if ( !strcasecmp(v8, v27) )
  {
    V_LOCK();
    LOWORD(v68) = 14676;
    HIWORD(v68) = (unsigned int)"ver to working voltage! curr_vol = %d, working_voltage = %d" >> 16;
    logfmt_raw(s, 0x1000u, v11, v68);
    V_UNLOCK();
    LOWORD(v69) = -14756;
    HIWORD(v69) = (unsigned int)&unk_16E68C >> 16;
    LOWORD(v70) = 13488;
    HIWORD(v70) = (unsigned int)"ction_to_pool" >> 16;
    zlog(*v69, v70, 163, "stratum_handle_method_grin29", 28, 782, 20, s);
    if ( v26 && *v26 != 7 )
    {
      v71 = json_integer_value((int)v26);
      LOWORD(v72) = 14688;
      HIWORD(v72) = (unsigned int)"ng voltage! curr_vol = %d, working_voltage = %d" >> 16;
      sprintf(s, v72, v71);
      v11 = stratum_send_line((int *)a2, s);
    }
    goto LABEL_11;
  }
  LOWORD(v28) = 9844;
  HIWORD(v28) = (unsigned int)"UBMIT_FAILURE" >> 16;
  if ( !strcasecmp(v8, v28) )
  {
    v67 = json_array_get(v10, v11);
    json_number_value((int)v67);
    if ( v3 != 0.0 )
    {
      v11 = 1;
      pthread_mutex_lock((pthread_mutex_t *)(a2 + 1760));
      *(double *)(a2 + 1976) = v3;
      pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1760));
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  LOWORD(v29) = 9888;
  HIWORD(v29) = (unsigned int)"NG_JOB" >> 16;
  if ( !strcasecmp(v8, v29) )
  {
    v84 = json_array_get(v10, v11);
    v85 = (char *)json_string_value(v84);
    if ( v85 )
    {
      v86 = json_array_get(v10, 1u);
      v87 = json_integer_value((int)v86);
      v88 = v87;
      if ( v87 )
      {
        if ( (unsigned int)(v87 - 2) > 0xE )
        {
          V_LOCK();
          logfmt_raw(s, 0x1000u, v11, "Failed to get valid n2size in parse_extranonce");
          V_UNLOCK();
          LOWORD(v94) = -14756;
          v93 = 40;
          HIWORD(v94) = (unsigned int)&unk_16E68C >> 16;
          v95 = 331;
        }
        else
        {
          pthread_mutex_lock((pthread_mutex_t *)(a2 + 1760));
          v89 = *(void **)(a2 + 76);
          if ( v89 )
            free(v89);
          v90 = strlen(v85) >> 1;
          *(_DWORD *)(a2 + 72) = v90;
          v91 = calloc(1u, v90);
          *(_DWORD *)(a2 + 76) = v91;
          if ( !v91 )
          {
            V_LOCK();
            LOWORD(v205) = 9004;
            HIWORD(v205) = (unsigned int)"orize_vbk" >> 16;
            logfmt_raw(s, 0x1000u, 0, v205);
            V_UNLOCK();
            LOWORD(v206) = -14756;
            HIWORD(v206) = (unsigned int)&unk_16E68C >> 16;
            LOWORD(v207) = 13488;
            HIWORD(v207) = (unsigned int)"ction_to_pool" >> 16;
            zlog(*v206, v207, 163, "stratum_parse_extranonce", 24, 340, 100, s);
            pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1760));
            goto LABEL_11;
          }
          hex2bin((int)v91, (unsigned __int8 *)v85, v90);
          *(_DWORD *)(a2 + 80) = v88;
          pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1760));
          v11 = 1;
          V_LOCK();
          LOWORD(v92) = 14728;
          HIWORD(v92) = (unsigned int)"ge = %d" >> 16;
          logfmt_raw(s, 0x1000u, 0, v92, v85, v88);
          V_UNLOCK();
          LOWORD(v94) = -14756;
          v93 = 20;
          HIWORD(v94) = (unsigned int)&unk_16E68C >> 16;
          v95 = 350;
        }
      }
      else
      {
        V_LOCK();
        logfmt_raw(s, 0x1000u, v11, "Failed to get extranonce2_size");
        V_UNLOCK();
        LOWORD(v94) = -14756;
        v93 = 100;
        HIWORD(v94) = (unsigned int)&unk_16E68C >> 16;
        v95 = 327;
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(s, 0x1000u, v11, "Failed to get extranonce1");
      V_UNLOCK();
      LOWORD(v94) = -14756;
      v93 = 100;
      HIWORD(v94) = (unsigned int)&unk_16E68C >> 16;
      v95 = 322;
    }
    LOWORD(v96) = 13488;
    HIWORD(v96) = (unsigned int)"ction_to_pool" >> 16;
    zlog(*v94, v96, 163, "stratum_parse_extranonce", 24, v95, v93, s);
  }
  else
  {
    LOWORD(v30) = 14776;
    HIWORD(v30) = (unsigned int)"s 2min avg hashrate %s hw %llu" >> 16;
    if ( !strcasecmp(v8, v30) )
    {
      v100 = json_array_get(v10, 0);
      v101 = (const char *)json_string_value(v100);
      v102 = json_array_get(v10, 1u);
      if ( v102 && *v102 == 2 )
      {
        v196 = (const char *)json_string_value(v102);
        v103 = strtol(v196, 0, 10);
      }
      else
      {
        v103 = json_integer_value((int)v102);
      }
      if ( v101 )
        v104 = v103 == 0;
      else
        v104 = 1;
      if ( !v104 )
      {
        v105 = strlen(v101);
        v106 = (char *)malloc(v105 + 32);
        LOWORD(v107) = 14796;
        HIWORD(v107) = (unsigned int)"%s hw %llu" >> 16;
        v108 = v106;
        sprintf(v106, v107, v101, v103);
        V_LOCK();
        LOWORD(v109) = 14816;
        HIWORD(v109) = (unsigned int)"ce/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/miner_util/miner_monitor/miner_monitor.c" >> 16;
        logfmt_raw(s, 0x1000u, 0, v109, v108);
        V_UNLOCK();
        LOWORD(v110) = -14756;
        HIWORD(v110) = (unsigned int)&unk_16E68C >> 16;
        LOWORD(v111) = 13488;
        HIWORD(v111) = (unsigned int)"ction_to_pool" >> 16;
        zlog(*v110, v111, 163, "stratum_reconnect", 17, 476, 60, s);
        v112 = *(void **)(a2 + 28);
        if ( v112 )
          free(v112);
        *(_DWORD *)(a2 + 28) = v108;
        free(v108);
        v11 = 1;
        stratum_disconnect((int *)a2);
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    LOWORD(v31) = 14852;
    HIWORD(v31) = (unsigned int)"r_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/miner_util/miner_monitor/miner_monitor.c" >> 16;
    if ( strcasecmp(v8, v31) )
    {
      LOWORD(v32) = 14900;
      HIWORD(v32) = (unsigned int)"build/godminer-origin_master/miner_util/miner_monitor/miner_monitor.c" >> 16;
      if ( !strcasecmp(v8, v32) )
      {
        if ( !v26 || *v26 == 7 )
          goto LABEL_10;
        v143 = json_object();
        v144 = v143;
        if ( v26[1] != -1 )
        {
          v145 = v26 + 1;
          do
            v146 = __ldrex(v145);
          while ( __strex(v146 + 1, v145) );
          __dmb(0xBu);
        }
        LOWORD(v147) = 13888;
        HIWORD(v147) = (unsigned int)"e last_30min: %f" >> 16;
        json_object_set_new(v143, v147, v26);
        if ( *(_BYTE *)(a2 + 1816) )
        {
          memset(s, 0, 0x40u);
          memset(s1, 0, 0x20u);
          get_currentalgo(s, 0x40u);
          LOWORD(v148) = 14920;
          HIWORD(v148) = (unsigned int)"n_master/miner_util/miner_monitor/miner_monitor.c" >> 16;
          v149 = *v148;
          v255 = v148[1];
          v254 = v149;
          sprintf(s1, "GCC %d.%d.%d\n", 7, 2, 1);
          s1[31] = 0;
          v150 = json_object();
          v151 = BUFX_strdup(s);
          json_object_set_new(v150, "algo", v151);
          v152 = BUFX_strdup("cpu");
          LOWORD(v153) = 1440;
          HIWORD(v153) = (unsigned int)"dminer-origin_master/frontend/frontend_base.c" >> 16;
          json_object_set_new(v150, v153, v152);
          v154 = json_integer(0);
          LOWORD(v155) = 568;
          HIWORD(v155) = (unsigned int)"t extranonce1" >> 16;
          json_object_set_new(v150, v155, v154);
          v156 = json_integer(0);
          LOWORD(v157) = 14948;
          HIWORD(v157) = (unsigned int)"nitor/miner_monitor.c" >> 16;
          json_object_set_new(v150, v157, v156);
          v158 = json_integer(0);
          LOWORD(v159) = 14956;
          HIWORD(v159) = (unsigned int)"ner_monitor.c" >> 16;
          json_object_set_new(v150, v159, v158);
          v160 = json_real();
          LOWORD(v161) = 14964;
          HIWORD(v161) = (unsigned int)"tor.c" >> 16;
          json_object_set_new(v150, v161, v160);
          v162 = BUFX_strdup((char *)&v254);
          LOWORD(v163) = 14976;
          HIWORD(v163) = (unsigned int)"n %d device %d alive chip count %d avg hashrate %s 30min avg hashrate %s hw %llu\n" >> 16;
          json_object_set_new(v150, v163, v162);
          v164 = BUFX_strdup(s1);
          LOWORD(v165) = 14980;
          HIWORD(v165) = (unsigned int)" device %d alive chip count %d avg hashrate %s 30min avg hashrate %s hw %llu\n" >> 16;
          json_object_set_new(v150, v165, v164);
          LOWORD(v166) = 9820;
          HIWORD(v166) = (unsigned int)"RIBE_SUCCESS" >> 16;
          json_object_set_new(v144, v166, v150);
          v167 = json_null();
          LOWORD(v168) = -20764;
          HIWORD(v168) = (unsigned int)&unk_13CFAC >> 16;
          json_object_set_new(v144, v168, v167);
        }
        else
        {
          LOWORD(v197) = 14988;
          HIWORD(v197) = (unsigned int)"%d alive chip count %d avg hashrate %s 30min avg hashrate %s hw %llu\n" >> 16;
          sub_407BC(v144, (_DWORD *)1, v197);
        }
        v49 = json_dumps(v144, 0);
        v11 = stratum_send_line((int *)a2, v49);
        if ( v144 )
        {
          if ( v144[1] != -1 )
          {
            v169 = v144 + 1;
            __dmb(0xBu);
            do
            {
              v170 = __ldrex(v169);
              v171 = v170 - 1;
            }
            while ( __strex(v171, v169) );
            if ( !v171 )
              json_delete(v144);
          }
        }
        if ( !v49 )
          goto LABEL_11;
LABEL_41:
        free(v49);
        goto LABEL_11;
      }
      LOWORD(v33) = 15000;
      HIWORD(v33) = (unsigned int)"p count %d avg hashrate %s 30min avg hashrate %s hw %llu\n" >> 16;
      if ( !strcasecmp(v8, v33) )
      {
        if ( !v26 || *v26 == 7 )
          goto LABEL_10;
        v174 = json_object();
        v117 = v174;
        if ( v26[1] != -1 )
        {
          v175 = v26 + 1;
          do
            v176 = __ldrex(v175);
          while ( __strex(v176 + 1, v175) );
          __dmb(0xBu);
        }
        LOWORD(v177) = 13888;
        HIWORD(v177) = (unsigned int)"e last_30min: %f" >> 16;
        json_object_set_new(v174, v177, v26);
        v178 = json_null();
        LOWORD(v179) = -20764;
        HIWORD(v179) = (unsigned int)&unk_13CFAC >> 16;
        json_object_set_new(v117, v179, v178);
        v180 = BUFX_strdup("GodMiner/1.0.0");
        LOWORD(v181) = 9820;
        HIWORD(v181) = (unsigned int)"RIBE_SUCCESS" >> 16;
        json_object_set_new(v117, v181, v180);
        v125 = json_dumps(v117, 0);
        v11 = stratum_send_line((int *)a2, v125);
        if ( v117 && v117[1] != -1 )
        {
          v182 = v117 + 1;
          __dmb(0xBu);
          do
          {
            v183 = __ldrex(v182);
            v128 = v183 - 1;
          }
          while ( __strex(v128, v182) );
LABEL_90:
          if ( !v128 )
            json_delete(v117);
        }
      }
      else
      {
        LOWORD(v34) = 15020;
        HIWORD(v34) = (unsigned int)"ate %s 30min avg hashrate %s hw %llu\n" >> 16;
        if ( !strcasecmp(v8, v34) )
        {
          v35 = json_array_get(v10, 0);
          if ( v35 )
          {
            V_LOCK();
            v36 = json_string_value(v35);
            LOWORD(v37) = 15040;
            HIWORD(v37) = (unsigned int)"hrate %s hw %llu\n" >> 16;
            logfmt_raw(s, 0x1000u, 0, v37, v36);
            V_UNLOCK();
            LOWORD(v38) = -14756;
            HIWORD(v38) = (unsigned int)&unk_16E68C >> 16;
            LOWORD(v39) = 13488;
            HIWORD(v39) = (unsigned int)"ction_to_pool" >> 16;
            zlog(*v38, v39, 163, "stratum_show_message", 20, 700, 60, s);
          }
          if ( !v26 || *v26 == 7 )
          {
            v11 = 1;
            goto LABEL_11;
          }
          v40 = json_object();
          v41 = v40;
          if ( v26[1] != -1 )
          {
            v42 = v26 + 1;
            do
              v43 = __ldrex(v42);
            while ( __strex(v43 + 1, v42) );
            __dmb(0xBu);
          }
          LOWORD(v44) = 13888;
          HIWORD(v44) = (unsigned int)"e last_30min: %f" >> 16;
          json_object_set_new(v40, v44, v26);
          v45 = json_null();
          LOWORD(v46) = -20764;
          HIWORD(v46) = (unsigned int)&unk_13CFAC >> 16;
          json_object_set_new(v41, v46, v45);
          v47 = json_true();
          LOWORD(v48) = 9820;
          HIWORD(v48) = (unsigned int)"RIBE_SUCCESS" >> 16;
          json_object_set_new(v41, v48, v47);
          v49 = json_dumps(v41, 0);
          v11 = stratum_send_line((int *)a2, v49);
          if ( v41 )
          {
            if ( v41[1] != -1 )
            {
              v50 = v41 + 1;
              __dmb(0xBu);
              do
              {
                v51 = __ldrex(v50);
                v52 = v51 - 1;
              }
              while ( __strex(v52, v50) );
              if ( !v52 )
                json_delete(v41);
            }
          }
          goto LABEL_41;
        }
        V_LOCK();
        LOWORD(v184) = 9912;
        HIWORD(v184) = (unsigned int)"PDATE" >> 16;
        logfmt_raw(s, 0x1000u, 0, v184, v8);
        V_UNLOCK();
        LOWORD(v185) = -14756;
        HIWORD(v185) = (unsigned int)&unk_16E68C >> 16;
        LOWORD(v186) = 13488;
        HIWORD(v186) = (unsigned int)"ction_to_pool" >> 16;
        zlog(*v185, v186, 163, "stratum_handle_method_grin29", 28, 820, 80, s);
        if ( !v26 || *v26 == 7 )
          goto LABEL_10;
        v187 = json_object();
        v117 = v187;
        if ( v26[1] != -1 )
        {
          v188 = v26 + 1;
          do
            v189 = __ldrex(v188);
          while ( __strex(v189 + 1, v188) );
          __dmb(0xBu);
        }
        LOWORD(v190) = 13888;
        HIWORD(v190) = (unsigned int)"e last_30min: %f" >> 16;
        json_object_set_new(v187, v190, v26);
        v191 = json_false();
        LOWORD(v192) = 9820;
        HIWORD(v192) = (unsigned int)"RIBE_SUCCESS" >> 16;
        json_object_set_new(v117, v192, v191);
        LOWORD(v193) = 15064;
        HIWORD(v193) = (unsigned int)"llu nc %llu chip status str %s detail:\n" >> 16;
        sub_407BC(v117, (_DWORD *)0x26, v193);
        v125 = json_dumps(v117, 0);
        v11 = stratum_send_line((int *)a2, v125);
        if ( v117 && v117[1] != -1 )
        {
          v194 = v117 + 1;
          __dmb(0xBu);
          do
          {
            v195 = __ldrex(v194);
            v128 = v195 - 1;
          }
          while ( __strex(v128, v194) );
          goto LABEL_90;
        }
      }
LABEL_92:
      if ( v125 )
        free(v125);
      goto LABEL_11;
    }
    V_LOCK();
    LOWORD(v113) = 14868;
    HIWORD(v113) = (unsigned int)"ld/rootfs/buildroot/tmp/release/build/godminer-origin_master/miner_util/miner_monitor/miner_monitor.c" >> 16;
    logfmt_raw(s, 0x1000u, 0, v113);
    V_UNLOCK();
    LOWORD(v114) = -14756;
    HIWORD(v114) = (unsigned int)&unk_16E68C >> 16;
    LOWORD(v115) = 13488;
    HIWORD(v115) = (unsigned int)"ction_to_pool" >> 16;
    zlog(*v114, v115, 163, "stratum_handle_method_grin29", 28, 800, 60, s);
    memset(s, 0, 0x40u);
    if ( v26 && *v26 != 7 )
    {
      get_currentalgo(s, 0x40u);
      v116 = json_object();
      v117 = v116;
      if ( v26[1] != -1 )
      {
        v118 = v26 + 1;
        do
          v119 = __ldrex(v118);
        while ( __strex(v119 + 1, v118) );
        __dmb(0xBu);
      }
      LOWORD(v120) = 13888;
      HIWORD(v120) = (unsigned int)"e last_30min: %f" >> 16;
      json_object_set_new(v116, v120, v26);
      v121 = json_null();
      LOWORD(v122) = -20764;
      HIWORD(v122) = (unsigned int)&unk_13CFAC >> 16;
      json_object_set_new(v117, v122, v121);
      v123 = BUFX_strdup(s);
      LOWORD(v124) = 9820;
      HIWORD(v124) = (unsigned int)"RIBE_SUCCESS" >> 16;
      json_object_set_new(v117, v124, v123);
      v125 = json_dumps(v117, 0);
      v11 = stratum_send_line((int *)a2, v125);
      if ( !v117 || v117[1] == -1 )
        goto LABEL_92;
      v126 = v117 + 1;
      __dmb(0xBu);
      do
      {
        v127 = __ldrex(v126);
        v128 = v127 - 1;
      }
      while ( __strex(v128, v126) );
      goto LABEL_90;
    }
  }
LABEL_11:
  if ( *((_DWORD *)v6 + 1) != -1 )
  {
    v16 = (unsigned int *)v6 + 1;
    __dmb(0xBu);
    do
    {
      v17 = __ldrex(v16);
      v18 = v17 - 1;
    }
    while ( __strex(v18, v16) );
    if ( !v18 )
      json_delete(v6);
  }
  return v11;
}
