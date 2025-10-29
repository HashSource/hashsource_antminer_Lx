unsigned int __fastcall stratum_handle_method_vbk(int a1, pthread_mutex_t *a2, int a3)
{
  _DWORD *v4; // r0
  _DWORD *v5; // r4
  int command_type; // r0
  int v7; // r5
  unsigned int v8; // r5
  unsigned int v9; // r6
  unsigned int *v11; // r3
  unsigned int v12; // r6
  char *v13; // r1
  _DWORD *v14; // r0
  _DWORD *v15; // r0
  unsigned __int8 *v16; // r0
  _DWORD *v17; // r0
  int v18; // r0
  unsigned int v19; // r6
  void *v20; // r0
  int v21; // r0
  unsigned int v22; // r1
  int v23; // r3
  int v24; // r2
  unsigned int *v25; // r3
  unsigned int v26; // r2
  unsigned int v27; // r2
  _DWORD *v28; // r0
  int v29; // r10
  _DWORD *v30; // r0
  int v31; // r9
  _DWORD *v32; // r0
  _DWORD *v33; // r0
  const char *v34; // r11
  _DWORD *v35; // r0
  _DWORD *v36; // r0
  _DWORD *v37; // r0
  _DWORD *v38; // r0
  _DWORD *v39; // r0
  _DWORD *v40; // r0
  _DWORD *v41; // r0
  _DWORD *v42; // r0
  _DWORD *v43; // r0
  _DWORD *v44; // r0
  _DWORD *v45; // r0
  _DWORD *v46; // r0
  int v47; // r0
  bool v48; // zf
  bool v49; // zf
  unsigned int *v50; // r3
  unsigned int v51; // r6
  bool v52; // zf
  bool v53; // zf
  _BOOL4 v54; // r2
  _BOOL4 v55; // r6
  unsigned int v56; // r9
  int v57; // r10
  unsigned int v58; // r1
  unsigned int v59; // r3
  _BYTE *v60; // r9
  _DWORD *v61; // r6
  int v62; // r4
  int v63; // r1
  int i; // r9
  char byte_from_hex; // r0
  char *v66; // r3
  int j; // r9
  char v68; // r0
  char *v69; // r3
  void *nusers; // r0
  void *lock; // r0
  int *v72; // r6
  pthread_mutex_t *v73; // r12
  int v74; // r0
  int v75; // r1
  unsigned int v76; // r2
  int v77; // r3
  int v78; // r1
  int v79; // r2
  unsigned int v80; // r3
  int v81; // r0
  int v82; // r1
  char *v83; // [sp+14h] [bp-11B8h]
  char *v84; // [sp+18h] [bp-11B4h]
  int v85; // [sp+1Ch] [bp-11B0h]
  unsigned int v86; // [sp+1Ch] [bp-11B0h]
  int v87; // [sp+20h] [bp-11ACh]
  __int64 v88; // [sp+20h] [bp-11ACh]
  char *v89; // [sp+28h] [bp-11A4h]
  int v90; // [sp+2Ch] [bp-11A0h]
  char *v91; // [sp+30h] [bp-119Ch]
  int v92; // [sp+34h] [bp-1198h]
  unsigned int v93; // [sp+34h] [bp-1198h]
  __int16 v94; // [sp+38h] [bp-1194h]
  int v95; // [sp+3Ch] [bp-1190h]
  _DWORD v96[2]; // [sp+40h] [bp-118Ch] BYREF
  char v97; // [sp+48h] [bp-1184h]
  _DWORD v98[2]; // [sp+4Ch] [bp-1180h] BYREF
  char v99; // [sp+54h] [bp-1178h]
  _DWORD v100[3]; // [sp+58h] [bp-1174h] BYREF
  _DWORD v101[4]; // [sp+64h] [bp-1168h] BYREF
  _DWORD v102[6]; // [sp+74h] [bp-1158h] BYREF
  int v103; // [sp+8Ch] [bp-1140h] BYREF
  _BYTE v104[14]; // [sp+90h] [bp-113Ch]
  int v105; // [sp+9Eh] [bp-112Eh]
  int v106; // [sp+A2h] [bp-112Ah]
  char v107; // [sp+A6h] [bp-1126h]
  int v108; // [sp+A7h] [bp-1125h]
  int v109; // [sp+ABh] [bp-1121h]
  char v110; // [sp+AFh] [bp-111Dh]
  int v111; // [sp+B0h] [bp-111Ch]
  int v112; // [sp+B4h] [bp-1118h]
  int v113; // [sp+B8h] [bp-1114h]
  int v114; // [sp+BCh] [bp-1110h]
  char v115; // [sp+C0h] [bp-110Ch]
  char v116; // [sp+C1h] [bp-110Bh]
  char v117; // [sp+C2h] [bp-110Ah]
  char v118; // [sp+C3h] [bp-1109h]
  char v119; // [sp+C4h] [bp-1108h]
  char v120; // [sp+C5h] [bp-1107h]
  char v121; // [sp+C6h] [bp-1106h]
  char v122; // [sp+C7h] [bp-1105h]
  int v123; // [sp+C8h] [bp-1104h]
  _DWORD v124[23]; // [sp+CCh] [bp-1100h] BYREF
  char v125[160]; // [sp+128h] [bp-10A4h] BYREF
  char s[4100]; // [sp+1C8h] [bp-1004h] BYREF

  v4 = json_loads(a3, 0, (char *)v124);
  v5 = v4;
  if ( !v4 )
  {
    V_LOCK();
    logfmt_raw(s, 0x1000u, 0, "JSON decode failed(%d): %s", v124[0], v125);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_vbk/frontend_vbk.c",
      157,
      "stratum_handle_method_vbk",
      25,
      314,
      100,
      s);
    return 0;
  }
  command_type = get_command_type(v4);
  v7 = command_type;
  if ( command_type == 7 )
  {
    v28 = (_DWORD *)json_object_get(v5, "job_id");
    v29 = json_object_get(v28, "data");
    v30 = (_DWORD *)json_object_get(v5, "block_version");
    v31 = json_object_get(v30, "data");
    v32 = (_DWORD *)json_object_get(v5, "previous_block_hash");
    v33 = (_DWORD *)json_object_get(v32, "data");
    v34 = (const char *)json_string_value(v33);
    v35 = (_DWORD *)json_object_get(v5, "second_previous_block_hash");
    v36 = (_DWORD *)json_object_get(v35, "data");
    v91 = (char *)json_string_value(v36);
    v37 = (_DWORD *)json_object_get(v5, "third_previous_block_hash");
    v38 = (_DWORD *)json_object_get(v37, "data");
    v83 = (char *)json_string_value(v38);
    v39 = (_DWORD *)json_object_get(v5, "merkle_root");
    v40 = (_DWORD *)json_object_get(v39, "data");
    v84 = (char *)json_string_value(v40);
    v41 = (_DWORD *)json_object_get(v5, "block_index");
    v85 = json_object_get(v41, "data");
    v42 = (_DWORD *)json_object_get(v5, "timestamp");
    v87 = json_object_get(v42, "data");
    v43 = (_DWORD *)json_object_get(v5, "difficulty");
    v90 = json_object_get(v43, "data");
    v44 = (_DWORD *)json_object_get(v5, "mining_target");
    v45 = (_DWORD *)json_object_get(v44, "data");
    v89 = (char *)json_string_value(v45);
    v46 = (_DWORD *)json_object_get(v5, "extra_nonce_start");
    v47 = json_object_get(v46, "data");
    v48 = v31 == 0;
    if ( v31 )
      v48 = v29 == 0;
    if ( v48 )
      goto LABEL_31;
    v49 = v91 == 0;
    if ( v91 )
      v49 = v34 == 0;
    if ( v49 )
      goto LABEL_31;
    v52 = v84 == 0;
    if ( v84 )
      v52 = v83 == 0;
    if ( v52 )
      goto LABEL_31;
    v53 = v87 == 0;
    if ( v87 )
      v53 = v85 == 0;
    if ( v53 )
      goto LABEL_31;
    v54 = v89 == 0;
    if ( !v90 )
      v54 = 1;
    v55 = !v47 || v54;
    if ( v55
      || (v92 = v47, strlen(v34) <= 0x2F)
      || strlen(v91) <= 0x2F
      || strlen(v83) <= 0x2F
      || strlen(v84) <= 0x1F
      || strlen(v89) <= 0x2F )
    {
LABEL_31:
      V_LOCK();
      logfmt_raw(s, 0x1000u, 0, "%s: invalid parameters", "stratum_handle_method_vbk");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_vbk/frontend_vbk.c",
        157,
        "stratum_handle_method_vbk",
        25,
        351,
        100,
        s);
      if ( v5[1] == -1 )
        goto LABEL_35;
      v50 = v5 + 1;
      __dmb(0xBu);
      do
      {
        v51 = __ldrex(v50);
        v9 = v51 - 1;
      }
      while ( __strex(v9, v50) );
      if ( v9 )
      {
LABEL_35:
        v13 = &a2[86].__size[12];
        goto LABEL_36;
      }
      v8 = 0;
      goto LABEL_11;
    }
    v95 = v92;
    v93 = json_integer_value(v29);
    v94 = json_integer_value(v31);
    v56 = json_integer_value(v85);
    v57 = json_integer_value(v87);
    v86 = json_integer_value(v90);
    v88 = json_integer_value(v95);
    v58 = HIWORD(v56);
    HIBYTE(v103) = v56;
    v104[1] = v94;
    LOBYTE(v103) = HIBYTE(v56);
    v59 = v56 >> 8;
    v60 = v100;
    v104[0] = HIBYTE(v94);
    v61 = v5;
    v62 = 24;
    BYTE1(v103) = v58;
    BYTE2(v103) = v59;
    do
    {
      v63 = v62;
      v62 += 2;
      *v60++ = extract_byte_from_hex(v34, v63);
    }
    while ( v62 != 48 );
    v5 = v61;
    v9 = 0;
    for ( i = 15; i != 24; ++i )
    {
      byte_from_hex = extract_byte_from_hex(v91, 2 * i);
      v66 = (char *)v96 + i;
      *(v66 - 15) = byte_from_hex;
    }
    for ( j = 15; j != 24; ++j )
    {
      v68 = extract_byte_from_hex(v83, 2 * j);
      v69 = (char *)v98 + j;
      *(v69 - 15) = v68;
    }
    hex2bin((int)v101, (unsigned __int8 *)v84, 16);
    *(_DWORD *)&v104[2] = v100[0];
    *(_DWORD *)&v104[6] = v100[1];
    *(_DWORD *)&v104[10] = v100[2];
    v105 = v96[0];
    v106 = v96[1];
    v107 = v97;
    v108 = v98[0];
    v109 = v98[1];
    v110 = v99;
    v118 = v57;
    v111 = v101[0];
    v112 = v101[1];
    v113 = v101[2];
    v114 = v101[3];
    v117 = BYTE1(v57);
    v115 = HIBYTE(v57);
    v119 = HIBYTE(v86);
    v116 = BYTE2(v57);
    v123 = 0;
    v122 = v86;
    v120 = BYTE2(v86);
    v121 = BYTE1(v86);
    hex2bin((int)v102, (unsigned __int8 *)v89, 24);
    if ( a2 != (pthread_mutex_t *)-448 )
    {
      pthread_mutex_lock(a2 + 73);
      nusers = (void *)a2[66].__nusers;
      if ( nusers )
      {
        free(nusers);
        a2[66].__nusers = 0;
      }
      lock = (void *)a2[67].__lock;
      if ( lock )
      {
        free(lock);
        a2[67].__lock = 0;
      }
      v72 = &v103;
      a2[70].__count = v93;
      sprintf(s, "%d", v93);
      a2[66].__nusers = (unsigned int)_strdup(s);
      v73 = a2 + 19;
      a2[70].__owner = v57;
      *((_QWORD *)&a2[70].__align + 2) = v88;
      do
      {
        v73 = (pthread_mutex_t *)((char *)v73 + 16);
        v74 = *v72;
        v75 = v72[1];
        v76 = v72[2];
        v77 = v72[3];
        v72 += 4;
        v73[-1].__owner = v74;
        v73[-1].__kind = v75;
        v73[-1].__nusers = v76;
        v73[-1].__spins = v77;
      }
      while ( v72 != v124 );
      v9 = 1;
      v78 = v102[1];
      v79 = v102[2];
      v80 = v102[3];
      a2[61].__nusers = v102[0];
      a2[61].__spins = v78;
      v81 = v102[4];
      v82 = v102[5];
      a2[62].__count = v80;
      a2[62].__lock = v79;
      a2[62].__owner = v81;
      a2[62].__kind = v82;
      *((_QWORD *)&a2[18].__align + 2) = a2->__lock;
      *(double *)&a2[82].__lock = (double)v86;
      *((double *)&a2[65].__align + 2) = (double)v86;
      pthread_mutex_unlock(a2 + 73);
    }
  }
  else
  {
    if ( command_type != 8 )
    {
      v8 = command_type - 7;
      if ( v5[1] == -1 )
        return 0;
      v11 = v5 + 1;
      __dmb(0xBu);
      do
      {
        v12 = __ldrex(v11);
        v9 = v12 - 1;
      }
      while ( __strex(v9, v11) );
      if ( v9 )
        return 0;
LABEL_11:
      json_delete(v5);
      if ( v8 <= 1 )
        goto LABEL_12;
      return v9;
    }
    v14 = (_DWORD *)json_object_get(v5, "new_merkle_root");
    v15 = (_DWORD *)json_object_get(v14, "data");
    v16 = (unsigned __int8 *)json_string_value(v15);
    hex2bin((int)&v103, v16, 16);
    v17 = (_DWORD *)json_object_get(v5, "job_id");
    v18 = json_object_get(v17, "data");
    v19 = json_integer_value(v18);
    if ( a2 == (pthread_mutex_t *)-448 )
    {
      v9 = 0;
    }
    else
    {
      pthread_mutex_lock(a2 + 73);
      v20 = (void *)a2[66].__nusers;
      a2[70].__count = v19;
      if ( v20 )
        free(v20);
      sprintf(s, "%d", v19);
      v9 = 1;
      a2[66].__nusers = (unsigned int)_strdup(s);
      v21 = v103;
      v22 = *(_DWORD *)v104;
      v23 = *(_DWORD *)&v104[8];
      a2[25].__owner = *(_DWORD *)&v104[4];
      v24 = a2->__lock;
      a2[25].__kind = v23;
      a2[25].__lock = v21;
      a2[25].__count = v22;
      *((_QWORD *)&a2[18].__align + 2) = v24;
      pthread_mutex_unlock(a2 + 73);
    }
  }
  if ( v5[1] != -1 )
  {
    v8 = v7 - 7;
    v25 = v5 + 1;
    __dmb(0xBu);
    do
    {
      v26 = __ldrex(v25);
      v27 = v26 - 1;
    }
    while ( __strex(v27, v25) );
    if ( !v27 )
      goto LABEL_11;
  }
LABEL_12:
  v13 = &a2[86].__size[12];
  if ( v9 )
  {
    pool_tset((int)a2, v13, 1);
    return v9;
  }
LABEL_36:
  pool_tclear((int)a2, v13, 0);
  return 0;
}
