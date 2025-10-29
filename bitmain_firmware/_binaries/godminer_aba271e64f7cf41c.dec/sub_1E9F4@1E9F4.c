int __fastcall sub_1E9F4(json_t *a1, const char **a2)
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
  _BYTE v14[224]; // [sp+10h] [bp-11ACh] BYREF
  const char **v15; // [sp+F0h] [bp-10CCh]
  json_t *v16; // [sp+F4h] [bp-10C8h]
  char v17[68]; // [sp+F8h] [bp-10C4h] BYREF
  double v18; // [sp+10F8h] [bp-C4h] BYREF
  _BYTE v19[12]; // [sp+1100h] [bp-BCh] BYREF
  float v20; // [sp+110Ch] [bp-B0h]
  float v21; // [sp+1110h] [bp-ACh]
  float v22; // [sp+1114h] [bp-A8h]
  float v23; // [sp+1118h] [bp-A4h]
  double v24; // [sp+1120h] [bp-9Ch]
  __int64 v25; // [sp+1130h] [bp-8Ch]
  int v26; // [sp+113Ch] [bp-80h] BYREF
  __int64 v27; // [sp+1140h] [bp-7Ch] BYREF
  float v28; // [sp+1148h] [bp-74h]
  float v29; // [sp+114Ch] [bp-70h]
  double v30; // [sp+1150h] [bp-6Ch]
  __int64 v31; // [sp+1158h] [bp-64h]
  double v32; // [sp+1160h] [bp-5Ch]
  double v33; // [sp+1168h] [bp-54h]
  double v34; // [sp+1170h] [bp-4Ch]
  double v35; // [sp+1178h] [bp-44h]
  double v36; // [sp+1180h] [bp-3Ch]
  const char **v37; // [sp+1188h] [bp-34h]
  _DWORD *all_created_runtime; // [sp+118Ch] [bp-30h]
  int v39; // [sp+1190h] [bp-2Ch]
  json_t *v40; // [sp+1194h] [bp-28h]
  json_t *v41; // [sp+1198h] [bp-24h]
  json_t *v42; // [sp+119Ch] [bp-20h]
  int v43; // [sp+11A0h] [bp-1Ch]
  int i; // [sp+11A4h] [bp-18h]
  void *v45; // [sp+11A8h] [bp-14h]
  void *ptr; // [sp+11ACh] [bp-10h]

  v16 = a1;
  v15 = a2;
  v43 = 0;
  i = 0;
  v42 = 0;
  v41 = 0;
  v40 = 0;
  v27 = 0;
  v26 = 0;
  v39 = frontend_runtime_instance();
  all_created_runtime = get_all_created_runtime(&v26);
  v45 = 0;
  ptr = 0;
  v37 = v15;
  if ( v15 )
  {
    sub_1DE14(v16, v37);
    sub_1DF60(v16);
    v40 = (json_t *)json_array();
    v42 = (json_t *)json_object();
    read_system_status_from_monitor((int)v19);
    v3 = v24;
    format_hashrate_double(*(const char **)(*(_DWORD *)(v39 + 72) + 16), &v18, (char *)&v27);
    v36 = v3;
    v35 = v3 * v20;
    v34 = v3 * v21;
    v33 = v3 * v22;
    v32 = v3 * v23;
    v31 = v25;
    *(double *)&g_hash_rate_5s = v35;
    if ( v26 > 0 )
    {
      v45 = malloc(224 * v26);
      ptr = malloc(4 * v26);
      for ( i = 0; i < v26; ++i )
      {
        v4 = (char *)v45 + 224 * i;
        read_status_from_monitor(v14, all_created_runtime[i]);
        memcpy(v4, v14, 0xE0u);
        *((_DWORD *)ptr + i) = *(_DWORD *)(all_created_runtime[i] + 252);
      }
    }
    get_miner_elapsed_time();
    v30 = v3;
    get_total_nonce_rate();
    v29 = *(float *)&v3;
    get_total_accept_rate();
    v28 = *(float *)&v3;
    v5 = (json_t *)json_integer((__int64)v30, (unsigned __int64)(__int64)v30 >> 32);
    json_object_set_new(v42, "elapsed", v5);
    sub_CCAE4((__int64)(v35 * 100.0));
    v6 = json_real();
    json_object_set_new(v42, "rate_5s", (json_t *)v6);
    sub_CCAE4((__int64)(v32 * 100.0));
    v7 = json_real();
    json_object_set_new(v42, "rate_avg", (json_t *)v7);
    sub_CCAE4((__int64)(v33 * 100.0));
    v8 = json_real();
    json_object_set_new(v42, "rate_30m", (json_t *)v8);
    sub_CCAE4((__int64)(v18 * 100.0));
    v9 = json_real();
    json_object_set_new(v42, "rate_ideal", (json_t *)v9);
    v10 = (json_t *)json_string((const char *)&v27);
    json_object_set_new(v42, "rate_unit", v10);
    v11 = (json_t *)json_integer(v31, HIDWORD(v31));
    json_object_set_new(v42, "hw_all", v11);
    v12 = (json_t *)json_integer(LODWORD(dbl_1512B8), HIDWORD(dbl_1512B8));
    json_object_set_new(v42, "bestshare", v12);
    v41 = (json_t *)json_array();
    sub_1DD08(v41);
    json_object_set_new(v42, "status", v41);
    json_array_append_new(v40, v42);
    json_object_set_new(v16, "SUMMARY", v40);
    if ( v26 > 0 )
    {
      free(ptr);
      free(v45);
    }
    return v43;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v17, 0x1000u, 0, "%s: input bad api param", "get_summary");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/api_new.c",
      147,
      "get_summary",
      11,
      525,
      100,
      v17);
    return -2147483646;
  }
}
