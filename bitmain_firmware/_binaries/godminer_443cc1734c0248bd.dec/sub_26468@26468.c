int __fastcall sub_26468(_DWORD *a1, int a2)
{
  int v3; // r9
  _DWORD *v4; // r4
  char *v5; // r0
  char *v6; // r0
  char *v7; // r0
  char *v8; // r0
  int v9; // r8
  float v10; // s24
  float v11; // s18
  float v12; // s20
  double v13; // d11
  char *all_created_runtime; // r5
  __int64 v15; // r6
  _DWORD *v16; // r4
  _QWORD *v17; // r0
  char *v18; // r0
  _QWORD *v19; // r0
  double *v20; // r0
  double *v21; // r0
  double *v22; // r0
  double v23; // d7
  double *v24; // r0
  _QWORD *v25; // r0
  _QWORD *v26; // r0
  int *v27; // r3
  __int64 v28; // r0
  int v29; // r2
  _QWORD *v30; // r0
  _QWORD *v31; // r0
  int v32; // r5
  int v33; // r6
  int v34; // t1
  _QWORD *v35; // r0
  int v36; // r12
  unsigned int v37; // r0
  char *v38; // r1
  int v39; // r2
  int v40; // r3
  _QWORD *v41; // r0
  int v42; // r10
  char *v43; // r5
  int v44; // r11
  int *v45; // r0
  int v46; // r9
  int v47; // r3
  int v48; // r8
  int v49; // r2
  _QWORD *v50; // r0
  int *v51; // r0
  int v52; // r2
  int v53; // r8
  _QWORD *v54; // r0
  size_t *v55; // r8
  char *v56; // r7
  int v57; // r5
  int v58; // t1
  int v59; // r1
  size_t v60; // t1
  char *v61; // r0
  char *v62; // r7
  char *v63; // r5
  int v64; // r6
  int v65; // t1
  char *v66; // r0
  char *v67; // r7
  char *v68; // r5
  int v69; // r6
  int v70; // t1
  char *v71; // r0
  char *v72; // r10
  char *v73; // r5
  int v74; // r6
  int v75; // t1
  char *v76; // r0
  _QWORD *v77; // r0
  char *v78; // r7
  int v79; // r6
  char *v80; // r9
  char *v81; // r8
  const char **v82; // r5
  int v83; // t1
  int v84; // r0
  _QWORD *v85; // r0
  int v86; // r6
  int v87; // t1
  char *v88; // r0
  char *v89; // r10
  char *v90; // r6
  int v91; // r8
  __int64 v92; // kr00_8
  int v93; // t1
  unsigned int v94; // r7
  unsigned int v95; // r11
  _QWORD *v96; // r0
  __int64 v97; // r0
  _QWORD *v98; // r0
  char *v99; // r7
  char *v100; // r9
  char *v101; // r8
  char *v102; // r5
  int v103; // r6
  int v104; // t1
  double *v105; // r0
  int v106; // r6
  int v107; // t1
  char *v108; // r0
  char *v109; // r10
  char *v110; // r7
  int v111; // r5
  int v112; // t1
  int v113; // r0
  _QWORD *v114; // r0
  char *v115; // r0
  char *v116; // r0
  _QWORD *v117; // r0
  double v119; // d0
  char *v120; // r4
  char *v121; // r0
  char *v122; // r6
  char *v123; // r7
  int v124; // t1
  bool v125; // cc
  char *v126; // [sp+10h] [bp-1234h]
  int v127; // [sp+14h] [bp-1230h]
  int *v128; // [sp+18h] [bp-122Ch]
  char *ptr; // [sp+28h] [bp-121Ch]
  int v131; // [sp+30h] [bp-1214h]
  _DWORD *v132; // [sp+34h] [bp-1210h]
  __int64 v133; // [sp+38h] [bp-120Ch]
  int v134; // [sp+48h] [bp-11FCh] BYREF
  int v135; // [sp+4Ch] [bp-11F8h] BYREF
  int v136; // [sp+50h] [bp-11F4h] BYREF
  int v137; // [sp+54h] [bp-11F0h] BYREF
  double v138; // [sp+58h] [bp-11ECh] BYREF
  char v139[12]; // [sp+64h] [bp-11E0h] BYREF
  char v140[4]; // [sp+70h] [bp-11D4h] BYREF
  int v141; // [sp+74h] [bp-11D0h]
  int v142; // [sp+78h] [bp-11CCh]
  int v143; // [sp+7Ch] [bp-11C8h]
  char s[32]; // [sp+80h] [bp-11C4h] BYREF
  char v145[32]; // [sp+A0h] [bp-11A4h] BYREF
  char v146[32]; // [sp+C0h] [bp-1184h] BYREF
  char v147[32]; // [sp+E0h] [bp-1164h] BYREF
  char v148[32]; // [sp+100h] [bp-1144h] BYREF
  char v149[4]; // [sp+120h] [bp-1124h] BYREF
  char v150[256]; // [sp+140h] [bp-1104h] BYREF
  char v151[4]; // [sp+240h] [bp-1004h] BYREF
  int v152; // [sp+244h] [bp-1000h]
  int v153; // [sp+248h] [bp-FFCh]
  float v154; // [sp+24Ch] [bp-FF8h]
  float v155; // [sp+250h] [bp-FF4h]
  float v156; // [sp+254h] [bp-FF0h]
  double v157; // [sp+258h] [bp-FECh]

  v141 = 0;
  v142 = 0;
  v143 = 0;
  v3 = a1 == 0;
  *(_DWORD *)v140 = 0;
  memset(s, 0, sizeof(s));
  memset(v150, 0, sizeof(v150));
  v134 = 0;
  if ( !a2 )
    v3 = 1;
  if ( v3 )
  {
    V_LOCK();
    logfmt_raw(v151, 0x1000u, 0, "%s: input bad api param", "get_stats_old");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/api_new.c",
      130,
      "get_stats_old",
      13,
      1171,
      100,
      v151);
    return -2147483646;
  }
  else
  {
    sub_23B08(a1, 1, 70, *(const char **)(a2 + 8));
    v132 = json_array();
    v4 = json_object();
    v5 = (char *)BUFX_strdup("2.12");
    json_object_set_new(v4, "BMMiner", v5);
    v6 = (char *)BUFX_strdup(g_miner_version);
    json_object_set_new(v4, "Miner", v6);
    v7 = (char *)BUFX_strdup(g_miner_compiletime);
    json_object_set_new(v4, "CompileTime", v7);
    v8 = (char *)BUFX_strdup(g_miner_type);
    json_object_set_new(v4, "Type", v8);
    json_array_append_new(v132, v4);
    read_system_status_from_monitor((int)v151);
    v9 = v152;
    v10 = v154;
    v11 = v155;
    v12 = v156;
    v13 = v157;
    all_created_runtime = (char *)get_all_created_runtime(&v134);
    v131 = frontend_runtime_instance();
    if ( v134 > 0 )
    {
      v128 = (int *)malloc(208 * v134);
      v120 = (char *)v128;
      v121 = (char *)malloc(4 * v134);
      ptr = v121;
      if ( v134 <= 0 )
      {
        v15 = 0;
      }
      else
      {
        v122 = all_created_runtime - 4;
        v123 = v121 - 4;
        do
        {
          v124 = *((_DWORD *)v122 + 1);
          v122 += 4;
          read_status_from_monitor(v120, v124);
          ++v3;
          v120 += 208;
          v125 = v134 <= v3;
          *((_DWORD *)v123 + 1) = *(_DWORD *)(*(_DWORD *)v122 + 140) + 1;
          v123 += 4;
        }
        while ( !v125 );
        v15 = v3;
      }
    }
    else
    {
      v15 = 0;
      ptr = 0;
      v128 = 0;
    }
    v16 = json_object();
    v17 = json_integer(v15);
    json_object_set_new(v16, "STATS", v17);
    snprintf(v140, 0x10u, "BTM_SOC%d", v3);
    v18 = (char *)BUFX_strdup(v140);
    json_object_set_new(v16, "ID", v18);
    format_hashrate_string(*(const char **)(v131 + 84), v145);
    format_hashrate_string(*(const char **)(v131 + 84), v146);
    format_hashrate_string(*(const char **)(v131 + 84), v147);
    format_hashrate_string(*(const char **)(v131 + 84), v148);
    format_hashrate_double(*(const char **)(v131 + 84), &v138, v139);
    get_miner_elapsed_time();
    v19 = json_integer((__int64)v13);
    json_object_set_new(v16, "Elapsed", v19);
    sub_12C58C((__int64)(v10 * v13 * 100.0));
    v20 = json_real();
    json_object_set_new(v16, "GHS 5s", v20);
    sub_12C58C((__int64)(v12 * v13 * 100.0));
    v21 = json_real();
    json_object_set_new(v16, "GHS av", v21);
    sub_12C58C((__int64)(v11 * v13 * 100.0));
    v22 = json_real();
    json_object_set_new(v16, "rate_30m", v22);
    if ( !strcmp(*(const char **)(*(_DWORD *)all_created_runtime + 188), "dash") )
    {
      v119 = v138;
      update_rate_ideal();
      v23 = v119 * 100.0;
    }
    else
    {
      v23 = v138 * 100.0;
    }
    sub_12C58C((__int64)v23);
    v24 = json_real();
    json_object_set_new(v16, "total_rateideal", v24);
    v25 = json_integer(opt_bitmain_work_mode);
    json_object_set_new(v16, "Mode", v25);
    v26 = json_integer(v134);
    json_object_set_new(v16, "miner_count", v26);
    if ( v134 <= 0 )
    {
      v28 = 0x7FFFFFFF;
    }
    else
    {
      v27 = v128;
      LODWORD(v28) = 0x7FFFFFFF;
      do
      {
        v29 = v27[16];
        v27 += 52;
        if ( (int)v28 >= v29 )
          LODWORD(v28) = v29;
      }
      while ( &v128[52 * v134] != v27 );
      v28 = (int)v28;
    }
    v30 = json_integer(v28);
    json_object_set_new(v16, "frequency", v30);
    v31 = json_integer(v9);
    json_object_set_new(v16, "fan_num", v31);
    if ( v9 > 0 )
    {
      v32 = 0;
      v33 = v153 - 4;
      do
      {
        ++v32;
        memset(s, 0, sizeof(s));
        snprintf(s, 0x20u, "fan%d", v32);
        v34 = *(_DWORD *)(v33 + 4);
        v33 += 4;
        v35 = json_integer(v34);
        json_object_set_new(v16, s, v35);
      }
      while ( v32 != v9 );
    }
    if ( v134 <= 0 )
    {
      v133 = -100;
      v37 = 0;
    }
    else
    {
      v36 = -100;
      LOBYTE(v37) = 0;
      v38 = (char *)v128;
      do
      {
        v39 = *((_DWORD *)v38 + 4);
        v40 = *((_DWORD *)v38 + 6);
        v38 += 208;
        if ( v36 < v39 )
          v36 = v39;
        LOBYTE(v37) = v37 + v40 + *((_DWORD *)v38 - 45);
      }
      while ( &v128[52 * v134] != (int *)v38 );
      v37 = (unsigned __int8)v37;
      v133 = v36;
    }
    v41 = json_integer(v37);
    json_object_set_new(v16, "temp_num", v41);
    if ( v134 > 0 )
    {
      v42 = 0;
      v43 = (char *)v128;
      v126 = ptr - 4;
      do
      {
        v44 = *((_DWORD *)v43 + 6);
        v45 = *(int **)v43;
        v135 = 0;
        ++v42;
        v136 = 0;
        v137 = 0;
        v43 += 208;
        *(_DWORD *)v149 = 0;
        find_min_and_max_int(v45, v44, &v135, &v136);
        v46 = *((_DWORD *)v43 - 45);
        find_min_and_max_int(*((int **)v43 - 50), v46, &v137, v149);
        v47 = *(_DWORD *)v149;
        v48 = *((_DWORD *)v126 + 1);
        if ( *(int *)v149 < v136 )
          v47 = v136;
        v49 = *((_DWORD *)v126 + 1);
        v126 += 4;
        v127 = v47;
        sprintf(s, "temp%d", v49);
        v50 = json_integer(v127);
        json_object_set_new(v16, s, v50);
        v51 = (int *)*((_DWORD *)v43 - 51);
        *(_DWORD *)v149 = 0;
        v137 = 0;
        v136 = 0;
        v135 = 0;
        find_min_and_max_int(v51, v44, &v135, &v136);
        find_min_and_max_int(*((int **)v43 - 49), v46, &v137, v149);
        v52 = v48;
        v53 = v136;
        if ( *(int *)v149 >= v136 )
          v53 = *(_DWORD *)v149;
        sprintf(s, "temp2_%d", v52);
        v54 = json_integer(v53);
        json_object_set_new(v16, s, v54);
      }
      while ( v134 > v42 );
      v55 = (size_t *)v128;
      if ( v134 > 0 )
      {
        v56 = ptr - 4;
        v57 = 0;
        do
        {
          ++v57;
          memset(s, 0, sizeof(s));
          memset(v150, 0, sizeof(v150));
          v58 = *((_DWORD *)v56 + 1);
          v56 += 4;
          snprintf(s, 0x20u, "temp_in_pcb_%d", v58);
          v59 = v55[6];
          v60 = *v55;
          v55 += 52;
          sub_239A0(v60, v59, v150);
          v61 = (char *)BUFX_strdup(v150);
          json_object_set_new(v16, s, v61);
        }
        while ( v134 > v57 );
        if ( v134 > 0 )
        {
          v62 = ptr - 4;
          v63 = (char *)v128;
          v64 = 0;
          do
          {
            ++v64;
            memset(s, 0, sizeof(s));
            v63 += 208;
            memset(v150, 0, sizeof(v150));
            v65 = *((_DWORD *)v62 + 1);
            v62 += 4;
            snprintf(s, 0x20u, "temp_out_pcb_%d", v65);
            sub_239A0(*((_DWORD *)v63 - 50), *((_DWORD *)v63 - 45), v150);
            v66 = (char *)BUFX_strdup(v150);
            json_object_set_new(v16, s, v66);
          }
          while ( v134 > v64 );
          if ( v134 > 0 )
          {
            v67 = ptr - 4;
            v68 = (char *)v128;
            v69 = 0;
            do
            {
              ++v69;
              memset(s, 0, sizeof(s));
              v68 += 208;
              memset(v150, 0, sizeof(v150));
              v70 = *((_DWORD *)v67 + 1);
              v67 += 4;
              snprintf(s, 0x20u, "temp_in_chip_%d", v70);
              sub_239A0(*((_DWORD *)v68 - 51), *((_DWORD *)v68 - 46), v150);
              v71 = (char *)BUFX_strdup(v150);
              json_object_set_new(v16, s, v71);
            }
            while ( v134 > v69 );
            if ( v134 > 0 )
            {
              v72 = ptr - 4;
              v73 = (char *)v128;
              v74 = 0;
              do
              {
                ++v74;
                memset(s, 0, sizeof(s));
                v73 += 208;
                memset(v150, 0, sizeof(v150));
                v75 = *((_DWORD *)v72 + 1);
                v72 += 4;
                snprintf(s, 0x20u, "temp_out_chip_%d", v75);
                sub_239A0(*((_DWORD *)v73 - 50), *((_DWORD *)v73 - 45), v150);
                v76 = (char *)BUFX_strdup(v150);
                json_object_set_new(v16, s, v76);
              }
              while ( v134 > v74 );
            }
          }
        }
      }
    }
    v77 = json_integer(v133);
    json_object_set_new(v16, "temp_max", v77);
    if ( v134 <= 0 )
      goto LABEL_71;
    v78 = (char *)v128;
    v79 = 0;
    v80 = ptr - 4;
    v81 = ptr - 4;
    v82 = (const char **)v128;
    do
    {
      ++v79;
      memset(s, 0, sizeof(s));
      v83 = *((_DWORD *)v80 + 1);
      v80 += 4;
      snprintf(s, 0x20u, "chain_acn%d", v83);
      v84 = *((_DWORD *)v78 + 14);
      v78 += 208;
      v85 = json_integer(v84);
      json_object_set_new(v16, s, v85);
    }
    while ( v134 > v79 );
    if ( v134 <= 0 )
      goto LABEL_71;
    v86 = 0;
    do
    {
      v87 = *((_DWORD *)v81 + 1);
      v81 += 4;
      ++v86;
      v82 += 52;
      sprintf(v149, "chain_acs%d", v87);
      memset(s, 0, sizeof(s));
      memset(v150, 0, sizeof(v150));
      snprintf(s, 0x20u, "chain_acs%d", v87);
      snprintf(v150, 0x100u, "%s", *(v82 - 37));
      v88 = (char *)BUFX_strdup(v150);
      json_object_set_new(v16, s, v88);
    }
    while ( v134 > v86 );
    if ( v134 <= 0 )
    {
LABEL_71:
      v97 = 0;
    }
    else
    {
      v89 = ptr - 4;
      v90 = (char *)v128;
      v91 = 0;
      v92 = 0;
      do
      {
        ++v91;
        memset(s, 0, sizeof(s));
        v93 = *((_DWORD *)v89 + 1);
        v89 += 4;
        snprintf(s, 0x20u, "chain_hw%d", v93);
        v94 = *((_DWORD *)v90 + 18);
        v90 += 208;
        v95 = *((_DWORD *)v90 - 33);
        v96 = json_integer(__SPAIR64__(v95, v94));
        json_object_set_new(v16, s, v96);
        v92 += __PAIR64__(v95, v94);
      }
      while ( v134 > v91 );
      v97 = v92;
    }
    v98 = json_integer(v97);
    json_object_set_new(v16, "no_matching_work", v98);
    if ( v134 > 0 )
    {
      v99 = (char *)v128;
      v100 = ptr - 4;
      v101 = ptr - 4;
      v102 = (char *)v128;
      v103 = 0;
      do
      {
        ++v103;
        memset(s, 0, sizeof(s));
        v104 = *((_DWORD *)v100 + 1);
        v100 += 4;
        snprintf(s, 0x20u, "chain_rate%d", v104);
        v99 += 208;
        v105 = json_real();
        json_object_set_new(v16, s, v105);
      }
      while ( v134 > v103 );
      if ( v134 > 0 )
      {
        v106 = 0;
        do
        {
          ++v106;
          v102 += 208;
          format_hashrate_string(*(const char **)(v131 + 84), v149);
          v107 = *((_DWORD *)v101 + 1);
          v101 += 4;
          snprintf(s, 0x20u, "CHAIN AVG HASHRATE%d", v107);
          v108 = (char *)BUFX_strdup(v149);
          json_object_set_new(v16, s, v108);
        }
        while ( v134 > v106 );
        if ( v134 > 0 )
        {
          v109 = ptr - 4;
          v110 = (char *)v128;
          v111 = 0;
          do
          {
            ++v111;
            memset(s, 0, sizeof(s));
            v112 = *((_DWORD *)v109 + 1);
            v109 += 4;
            snprintf(s, 0x20u, "freq%d", v112);
            v113 = *((_DWORD *)v110 + 16);
            v110 += 208;
            v114 = json_integer(v113);
            json_object_set_new(v16, s, v114);
          }
          while ( v134 > v111 );
        }
      }
    }
    v115 = (char *)BUFX_strdup(g_miner_version);
    json_object_set_new(v16, "miner_version", v115);
    v116 = (char *)BUFX_strdup(0);
    json_object_set_new(v16, "miner_id", v116);
    json_array_append_new(v132, v16);
    json_object_set_new(a1, "STATS", v132);
    v117 = json_integer(1);
    json_object_set_new(a1, "id", v117);
    if ( v134 > 0 )
    {
      free(ptr);
      free(v128);
    }
    return 0;
  }
}
