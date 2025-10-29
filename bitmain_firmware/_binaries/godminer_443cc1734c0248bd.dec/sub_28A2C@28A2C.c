int __fastcall sub_28A2C(_DWORD *a1, const char **a2)
{
  int v2; // r4
  const char **v5; // r7
  char *all_created_runtime; // r0
  char *v7; // r10
  _DWORD *v8; // r9
  _DWORD *v9; // r5
  double v10; // d0
  double v11; // d11
  double v12; // d10
  double v13; // d9
  _QWORD *v14; // r0
  double *v15; // r0
  double v16; // r0
  double v17; // d0
  double *v18; // r0
  float v19; // s18
  double v20; // d7
  double *v21; // r0
  int v22; // r0
  double v23; // d0
  double v24; // d7
  double *v25; // r0
  char *v26; // r0
  _QWORD *v27; // r0
  _QWORD *v28; // r0
  _DWORD *v29; // r6
  const char **v30; // r11
  _DWORD *v31; // r4
  char *v32; // r0
  const char *v33; // t1
  char *v35; // r6
  char *v36; // r11
  int v37; // t1
  int v38; // r3
  __int64 v39; // [sp+10h] [bp-102Ch]
  char *ptr; // [sp+1Ch] [bp-1020h]
  int v41; // [sp+24h] [bp-1018h] BYREF
  double v42; // [sp+28h] [bp-1014h] BYREF
  _DWORD v43[2]; // [sp+30h] [bp-100Ch] BYREF
  char v44[12]; // [sp+38h] [bp-1004h] BYREF
  float v45; // [sp+44h] [bp-FF8h]
  float v46; // [sp+48h] [bp-FF4h]
  float v47; // [sp+4Ch] [bp-FF0h]
  double v48; // [sp+50h] [bp-FECh]
  __int64 v49; // [sp+58h] [bp-FE4h]

  v2 = 0;
  v43[0] = 0;
  v41 = 0;
  v43[1] = 0;
  v5 = (const char **)frontend_runtime_instance();
  all_created_runtime = (char *)get_all_created_runtime(&v41);
  if ( !a2 )
  {
    V_LOCK();
    logfmt_raw(v44, 0x1000u, 0, "%s: input bad api param", "get_summary");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/api_new.c",
      130,
      "get_summary",
      11,
      410,
      100,
      v44);
    return -2147483646;
  }
  v7 = all_created_runtime;
  sub_23E3C(a1, a2);
  sub_239F8(a1);
  v8 = json_array();
  v9 = json_object();
  read_system_status_from_monitor((int)v44);
  v10 = v48;
  format_hashrate_double(v5[21], &v42, (char *)v43);
  if ( v41 <= 0 )
    v5 = 0;
  v11 = v47 * v10;
  if ( v41 <= 0 )
    ptr = (char *)v5;
  v39 = v49;
  v12 = v45 * v10;
  v13 = v46 * v10;
  if ( v41 > 0 )
  {
    ptr = (char *)malloc(208 * v41);
    v35 = ptr;
    v5 = (const char **)malloc(4 * v41);
    if ( v41 > 0 )
    {
      v36 = v7 - 4;
      do
      {
        v37 = *((_DWORD *)v36 + 1);
        v36 += 4;
        read_status_from_monitor(v35, v37);
        v38 = v41;
        v35 += 208;
        v5[v2++] = *(const char **)(*(_DWORD *)v36 + 140);
      }
      while ( v38 > v2 );
    }
  }
  get_miner_elapsed_time();
  v14 = json_integer((__int64)v10);
  json_object_set_new(v9, "elapsed", v14);
  sub_12C58C((__int64)(v12 * 100.0));
  v15 = json_real();
  json_object_set_new(v9, "rate_5s", v15);
  LODWORD(v16) = sub_12C58C((__int64)(v13 * 100.0));
  v17 = v16 / 100.0;
  v18 = json_real();
  json_object_set_new(v9, "rate_30m", v18);
  get_total_nonce_rate();
  v19 = *(float *)&v17;
  if ( opt_algo == 5 )
    v20 = *(float *)&v17;
  else
    v20 = v11 * 100.0;
  if ( opt_algo == 5 )
    v20 = v20 * v11 * 100.0;
  sub_12C58C((__int64)v20);
  v21 = json_real();
  json_object_set_new(v9, "rate_avg", v21);
  v22 = strcmp(*(const char **)(*(_DWORD *)v7 + 188), "dash");
  v23 = v42;
  if ( !v22 )
  {
    update_rate_ideal();
    goto LABEL_15;
  }
  if ( opt_algo != 5 )
  {
LABEL_15:
    v24 = v23 * 100.0;
    goto LABEL_16;
  }
  v24 = v19 * v42 * 100.0;
LABEL_16:
  sub_12C58C((__int64)v24);
  v25 = json_real();
  json_object_set_new(v9, "rate_ideal", v25);
  v26 = (char *)BUFX_strdup((const char *)v43);
  json_object_set_new(v9, "rate_unit", v26);
  v27 = json_integer(v39);
  json_object_set_new(v9, "hw_all", v27);
  v28 = json_integer(*(__int64 *)&dword_163ED0);
  json_object_set_new(v9, "bestshare", v28);
  v29 = json_array();
  if ( v29 && off_162310 )
  {
    v30 = (const char **)&off_162310;
    do
    {
      v31 = json_object();
      v32 = (char *)BUFX_strdup(*v30);
      json_object_set_new(v31, "type", v32);
      ((void (__fastcall *)(_DWORD *, const char **))v30[1])(v31, v30);
      json_array_append_new(v29, v31);
      v33 = v30[6];
      v30 += 6;
    }
    while ( v33 );
  }
  json_object_set_new(v9, "status", v29);
  json_array_append_new(v8, v9);
  json_object_set_new(a1, "SUMMARY", v8);
  if ( v41 > 0 )
  {
    free(v5);
    free(ptr);
  }
  return 0;
}
