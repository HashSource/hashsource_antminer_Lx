int __fastcall sub_22B04(json_t *a1, int a2, int a3)
{
  json_t *v4; // r0
  json_t *v5; // r0
  json_t *v6; // r0
  json_t *v7; // r0
  char *v8; // r4
  json_t *v9; // r0
  json_t *v10; // r0
  double v11; // d0
  double v12; // r0
  double v13; // d16
  double v14; // d16
  json_t *v15; // r0
  double *v16; // r0
  double *v17; // r0
  double *v18; // r0
  double *v19; // r0
  json_t *v20; // r0
  json_t *v21; // r0
  int v22; // r3
  json_t *v23; // r0
  json_t *v24; // r0
  json_t *v25; // r0
  int v26; // r3
  json_t *v27; // r0
  int v28; // r3
  json_t *v29; // r0
  int v30; // r3
  json_t *v31; // r0
  json_t *v32; // r0
  json_t *v33; // r0
  json_t *v34; // r0
  json_t *v35; // r0
  json_t *v36; // r0
  __int64 v37; // r0
  json_t *v38; // r0
  json_t *v39; // r0
  json_t *v40; // r0
  json_t *v41; // r0
  double *v42; // r0
  json_t *v43; // r0
  __int64 v44; // r0
  json_t *v45; // r0
  json_t *v46; // r0
  json_t *v47; // r0
  json_t *v48; // r0
  _BYTE v50[228]; // [sp+10h] [bp-13BCh] BYREF
  int v51; // [sp+F4h] [bp-12D8h]
  int v52; // [sp+F8h] [bp-12D4h]
  json_t *v53; // [sp+FCh] [bp-12D0h]
  char v54[72]; // [sp+104h] [bp-12C8h] BYREF
  char v55[12]; // [sp+1104h] [bp-2C8h] BYREF
  int v56; // [sp+1110h] [bp-2BCh] BYREF
  int v57; // [sp+1114h] [bp-2B8h] BYREF
  int v58; // [sp+1118h] [bp-2B4h] BYREF
  int v59; // [sp+111Ch] [bp-2B0h] BYREF
  double v60; // [sp+1120h] [bp-2ACh] BYREF
  char v61[32]; // [sp+1128h] [bp-2A4h] BYREF
  char v62[32]; // [sp+1148h] [bp-284h] BYREF
  char v63[32]; // [sp+1168h] [bp-264h] BYREF
  char v64[32]; // [sp+1188h] [bp-244h] BYREF
  char v65[12]; // [sp+11A8h] [bp-224h] BYREF
  int v66; // [sp+11B4h] [bp-218h] BYREF
  char v67[4]; // [sp+11B8h] [bp-214h] BYREF
  int v68; // [sp+11BCh] [bp-210h]
  int v69; // [sp+11C0h] [bp-20Ch]
  float v70; // [sp+11C4h] [bp-208h]
  float v71; // [sp+11C8h] [bp-204h]
  float v72; // [sp+11CCh] [bp-200h]
  float v73; // [sp+11D0h] [bp-1FCh]
  double v74; // [sp+11D8h] [bp-1F4h]
  char s[256]; // [sp+11F0h] [bp-1DCh] BYREF
  char v76[32]; // [sp+12F0h] [bp-DCh] BYREF
  _QWORD v77[3]; // [sp+1310h] [bp-BCh] BYREF
  float v78; // [sp+1328h] [bp-A4h]
  float v79; // [sp+132Ch] [bp-A0h]
  double v80; // [sp+1330h] [bp-9Ch]
  double v81; // [sp+1338h] [bp-94h]
  double v82; // [sp+1340h] [bp-8Ch]
  double v83; // [sp+1348h] [bp-84h]
  double v84; // [sp+1350h] [bp-7Ch]
  double v85; // [sp+1358h] [bp-74h]
  double v86; // [sp+1360h] [bp-6Ch]
  double v87; // [sp+1368h] [bp-64h]
  int v88; // [sp+1374h] [bp-58h]
  _DWORD *all_created_runtime; // [sp+1378h] [bp-54h]
  int v90; // [sp+137Ch] [bp-50h]
  double v91; // [sp+1380h] [bp-4Ch]
  int v92; // [sp+1388h] [bp-44h]
  int v93; // [sp+138Ch] [bp-40h]
  int v94; // [sp+1390h] [bp-3Ch]
  int v95; // [sp+1394h] [bp-38h]
  json_t *v96; // [sp+1398h] [bp-34h]
  json_t *v97; // [sp+139Ch] [bp-30h]
  double v98; // [sp+13A0h] [bp-2Ch]
  int v99; // [sp+13A8h] [bp-24h]
  int v100; // [sp+13ACh] [bp-20h]
  unsigned __int8 v101; // [sp+13B3h] [bp-19h]
  void *ptr; // [sp+13B4h] [bp-18h]
  void *v103; // [sp+13B8h] [bp-14h]
  int i; // [sp+13BCh] [bp-10h]

  v53 = a1;
  v52 = a2;
  v51 = a3;
  v97 = 0;
  v96 = 0;
  v95 = 0;
  i = 0;
  v94 = 0;
  v93 = 0;
  memset(v77, 0, 16);
  memset(v76, 0, sizeof(v76));
  memset(s, 0, sizeof(s));
  v92 = 0;
  v66 = 0;
  v103 = 0;
  ptr = 0;
  v101 = 0;
  v100 = -100;
  v99 = 0x7FFFFFFF;
  v98 = 0.0;
  v91 = 0.0;
  v90 = v52;
  if ( v52 && v53 )
  {
    sub_20F64(v53, 1, 70, *(const char **)(v90 + 8));
    v97 = (json_t *)json_array();
    v96 = (json_t *)json_object();
    v4 = (json_t *)json_string("2.12");
    json_object_set_new(v96, "BMMiner", v4);
    v5 = (json_t *)json_string(g_miner_version);
    json_object_set_new(v96, "Miner", v5);
    v6 = (json_t *)json_string(g_miner_compiletime);
    json_object_set_new(v96, "CompileTime", v6);
    v7 = (json_t *)json_string(g_miner_type);
    json_object_set_new(v96, "Type", v7);
    json_array_append_new(v97, v96);
    read_system_status_from_monitor((int)v67);
    all_created_runtime = get_all_created_runtime(&v66);
    v88 = frontend_runtime_instance();
    if ( v66 > 0 )
    {
      v103 = malloc(224 * v66);
      ptr = malloc(4 * v66);
      for ( i = 0; i < v66; ++i )
      {
        v8 = (char *)v103 + 224 * i;
        read_status_from_monitor(v50, all_created_runtime[i]);
        memcpy(v8, v50, 0xE0u);
        *((_DWORD *)ptr + i) = *(_DWORD *)(all_created_runtime[i] + 252) + 1;
      }
    }
    v96 = (json_t *)json_object();
    v9 = (json_t *)json_integer(i, i >> 31);
    json_object_set_new(v96, "STATS", v9);
    snprintf((char *)v77, 0x10u, "BTM_SOC%d", i);
    v10 = (json_t *)json_string((const char *)v77);
    json_object_set_new(v96, "ID", v10);
    format_hashrate_string(*(const char **)(*(_DWORD *)(v88 + 72) + 16), v64);
    format_hashrate_string(*(const char **)(*(_DWORD *)(v88 + 72) + 16), v63);
    format_hashrate_string(*(const char **)(*(_DWORD *)(v88 + 72) + 16), v62);
    format_hashrate_string(*(const char **)(*(_DWORD *)(v88 + 72) + 16), v61);
    v11 = v74;
    format_hashrate_double(*(const char **)(*(_DWORD *)(v88 + 72) + 16), &v60, v65);
    v87 = v11;
    v86 = v11 * v70;
    v85 = v11 * v71;
    v84 = v11 * v72;
    v83 = v11 * v73;
    get_miner_elapsed_time();
    v82 = v11;
    LODWORD(v12) = sub_CCAE4(*(__int64 *)&total_accepted);
    if ( v82 == 0.0 )
      v13 = 1.0;
    else
      v13 = v82;
    v81 = v12 / v13 * 60.0;
    if ( v82 == 0.0 )
      v14 = 1.0;
    else
      v14 = v82;
    v80 = (total_diff_accepted + total_diff_rejected + total_diff_stale) / v14 * 60.0;
    get_total_nonce_rate();
    v79 = *(float *)&v11;
    get_total_accept_rate();
    v78 = *(float *)&v11;
    v15 = (json_t *)json_integer((__int64)v82, (unsigned __int64)(__int64)v82 >> 32);
    json_object_set_new(v96, "Elapsed", v15);
    sub_CCAE4((__int64)(v86 * 100.0));
    v16 = json_real();
    json_object_set_new(v96, "GHS 5s", (json_t *)v16);
    sub_CCAE4((__int64)(v83 * 100.0));
    v17 = json_real();
    json_object_set_new(v96, "GHS av", (json_t *)v17);
    sub_CCAE4((__int64)(v84 * 100.0));
    v18 = json_real();
    json_object_set_new(v96, "rate_30m", (json_t *)v18);
    sub_CCAE4((__int64)(v60 * 100.0));
    v19 = json_real();
    json_object_set_new(v96, "total_rateideal", (json_t *)v19);
    v20 = (json_t *)json_integer(opt_bitmain_work_mode, opt_bitmain_work_mode >> 31);
    json_object_set_new(v96, "Mode", v20);
    v21 = (json_t *)json_integer(v66, v66 >> 31);
    json_object_set_new(v96, "miner_count", v21);
    for ( i = 0; i < v66; ++i )
    {
      v22 = *((_DWORD *)v103 + 56 * i + 20);
      if ( v99 < v22 )
        v22 = v99;
      v99 = v22;
    }
    v23 = (json_t *)json_integer(v99, v99 >> 31);
    json_object_set_new(v96, "frequency", v23);
    v24 = (json_t *)json_integer(v68, v68 >> 31);
    json_object_set_new(v96, "fan_num", v24);
    for ( i = 0; i < v68; ++i )
    {
      memset(v76, 0, sizeof(v76));
      snprintf(v76, 0x20u, "fan%d", i + 1);
      v25 = (json_t *)json_integer(*(_DWORD *)(v69 + 4 * i), *(int *)(v69 + 4 * i) >> 31);
      json_object_set_new(v96, v76, v25);
    }
    for ( i = 0; i < v66; ++i )
    {
      v101 += *((_DWORD *)v103 + 56 * i + 7) + *((_DWORD *)v103 + 56 * i + 8);
      v26 = *((_DWORD *)v103 + 56 * i + 5);
      if ( v100 >= v26 )
        v26 = v100;
      v100 = v26;
    }
    v27 = (json_t *)json_integer(v101, 0);
    json_object_set_new(v96, "temp_num", v27);
    for ( i = 0; i < v66; ++i )
    {
      v59 = 0;
      v58 = 0;
      v57 = 0;
      v56 = 0;
      v92 = -255;
      find_min_and_max_int(*((int **)v103 + 56 * i + 1), *((_DWORD *)v103 + 56 * i + 7), &v59, &v58);
      find_min_and_max_int(*((int **)v103 + 56 * i + 3), *((_DWORD *)v103 + 56 * i + 8), &v57, &v56);
      v28 = v58;
      if ( v56 >= v58 )
        v28 = v56;
      v92 = v28;
      sprintf(v76, "temp%d", *((_DWORD *)ptr + i));
      v29 = (json_t *)json_integer(v92, v92 >> 31);
      json_object_set_new(v96, v76, v29);
      v92 = -255;
      v56 = 0;
      v57 = 0;
      v58 = 0;
      v59 = 0;
      find_min_and_max_int(*((int **)v103 + 56 * i + 2), *((_DWORD *)v103 + 56 * i + 7), &v59, &v58);
      find_min_and_max_int(*((int **)v103 + 56 * i + 4), *((_DWORD *)v103 + 56 * i + 8), &v57, &v56);
      v30 = v58;
      if ( v56 >= v58 )
        v30 = v56;
      v92 = v30;
      sprintf(v76, "temp2_%d", *((_DWORD *)ptr + i));
      v31 = (json_t *)json_integer(v92, v92 >> 31);
      json_object_set_new(v96, v76, v31);
    }
    for ( i = 0; i < v66; ++i )
    {
      memset(v76, 0, sizeof(v76));
      memset(s, 0, sizeof(s));
      snprintf(v76, 0x20u, "temp_in_pcb_%d", *((_DWORD *)ptr + i));
      sub_22A40(*((_DWORD *)v103 + 56 * i + 1), *((_DWORD *)v103 + 56 * i + 7), s);
      v32 = (json_t *)json_string(s);
      json_object_set_new(v96, v76, v32);
    }
    for ( i = 0; i < v66; ++i )
    {
      memset(v76, 0, sizeof(v76));
      memset(s, 0, sizeof(s));
      snprintf(v76, 0x20u, "temp_out_pcb_%d", *((_DWORD *)ptr + i));
      sub_22A40(*((_DWORD *)v103 + 56 * i + 3), *((_DWORD *)v103 + 56 * i + 8), s);
      v33 = (json_t *)json_string(s);
      json_object_set_new(v96, v76, v33);
    }
    for ( i = 0; i < v66; ++i )
    {
      memset(v76, 0, sizeof(v76));
      memset(s, 0, sizeof(s));
      snprintf(v76, 0x20u, "temp_in_chip_%d", *((_DWORD *)ptr + i));
      sub_22A40(*((_DWORD *)v103 + 56 * i + 2), *((_DWORD *)v103 + 56 * i + 7), s);
      v34 = (json_t *)json_string(s);
      json_object_set_new(v96, v76, v34);
    }
    for ( i = 0; i < v66; ++i )
    {
      memset(v76, 0, sizeof(v76));
      memset(s, 0, sizeof(s));
      snprintf(v76, 0x20u, "temp_out_chip_%d", *((_DWORD *)ptr + i));
      sub_22A40(*((_DWORD *)v103 + 56 * i + 3), *((_DWORD *)v103 + 56 * i + 8), s);
      v35 = (json_t *)json_string(s);
      json_object_set_new(v96, v76, v35);
    }
    v36 = (json_t *)json_integer(v100, v100 >> 31);
    json_object_set_new(v96, "temp_max", v36);
    for ( i = 0; i < v66; ++i )
    {
      memset(v76, 0, sizeof(v76));
      snprintf(v76, 0x20u, "chain_acn%d", *((_DWORD *)ptr + i));
      v37 = *((int *)v103 + 56 * i + 18);
      v38 = (json_t *)json_integer(v37, HIDWORD(v37));
      json_object_set_new(v96, v76, v38);
    }
    for ( i = 0; i < v66; ++i )
    {
      sprintf(v55, "chain_acs%d", *((_DWORD *)ptr + i));
      memset(v76, 0, sizeof(v76));
      memset(s, 0, sizeof(s));
      snprintf(v76, 0x20u, "chain_acs%d", *((_DWORD *)ptr + i));
      snprintf(s, 0x100u, "%s", *((const char **)v103 + 56 * i + 19));
      v39 = (json_t *)json_string(s);
      json_object_set_new(v96, v76, v39);
    }
    for ( i = 0; i < v66; ++i )
    {
      memset(v76, 0, sizeof(v76));
      snprintf(v76, 0x20u, "chain_hw%d", *((_DWORD *)ptr + i));
      v40 = (json_t *)json_integer(*((_DWORD *)v103 + 56 * i + 22), *((_DWORD *)v103 + 56 * i + 23));
      json_object_set_new(v96, v76, v40);
      *(_QWORD *)&v98 += *((_QWORD *)v103 + 28 * i + 11);
    }
    v41 = (json_t *)json_integer(LODWORD(v98), HIDWORD(v98));
    json_object_set_new(v96, "no_matching_work", v41);
    for ( i = 0; i < v66; ++i )
    {
      memset(v76, 0, sizeof(v76));
      snprintf(v76, 0x20u, "chain_rate%d", *((_DWORD *)ptr + i));
      *(double *)&v77[2] = *((float *)v103 + 56 * i + 12) / 1000.0 / 1000.0 / 1000.0;
      v42 = json_real();
      json_object_set_new(v96, v76, (json_t *)v42);
    }
    for ( i = 0; i < v66; ++i )
    {
      format_hashrate_string(*(const char **)(*(_DWORD *)(v88 + 72) + 16), v54);
      snprintf(v76, 0x20u, "CHAIN AVG HASHRATE%d", *((_DWORD *)ptr + i));
      v43 = (json_t *)json_string(v54);
      json_object_set_new(v96, v76, v43);
    }
    for ( i = 0; i < v66; ++i )
    {
      memset(v76, 0, sizeof(v76));
      snprintf(v76, 0x20u, "freq%d", *((_DWORD *)ptr + i));
      v44 = *((int *)v103 + 56 * i + 20);
      v45 = (json_t *)json_integer(v44, HIDWORD(v44));
      json_object_set_new(v96, v76, v45);
    }
    v46 = (json_t *)json_string(g_miner_version);
    json_object_set_new(v96, "miner_version", v46);
    v47 = (json_t *)json_string(0);
    json_object_set_new(v96, "miner_id", v47);
    json_array_append_new(v97, v96);
    json_object_set_new(v53, "STATS", v97);
    v48 = (json_t *)json_integer(1, 0);
    json_object_set_new(v53, "id", v48);
    if ( v66 > 0 )
    {
      free(ptr);
      free(v103);
    }
    return v95;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v54, 0x1000u, 0, "%s: input bad api param", "get_stats_old");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/api_new.c",
      147,
      "get_stats_old",
      13,
      1366,
      100,
      v54);
    return -2147483646;
  }
}
