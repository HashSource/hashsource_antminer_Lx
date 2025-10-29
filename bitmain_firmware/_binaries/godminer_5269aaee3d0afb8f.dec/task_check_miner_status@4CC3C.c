int task_check_miner_status()
{
  char *v0; // r8
  char *all_created_runtime; // r0
  int v2; // r8
  int v3; // r2
  bool v4; // zf
  __int64 v5; // r0
  int v6; // r0
  char *flag_from_monitor; // r0
  int v8; // r3
  char *v9; // r4
  int *v10; // r0
  char *v11; // r0
  int v12; // r4
  char *v13; // r0
  int *v14; // r5
  int v15; // t1
  char *v16; // r0
  int v17; // r4
  __int64 v18; // r10
  int v19; // r9
  unsigned int v20; // r2
  int v21; // r4
  int v22; // r1
  int v23; // r4
  int v24; // r3
  int v25; // r6
  int v26; // r2
  int v27; // r1
  int v28; // r2
  int v29; // r3
  int *v30; // r10
  int v31; // r1
  int v32; // r2
  int v33; // r3
  int v34; // r3
  int v35; // r4
  char *v36; // r0
  char *v37; // r10
  int v38; // t1
  int v39; // r0
  int v40; // r0
  int v41; // r3
  int v42; // r2
  int v44; // r1
  int v45; // r2
  int v46; // r3
  int *v47; // r10
  int v48; // r1
  int v49; // r2
  int v50; // r3
  unsigned int v51; // r10
  int v52; // r9
  int v53; // r1
  int v54; // r2
  int v55; // r3
  int *v56; // r11
  int v57; // r1
  int v58; // r2
  int v59; // r3
  int v60; // r9
  int v61; // r1
  int v62; // r2
  int v63; // r3
  int *v64; // r12
  int v65; // r1
  int v66; // r2
  int v67; // r3
  int v68; // r1
  int v69; // r2
  int v70; // r3
  int *v71; // r12
  int v72; // r1
  int v73; // r2
  int v74; // r3
  unsigned int v75; // r9
  unsigned int v76; // r11
  int v77; // [sp+20h] [bp-137Ch] BYREF
  int v78; // [sp+40h] [bp-135Ch]
  const char *v79; // [sp+44h] [bp-1358h]
  int v80; // [sp+4Ch] [bp-1350h]
  int v81; // [sp+50h] [bp-134Ch]
  int v82; // [sp+54h] [bp-1348h]
  __int64 v83; // [sp+58h] [bp-1344h]
  __int64 v84; // [sp+60h] [bp-133Ch]
  unsigned int v85; // [sp+68h] [bp-1334h]
  int v86; // [sp+6Ch] [bp-1330h]
  unsigned int v87; // [sp+70h] [bp-132Ch]
  int *v88; // [sp+74h] [bp-1328h]
  __int64 v89; // [sp+78h] [bp-1324h]
  int v90; // [sp+80h] [bp-131Ch]
  int v91; // [sp+84h] [bp-1318h]
  const char *v92; // [sp+88h] [bp-1314h]
  int *v93; // [sp+8Ch] [bp-1310h]
  int v94; // [sp+90h] [bp-130Ch]
  int v95; // [sp+94h] [bp-1308h]
  int v96; // [sp+98h] [bp-1304h]
  int v97; // [sp+9Ch] [bp-1300h]
  char *v98; // [sp+A0h] [bp-12FCh]
  char *s; // [sp+A4h] [bp-12F8h]
  int v100; // [sp+A8h] [bp-12F4h]
  int v101; // [sp+ACh] [bp-12F0h]
  int v102; // [sp+B0h] [bp-12ECh]
  int v103; // [sp+B4h] [bp-12E8h]
  int v104; // [sp+B8h] [bp-12E4h]
  int v105; // [sp+BCh] [bp-12E0h]
  int v106; // [sp+C0h] [bp-12DCh]
  int v107; // [sp+C4h] [bp-12D8h]
  int v108; // [sp+C8h] [bp-12D4h]
  int v109; // [sp+CCh] [bp-12D0h]
  int v110; // [sp+D0h] [bp-12CCh]
  int v111; // [sp+D4h] [bp-12C8h]
  const char *v112; // [sp+D8h] [bp-12C4h]
  char *v113; // [sp+DCh] [bp-12C0h]
  int v114; // [sp+E0h] [bp-12BCh]
  int v115; // [sp+E4h] [bp-12B8h]
  int v116; // [sp+E8h] [bp-12B4h]
  int v117; // [sp+ECh] [bp-12B0h]
  int v118; // [sp+F8h] [bp-12A4h]
  int v119; // [sp+FCh] [bp-12A0h]
  int v120; // [sp+100h] [bp-129Ch]
  int v121; // [sp+104h] [bp-1298h]
  _DWORD v122[7]; // [sp+108h] [bp-1294h] BYREF
  int v123; // [sp+124h] [bp-1278h]
  _DWORD v124[7]; // [sp+128h] [bp-1274h] BYREF
  int v125; // [sp+144h] [bp-1258h]
  _DWORD v126[7]; // [sp+148h] [bp-1254h] BYREF
  int v127; // [sp+164h] [bp-1238h]
  _DWORD v128[7]; // [sp+168h] [bp-1234h] BYREF
  int v129; // [sp+184h] [bp-1218h]
  _DWORD v130[8]; // [sp+188h] [bp-1214h] BYREF
  _DWORD v131[7]; // [sp+1A8h] [bp-11F4h] BYREF
  int v132; // [sp+1C4h] [bp-11D8h]
  _DWORD v133[8]; // [sp+1C8h] [bp-11D4h] BYREF
  _DWORD v134[7]; // [sp+1E8h] [bp-11B4h] BYREF
  int v135; // [sp+204h] [bp-1198h]
  _DWORD v136[8]; // [sp+208h] [bp-1194h] BYREF
  _DWORD v137[7]; // [sp+228h] [bp-1174h] BYREF
  int v138; // [sp+244h] [bp-1158h]
  _DWORD v139[8]; // [sp+248h] [bp-1154h] BYREF
  _DWORD v140[7]; // [sp+268h] [bp-1134h] BYREF
  int v141; // [sp+284h] [bp-1118h]
  _DWORD v142[8]; // [sp+288h] [bp-1114h] BYREF
  _DWORD v143[7]; // [sp+2A8h] [bp-10F4h] BYREF
  int v144; // [sp+2C4h] [bp-10D8h]
  __int64 v145; // [sp+2C8h] [bp-10D4h] BYREF
  int v146; // [sp+2D0h] [bp-10CCh]
  int v147; // [sp+2D4h] [bp-10C8h]
  int v148; // [sp+2D8h] [bp-10C4h]
  int v149; // [sp+2DCh] [bp-10C0h]
  int v150; // [sp+2E0h] [bp-10BCh]
  int v151; // [sp+2E4h] [bp-10B8h]
  float v152; // [sp+2E8h] [bp-10B4h]
  float v153; // [sp+2ECh] [bp-10B0h]
  float v154; // [sp+2F0h] [bp-10ACh]
  _DWORD v155[1025]; // [sp+398h] [bp-1004h] BYREF

  v0 = &byte_16629C;
  if ( !byte_16629C )
  {
    byte_1662A0 = 0;
    byte_1662A1 = 0;
    byte_1662A2 = 0;
    byte_1662A3 = 0;
    byte_1662A4 = 0;
    byte_1662A5 = 0;
    byte_1662A6 = 0;
    byte_1662A7 = 0;
    byte_1662A8 = 0;
    byte_16629C = 1;
  }
  pthread_mutex_lock(&stru_1662AC);
  v128[0] = 0;
  v80 = (unsigned __int8)byte_1662A8 ^ 1;
  all_created_runtime = (char *)get_all_created_runtime(v128);
  v145 = 0;
  v146 = 0;
  v147 = 0;
  if ( v128[0] <= 0 )
  {
    v88 = 0;
    v83 = 0;
    v85 = 0;
    goto LABEL_27;
  }
  v113 = &byte_16629C;
  v98 = "chain";
  v2 = 0;
  v112 = "uneffective temp exceed limit";
  s = "error";
  v87 = (unsigned int)(all_created_runtime - 4);
  do
  {
    while ( 1 )
    {
      v6 = *(_DWORD *)(v87 + 4);
      v87 += 4;
      flag_from_monitor = get_flag_from_monitor(v6);
      v8 = *((_DWORD *)flag_from_monitor + 4);
      v9 = flag_from_monitor;
      v82 = 0;
      v81 = v8 & 1;
      if ( (v8 & 1) == 0 )
      {
        v86 = 0;
        v85 = v8 & 2;
        if ( (v8 & 2) == 0 )
        {
          v101 = 0;
          v100 = v8 & 4;
          if ( (v8 & 4) != 0 )
          {
            v4 = v80 == 0;
            *((_DWORD *)flag_from_monitor + 6) |= 4u;
            if ( v4 )
              goto LABEL_10;
            v92 = "check_temp";
            v76 = HIDWORD(v145);
            v75 = v145;
            LODWORD(v89) = "%s";
            v93 = &g_zc;
            v88 = &v77;
            goto LABEL_100;
          }
          goto LABEL_21;
        }
        v4 = v80 == 0;
        *((_DWORD *)flag_from_monitor + 6) |= 2u;
        if ( v4 )
        {
          LODWORD(v84) = v8 & 4;
          HIDWORD(v84) = v80;
          if ( (unsigned int)v84 | v80 )
          {
LABEL_9:
            *((_DWORD *)v9 + 6) |= 4u;
LABEL_10:
            v96 = v8 & 8;
            v97 = 0;
            if ( (v8 & 8) != 0 )
              *((_DWORD *)v9 + 6) |= 8u;
LABEL_12:
            v83 = v8 & 0x10;
            if ( (v8 & 0x10) == 0 )
              goto LABEL_15;
            v4 = v80 == 0;
            *((_DWORD *)v9 + 6) |= 0x10u;
            if ( v4 )
              goto LABEL_15;
            v92 = "check_temp";
            LODWORD(v89) = "%s";
            v93 = &g_zc;
            v88 = &v77;
            goto LABEL_107;
          }
          goto LABEL_21;
        }
        v92 = "check_temp";
        v76 = HIDWORD(v145);
        v75 = v145;
        LODWORD(v89) = "%s";
        v93 = &g_zc;
        v88 = &v77;
        goto LABEL_98;
      }
      v3 = *((_DWORD *)flag_from_monitor + 6);
      v4 = v80 == 0;
      *((_DWORD *)flag_from_monitor + 6) = v3 | 1;
      if ( v4 )
        break;
      V_LOCK();
      v88 = &v77;
      v26 = *(_DWORD *)(*(_DWORD *)v87 + 140);
      LODWORD(v89) = "%s";
      v93 = &g_zc;
      v92 = "check_temp";
      V_INT((int)v143, v98, v26);
      V_STR(v142, s, "temp lost");
      v27 = v142[1];
      v28 = v142[2];
      v29 = v142[3];
      v30 = v88;
      v79 = "check_temp";
      v78 = v89;
      *v88 = v142[0];
      v30[1] = v27;
      v30[2] = v28;
      v30[3] = v29;
      v30 += 4;
      v31 = v142[5];
      v32 = v142[6];
      v33 = v142[7];
      *v30 = v142[4];
      v30[1] = v31;
      v30[2] = v32;
      v30[3] = v33;
      logfmt_raw((char *)v155, 0x1000u, 0, v144, v143[0], v143[1], v143[2], v143[3], v143[4], v143[5], v143[6], v144);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/check_miner_status.c",
        166,
        "check_temp",
        10,
        35,
        20,
        v155);
      v105 = 0;
      v76 = HIDWORD(v145);
      v75 = v145 | 1;
      LODWORD(v145) = v145 | 1;
      v34 = *((_DWORD *)v9 + 4);
      v104 = v34 & 2;
      if ( (v34 & 2) != 0 )
      {
        *((_DWORD *)v9 + 6) |= 2u;
LABEL_98:
        V_LOCK();
        v75 |= 2u;
        V_INT((int)v140, v98, *(int *)(*(_DWORD *)v87 + 140));
        V_STR(v139, s, "temp too high");
        v44 = v139[1];
        v45 = v139[2];
        v46 = v139[3];
        v79 = v92;
        v47 = v88;
        v78 = v89;
        *v88 = v139[0];
        v47[1] = v44;
        v47[2] = v45;
        v47[3] = v46;
        v47 += 4;
        v48 = v139[5];
        v49 = v139[6];
        v50 = v139[7];
        *v47 = v139[4];
        v47[1] = v48;
        v47[2] = v49;
        v47[3] = v50;
        logfmt_raw((char *)v155, 0x1000u, 0, v141, v140[0], v140[1], v140[2], v140[3], v140[4], v140[5], v140[6], v141);
        V_UNLOCK();
        zlog(
          *v93,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/miner_util/miner_monitor/check_miner_status.c",
          166,
          "check_temp",
          10,
          43,
          100,
          v155);
        v145 = __PAIR64__(v76, v75);
        v8 = *((_DWORD *)v9 + 4);
        v106 = v8 & 4;
        v107 = 0;
        if ( (v8 & 4) != 0 )
          goto LABEL_99;
        goto LABEL_21;
      }
      v117 = 0;
      v116 = v34 & 4;
      if ( (v34 & 4) == 0 )
      {
        v119 = 0;
        v118 = v34 & 8;
        if ( (v34 & 8) == 0 )
        {
          v121 = 0;
          v120 = v34 & 0x10;
          if ( (v34 & 0x10) == 0 )
            goto LABEL_15;
          *((_DWORD *)v9 + 6) |= 0x10u;
LABEL_107:
          v51 = HIDWORD(v145);
          v60 = v145;
          goto LABEL_104;
        }
        *((_DWORD *)v9 + 6) |= 8u;
        goto LABEL_108;
      }
LABEL_99:
      *((_DWORD *)v9 + 6) |= 4u;
LABEL_100:
      V_LOCK();
      v51 = v76;
      v52 = v75 | 4;
      V_INT((int)v137, v98, *(int *)(*(_DWORD *)v87 + 140));
      V_STR(v136, s, "temp too low");
      v53 = v136[1];
      v54 = v136[2];
      v55 = v136[3];
      v79 = v92;
      v56 = v88;
      v78 = v89;
      *v88 = v136[0];
      v56[1] = v53;
      v56[2] = v54;
      v56[3] = v55;
      v56 += 4;
      v57 = v136[5];
      v58 = v136[6];
      v59 = v136[7];
      *v56 = v136[4];
      v56[1] = v57;
      v56[2] = v58;
      v56[3] = v59;
      logfmt_raw((char *)v155, 0x1000u, 0, v138, v137[0], v137[1], v137[2], v137[3], v137[4], v137[5], v137[6], v138);
      V_UNLOCK();
      zlog(
        *v93,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/check_miner_status.c",
        166,
        "check_temp",
        10,
        51,
        100,
        v155);
      v145 = __PAIR64__(v51, v52);
      v8 = *((_DWORD *)v9 + 4);
      v108 = v8 & 8;
      v109 = 0;
      if ( (v8 & 8) == 0 )
        goto LABEL_12;
      *((_DWORD *)v9 + 6) |= 8u;
LABEL_102:
      V_LOCK();
      v60 = v52 | 8;
      V_INT((int)v134, v98, *(int *)(*(_DWORD *)v87 + 140));
      V_STR(v133, s, "read no temp");
      v61 = v133[1];
      v62 = v133[2];
      v63 = v133[3];
      v64 = v88;
      v79 = v92;
      v78 = v89;
      *v88 = v133[0];
      v64[1] = v61;
      v64[2] = v62;
      v64[3] = v63;
      v64 += 4;
      v65 = v133[5];
      v66 = v133[6];
      v67 = v133[7];
      *v64 = v133[4];
      v64[1] = v65;
      v64[2] = v66;
      v64[3] = v67;
      logfmt_raw((char *)v155, 0x1000u, 0, v135, v134[0], v134[1], v134[2], v134[3], v134[4], v134[5], v134[6], v135);
      V_UNLOCK();
      zlog(
        *v93,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/check_miner_status.c",
        166,
        "check_temp",
        10,
        59,
        100,
        v155);
      v145 = __PAIR64__(v51, v60);
      v110 = *((_DWORD *)v9 + 4) & 0x10;
      v111 = 0;
      if ( v110 )
      {
        *((_DWORD *)v9 + 6) |= 0x10u;
LABEL_104:
        V_LOCK();
        V_INT((int)v131, v98, *(int *)(*(_DWORD *)v87 + 140));
        V_STR(v130, s, v112);
        v68 = v130[1];
        v69 = v130[2];
        v70 = v130[3];
        v71 = v88;
        v79 = v92;
        v78 = v89;
        *v88 = v130[0];
        v71[1] = v68;
        v71[2] = v69;
        v71[3] = v70;
        v71 += 4;
        v72 = v130[5];
        v73 = v130[6];
        v74 = v130[7];
        *v71 = v130[4];
        v71[1] = v72;
        v71[2] = v73;
        v71[3] = v74;
        logfmt_raw((char *)v155, 0x1000u, 0, v132, v131[0], v131[1], v131[2], v131[3], v131[4], v131[5], v131[6], v132);
        V_UNLOCK();
        zlog(
          *v93,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/miner_util/miner_monitor/check_miner_status.c",
          166,
          "check_temp",
          10,
          67,
          100,
          v155);
        HIDWORD(v145) = v51;
        LODWORD(v145) = v60 | 0x10;
      }
LABEL_15:
      if ( ++v2 >= v128[0] )
        goto LABEL_26;
    }
    v94 = v8 & 2;
    LODWORD(v84) = v8 & 4;
    v95 = v80;
    HIDWORD(v84) = v80;
    if ( !(v94 | v80) )
    {
      if ( v84 )
      {
        *((_DWORD *)flag_from_monitor + 6) = v3 | 5;
        goto LABEL_10;
      }
      v114 = v8 & 8;
      v115 = v80;
      if ( !(v114 | v80) )
        goto LABEL_12;
      *((_DWORD *)flag_from_monitor + 6) = v3 | 9;
      goto LABEL_24;
    }
    v5 = v84;
    *((_DWORD *)v9 + 6) = v3 | 3;
    if ( v5 )
      goto LABEL_9;
LABEL_21:
    v90 = v8 & 8;
    v91 = 0;
    if ( (v8 & 8) == 0 )
      goto LABEL_12;
    v4 = v80 == 0;
    *((_DWORD *)v9 + 6) |= 8u;
    if ( !v4 )
    {
      v92 = "check_temp";
      LODWORD(v89) = "%s";
      v93 = &g_zc;
      v88 = &v77;
LABEL_108:
      v51 = HIDWORD(v145);
      v52 = v145;
      goto LABEL_102;
    }
LABEL_24:
    v102 = v8 & 0x10;
    v103 = 0;
    if ( (v8 & 0x10) == 0 )
      goto LABEL_15;
    ++v2;
    *((_DWORD *)v9 + 6) |= 0x10u;
  }
  while ( v2 < v128[0] );
LABEL_26:
  v0 = v113;
  v83 = v145;
  v85 = ((unsigned int)v145 >> 2) & 1;
  v88 = (int *)((v145 >> 1) & 1);
LABEL_27:
  LODWORD(v145) = 0;
  v10 = (int *)get_all_created_runtime(&v145);
  v11 = get_flag_from_monitor(*v10);
  if ( (*((_DWORD *)v11 + 8) & 4) == 0 || (v4 = v80 == 0, *((_DWORD *)v11 + 10) |= 4u, v4) )
  {
    v87 = 0;
  }
  else
  {
    V_LOCK();
    V_STR(v128, "error", "fan error exceed limit");
    v87 = v80;
    logfmt_raw(
      (char *)v155,
      0x1000u,
      0,
      v129,
      v128[0],
      v128[1],
      v128[2],
      v128[3],
      v128[4],
      v128[5],
      v128[6],
      v129,
      "%s",
      "check_fan_err");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/miner_util/miner_monitor/check_miner_status.c",
      166,
      "check_fan_err",
      13,
      84,
      100,
      v155);
  }
  v12 = 0;
  v124[0] = 0;
  v13 = (char *)get_all_created_runtime(v124);
  v81 = 0;
  if ( v124[0] > 0 )
  {
    v14 = (int *)(v13 - 4);
    LODWORD(v84) = "chain";
    LODWORD(v89) = v0;
    do
    {
      while ( 1 )
      {
        v15 = v14[1];
        ++v14;
        v16 = get_flag_from_monitor(v15);
        if ( (*(_DWORD *)v16 & 1) != 0 )
        {
          v4 = v80 == 0;
          *((_DWORD *)v16 + 2) |= 1u;
          if ( !v4 )
            break;
        }
        if ( ++v12 >= v124[0] )
          goto LABEL_37;
      }
      V_LOCK();
      ++v12;
      V_INT((int)v126, (char *)v84, *(int *)(*v14 + 140));
      v81 = v80;
      logfmt_raw(
        (char *)v155,
        0x1000u,
        0,
        v127,
        v126[0],
        v126[1],
        v126[2],
        v126[3],
        v126[4],
        v126[5],
        v126[6],
        v127,
        "%s low hashrate happened!",
        "check_low_hashrate");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/check_miner_status.c",
        166,
        "check_low_hashrate",
        18,
        103,
        80,
        v155);
      read_status_from_monitor(&v145, *v14);
      V_LOCK();
      logfmt_raw((char *)v155, 0x1000u, 0, "no ratio hashrate last_5s: %f", v152 / 1000000000.0);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/check_miner_status.c",
        166,
        "check_low_hashrate",
        18,
        106,
        80,
        v155);
      V_LOCK();
      logfmt_raw((char *)v155, 0x1000u, 0, "no ratio hashrate last_30min: %f", v153 / 1000000000.0);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/check_miner_status.c",
        166,
        "check_low_hashrate",
        18,
        107,
        80,
        v155);
      V_LOCK();
      logfmt_raw((char *)v155, 0x1000u, 0, "no ratio hashrate lifetime: %f", v154 / 1000000000.0);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/check_miner_status.c",
        166,
        "check_low_hashrate",
        18,
        108,
        80,
        v155);
    }
    while ( v12 < v124[0] );
LABEL_37:
    v0 = (char *)v89;
  }
  if ( !v0[40] )
  {
    clock_gettime(1, &stru_1662C8);
    v0[40] = 1;
  }
  if ( total_pools > 0 )
  {
    v17 = 0;
    do
    {
      while ( pool_tget(
                *(pthread_mutex_t **)(pools + 4 * v17),
                (unsigned __int8 *)(*(_DWORD *)(pools + 4 * v17) + 2072))
           || !pools_active )
      {
        if ( ++v17 >= total_pools )
          goto LABEL_46;
      }
      clock_gettime(1, &stru_1662C8);
      ++v17;
    }
    while ( v17 < total_pools );
  }
LABEL_46:
  clock_gettime(1, &stru_1662D0);
  v18 = 1000LL * (*((_DWORD *)v0 + 13) - *((_DWORD *)v0 + 11)) + (*((_DWORD *)v0 + 14) - *((_DWORD *)v0 + 12)) / 1000000;
  if ( v18 <= 59999 )
    v19 = v0[60] & 1;
  else
    v19 = 0;
  if ( v19 )
  {
    V_LOCK();
    logfmt_raw(
      (char *)v155,
      0x1000u,
      0,
      "The pool connection recovered after the system poweroff. Exit and restart mining!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/miner_util/miner_monitor/check_miner_status.c",
      166,
      "check_lost_connection_to_pool",
      29,
      139,
      60,
      v155);
    exit(1);
  }
  v20 = v83;
  v21 = v83 & 0x1E;
  LODWORD(v83) = ((unsigned int)v83 >> 3) & 1;
  v22 = v87;
  LODWORD(v84) = (v20 >> 4) & 1;
  if ( v21 )
    v22 = v87 | 1;
  v23 = v22;
  LODWORD(v89) = v81 | v22;
  if ( !v80 )
    goto LABEL_71;
  if ( v18 <= 60000 )
  {
    *((_DWORD *)v0 + 16) = 0;
LABEL_71:
    LOBYTE(v25) = v0[12];
    if ( (_BYTE)v25 )
      goto LABEL_81;
    if ( !v22 )
    {
      if ( (_DWORD)v89 )
      {
        LOBYTE(v19) = 0;
        goto LABEL_81;
      }
      goto LABEL_79;
    }
    v19 = (unsigned __int8)v0[12];
LABEL_74:
    v35 = 0;
    v0[12] = 1;
    v155[0] = 0;
    v36 = (char *)get_all_created_runtime(v155);
    if ( v155[0] > 0 )
    {
      v37 = v36 - 4;
      do
      {
        v38 = *((_DWORD *)v37 + 1);
        v37 += 4;
        ++v35;
        v39 = (*(int (**)(void))(v38 + 8))();
        v40 = dev_ctrl(v39);
        (*(void (__fastcall **)(_DWORD))(v40 + 28))(*(_DWORD *)(*(_DWORD *)v37 + 136));
      }
      while ( v35 < v155[0] );
    }
    power_off();
    V_LOCK();
    V_BOOL((int)v122, "poweroff", 1);
    logfmt_raw(
      (char *)v155,
      0x1000u,
      0,
      v123,
      v122[0],
      v122[1],
      v122[2],
      v122[3],
      v122[4],
      v122[5],
      v122[6],
      v123,
      "high temp %d low temp %d fan err %d read no temp %d, uneffective temp %d, lost connection too long %d",
      v88,
      v85,
      v87,
      (_DWORD)v83,
      (_DWORD)v84,
      v19);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/miner_util/miner_monitor/check_miner_status.c",
      166,
      "task_check_miner_status",
      23,
      296,
      120,
      v155);
    if ( (_DWORD)v89 || v0[12] )
      goto LABEL_80;
LABEL_79:
    LOBYTE(v19) = v25;
    v0[11] = 0;
    goto LABEL_82;
  }
  v24 = *((_DWORD *)v0 + 16);
  *((_DWORD *)v0 + 16) = v24 + 1;
  if ( !(v24 % 60) )
  {
    V_LOCK();
    V_STR(&v145, "error", "net lost");
    v89 = 274877907LL * (int)v18;
    logfmt_raw(
      (char *)v155,
      0x1000u,
      0,
      v151,
      v145,
      v146,
      v147,
      v148,
      v149,
      v150,
      v151,
      "lost internet for %d seconds",
      (int)v18 / 1000);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/miner_util/miner_monitor/check_miner_status.c",
      166,
      "check_lost_connection_to_pool",
      29,
      146,
      100,
      v155);
  }
  if ( (unsigned int)&loc_124F80 >= v18 )
  {
    v19 = (unsigned __int8)v0[12];
    if ( v0[12] )
      goto LABEL_81;
    if ( !v23 )
    {
      LOBYTE(v19) = v80;
      goto LABEL_81;
    }
LABEL_60:
    LODWORD(v89) = v23;
    LOBYTE(v25) = v23;
    goto LABEL_74;
  }
  v25 = (unsigned __int8)v0[60];
  if ( !v0[60] )
  {
    V_LOCK();
    V_STR(v124, "error", "net lost");
    logfmt_raw(
      (char *)v155,
      0x1000u,
      v25,
      v125,
      v124[0],
      v124[1],
      v124[2],
      v124[3],
      v124[4],
      v124[5],
      v124[6],
      v125,
      "lost internet %d seconds > 20 minutes, poweroff.",
      (int)v18 / 1000);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/miner_util/miner_monitor/check_miner_status.c",
      166,
      "check_lost_connection_to_pool",
      29,
      156,
      120,
      v155);
    v19 = (unsigned __int8)v0[12];
    v0[60] = 1;
    if ( v19 )
      goto LABEL_81;
    LOBYTE(v25) = v80;
    v19 = 1;
    LODWORD(v89) = v80;
    goto LABEL_74;
  }
  v19 = (unsigned __int8)v0[12];
  if ( !v0[12] )
  {
    if ( v23 )
      goto LABEL_60;
LABEL_80:
    LOBYTE(v19) = v25;
  }
LABEL_81:
  v0[11] = 1;
LABEL_82:
  if ( v80 )
  {
    v41 = v81;
    v0[10] = v19;
    v0[4] = (char)v88;
    v0[5] = v85;
    v0[8] = v87;
    if ( !v41 )
      v81 = (unsigned __int8)v0[12];
    v0[9] = v81;
    v0[6] = v83;
    v0[7] = v84;
  }
  pthread_mutex_unlock(&stru_1662AC);
  v42 = (unsigned __int8)v0[11];
  byte_163410 ^= 1u;
  if ( v42 )
  {
    green_led_off();
    if ( byte_163410 )
    {
      red_led_on();
      if ( v0[11] )
        return fan_pwm_set_max();
      return set_pwm_by_temp();
    }
    red_led_off();
  }
  else
  {
    red_led_off();
    if ( byte_163410 )
      green_led_on();
    else
      green_led_off();
  }
  if ( !v0[11] )
    return set_pwm_by_temp();
  return fan_pwm_set_max();
}
