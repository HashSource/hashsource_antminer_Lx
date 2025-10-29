int __fastcall sub_27264(_DWORD *a1, int a2)
{
  int v4; // r0
  bool v5; // zf
  int v6; // r5
  _DWORD *v7; // r4
  float v8; // s18
  double v9; // d8
  double v10; // d11
  float v11; // s20
  double v12; // d11
  double v13; // d9
  double v14; // d10
  double v15; // r0
  double v16; // d12
  _QWORD *v17; // r0
  double *v18; // r0
  double *v19; // r0
  double *v20; // r0
  _QWORD *v21; // r0
  _QWORD *v22; // r0
  _QWORD *v23; // r0
  _QWORD *v24; // r0
  _QWORD *v25; // r0
  double *v26; // r0
  _QWORD *v27; // r0
  _QWORD *v28; // r0
  _QWORD *v29; // r0
  _QWORD *v30; // r0
  _QWORD *v31; // r0
  _QWORD *v32; // r0
  double *v33; // r0
  double *v34; // r0
  double *v35; // r0
  double *v36; // r0
  double *v37; // r0
  _QWORD *v38; // r0
  __int64 v39; // r0
  double *v40; // r0
  double v41; // r0
  double *v42; // r0
  double v43; // d7
  double *v44; // r0
  double v45; // d7
  double *v46; // r0
  _QWORD *v47; // r0
  char *v48; // r0
  char *v49; // r0
  double v50; // d0
  _DWORD *v51; // r0
  _QWORD *v52; // r0
  int v54; // r1
  double v55; // d9
  double v56; // r0
  __int64 v57; // [sp+10h] [bp-10BCh]
  unsigned int v58; // [sp+18h] [bp-10B4h]
  void *all_created_runtime; // [sp+1Ch] [bp-10B0h]
  _DWORD *v60; // [sp+20h] [bp-10ACh]
  unsigned int v61; // [sp+24h] [bp-10A8h]
  int v62; // [sp+2Ch] [bp-10A0h] BYREF
  double v63; // [sp+30h] [bp-109Ch] BYREF
  char v64[12]; // [sp+3Ch] [bp-1090h] BYREF
  char v65[32]; // [sp+48h] [bp-1084h] BYREF
  char v66[32]; // [sp+68h] [bp-1064h] BYREF
  char v67[32]; // [sp+88h] [bp-1044h] BYREF
  char v68[32]; // [sp+A8h] [bp-1024h] BYREF
  char v69[12]; // [sp+C8h] [bp-1004h] BYREF
  float v70; // [sp+D4h] [bp-FF8h]
  float v71; // [sp+D8h] [bp-FF4h]
  float v72; // [sp+DCh] [bp-FF0h]
  double v73; // [sp+E0h] [bp-FECh]
  unsigned int v74; // [sp+E8h] [bp-FE4h]
  unsigned int v75; // [sp+ECh] [bp-FE0h]

  v62 = 0;
  all_created_runtime = get_all_created_runtime(&v62);
  v4 = frontend_runtime_instance();
  v5 = a1 == 0;
  if ( a1 )
    v5 = a2 == 0;
  if ( v5 )
  {
    V_LOCK();
    logfmt_raw(v69, 0x1000u, 0, "%s: input bad api param", "get_summary_old");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/api_new.c",
      130,
      "get_summary_old",
      15,
      937,
      100,
      v69);
    return -2147483646;
  }
  else
  {
    v6 = v4;
    sub_23B08(a1, 1, 11, *(const char **)(a2 + 8));
    v60 = json_array();
    v7 = json_object();
    read_system_status_from_monitor((int)v69);
    v8 = v71;
    v9 = v73;
    v10 = v70;
    v11 = v72;
    format_hashrate_string(*(const char **)(v6 + 84), v65);
    format_hashrate_string(*(const char **)(v6 + 84), v66);
    format_hashrate_string(*(const char **)(v6 + 84), v67);
    format_hashrate_string(*(const char **)(v6 + 84), v68);
    format_hashrate_double(*(const char **)(v6 + 84), &v63, v64);
    v12 = v10 * v9;
    v61 = v74;
    v13 = v8 * v9;
    v58 = v75;
    v14 = v11 * v9;
    get_miner_elapsed_time();
    LODWORD(v15) = sub_12C58C(total_accepted);
    v16 = v15;
    if ( v9 != 0.0 )
      v16 = v15 / v9;
    v17 = json_integer((__int64)v9);
    json_object_set_new(v7, "Elapsed", v17);
    sub_12C58C((__int64)(v12 * 100.0));
    v18 = json_real();
    json_object_set_new(v7, "GHS 5s", v18);
    sub_12C58C((__int64)(v14 * 100.0));
    v19 = json_real();
    json_object_set_new(v7, "GHS av", v19);
    sub_12C58C((__int64)(v13 * 100.0));
    v20 = json_real();
    json_object_set_new(v7, "GHS 30m", v20);
    v21 = json_integer((unsigned int)dword_163EC0);
    json_object_set_new(v7, "Found Blocks", v21);
    v22 = json_integer(*(__int64 *)&total_getworks);
    json_object_set_new(v7, "Getwork", v22);
    v23 = json_integer(total_accepted);
    json_object_set_new(v7, "Accepted", v23);
    v24 = json_integer(total_rejected);
    json_object_set_new(v7, "Rejected", v24);
    v25 = json_integer(__SPAIR64__(v58, v61));
    json_object_set_new(v7, "Hardware Errors", v25);
    sub_12C58C((__int64)(v16 * 60.0 * 100.0));
    v26 = json_real();
    json_object_set_new(v7, "Utility", v26);
    v27 = json_integer(*(__int64 *)&total_discarded);
    json_object_set_new(v7, "Discarded", v27);
    v28 = json_integer(*(__int64 *)&total_stale);
    json_object_set_new(v7, "Stale", v28);
    v29 = json_integer((unsigned int)total_go);
    json_object_set_new(v7, "Get Failures", v29);
    v30 = json_integer((unsigned int)local_work);
    json_object_set_new(v7, "Local Work", v30);
    v31 = json_integer((unsigned int)total_ro);
    json_object_set_new(v7, "Remote Failures", v31);
    v32 = json_integer((unsigned int)new_blocks);
    json_object_set_new(v7, "Network Blocks", v32);
    sub_12C58C((__int64)(dbl_163EC8 * 100.0));
    v33 = json_real();
    json_object_set_new(v7, "Total MH", v33);
    v34 = json_real();
    json_object_set_new(v7, "Work Utility", v34);
    sub_12C58C((__int64)(total_diff_accepted * 100.0));
    v35 = json_real();
    json_object_set_new(v7, "Difficulty Accepted", v35);
    sub_12C58C((__int64)(total_diff_rejected * 100.0));
    v36 = json_real();
    json_object_set_new(v7, "Difficulty Rejected", v36);
    sub_12C58C((__int64)(total_diff_stale * 100.0));
    v37 = json_real();
    json_object_set_new(v7, "Difficulty Stale", v37);
    v38 = json_integer(*(__int64 *)&dword_163ED0);
    json_object_set_new(v7, "Best Share", v38);
    HIDWORD(v39) = v58;
    v57 = __PAIR64__(v58, v61) + total_diff1;
    if ( __PAIR64__(v58, v61) + total_diff1 )
    {
      LODWORD(v39) = v61;
      LODWORD(v55) = sub_12C57C(v39);
      HIDWORD(v55) = v54;
      LODWORD(v56) = sub_12C57C(v57);
      sub_12C58C((__int64)(v55 / v56 * 100.0));
    }
    v40 = json_real();
    json_object_set_new(v7, "Device Hardware%", v40);
    if ( total_diff1 )
    {
      LODWORD(v41) = sub_12C58C(total_diff1);
      sub_12C58C((__int64)(total_diff_rejected / v41 * 100.0));
    }
    v42 = json_real();
    json_object_set_new(v7, "Device Rejected%", v42);
    v43 = total_diff_rejected + total_diff_accepted + total_diff_stale;
    if ( v43 != 0.0 )
      sub_12C58C((__int64)(total_diff_rejected / v43 * 100.0));
    v44 = json_real();
    json_object_set_new(v7, "Pool Rejected%", v44);
    v45 = total_diff_accepted + total_diff_rejected + total_diff_stale;
    if ( v45 != 0.0 )
      sub_12C58C((__int64)(total_diff_stale / v45 * 100.0));
    v46 = json_real();
    json_object_set_new(v7, "Pool Stale%", v46);
    v47 = json_integer(last_getwork);
    json_object_set_new(v7, "Last getwork", v47);
    v48 = (char *)BUFX_strdup(v65);
    json_object_set_new(v7, "RT HASHRATE", v48);
    v49 = (char *)BUFX_strdup(v67);
    json_object_set_new(v7, "AV HASHRATE", v49);
    if ( !strcmp(*(const char **)(*(_DWORD *)all_created_runtime + 188), "dash") )
    {
      v50 = v63;
      update_rate_ideal();
      sub_12C58C((__int64)(v50 * 100.0));
      v51 = json_real();
    }
    else
    {
      v51 = BUFX_strdup(v68);
    }
    json_object_set_new(v7, "THEORY HASHRATE", v51);
    json_array_append_new(v60, v7);
    json_object_set_new(a1, "SUMMARY", v60);
    v52 = json_integer(1);
    json_object_set_new(a1, "id", v52);
    return 0;
  }
}
