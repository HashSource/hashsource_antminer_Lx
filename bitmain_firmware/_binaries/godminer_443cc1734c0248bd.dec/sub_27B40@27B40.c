int __fastcall sub_27B40(_DWORD *a1, const char **a2)
{
  int v3; // r5
  char *all_created_runtime; // r8
  int v5; // r0
  int v6; // r6
  double v7; // d0
  int v8; // r4
  double v9; // d10
  __int64 v10; // r6
  double v11; // d12
  double v12; // d11
  double v13; // d9
  _QWORD *v14; // r0
  double *v15; // r0
  double v16; // r0
  double v17; // d0
  double *v18; // r0
  float v19; // s22
  double *v20; // r0
  int v21; // r0
  double v22; // d0
  double v23; // d7
  double *v24; // r0
  char *v25; // r0
  _QWORD *v26; // r0
  _QWORD *v27; // r0
  _DWORD *v28; // r5
  int *v29; // r8
  int *v30; // r4
  int v31; // t1
  _QWORD *v32; // r0
  __int64 v33; // r4
  int v34; // r1
  double v35; // d8
  double v36; // r0
  double *v37; // r0
  char *v38; // r4
  _DWORD *v39; // r6
  int v40; // r0
  _QWORD *v41; // r0
  _QWORD *v42; // r0
  double v43; // d8
  double v44; // d6
  double *v45; // r0
  double *v46; // r0
  _QWORD *v47; // r0
  int v48; // r1
  _DWORD *v49; // r0
  int v50; // r7
  _DWORD *v51; // r5
  int *v52; // r11
  int v53; // r8
  int v54; // t1
  _QWORD *v55; // r0
  int v56; // r8
  int *v57; // r10
  int *v58; // r11
  int v59; // t1
  _QWORD *v60; // r0
  _DWORD *v61; // r0
  _DWORD *v62; // r5
  int *v63; // r10
  int v64; // r11
  int v65; // t1
  _QWORD *v66; // r0
  int *v67; // r10
  int *v68; // r11
  int v69; // t1
  _QWORD *v70; // r0
  _DWORD *v71; // r5
  int v72; // r11
  int v73; // r10
  int v74; // t1
  _QWORD *v75; // r0
  int v76; // r7
  int v77; // r11
  int v78; // t1
  _QWORD *v79; // r0
  _QWORD *v80; // r0
  _DWORD *v81; // r2
  const char *eeprom_chip_sn; // r0
  char *v83; // r0
  _DWORD *v86; // r2
  char *v87; // r8
  size_t v88; // r7
  size_t v89; // r2
  bool v90; // cf
  int v91; // r3
  int v92; // t1
  bool v93; // zf
  char *v94; // r0
  char *v95; // r10
  char *v96; // r0
  char *v97; // r4
  char *v98; // r11
  int v99; // t1
  int v100; // r2
  int v101; // [sp+10h] [bp-1074h]
  char *v102; // [sp+1Ch] [bp-1068h]
  int v103; // [sp+1Ch] [bp-1068h]
  _DWORD *v104; // [sp+20h] [bp-1064h]
  _DWORD *v105; // [sp+24h] [bp-1060h]
  char *v107; // [sp+34h] [bp-1050h]
  char *ptr; // [sp+38h] [bp-104Ch]
  _DWORD *v109; // [sp+3Ch] [bp-1048h]
  int v110; // [sp+44h] [bp-1040h] BYREF
  double v111; // [sp+48h] [bp-103Ch] BYREF
  _DWORD v112[2]; // [sp+50h] [bp-1034h] BYREF
  _DWORD v113[2]; // [sp+58h] [bp-102Ch] BYREF
  int *v114; // [sp+60h] [bp-1024h]
  float v115; // [sp+64h] [bp-1020h]
  float v116; // [sp+68h] [bp-101Ch]
  float v117; // [sp+6Ch] [bp-1018h]
  double v118; // [sp+70h] [bp-1014h]
  __int64 v119; // [sp+78h] [bp-100Ch]
  char v120[4100]; // [sp+80h] [bp-1004h] BYREF

  v110 = 0;
  v3 = a1 == 0;
  v112[0] = 0;
  v112[1] = 0;
  all_created_runtime = (char *)get_all_created_runtime(&v110);
  v5 = frontend_runtime_instance();
  if ( !a2 )
    v3 = 1;
  if ( v3 )
  {
    V_LOCK();
    logfmt_raw(v120, 0x1000u, 0, "%s: input bad api param", "get_stats");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/api_new.c",
      130,
      "get_stats",
      9,
      595,
      100,
      v120);
    return -2147483646;
  }
  v6 = v5;
  sub_23E3C(a1, a2);
  sub_239F8(a1);
  v109 = json_array();
  read_system_status_from_monitor((int)v113);
  v7 = v118;
  v8 = v113[1];
  format_hashrate_double(*(const char **)(v6 + 84), &v111, (char *)v112);
  v9 = v7;
  v10 = v119;
  v11 = v115 * v7;
  v12 = v116 * v7;
  v13 = v117 * v7;
  if ( v110 > 0 )
  {
    v107 = (char *)malloc(208 * v110);
    v95 = v107;
    v96 = (char *)malloc(4 * v110);
    ptr = v96;
    if ( v110 > 0 )
    {
      v103 = v8;
      v97 = all_created_runtime - 4;
      v98 = v96;
      do
      {
        v99 = *((_DWORD *)v97 + 1);
        v97 += 4;
        read_status_from_monitor(v95, v99);
        v100 = v110;
        v95 += 208;
        *(_DWORD *)&v98[4 * v3++] = *(_DWORD *)(*(_DWORD *)v97 + 140);
      }
      while ( v100 > v3 );
      v8 = v103;
    }
  }
  else
  {
    ptr = 0;
    v107 = 0;
  }
  v105 = json_object();
  get_miner_elapsed_time();
  v14 = json_integer((__int64)v7);
  json_object_set_new(v105, "elapsed", v14);
  sub_12C58C((__int64)(v11 * 100.0));
  v15 = json_real();
  json_object_set_new(v105, "rate_5s", v15);
  LODWORD(v16) = sub_12C58C((__int64)(v12 * 100.0));
  v17 = v16 / 100.0;
  v18 = json_real();
  json_object_set_new(v105, "rate_30m", v18);
  get_total_nonce_rate();
  v19 = *(float *)&v17;
  if ( opt_algo == 5 )
    v13 = *(float *)&v17 * v13;
  sub_12C58C((__int64)(v13 * 100.0));
  v20 = json_real();
  json_object_set_new(v105, "rate_avg", v20);
  v21 = strcmp(*(const char **)(*(_DWORD *)all_created_runtime + 188), "dash");
  v22 = v111;
  if ( v21 )
  {
    if ( opt_algo == 5 )
    {
      v23 = v19 * v111 * 100.0;
      goto LABEL_11;
    }
  }
  else
  {
    update_rate_ideal();
  }
  v23 = v22 * 100.0;
LABEL_11:
  sub_12C58C((__int64)v23);
  v24 = json_real();
  json_object_set_new(v105, "rate_ideal", v24);
  v25 = (char *)BUFX_strdup((const char *)v112);
  json_object_set_new(v105, "rate_unit", v25);
  v26 = json_integer(v110);
  json_object_set_new(v105, "chain_num", v26);
  v27 = json_integer(v8);
  json_object_set_new(v105, "fan_num", v27);
  v28 = json_array();
  if ( v8 > 0 )
  {
    v29 = v114;
    v30 = &v114[v8];
    do
    {
      v31 = *v29++;
      v32 = json_integer(v31);
      json_array_append_new(v28, v32);
    }
    while ( v29 != v30 );
  }
  json_object_set_new(v105, "fan", v28);
  v33 = v10 + total_diff1;
  if ( v10 + total_diff1 )
  {
    LODWORD(v35) = sub_12C57C(v10);
    HIDWORD(v35) = v34;
    LODWORD(v36) = sub_12C57C(v33);
    sub_12C58C((__int64)(v35 / v36 * 100.0 * 10000.0));
  }
  v37 = json_real();
  json_object_set_new(v105, "hwp_total", v37);
  v104 = json_array();
  if ( v110 > 0 )
  {
    v38 = v107;
    v102 = ptr - 4;
    v101 = 0;
    while ( 1 )
    {
      v39 = json_object();
      v40 = *((_DWORD *)v102 + 1);
      v102 += 4;
      v41 = json_integer(v40);
      json_object_set_new(v39, "index", v41);
      v42 = json_integer(*((int *)v38 + 16));
      json_object_set_new(v39, "freq_avg", v42);
      v43 = *((float *)v38 + 9);
      v44 = v9 * *((double *)v38 + 6) * 100.0;
      v111 = v9 * *((double *)v38 + 6);
      sub_12C58C((__int64)v44);
      v45 = json_real();
      json_object_set_new(v39, "rate_ideal", v45);
      sub_12C58C((__int64)(v43 * v9 * 100.0));
      v46 = json_real();
      json_object_set_new(v39, "rate_real", v46);
      v47 = json_integer(*((int *)v38 + 14));
      json_object_set_new(v39, "asic_num", v47);
      v48 = *((_DWORD *)v38 + 15);
      if ( v48 )
      {
        v87 = v120;
        v88 = 0;
        v89 = stpcpy(v120, v48) - (_DWORD)v120;
        while ( 1 )
        {
          v90 = v88++ >= v89;
          if ( v90 )
            break;
          while ( 1 )
          {
            v92 = (unsigned __int8)*v87++;
            v91 = v92;
            v93 = v92 == 111;
            if ( v92 != 111 )
              v93 = v91 == 32;
            if ( v93 )
              break;
            *(v87 - 1) = 120;
            v89 = strlen(v120);
            v90 = v88++ >= v89;
            if ( v90 )
              goto LABEL_58;
          }
        }
LABEL_58:
        v94 = (char *)BUFX_strdup(v120);
        json_object_set_new(v39, "asic", v94);
      }
      v49 = json_array();
      v50 = *((_DWORD *)v38 + 6);
      v51 = v49;
      if ( v50 > 0 )
      {
        v52 = *(int **)v38;
        v53 = *(_DWORD *)v38 + 4 * v50;
        do
        {
          v54 = *v52++;
          v55 = json_integer(v54);
          json_array_append_new(v51, v55);
        }
        while ( (int *)v53 != v52 );
      }
      v56 = *((_DWORD *)v38 + 7);
      if ( v56 > 0 )
      {
        v57 = (int *)*((_DWORD *)v38 + 2);
        v58 = &v57[v56];
        do
        {
          v59 = *v57++;
          v60 = json_integer(v59);
          json_array_append_new(v51, v60);
        }
        while ( v58 != v57 );
      }
      json_object_set_new(v39, "temp_pic", v51);
      v61 = json_array();
      v62 = v61;
      if ( v50 > 0 )
        break;
      if ( v56 > 0 )
        goto LABEL_29;
      json_object_set_new(v39, "temp_pcb", v61);
      v71 = json_array();
LABEL_37:
      json_object_set_new(v39, "temp_chip", v71);
      v80 = json_integer(*((_QWORD *)v38 + 9));
      json_object_set_new(v39, "hw", v80);
      if ( is_eeprom_loaded() )
      {
        if ( is_eeprom_loaded() )
          v81 = json_true();
        else
          v81 = json_false();
        json_object_set_new(v39, "eeprom_loaded", v81);
        if ( api_get_eeprom_chip_sn(v101) )
        {
          eeprom_chip_sn = (const char *)api_get_eeprom_chip_sn(v101);
          v83 = (char *)BUFX_strdup(eeprom_chip_sn);
          json_object_set_new(v39, "sn", v83);
        }
      }
      else
      {
        if ( is_eeprom_loaded() )
          v86 = json_true();
        else
          v86 = json_false();
        json_object_set_new(v39, "eeprom_loaded", v86);
      }
      json_array_append_new(v104, v39);
      v38 += 208;
      if ( v110 <= ++v101 )
        goto LABEL_44;
    }
    v63 = *(int **)v38;
    v64 = *(_DWORD *)v38 + 4 * v50;
    do
    {
      v65 = *v63++;
      v66 = json_integer(v65);
      json_array_append_new(v62, v66);
    }
    while ( (int *)v64 != v63 );
    if ( v56 <= 0 )
    {
      json_object_set_new(v39, "temp_pcb", v62);
      v71 = json_array();
    }
    else
    {
LABEL_29:
      v67 = (int *)*((_DWORD *)v38 + 2);
      v68 = &v67[v56];
      do
      {
        v69 = *v67++;
        v70 = json_integer(v69);
        json_array_append_new(v62, v70);
      }
      while ( v68 != v67 );
      json_object_set_new(v39, "temp_pcb", v62);
      v71 = json_array();
      if ( v50 <= 0 )
      {
LABEL_35:
        v76 = 0;
        v77 = *((_DWORD *)v38 + 3) - 4;
        do
        {
          v78 = *(_DWORD *)(v77 + 4);
          v77 += 4;
          ++v76;
          v79 = json_integer(v78);
          json_array_append_new(v71, v79);
        }
        while ( v76 < v56 );
        goto LABEL_37;
      }
    }
    v72 = 0;
    v73 = *((_DWORD *)v38 + 1) - 4;
    do
    {
      v74 = *(_DWORD *)(v73 + 4);
      v73 += 4;
      ++v72;
      v75 = json_integer(v74);
      json_array_append_new(v71, v75);
    }
    while ( v72 < v50 );
    if ( v56 <= 0 )
      goto LABEL_37;
    goto LABEL_35;
  }
LABEL_44:
  json_object_set_new(v105, "chain", v104);
  json_array_append_new(v109, v105);
  json_object_set_new(a1, "STATS", v109);
  if ( v110 > 0 )
  {
    free(ptr);
    free(v107);
  }
  return 0;
}
