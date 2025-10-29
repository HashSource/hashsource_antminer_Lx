int __fastcall sub_1F6E4(json_t *a1, const char **a2)
{
  double v3; // d0
  char *v4; // r4
  json_t *v5; // r0
  double *v6; // r0
  double *v7; // r0
  double *v8; // r0
  double *v9; // r0
  json_t *v10; // r0
  json_t *v11; // r0
  json_t *v12; // r0
  json_t *v13; // r0
  int v14; // r1
  double v15; // d8
  double v16; // r0
  double v17; // d16
  double *v18; // r0
  json_t *v19; // r0
  __int64 v20; // r0
  json_t *v21; // r0
  double *v22; // r0
  double *v23; // r0
  __int64 v24; // r0
  json_t *v25; // r0
  json_t *v26; // r0
  json_t *v27; // r0
  json_t *v28; // r0
  __int64 v29; // r0
  json_t *v30; // r0
  __int64 v31; // r0
  json_t *v32; // r0
  __int64 v33; // r0
  json_t *v34; // r0
  __int64 v35; // r0
  json_t *v36; // r0
  json_t *v37; // r0
  json_t *v38; // r3
  const char *eeprom_chip_sn; // r0
  json_t *v40; // r0
  json_t *v41; // r3
  _BYTE v43[224]; // [sp+10h] [bp-15CCh] BYREF
  const char **v44; // [sp+F0h] [bp-14ECh]
  json_t *v45; // [sp+F4h] [bp-14E8h]
  char v46[32]; // [sp+FCh] [bp-14E0h] BYREF
  int v47; // [sp+10FCh] [bp-4E0h] BYREF
  double v48; // [sp+1100h] [bp-4DCh] BYREF
  int v49; // [sp+1108h] [bp-4D4h] BYREF
  int v50; // [sp+110Ch] [bp-4D0h]
  int v51; // [sp+1110h] [bp-4CCh]
  float v52; // [sp+1114h] [bp-4C8h]
  float v53; // [sp+1118h] [bp-4C4h]
  float v54; // [sp+111Ch] [bp-4C0h]
  float v55; // [sp+1120h] [bp-4BCh]
  double v56; // [sp+1128h] [bp-4B4h]
  __int64 v57; // [sp+1138h] [bp-4A4h]
  char v58[12]; // [sp+1140h] [bp-49Ch] BYREF
  _QWORD v59[3]; // [sp+1540h] [bp-9Ch] BYREF
  float v60; // [sp+1558h] [bp-84h]
  float v61; // [sp+155Ch] [bp-80h]
  __int64 v62; // [sp+1560h] [bp-7Ch]
  double v63; // [sp+1568h] [bp-74h]
  double v64; // [sp+1570h] [bp-6Ch]
  double v65; // [sp+1578h] [bp-64h]
  double v66; // [sp+1580h] [bp-5Ch]
  double v67; // [sp+1588h] [bp-54h]
  int v68; // [sp+1594h] [bp-48h]
  _DWORD *all_created_runtime; // [sp+1598h] [bp-44h]
  json_t *v70; // [sp+159Ch] [bp-40h]
  json_t *v71; // [sp+15A0h] [bp-3Ch]
  json_t *v72; // [sp+15A4h] [bp-38h]
  json_t *v73; // [sp+15A8h] [bp-34h]
  json_t *v74; // [sp+15ACh] [bp-30h]
  const char **v75; // [sp+15B0h] [bp-2Ch]
  int v76; // [sp+15B4h] [bp-28h]
  void *ptr; // [sp+15B8h] [bp-24h]
  void *v78; // [sp+15BCh] [bp-20h]
  int i; // [sp+15C0h] [bp-1Ch]
  signed int j; // [sp+15C4h] [bp-18h]

  v45 = a1;
  v44 = a2;
  v76 = 0;
  i = 0;
  j = 0;
  v75 = a2;
  v74 = 0;
  v73 = 0;
  v72 = 0;
  v71 = 0;
  v70 = 0;
  v59[0] = 0;
  v47 = 0;
  v78 = 0;
  ptr = 0;
  all_created_runtime = get_all_created_runtime(&v47);
  v68 = frontend_runtime_instance();
  if ( v75 && v45 )
  {
    sub_1DE14(v45, v75);
    sub_1DF60(v45);
    v74 = (json_t *)json_array();
    read_system_status_from_monitor((int)&v49);
    v3 = v56;
    format_hashrate_double(*(const char **)(*(_DWORD *)(v68 + 72) + 16), &v48, (char *)v59);
    v67 = v3;
    v66 = v3 * v52;
    v65 = v3 * v53;
    v64 = v3 * v54;
    v63 = v3 * v55;
    v62 = v57;
    if ( v47 > 0 )
    {
      v78 = malloc(224 * v47);
      ptr = malloc(4 * v47);
      for ( i = 0; i < v47; ++i )
      {
        v4 = (char *)v78 + 224 * i;
        read_status_from_monitor(v43, all_created_runtime[i]);
        memcpy(v4, v43, 0xE0u);
        *((_DWORD *)ptr + i) = *(_DWORD *)(all_created_runtime[i] + 252);
      }
    }
    v73 = (json_t *)json_object();
    get_total_nonce_rate();
    v61 = *(float *)&v3;
    get_total_accept_rate();
    v60 = *(float *)&v3;
    get_miner_elapsed_time();
    *(double *)&v59[2] = v3;
    v5 = (json_t *)json_integer((__int64)v3, (unsigned __int64)(__int64)v3 >> 32);
    json_object_set_new(v73, "elapsed", v5);
    sub_CCAE4((__int64)(v66 * 100.0));
    v6 = json_real();
    json_object_set_new(v73, "rate_5s", (json_t *)v6);
    sub_CCAE4((__int64)(v63 * 100.0));
    v7 = json_real();
    json_object_set_new(v73, "rate_avg", (json_t *)v7);
    sub_CCAE4((__int64)(v64 * 100.0));
    v8 = json_real();
    json_object_set_new(v73, "rate_30m", (json_t *)v8);
    sub_CCAE4((__int64)(v48 * 0.972 * 10.0));
    v9 = json_real();
    json_object_set_new(v73, "rate_ideal", (json_t *)v9);
    v10 = (json_t *)json_string((const char *)v59);
    json_object_set_new(v73, "rate_unit", v10);
    v11 = (json_t *)json_integer(v47, v47 >> 31);
    json_object_set_new(v73, "chain_num", v11);
    v12 = (json_t *)json_integer(v50, v50 >> 31);
    json_object_set_new(v73, "fan_num", v12);
    v72 = (json_t *)json_array();
    for ( i = 0; i < v50; ++i )
    {
      v13 = (json_t *)json_integer(*(_DWORD *)(v51 + 4 * i), *(int *)(v51 + 4 * i) >> 31);
      json_array_append_new(v72, v13);
    }
    json_object_set_new(v73, "fan", v72);
    if ( v62 + *(_QWORD *)&total_diff1 )
    {
      LODWORD(v15) = sub_CCAD4(v62);
      HIDWORD(v15) = v14;
      LODWORD(v16) = sub_CCAD4(v62 + *(_QWORD *)&total_diff1);
      v17 = v15 / v16;
    }
    else
    {
      v17 = 0.0;
    }
    *(double *)&v59[1] = v17;
    sub_CCAE4((__int64)(v17 * 100.0 * 10000.0));
    v18 = json_real();
    json_object_set_new(v73, "hwp_total", (json_t *)v18);
    v71 = (json_t *)json_array();
    for ( i = 0; i < v47; ++i )
    {
      v70 = (json_t *)json_object();
      v19 = (json_t *)json_integer(*((_DWORD *)ptr + i), *((int *)ptr + i) >> 31);
      json_object_set_new(v70, "index", v19);
      v20 = *((int *)v78 + 56 * i + 20);
      v21 = (json_t *)json_integer(v20, HIDWORD(v20));
      json_object_set_new(v70, "freq_avg", v21);
      v64 = v67 * *((float *)v78 + 56 * i + 11);
      v48 = *((double *)v78 + 28 * i + 7) * v67;
      sub_CCAE4((__int64)(v48 * 100.0));
      v22 = json_real();
      json_object_set_new(v70, "rate_ideal", (json_t *)v22);
      sub_CCAE4((__int64)(v64 * 100.0));
      v23 = json_real();
      json_object_set_new(v70, "rate_real", (json_t *)v23);
      v24 = *((int *)v78 + 56 * i + 18);
      v25 = (json_t *)json_integer(v24, HIDWORD(v24));
      json_object_set_new(v70, "asic_num", v25);
      if ( *((_DWORD *)v78 + 56 * i + 19) )
      {
        strcpy(v58, *((const char **)v78 + 56 * i + 19));
        for ( j = 0; strlen(v58) > j; ++j )
        {
          if ( v58[j] != 111 && v58[j] != 32 )
            v58[j] = 120;
        }
        v26 = (json_t *)json_string(v58);
        json_object_set_new(v70, "asic", v26);
      }
      v72 = (json_t *)json_array();
      for ( j = 0; j < *((_DWORD *)v78 + 56 * i + 7); ++j )
      {
        v27 = (json_t *)json_integer(0, 0);
        json_array_append_new(v72, v27);
      }
      for ( j = 0; j < *((_DWORD *)v78 + 56 * i + 8); ++j )
      {
        v28 = (json_t *)json_integer(0, 0);
        json_array_append_new(v72, v28);
      }
      json_object_set_new(v70, "temp_pic", v72);
      v72 = (json_t *)json_array();
      for ( j = 0; j < *((_DWORD *)v78 + 56 * i + 7); ++j )
      {
        v29 = *(int *)(*((_DWORD *)v78 + 56 * i + 1) + 4 * j);
        v30 = (json_t *)json_integer(v29, HIDWORD(v29));
        json_array_append_new(v72, v30);
      }
      for ( j = 0; j < *((_DWORD *)v78 + 56 * i + 8); ++j )
      {
        v31 = *(int *)(*((_DWORD *)v78 + 56 * i + 3) + 4 * j);
        v32 = (json_t *)json_integer(v31, HIDWORD(v31));
        json_array_append_new(v72, v32);
      }
      json_object_set_new(v70, "temp_pcb", v72);
      v72 = (json_t *)json_array();
      for ( j = 0; j < *((_DWORD *)v78 + 56 * i + 7); ++j )
      {
        v33 = *(int *)(*((_DWORD *)v78 + 56 * i + 2) + 4 * j);
        v34 = (json_t *)json_integer(v33, HIDWORD(v33));
        json_array_append_new(v72, v34);
      }
      for ( j = 0; j < *((_DWORD *)v78 + 56 * i + 8); ++j )
      {
        v35 = *(int *)(*((_DWORD *)v78 + 56 * i + 4) + 4 * j);
        v36 = (json_t *)json_integer(v35, HIDWORD(v35));
        json_array_append_new(v72, v36);
      }
      json_object_set_new(v70, "temp_chip", v72);
      v37 = (json_t *)json_integer(*((_DWORD *)v78 + 56 * i + 22), *((_DWORD *)v78 + 56 * i + 23));
      json_object_set_new(v70, "hw", v37);
      if ( is_eeprom_loaded() )
      {
        if ( is_eeprom_loaded() )
          v38 = json_true();
        else
          v38 = (json_t *)json_false();
        json_object_set_new(v70, "eeprom_loaded", v38);
        if ( api_get_eeprom_chip_sn(i) )
        {
          eeprom_chip_sn = (const char *)api_get_eeprom_chip_sn(i);
          v40 = (json_t *)json_string(eeprom_chip_sn);
          json_object_set_new(v70, "sn", v40);
        }
      }
      else
      {
        if ( is_eeprom_loaded() )
          v41 = json_true();
        else
          v41 = (json_t *)json_false();
        json_object_set_new(v70, "eeprom_loaded", v41);
      }
      json_array_append_new(v71, v70);
    }
    json_object_set_new(v73, "chain", v71);
    json_array_append_new(v74, v73);
    json_object_set_new(v45, "STATS", v74);
    if ( v47 > 0 )
    {
      free(ptr);
      free(v78);
    }
    return v76;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v46, 0x1000u, 0, "%s: input bad api param", "get_stats");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/api_new.c",
      147,
      "get_stats",
      9,
      737,
      100,
      v46);
    return -2147483646;
  }
}
