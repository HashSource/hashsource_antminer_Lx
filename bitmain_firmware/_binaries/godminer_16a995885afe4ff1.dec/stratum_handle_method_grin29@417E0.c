int __fastcall stratum_handle_method_grin29(int a1, int a2, int a3)
{
  double v3; // d0
  double *v5; // r0
  double *v6; // r4
  _DWORD *v7; // r0
  const char *v8; // r9
  _DWORD *v9; // r7
  int v10; // r5
  _BYTE *v11; // r1
  int v12; // r0
  unsigned int *v13; // r3
  unsigned int v14; // r2
  unsigned int v15; // r2
  _DWORD *v17; // r10
  _DWORD *v18; // r5
  _DWORD *v19; // r0
  _DWORD *v20; // r0
  _DWORD *v21; // r7
  unsigned int *v22; // r3
  unsigned int v23; // r2
  _DWORD *v24; // r0
  _DWORD *v25; // r0
  char *v26; // r8
  unsigned int *v27; // r3
  unsigned int v28; // r2
  unsigned int v29; // r2
  int v30; // r11
  _DWORD *v31; // r0
  _DWORD *v32; // r0
  unsigned __int8 *v33; // r0
  int v34; // r2
  unsigned int v35; // r10
  unsigned int v36; // r1
  _DWORD *v37; // r0
  _DWORD *v38; // r0
  char *v39; // r10
  _DWORD *v40; // r0
  _DWORD *v41; // r0
  int v42; // r0
  _DWORD *v43; // r10
  _DWORD *v44; // r0
  _DWORD *v45; // r0
  _DWORD *v46; // r0
  const char *v47; // r0
  int v48; // r2
  _DWORD *v49; // r0
  char *v50; // r8
  _DWORD *v51; // r0
  int v52; // r0
  int v53; // r7
  void *v54; // r0
  size_t v55; // r9
  void *v56; // r0
  int v57; // r12
  int v58; // r2
  _DWORD *v59; // r0
  _DWORD *v60; // r0
  unsigned __int8 *v61; // r0
  _DWORD *v62; // r0
  const char *v63; // r9
  _DWORD *v64; // r0
  int v65; // r7
  _BOOL4 v66; // r5
  size_t v67; // r0
  char *v68; // r8
  void *v69; // r0
  _DWORD *v70; // r0
  _DWORD *v71; // r8
  unsigned int *v72; // r3
  unsigned int v73; // r2
  _DWORD *v74; // r0
  char *v75; // r0
  char *v76; // r7
  unsigned int *v77; // r3
  unsigned int v78; // r2
  unsigned int v79; // r2
  _DWORD *v80; // r0
  _DWORD *v81; // r0
  _DWORD *v82; // r0
  const char *v83; // r0
  _DWORD *v84; // r0
  _DWORD *v85; // r0
  _DWORD *v86; // r0
  _DWORD *v87; // r0
  _DWORD *v88; // r3
  bool v89; // zf
  bool v90; // zf
  signed int v91; // r7
  _DWORD *v92; // r0
  _DWORD *v93; // r7
  unsigned int *v94; // r3
  unsigned int v95; // r2
  _DWORD *v96; // r5
  char *v97; // r0
  char *v98; // r0
  _DWORD *v99; // r0
  _DWORD *v100; // r0
  _DWORD *v101; // r0
  double *v102; // r0
  char *v103; // r0
  char *v104; // r0
  _DWORD *v105; // r0
  unsigned int *v106; // r3
  unsigned int v107; // r2
  unsigned int v108; // r2
  _DWORD *v109; // r0
  _DWORD *v110; // r0
  _DWORD *v111; // r0
  unsigned int *v112; // r3
  unsigned int v113; // r2
  _DWORD *v114; // r0
  char *v115; // r0
  unsigned int *v116; // r3
  unsigned int v117; // r2
  _DWORD *v118; // r0
  unsigned int *v119; // r3
  unsigned int v120; // r2
  _DWORD *v121; // r0
  unsigned int *v122; // r3
  unsigned int v123; // r2
  const char *v124; // r0
  char *v125; // r0
  _DWORD *v126; // r3
  _DWORD *v127; // r8
  _DWORD *v128; // r0
  const char *v129; // r0
  unsigned __int8 *v130; // r4
  void *v131; // r0
  char *i; // r7
  void *v133; // r0
  void *v134; // t1
  int v135; // r8
  size_t v136; // r5
  size_t v137; // r9
  void *v138; // r0
  size_t v139; // r1
  char *v140; // r0
  int v141; // r12
  const char *v142; // r0
  void *v143; // r0
  int v144; // r1
  unsigned __int8 *v145; // r2
  unsigned int v146; // r1
  bool v147; // cc
  _BOOL4 v148; // r0
  int v149; // r3
  int v150; // r5
  _DWORD *v151; // r2
  int v152; // r3
  void *v153; // r1
  int v154; // r1
  int v155; // r3
  void *v156; // r2
  char *v157; // [sp+10h] [bp-1184h]
  unsigned __int8 *v158; // [sp+10h] [bp-1184h]
  unsigned __int8 *v159; // [sp+14h] [bp-1180h]
  char *s2; // [sp+18h] [bp-117Ch]
  unsigned __int8 *v161; // [sp+1Ch] [bp-1178h]
  int v162; // [sp+20h] [bp-1174h]
  unsigned __int8 *v163; // [sp+20h] [bp-1174h]
  unsigned int v164; // [sp+24h] [bp-1170h]
  unsigned __int8 *v165; // [sp+24h] [bp-1170h]
  int v166; // [sp+28h] [bp-116Ch]
  char *v167; // [sp+2Ch] [bp-1168h]
  unsigned int v168; // [sp+30h] [bp-1164h]
  bool v169; // [sp+30h] [bp-1164h]
  _DWORD *ptr; // [sp+34h] [bp-1160h]
  _DWORD *ptra; // [sp+34h] [bp-1160h]
  char *ptrb; // [sp+34h] [bp-1160h]
  int v173; // [sp+38h] [bp-115Ch]
  double *v174; // [sp+3Ch] [bp-1158h]
  char v175[8]; // [sp+4Ch] [bp-1148h] BYREF
  char s1[64]; // [sp+54h] [bp-1140h] BYREF
  int v177[23]; // [sp+94h] [bp-1100h] BYREF
  char v178[160]; // [sp+F0h] [bp-10A4h] BYREF
  char s[4100]; // [sp+190h] [bp-1004h] BYREF

  v5 = json_loads(a3, 0, (char *)v177);
  v6 = v5;
  if ( !v5 )
  {
    v10 = 0;
    V_LOCK();
    logfmt_raw(s, 0x1000u, 0, "JSON decode failed(%d): %s", v177[0], v178);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/frontend/frontend_grin29/frontend_grin29.c",
      178,
      "stratum_handle_method_grin29",
      28,
      746,
      100,
      s);
    return v10;
  }
  v7 = (_DWORD *)json_object_get(v5, "method");
  v8 = (const char *)json_string_value(v7);
  if ( !v8 )
    goto LABEL_10;
  v9 = (_DWORD *)json_object_get(v6, "params");
  if ( !v9 )
    v9 = (_DWORD *)json_object_get(v6, "result");
  v10 = *(unsigned __int8 *)(a2 + 1824);
  if ( *(_BYTE *)(a2 + 1824) )
  {
    if ( !strcasecmp(v8, "getjobtemplate") || !strcasecmp(v8, "job") )
    {
      v10 = rpc2_job_decode(v9, a2);
      v11 = (_BYTE *)(a2 + 2084);
      v12 = a2;
      if ( v10 )
      {
        pool_tset(a2, v11, 1);
        goto LABEL_11;
      }
LABEL_48:
      pool_tclear(v12, v11, 0);
      goto LABEL_11;
    }
LABEL_10:
    v10 = 0;
    goto LABEL_11;
  }
  v17 = (_DWORD *)json_object_get(v6, "id");
  if ( !strcasecmp(v8, "mining.notify") )
  {
    memset(s1, 0, sizeof(s1));
    get_currentalgo(s1, 0x40u);
    v30 = strcmp(s1, "lbry");
    if ( v30 )
    {
      v30 = strcmp(s1, "phi2");
      if ( v30 )
      {
        v31 = json_array_get(v9, 0);
        s2 = (char *)json_string_value(v31);
        v166 = 0;
        v32 = json_array_get(v9, 1u);
        v33 = (unsigned __int8 *)json_string_value(v32);
        v30 = 0;
        v34 = 4;
        v35 = 3;
        v36 = 2;
        v161 = v33;
        v162 = 2;
        v164 = 5;
        v159 = 0;
        goto LABEL_45;
      }
      if ( json_array_size(v9) != (_DWORD *)10 )
      {
        v59 = json_array_get(v9, 0);
        s2 = (char *)json_string_value(v59);
        v166 = 0;
        v60 = json_array_get(v9, 1u);
        v61 = (unsigned __int8 *)json_string_value(v60);
        v36 = 2;
        v161 = v61;
        v34 = 4;
        v162 = 2;
        v35 = 3;
        v164 = 5;
        v159 = 0;
        goto LABEL_45;
      }
      v109 = json_array_get(v9, 0);
      s2 = (char *)json_string_value(v109);
      v110 = json_array_get(v9, 1u);
      v161 = (unsigned __int8 *)json_string_value(v110);
LABEL_96:
      v82 = json_array_get(v9, 2u);
      v83 = (const char *)json_string_value(v82);
      v159 = (unsigned __int8 *)v83;
      if ( !v83 || strlen(v83) != 128 )
      {
        V_LOCK();
        logfmt_raw(s, 0x1000u, 0, "Stratum notify: invalid UTXO root parameter");
        V_UNLOCK();
        v48 = 206;
        goto LABEL_59;
      }
      v36 = 3;
      v166 = 0;
      v162 = 3;
      v34 = 5;
      v164 = 6;
      v35 = 4;
      v30 = 1;
      goto LABEL_45;
    }
    v43 = json_array_size(v9);
    if ( !strcmp(s1, "phi2") && json_array_size(v9) == (_DWORD *)10 )
    {
      v80 = json_array_get(v9, 0);
      s2 = (char *)json_string_value(v80);
      v81 = json_array_get(v9, 1u);
      v161 = (unsigned __int8 *)json_string_value(v81);
      if ( v43 != (_DWORD *)10 )
        goto LABEL_96;
      v30 = 1;
    }
    else
    {
      v44 = json_array_get(v9, 0);
      s2 = (char *)json_string_value(v44);
      v45 = json_array_get(v9, 1u);
      v161 = (unsigned __int8 *)json_string_value(v45);
      if ( v43 != (_DWORD *)10 )
      {
        v36 = 2;
        v166 = 0;
        v34 = 4;
        v159 = 0;
        v162 = 2;
        v35 = 3;
        v164 = 5;
        goto LABEL_45;
      }
    }
    v46 = json_array_get(v9, 2u);
    v47 = (const char *)json_string_value(v46);
    v159 = (unsigned __int8 *)v47;
    if ( !v47 || strlen(v47) != 64 )
    {
      V_LOCK();
      logfmt_raw(s, 0x1000u, 0, "Stratum notify: invalid claim parameter");
      V_UNLOCK();
      v48 = 199;
      goto LABEL_59;
    }
    v36 = 3;
    v164 = 6;
    v34 = 5;
    v162 = 3;
    v35 = 4;
    v166 = 1;
LABEL_45:
    v157 = (char *)v34;
    v37 = json_array_get(v9, v36);
    v167 = (char *)json_string_value(v37);
    v38 = json_array_get(v9, v35);
    v39 = (char *)json_string_value(v38);
    v40 = json_array_get(v9, (unsigned int)v157);
    if ( !v40 || *v40 != 1 )
      goto LABEL_47;
    ptr = v40;
    v173 = (int)json_array_size(v40);
    v84 = json_array_get(v9, v164);
    v158 = (unsigned __int8 *)json_string_value(v84);
    v168 = v162 + 6;
    v85 = json_array_get(v9, v162 + 4);
    v165 = (unsigned __int8 *)json_string_value(v85);
    v86 = json_array_get(v9, v162 + 5);
    v163 = (unsigned __int8 *)json_string_value(v86);
    v87 = json_array_get(v9, v168);
    v88 = ptr;
    if ( v87 )
    {
      v169 = *json_array_get(v9, v168) == 5;
      v88 = ptr;
    }
    else
    {
      v169 = 0;
    }
    v89 = v161 == 0;
    if ( v161 )
      v89 = s2 == 0;
    if ( !v89 )
    {
      v90 = v39 == 0;
      if ( v39 )
        v90 = v167 == 0;
      if ( !v90 )
      {
        if ( v158 )
          v91 = v165 == 0;
        else
          v91 = 1;
        if ( !v163 )
          v91 = 1;
        if ( !v91 )
        {
          ptra = v88;
          if ( strlen((const char *)v161) == 64
            && strlen((const char *)v158) == 8
            && strlen((const char *)v165) == 8
            && strlen((const char *)v163) == 8 )
          {
            v125 = (char *)malloc(4 * v173);
            v126 = ptra;
            ptrb = v125;
            v127 = v126;
            v174 = v6;
            while ( v173 > v91 )
            {
              v128 = json_array_get(v127, v91);
              v129 = (const char *)json_string_value(v128);
              v130 = (unsigned __int8 *)v129;
              if ( !v129 || strlen(v129) != 64 )
              {
                v6 = v174;
                for ( i = &ptrb[4 * v91]; i != ptrb; i -= 4 )
                {
                  v134 = (void *)*((_DWORD *)i - 1);
                  v133 = v134;
                  if ( v134 )
                    free(v133);
                }
                if ( i )
                  free(i);
                V_LOCK();
                logfmt_raw(s, 0x1000u, 0, "Stratum notify: invalid Merkle branch");
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/rel"
                  "ease/build/godminer-origin_master/frontend/frontend_grin29/frontend_grin29.c",
                  178,
                  "stratum_notify",
                  14,
                  235,
                  100,
                  s);
                goto LABEL_47;
              }
              v131 = malloc(0x20u);
              *(_DWORD *)&ptrb[4 * v91++] = v131;
              hex2bin((int)v131, v130, 32);
            }
            v135 = 0;
            v6 = v174;
            pthread_mutex_lock((pthread_mutex_t *)(a2 + 1760));
            v136 = strlen(v167) >> 1;
            v137 = strlen(v39) >> 1;
            v138 = *(void **)(a2 + 292);
            v139 = *(_DWORD *)(a2 + 72) + *(_DWORD *)(a2 + 80) + v136 + v137;
            *(_DWORD *)(a2 + 288) = v139;
            v140 = (char *)realloc(v138, v139);
            v141 = *(_DWORD *)(a2 + 72);
            *(_DWORD *)(a2 + 292) = v140;
            *(_DWORD *)(a2 + 296) = &v140[v136 + v141];
            hex2bin((int)v140, (unsigned __int8 *)v167, v136);
            memcpy((void *)(*(_DWORD *)(a2 + 292) + v136), *(const void **)(a2 + 76), *(_DWORD *)(a2 + 72));
            v142 = *(const char **)(a2 + 88);
            if ( !v142 || strcmp(v142, s2) )
              memset(*(void **)(a2 + 296), 0, *(_DWORD *)(a2 + 80));
            hex2bin(*(_DWORD *)(a2 + 296) + *(_DWORD *)(a2 + 80), (unsigned __int8 *)v39, v137);
            v143 = *(void **)(a2 + 88);
            if ( v143 )
              free(v143);
            *(_DWORD *)(a2 + 88) = _strdup(s2);
            hex2bin(a2 + 92, v161, 32);
            if ( v166 )
              hex2bin(a2 + 372, v159, 32);
            if ( v30 )
              hex2bin(a2 + 372, v159, 64);
            v144 = *(_DWORD *)(a2 + 292);
            v145 = (unsigned __int8 *)(v144 + 32);
            v146 = v144 + 160;
            while ( 1 )
            {
              v147 = 0;
              if ( *v145 != 255 )
                v147 = v146 > (unsigned int)v145;
              if ( !v147 )
                break;
              ++v145;
            }
            while ( 1 )
            {
              v148 = *v145 == 255;
              if ( v146 <= (unsigned int)v145 )
                v148 = 0;
              if ( !v148 )
                break;
              ++v145;
            }
            v149 = 0;
            if ( *(v145 - 1) == 255 && *(v145 - 2) == 255 )
            {
              v154 = v145[1];
              v149 = (unsigned __int16)(v145[2] + (v145[3] << 8));
              if ( v154 == 3 )
              {
                v149 += v145[4] << 16;
              }
              else if ( v154 == 4 )
              {
                v149 += (v145[4] + (v145[5] << 8)) << 16;
              }
            }
            *(_DWORD *)(a2 + 1812) = v149;
            v150 = 0;
            v151 = *(_DWORD **)(a2 + 320);
            v152 = *(_DWORD *)(a2 + 316);
            while ( v150 < v152 )
            {
              v153 = (void *)v151[v150++];
              if ( v153 )
              {
                free(v153);
                v151 = *(_DWORD **)(a2 + 320);
                v152 = *(_DWORD *)(a2 + 316);
              }
            }
            if ( v151 )
              free(v151);
            *(_DWORD *)(a2 + 320) = ptrb;
            v155 = v173;
            *(_DWORD *)(a2 + 316) = v173;
            while ( v135 < v155 )
            {
              v156 = *(void **)&ptrb[4 * v135++];
              if ( v156 )
              {
                free(v156);
                v155 = *(_DWORD *)(a2 + 316);
              }
            }
            if ( ptrb )
              free(ptrb);
            v10 = 1;
            hex2bin(a2 + 324, v158, 4);
            hex2bin(a2 + 336, v165, 4);
            hex2bin(a2 + 348, v163, 4);
            *(_BYTE *)(a2 + 436) = v169;
            *(_QWORD *)(a2 + 440) = *(_QWORD *)(a2 + 1976);
            pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1760));
            pool_tset(a2, (_BYTE *)(a2 + 2084), 1);
            goto LABEL_11;
          }
        }
      }
    }
    V_LOCK();
    logfmt_raw(s, 0x1000u, 0, "Stratum notify: invalid parameters");
    V_UNLOCK();
    v48 = 224;
LABEL_59:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/frontend/frontend_grin29/frontend_grin29.c",
      178,
      "stratum_notify",
      14,
      v48,
      100,
      s);
LABEL_47:
    v12 = a2;
    v11 = (_BYTE *)(a2 + 2084);
    goto LABEL_48;
  }
  if ( !strcasecmp(v8, "mining.ping") )
  {
    V_LOCK();
    logfmt_raw(s, 0x1000u, v10, "Pool ping");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/frontend/frontend_grin29/frontend_grin29.c",
      178,
      "stratum_handle_method_grin29",
      28,
      782,
      20,
      s);
    if ( v17 && *v17 != 7 )
    {
      v42 = json_integer_value((int)v17);
      sprintf(s, "{\"id\":%d,\"result\":\"pong\",\"error\":null}", v42);
      v10 = stratum_send_line((int *)a2, s);
    }
    goto LABEL_11;
  }
  if ( !strcasecmp(v8, "mining.set_difficulty") )
  {
    v41 = json_array_get(v9, v10);
    json_number_value((int)v41);
    if ( v3 != 0.0 )
    {
      v10 = 1;
      pthread_mutex_lock((pthread_mutex_t *)(a2 + 1760));
      *(double *)(a2 + 1976) = v3;
      pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1760));
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  if ( !strcasecmp(v8, "mining.set_extranonce") )
  {
    v49 = json_array_get(v9, v10);
    v50 = (char *)json_string_value(v49);
    if ( v50 )
    {
      v51 = json_array_get(v9, 1u);
      v52 = json_integer_value((int)v51);
      v53 = v52;
      if ( v52 )
      {
        if ( (unsigned int)(v52 - 2) > 0xE )
        {
          V_LOCK();
          logfmt_raw(s, 0x1000u, v10, "Failed to get valid n2size in parse_extranonce");
          V_UNLOCK();
          v57 = 40;
          v58 = 331;
        }
        else
        {
          pthread_mutex_lock((pthread_mutex_t *)(a2 + 1760));
          v54 = *(void **)(a2 + 76);
          if ( v54 )
            free(v54);
          v55 = strlen(v50) >> 1;
          *(_DWORD *)(a2 + 72) = v55;
          v56 = calloc(1u, v55);
          *(_DWORD *)(a2 + 76) = v56;
          if ( !v56 )
          {
            V_LOCK();
            logfmt_raw(s, 0x1000u, 0, "Failed to alloc xnonce1");
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release"
              "/build/godminer-origin_master/frontend/frontend_grin29/frontend_grin29.c",
              178,
              "stratum_parse_extranonce",
              24,
              340,
              100,
              s);
            pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1760));
            goto LABEL_11;
          }
          hex2bin((int)v56, (unsigned __int8 *)v50, v55);
          *(_DWORD *)(a2 + 80) = v53;
          pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1760));
          v10 = 1;
          V_LOCK();
          logfmt_raw(s, 0x1000u, 0, "Stratum set nonce %s with extranonce2 size=%d", v50, v53);
          V_UNLOCK();
          v57 = 20;
          v58 = 350;
        }
      }
      else
      {
        V_LOCK();
        logfmt_raw(s, 0x1000u, v10, "Failed to get extranonce2_size");
        V_UNLOCK();
        v57 = 100;
        v58 = 327;
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(s, 0x1000u, v10, "Failed to get extranonce1");
      V_UNLOCK();
      v57 = 100;
      v58 = 322;
    }
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/frontend/frontend_grin29/frontend_grin29.c",
      178,
      "stratum_parse_extranonce",
      24,
      v58,
      v57,
      s);
  }
  else
  {
    if ( !strcasecmp(v8, "client.reconnect") )
    {
      v62 = json_array_get(v9, 0);
      v63 = (const char *)json_string_value(v62);
      v64 = json_array_get(v9, 1u);
      if ( v64 && *v64 == 2 )
      {
        v124 = (const char *)json_string_value(v64);
        v65 = strtol(v124, 0, 10);
      }
      else
      {
        v65 = json_integer_value((int)v64);
      }
      if ( v63 )
        v66 = v65 == 0;
      else
        v66 = 1;
      if ( !v66 )
      {
        v67 = strlen(v63);
        v68 = (char *)malloc(v67 + 32);
        sprintf(v68, "stratum+tcp://%s:%d", v63, v65);
        V_LOCK();
        logfmt_raw(s, 0x1000u, 0, "Server requested reconnection to %s", v68);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/bui"
          "ld/godminer-origin_master/frontend/frontend_grin29/frontend_grin29.c",
          178,
          "stratum_reconnect",
          17,
          476,
          60,
          s);
        v69 = *(void **)(a2 + 28);
        if ( v69 )
          free(v69);
        *(_DWORD *)(a2 + 28) = v68;
        free(v68);
        v10 = 1;
        stratum_disconnect((int *)a2);
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    if ( strcasecmp(v8, "client.get_algo") )
    {
      if ( !strcasecmp(v8, "client.get_stats") )
      {
        if ( !v17 || *v17 == 7 )
          goto LABEL_10;
        v92 = json_object();
        v93 = v92;
        if ( v17[1] != -1 )
        {
          v94 = v17 + 1;
          do
            v95 = __ldrex(v94);
          while ( __strex(v95 + 1, v94) );
          __dmb(0xBu);
        }
        json_object_set_new(v92, "id", v17);
        if ( *(_BYTE *)(a2 + 1816) )
        {
          memset(s, 0, 0x40u);
          memset(s1, 0, 0x20u);
          get_currentalgo(s, 0x40u);
          strcpy(v175, "linux");
          sprintf(s1, "GCC %d.%d.%d\n", 7, 2, 1);
          s1[31] = 0;
          v96 = json_object();
          v97 = BUFX_strdup(s);
          json_object_set_new(v96, "algo", v97);
          v98 = BUFX_strdup("cpu");
          json_object_set_new(v96, "type", v98);
          v99 = json_integer(0);
          json_object_set_new(v96, "freq", v99);
          v100 = json_integer(0);
          json_object_set_new(v96, "memf", v100);
          v101 = json_integer(0);
          json_object_set_new(v96, "power", v101);
          v102 = json_real();
          json_object_set_new(v96, "intensity", v102);
          v103 = BUFX_strdup(v175);
          json_object_set_new(v96, "os", v103);
          v104 = BUFX_strdup(s1);
          json_object_set_new(v96, "driver", v104);
          json_object_set_new(v93, "result", v96);
          v105 = json_null();
          json_object_set_new(v93, "error", v105);
        }
        else
        {
          sub_4052C(v93, (_DWORD *)1, "disabled");
        }
        v26 = json_dumps(v93, 0);
        v10 = stratum_send_line((int *)a2, v26);
        if ( v93 )
        {
          if ( v93[1] != -1 )
          {
            v106 = v93 + 1;
            __dmb(0xBu);
            do
            {
              v107 = __ldrex(v106);
              v108 = v107 - 1;
            }
            while ( __strex(v108, v106) );
            if ( !v108 )
              json_delete(v93);
          }
        }
        if ( !v26 )
          goto LABEL_11;
LABEL_41:
        free(v26);
        goto LABEL_11;
      }
      if ( !strcasecmp(v8, "client.get_version") )
      {
        if ( !v17 || *v17 == 7 )
          goto LABEL_10;
        v111 = json_object();
        v71 = v111;
        if ( v17[1] != -1 )
        {
          v112 = v17 + 1;
          do
            v113 = __ldrex(v112);
          while ( __strex(v113 + 1, v112) );
          __dmb(0xBu);
        }
        json_object_set_new(v111, "id", v17);
        v114 = json_null();
        json_object_set_new(v71, "error", v114);
        v115 = BUFX_strdup("GodMiner/1.0.0");
        json_object_set_new(v71, "result", v115);
        v76 = json_dumps(v71, 0);
        v10 = stratum_send_line((int *)a2, v76);
        if ( v71 && v71[1] != -1 )
        {
          v116 = v71 + 1;
          __dmb(0xBu);
          do
          {
            v117 = __ldrex(v116);
            v79 = v117 - 1;
          }
          while ( __strex(v79, v116) );
LABEL_90:
          if ( !v79 )
            json_delete(v71);
        }
      }
      else
      {
        if ( !strcasecmp(v8, "client.show_message") )
        {
          v18 = json_array_get(v9, 0);
          if ( v18 )
          {
            V_LOCK();
            v19 = json_string_value(v18);
            logfmt_raw(s, 0x1000u, 0, "MESSAGE FROM SERVER: %s", v19);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release"
              "/build/godminer-origin_master/frontend/frontend_grin29/frontend_grin29.c",
              178,
              "stratum_show_message",
              20,
              700,
              60,
              s);
          }
          if ( !v17 || *v17 == 7 )
          {
            v10 = 1;
            goto LABEL_11;
          }
          v20 = json_object();
          v21 = v20;
          if ( v17[1] != -1 )
          {
            v22 = v17 + 1;
            do
              v23 = __ldrex(v22);
            while ( __strex(v23 + 1, v22) );
            __dmb(0xBu);
          }
          json_object_set_new(v20, "id", v17);
          v24 = json_null();
          json_object_set_new(v21, "error", v24);
          v25 = json_true();
          json_object_set_new(v21, "result", v25);
          v26 = json_dumps(v21, 0);
          v10 = stratum_send_line((int *)a2, v26);
          if ( v21 )
          {
            if ( v21[1] != -1 )
            {
              v27 = v21 + 1;
              __dmb(0xBu);
              do
              {
                v28 = __ldrex(v27);
                v29 = v28 - 1;
              }
              while ( __strex(v29, v27) );
              if ( !v29 )
                json_delete(v21);
            }
          }
          goto LABEL_41;
        }
        V_LOCK();
        logfmt_raw(s, 0x1000u, 0, "unknown stratum method %s!", v8);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/bui"
          "ld/godminer-origin_master/frontend/frontend_grin29/frontend_grin29.c",
          178,
          "stratum_handle_method_grin29",
          28,
          820,
          80,
          s);
        if ( !v17 || *v17 == 7 )
          goto LABEL_10;
        v118 = json_object();
        v71 = v118;
        if ( v17[1] != -1 )
        {
          v119 = v17 + 1;
          do
            v120 = __ldrex(v119);
          while ( __strex(v120 + 1, v119) );
          __dmb(0xBu);
        }
        json_object_set_new(v118, "id", v17);
        v121 = json_false();
        json_object_set_new(v71, "result", v121);
        sub_4052C(v71, (_DWORD *)0x26, "unknown method");
        v76 = json_dumps(v71, 0);
        v10 = stratum_send_line((int *)a2, v76);
        if ( v71 && v71[1] != -1 )
        {
          v122 = v71 + 1;
          __dmb(0xBu);
          do
          {
            v123 = __ldrex(v122);
            v79 = v123 - 1;
          }
          while ( __strex(v79, v122) );
          goto LABEL_90;
        }
      }
LABEL_92:
      if ( v76 )
        free(v76);
      goto LABEL_11;
    }
    V_LOCK();
    logfmt_raw(s, 0x1000u, 0, "Pool asked your algo parameter");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/frontend/frontend_grin29/frontend_grin29.c",
      178,
      "stratum_handle_method_grin29",
      28,
      800,
      60,
      s);
    memset(s, 0, 0x40u);
    if ( v17 && *v17 != 7 )
    {
      get_currentalgo(s, 0x40u);
      v70 = json_object();
      v71 = v70;
      if ( v17[1] != -1 )
      {
        v72 = v17 + 1;
        do
          v73 = __ldrex(v72);
        while ( __strex(v73 + 1, v72) );
        __dmb(0xBu);
      }
      json_object_set_new(v70, "id", v17);
      v74 = json_null();
      json_object_set_new(v71, "error", v74);
      v75 = BUFX_strdup(s);
      json_object_set_new(v71, "result", v75);
      v76 = json_dumps(v71, 0);
      v10 = stratum_send_line((int *)a2, v76);
      if ( !v71 || v71[1] == -1 )
        goto LABEL_92;
      v77 = v71 + 1;
      __dmb(0xBu);
      do
      {
        v78 = __ldrex(v77);
        v79 = v78 - 1;
      }
      while ( __strex(v79, v77) );
      goto LABEL_90;
    }
  }
LABEL_11:
  if ( *((_DWORD *)v6 + 1) != -1 )
  {
    v13 = (unsigned int *)v6 + 1;
    __dmb(0xBu);
    do
    {
      v14 = __ldrex(v13);
      v15 = v14 - 1;
    }
    while ( __strex(v15, v13) );
    if ( !v15 )
      json_delete(v6);
  }
  return v10;
}
