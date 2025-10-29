unsigned int __fastcall stratum_handle_method_vbk(int a1, int *a2, int a3)
{
  double *v4; // r0
  double *v5; // r4
  int command_type; // r0
  int v7; // r5
  unsigned int v8; // r5
  unsigned int v9; // r6
  int v11; // r3
  _DWORD *v12; // r3
  int v13; // r1
  unsigned int *v14; // r3
  unsigned int v15; // r6
  int *v16; // r1
  char *v17; // r1
  _DWORD *v18; // r0
  _DWORD *v19; // r0
  unsigned __int8 *v20; // r0
  char *v21; // r1
  _DWORD *v22; // r0
  int v23; // r0
  int v24; // r6
  void *v25; // r0
  int v26; // r0
  int v27; // r1
  int v28; // r3
  int v29; // r2
  unsigned int *v30; // r3
  unsigned int v31; // r2
  unsigned int v32; // r2
  char *v33; // r1
  _DWORD *v34; // r0
  int v35; // r0
  char *v36; // r1
  int v37; // r10
  _DWORD *v38; // r0
  int v39; // r0
  char *v40; // r1
  int v41; // r9
  _DWORD *v42; // r0
  _DWORD *v43; // r0
  const char *v44; // r0
  char *v45; // r1
  const char *v46; // r11
  _DWORD *v47; // r0
  _DWORD *v48; // r0
  char *v49; // r0
  char *v50; // r1
  char *v51; // r6
  _DWORD *v52; // r0
  _DWORD *v53; // r0
  char *v54; // r0
  char *v55; // r1
  _DWORD *v56; // r0
  _DWORD *v57; // r0
  char *v58; // r0
  char *v59; // r1
  _DWORD *v60; // r0
  int v61; // r0
  char *v62; // r1
  _DWORD *v63; // r0
  int v64; // r0
  char *v65; // r1
  _DWORD *v66; // r0
  int v67; // r0
  char *v68; // r1
  _DWORD *v69; // r0
  _DWORD *v70; // r0
  char *v71; // r0
  char *v72; // r1
  _DWORD *v73; // r0
  int v74; // r0
  bool v75; // zf
  bool v76; // zf
  int v77; // r3
  _DWORD *v78; // r3
  int v79; // r1
  unsigned int *v80; // r3
  unsigned int v81; // r6
  bool v82; // zf
  bool v83; // zf
  _BOOL4 v84; // r2
  _BOOL4 v85; // r6
  unsigned int v86; // r9
  int v87; // r10
  unsigned int v88; // r1
  unsigned int v89; // r3
  _BYTE *v90; // r9
  double *v91; // r6
  int v92; // r4
  int v93; // r1
  int i; // r9
  char byte_from_hex; // r0
  char *v96; // r3
  int j; // r9
  char v98; // r0
  char *v99; // r3
  void *v100; // r0
  void *v101; // r0
  int *v102; // r6
  int *v103; // r12
  int v104; // r0
  int v105; // r1
  int v106; // r2
  int v107; // r3
  int v108; // r1
  int v109; // r2
  int v110; // r3
  int v111; // r0
  int v112; // r1
  char *v113; // [sp+14h] [bp-11B8h]
  char *v114; // [sp+18h] [bp-11B4h]
  int v115; // [sp+1Ch] [bp-11B0h]
  unsigned int v116; // [sp+1Ch] [bp-11B0h]
  int v117; // [sp+20h] [bp-11ACh]
  __int64 v118; // [sp+20h] [bp-11ACh]
  char *v119; // [sp+28h] [bp-11A4h]
  int v120; // [sp+2Ch] [bp-11A0h]
  char *v121; // [sp+30h] [bp-119Ch]
  int v122; // [sp+34h] [bp-1198h]
  int v123; // [sp+34h] [bp-1198h]
  __int16 v124; // [sp+38h] [bp-1194h]
  int v125; // [sp+3Ch] [bp-1190h]
  _DWORD v126[2]; // [sp+40h] [bp-118Ch] BYREF
  char v127; // [sp+48h] [bp-1184h]
  _DWORD v128[2]; // [sp+4Ch] [bp-1180h] BYREF
  char v129; // [sp+54h] [bp-1178h]
  _DWORD v130[3]; // [sp+58h] [bp-1174h] BYREF
  _DWORD v131[4]; // [sp+64h] [bp-1168h] BYREF
  _DWORD v132[6]; // [sp+74h] [bp-1158h] BYREF
  int v133; // [sp+8Ch] [bp-1140h] BYREF
  _BYTE v134[14]; // [sp+90h] [bp-113Ch]
  int v135; // [sp+9Eh] [bp-112Eh]
  int v136; // [sp+A2h] [bp-112Ah]
  char v137; // [sp+A6h] [bp-1126h]
  int v138; // [sp+A7h] [bp-1125h]
  int v139; // [sp+ABh] [bp-1121h]
  char v140; // [sp+AFh] [bp-111Dh]
  int v141; // [sp+B0h] [bp-111Ch]
  int v142; // [sp+B4h] [bp-1118h]
  int v143; // [sp+B8h] [bp-1114h]
  int v144; // [sp+BCh] [bp-1110h]
  char v145; // [sp+C0h] [bp-110Ch]
  char v146; // [sp+C1h] [bp-110Bh]
  char v147; // [sp+C2h] [bp-110Ah]
  char v148; // [sp+C3h] [bp-1109h]
  char v149; // [sp+C4h] [bp-1108h]
  char v150; // [sp+C5h] [bp-1107h]
  char v151; // [sp+C6h] [bp-1106h]
  char v152; // [sp+C7h] [bp-1105h]
  int v153; // [sp+C8h] [bp-1104h]
  _DWORD v154[23]; // [sp+CCh] [bp-1100h] BYREF
  char v155[160]; // [sp+128h] [bp-10A4h] BYREF
  char s[4100]; // [sp+1C8h] [bp-1004h] BYREF

  v4 = json_loads(a3, 0, (char *)v154);
  v5 = v4;
  if ( !v4 )
  {
    V_LOCK();
    LOWORD(v11) = 9784;
    HIWORD(v11) = (unsigned int)"NG_SUBSCRIBE_FAILURE" >> 16;
    logfmt_raw(s, 0x1000u, 0, v11, v154[0], v155);
    V_UNLOCK();
    LOWORD(v12) = -14756;
    HIWORD(v12) = (unsigned int)&unk_16E68C >> 16;
    LOWORD(v13) = 17664;
    HIWORD(v13) = (unsigned int)"Setting_open_cores_AE" >> 16;
    zlog(*v12, v13, 157, "stratum_handle_method_vbk", 25, 314, 100, s);
    return 0;
  }
  command_type = get_command_type(v4);
  v7 = command_type;
  if ( command_type == 7 )
  {
    LOWORD(v33) = 13884;
    HIWORD(v33) = (unsigned int)"hrate last_30min: %f" >> 16;
    v34 = (_DWORD *)json_object_get(v5, v33);
    v35 = json_object_get(v34, "data");
    LOWORD(v36) = 18740;
    v37 = v35;
    HIWORD(v36) = (unsigned int)"et %s %02x" >> 16;
    v38 = (_DWORD *)json_object_get(v5, v36);
    v39 = json_object_get(v38, "data");
    LOWORD(v40) = 18756;
    v41 = v39;
    HIWORD(v40) = (unsigned int)"nonce crc error calc value %04x resp value %04x" >> 16;
    v42 = (_DWORD *)json_object_get(v5, v40);
    v43 = (_DWORD *)json_object_get(v42, "data");
    v44 = (const char *)json_string_value(v43);
    LOWORD(v45) = 18776;
    v46 = v44;
    HIWORD(v45) = (unsigned int)" value %04x resp value %04x" >> 16;
    v47 = (_DWORD *)json_object_get(v5, v45);
    v48 = (_DWORD *)json_object_get(v47, "data");
    v49 = (char *)json_string_value(v48);
    LOWORD(v50) = 18804;
    v121 = v49;
    HIWORD(v50) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/rele"
                                "ase/build/godminer-origin_master/backend/backend_ae/backend_ae.c" >> 16;
    v51 = v49;
    v52 = (_DWORD *)json_object_get(v5, v50);
    v53 = (_DWORD *)json_object_get(v52, "data");
    v54 = (char *)json_string_value(v53);
    LOWORD(v55) = 18920;
    v113 = v54;
    HIWORD(v55) = (unsigned int)"ster/backend/backend_ae/backend_ae.c" >> 16;
    v56 = (_DWORD *)json_object_get(v5, v55);
    v57 = (_DWORD *)json_object_get(v56, "data");
    v58 = (char *)json_string_value(v57);
    LOWORD(v59) = 18832;
    v114 = v58;
    HIWORD(v59) = (unsigned int)"orkspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/backend/backend_ae/backend_ae.c" >> 16;
    v60 = (_DWORD *)json_object_get(v5, v59);
    v61 = json_object_get(v60, "data");
    LOWORD(v62) = 18844;
    v115 = v61;
    HIWORD(v62) = (unsigned int)"miner_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/backend/backend_ae/backend_ae.c" >> 16;
    v63 = (_DWORD *)json_object_get(v5, v62);
    v64 = json_object_get(v63, "data");
    LOWORD(v65) = 14028;
    v117 = v64;
    HIWORD(v65) = (unsigned int)"lost" >> 16;
    v66 = (_DWORD *)json_object_get(v5, v65);
    v67 = json_object_get(v66, "data");
    LOWORD(v68) = 18856;
    v120 = v67;
    HIWORD(v68) = (unsigned int)"ease/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/backend/backend_ae/backend_ae.c" >> 16;
    v69 = (_DWORD *)json_object_get(v5, v68);
    v70 = (_DWORD *)json_object_get(v69, "data");
    v71 = (char *)json_string_value(v70);
    LOWORD(v72) = 18872;
    v119 = v71;
    HIWORD(v72) = (unsigned int)"s/buildroot/tmp/release/build/godminer-origin_master/backend/backend_ae/backend_ae.c" >> 16;
    v73 = (_DWORD *)json_object_get(v5, v72);
    v74 = json_object_get(v73, "data");
    v75 = v41 == 0;
    if ( v41 )
      v75 = v37 == 0;
    if ( v75 )
      goto LABEL_31;
    v76 = v51 == 0;
    if ( v51 )
      v76 = v46 == 0;
    if ( v76 )
      goto LABEL_31;
    v82 = v114 == 0;
    if ( v114 )
      v82 = v113 == 0;
    if ( v82 )
      goto LABEL_31;
    v83 = v117 == 0;
    if ( v117 )
      v83 = v115 == 0;
    if ( v83 )
      goto LABEL_31;
    v84 = v119 == 0;
    if ( !v120 )
      v84 = 1;
    v85 = !v74 || v84;
    if ( v85
      || (v122 = v74, strlen(v46) <= 0x2F)
      || strlen(v121) <= 0x2F
      || strlen(v113) <= 0x2F
      || strlen(v114) <= 0x1F
      || strlen(v119) <= 0x2F )
    {
LABEL_31:
      V_LOCK();
      LOWORD(v77) = 18892;
      HIWORD(v77) = (unsigned int)"ase/build/godminer-origin_master/backend/backend_ae/backend_ae.c" >> 16;
      logfmt_raw(s, 0x1000u, 0, v77, "stratum_handle_method_vbk");
      V_UNLOCK();
      LOWORD(v78) = -14756;
      HIWORD(v78) = (unsigned int)&unk_16E68C >> 16;
      LOWORD(v79) = 17664;
      HIWORD(v79) = (unsigned int)"Setting_open_cores_AE" >> 16;
      zlog(*v78, v79, 157, "stratum_handle_method_vbk", 25, 351, 100, s);
      if ( *((_DWORD *)v5 + 1) == -1 )
        goto LABEL_35;
      v80 = (unsigned int *)v5 + 1;
      __dmb(0xBu);
      do
      {
        v81 = __ldrex(v80);
        v9 = v81 - 1;
      }
      while ( __strex(v9, v80) );
      if ( v9 )
      {
LABEL_35:
        v16 = a2 + 521;
        goto LABEL_36;
      }
      v8 = 0;
      goto LABEL_11;
    }
    v125 = v122;
    v123 = json_integer_value(v37);
    v124 = json_integer_value(v41);
    v86 = json_integer_value(v115);
    v87 = json_integer_value(v117);
    v116 = json_integer_value(v120);
    v118 = json_integer_value(v125);
    v88 = HIWORD(v86);
    HIBYTE(v133) = v86;
    v134[1] = v124;
    LOBYTE(v133) = HIBYTE(v86);
    v89 = v86 >> 8;
    v90 = v130;
    v134[0] = HIBYTE(v124);
    v91 = v5;
    v92 = 24;
    BYTE1(v133) = v88;
    BYTE2(v133) = v89;
    do
    {
      v93 = v92;
      v92 += 2;
      *v90++ = extract_byte_from_hex(v46, v93);
    }
    while ( v92 != 48 );
    v5 = v91;
    v9 = 0;
    for ( i = 15; i != 24; ++i )
    {
      byte_from_hex = extract_byte_from_hex(v121, 2 * i);
      v96 = (char *)v126 + i;
      *(v96 - 15) = byte_from_hex;
    }
    for ( j = 15; j != 24; ++j )
    {
      v98 = extract_byte_from_hex(v113, 2 * j);
      v99 = (char *)v128 + j;
      *(v99 - 15) = v98;
    }
    hex2bin((int)v131, (unsigned __int8 *)v114, 16);
    *(_DWORD *)&v134[2] = v130[0];
    *(_DWORD *)&v134[6] = v130[1];
    *(_DWORD *)&v134[10] = v130[2];
    v135 = v126[0];
    v136 = v126[1];
    v137 = v127;
    v138 = v128[0];
    v139 = v128[1];
    v140 = v129;
    v148 = v87;
    v141 = v131[0];
    v142 = v131[1];
    v143 = v131[2];
    v144 = v131[3];
    v147 = BYTE1(v87);
    v145 = HIBYTE(v87);
    v149 = HIBYTE(v116);
    v146 = BYTE2(v87);
    v153 = 0;
    v152 = v116;
    v150 = BYTE2(v116);
    v151 = BYTE1(v116);
    hex2bin((int)v132, (unsigned __int8 *)v119, 24);
    if ( a2 != (int *)-448 )
    {
      pthread_mutex_lock((pthread_mutex_t *)(a2 + 440));
      v100 = (void *)a2[400];
      if ( v100 )
      {
        free(v100);
        a2[400] = 0;
      }
      v101 = (void *)a2[402];
      if ( v101 )
      {
        free(v101);
        a2[402] = 0;
      }
      v102 = &v133;
      a2[423] = v123;
      sprintf(s, "%d", v123);
      a2[400] = (int)_strdup(s);
      v103 = a2 + 114;
      a2[424] = v87;
      *((_QWORD *)a2 + 213) = v118;
      do
      {
        v103 += 4;
        v104 = *v102;
        v105 = v102[1];
        v106 = v102[2];
        v107 = v102[3];
        v102 += 4;
        *(v103 - 4) = v104;
        *(v103 - 3) = v105;
        *(v103 - 2) = v106;
        *(v103 - 1) = v107;
      }
      while ( v102 != v154 );
      v9 = 1;
      v108 = v132[1];
      v109 = v132[2];
      v110 = v132[3];
      a2[370] = v132[0];
      a2[371] = v108;
      v111 = v132[4];
      v112 = v132[5];
      a2[373] = v110;
      a2[372] = v109;
      a2[374] = v111;
      a2[375] = v112;
      *((_QWORD *)a2 + 56) = *a2;
      *((double *)a2 + 247) = (double)v116;
      *((double *)a2 + 197) = (double)v116;
      pthread_mutex_unlock((pthread_mutex_t *)(a2 + 440));
    }
  }
  else
  {
    if ( command_type != 8 )
    {
      v8 = command_type - 7;
      if ( *((_DWORD *)v5 + 1) == -1 )
        return 0;
      v14 = (unsigned int *)v5 + 1;
      __dmb(0xBu);
      do
      {
        v15 = __ldrex(v14);
        v9 = v15 - 1;
      }
      while ( __strex(v9, v14) );
      if ( v9 )
        return 0;
LABEL_11:
      json_delete(v5);
      if ( v8 <= 1 )
        goto LABEL_12;
      return v9;
    }
    LOWORD(v17) = 18916;
    HIWORD(v17) = (unsigned int)"n_master/backend/backend_ae/backend_ae.c" >> 16;
    v18 = (_DWORD *)json_object_get(v5, v17);
    v19 = (_DWORD *)json_object_get(v18, "data");
    v20 = (unsigned __int8 *)json_string_value(v19);
    hex2bin((int)&v133, v20, 16);
    LOWORD(v21) = 13884;
    HIWORD(v21) = (unsigned int)"hrate last_30min: %f" >> 16;
    v22 = (_DWORD *)json_object_get(v5, v21);
    v23 = json_object_get(v22, "data");
    v24 = json_integer_value(v23);
    if ( a2 == (int *)-448 )
    {
      v9 = 0;
    }
    else
    {
      pthread_mutex_lock((pthread_mutex_t *)(a2 + 440));
      v25 = (void *)a2[400];
      a2[423] = v24;
      if ( v25 )
        free(v25);
      sprintf(s, "%d", v24);
      v9 = 1;
      a2[400] = (int)_strdup(s);
      v26 = v133;
      v27 = *(_DWORD *)v134;
      v28 = *(_DWORD *)&v134[8];
      a2[152] = *(_DWORD *)&v134[4];
      v29 = *a2;
      a2[153] = v28;
      a2[150] = v26;
      a2[151] = v27;
      *((_QWORD *)a2 + 56) = v29;
      pthread_mutex_unlock((pthread_mutex_t *)(a2 + 440));
    }
  }
  if ( *((_DWORD *)v5 + 1) != -1 )
  {
    v8 = v7 - 7;
    v30 = (unsigned int *)v5 + 1;
    __dmb(0xBu);
    do
    {
      v31 = __ldrex(v30);
      v32 = v31 - 1;
    }
    while ( __strex(v32, v30) );
    if ( !v32 )
      goto LABEL_11;
  }
LABEL_12:
  v16 = a2 + 521;
  if ( v9 )
  {
    pool_tset((int)a2, v16, 1);
    return v9;
  }
LABEL_36:
  pool_tclear((int)a2, v16, 0);
  return 0;
}
