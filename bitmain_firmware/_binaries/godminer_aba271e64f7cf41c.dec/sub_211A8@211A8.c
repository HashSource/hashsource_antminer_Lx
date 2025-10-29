int __fastcall sub_211A8(json_t *a1, int a2)
{
  double v3; // d0
  double v4; // r0
  double v5; // d16
  double v6; // d16
  json_t *v7; // r0
  double *v8; // r0
  double *v9; // r0
  double *v10; // r0
  json_t *v11; // r0
  json_t *v12; // r0
  json_t *v13; // r0
  json_t *v14; // r0
  json_t *v15; // r0
  double *v16; // r0
  json_t *v17; // r0
  json_t *v18; // r0
  json_t *v19; // r0
  json_t *v20; // r0
  json_t *v21; // r0
  json_t *v22; // r0
  double *v23; // r0
  double *v24; // r0
  double *v25; // r0
  double *v26; // r0
  double *v27; // r0
  json_t *v28; // r0
  int v29; // r1
  double v30; // d8
  double v31; // r0
  double v32; // d16
  double *v33; // r0
  double v34; // d8
  double v35; // r0
  double v36; // d16
  double *v37; // r0
  double v38; // d16
  double *v39; // r0
  double v40; // d16
  double *v41; // r0
  json_t *v42; // r0
  json_t *v43; // r0
  json_t *v44; // r0
  json_t *v45; // r0
  json_t *v46; // r0
  char v49[80]; // [sp+24h] [bp-1190h] BYREF
  int v50; // [sp+1024h] [bp-190h] BYREF
  double v51; // [sp+1028h] [bp-18Ch] BYREF
  char v52[32]; // [sp+1034h] [bp-180h] BYREF
  char v53[32]; // [sp+1054h] [bp-160h] BYREF
  char v54[32]; // [sp+1074h] [bp-140h] BYREF
  char v55[32]; // [sp+1094h] [bp-120h] BYREF
  char v56[32]; // [sp+10B4h] [bp-100h] BYREF
  char v57[12]; // [sp+10D4h] [bp-E0h] BYREF
  _BYTE v58[12]; // [sp+10E0h] [bp-D4h] BYREF
  float v59; // [sp+10ECh] [bp-C8h]
  float v60; // [sp+10F0h] [bp-C4h]
  float v61; // [sp+10F4h] [bp-C0h]
  float v62; // [sp+10F8h] [bp-BCh]
  double v63; // [sp+1100h] [bp-B4h]
  __int64 v64; // [sp+1110h] [bp-A4h]
  double v65; // [sp+1118h] [bp-9Ch]
  double v66; // [sp+1120h] [bp-94h]
  double v67; // [sp+1128h] [bp-8Ch]
  double v68; // [sp+1130h] [bp-84h]
  float v69; // [sp+1138h] [bp-7Ch]
  float v70; // [sp+113Ch] [bp-78h]
  double v71; // [sp+1140h] [bp-74h]
  double v72; // [sp+1148h] [bp-6Ch]
  double v73; // [sp+1150h] [bp-64h]
  __int64 v74; // [sp+1158h] [bp-5Ch]
  double v75; // [sp+1160h] [bp-54h]
  double v76; // [sp+1168h] [bp-4Ch]
  double v77; // [sp+1170h] [bp-44h]
  double v78; // [sp+1178h] [bp-3Ch]
  double v79; // [sp+1180h] [bp-34h]
  int v80; // [sp+1188h] [bp-2Ch]
  void *all_created_runtime; // [sp+118Ch] [bp-28h]
  int v82; // [sp+1190h] [bp-24h]
  json_t *v83; // [sp+1194h] [bp-20h]
  json_t *v84; // [sp+1198h] [bp-1Ch]
  int v85; // [sp+119Ch] [bp-18h]

  v85 = 0;
  v84 = 0;
  v83 = 0;
  v82 = a2;
  v50 = 0;
  all_created_runtime = get_all_created_runtime(&v50);
  v80 = frontend_runtime_instance();
  if ( v82 && a1 )
  {
    sub_20F64(a1, 1, 11, *(const char **)(v82 + 8));
    v84 = (json_t *)json_array();
    v83 = (json_t *)json_object();
    read_system_status_from_monitor((int)v58);
    format_hashrate_string(*(const char **)(*(_DWORD *)(v80 + 72) + 16), v56);
    format_hashrate_string(*(const char **)(*(_DWORD *)(v80 + 72) + 16), v55);
    format_hashrate_string(*(const char **)(*(_DWORD *)(v80 + 72) + 16), v54);
    format_hashrate_string(*(const char **)(*(_DWORD *)(v80 + 72) + 16), v53);
    format_hashrate_string(*(const char **)(*(_DWORD *)(v80 + 72) + 16), v52);
    v3 = v63;
    format_hashrate_double(*(const char **)(*(_DWORD *)(v80 + 72) + 16), &v51, v57);
    v79 = v3;
    v78 = v3 * v59;
    v77 = v3 * v60;
    v76 = v3 * v61;
    v75 = v3 * v62;
    v74 = v64;
    get_miner_elapsed_time();
    v73 = v3;
    LODWORD(v4) = sub_CCAE4(*(__int64 *)&total_accepted);
    if ( v73 == 0.0 )
      v5 = 1.0;
    else
      v5 = v73;
    v72 = v4 / v5 * 60.0;
    if ( v73 == 0.0 )
      v6 = 1.0;
    else
      v6 = v73;
    v71 = (total_diff_accepted + total_diff_rejected + total_diff_stale) / v6 * 60.0;
    get_total_nonce_rate();
    v70 = *(float *)&v3;
    get_total_accept_rate();
    v69 = *(float *)&v3;
    v7 = (json_t *)json_integer((__int64)v73, (unsigned __int64)(__int64)v73 >> 32);
    json_object_set_new(v83, "Elapsed", v7);
    sub_CCAE4((__int64)(v78 * 100.0));
    v8 = json_real();
    json_object_set_new(v83, "GHS 5s", (json_t *)v8);
    sub_CCAE4((__int64)(v75 * 100.0));
    v9 = json_real();
    json_object_set_new(v83, "GHS av", (json_t *)v9);
    sub_CCAE4((__int64)(v76 * 100.0));
    v10 = json_real();
    json_object_set_new(v83, "GHS 30m", (json_t *)v10);
    v11 = (json_t *)json_integer(dword_1512A0, 0);
    json_object_set_new(v83, "Found Blocks", v11);
    v12 = (json_t *)json_integer(LODWORD(total_getworks), HIDWORD(total_getworks));
    json_object_set_new(v83, "Getwork", v12);
    v13 = (json_t *)json_integer(LODWORD(total_accepted), HIDWORD(total_accepted));
    json_object_set_new(v83, "Accepted", v13);
    v14 = (json_t *)json_integer(LODWORD(total_rejected), HIDWORD(total_rejected));
    json_object_set_new(v83, "Rejected", v14);
    v15 = (json_t *)json_integer(v74, HIDWORD(v74));
    json_object_set_new(v83, "Hardware Errors", v15);
    sub_CCAE4((__int64)(v72 * 100.0));
    v16 = json_real();
    json_object_set_new(v83, "Utility", (json_t *)v16);
    v17 = (json_t *)json_integer(LODWORD(total_discarded), HIDWORD(total_discarded));
    json_object_set_new(v83, "Discarded", v17);
    v18 = (json_t *)json_integer(LODWORD(total_stale), HIDWORD(total_stale));
    json_object_set_new(v83, "Stale", v18);
    v19 = (json_t *)json_integer(total_go, 0);
    json_object_set_new(v83, "Get Failures", v19);
    v20 = (json_t *)json_integer(local_work, 0);
    json_object_set_new(v83, "Local Work", v20);
    v21 = (json_t *)json_integer(total_ro, 0);
    json_object_set_new(v83, "Remote Failures", v21);
    v22 = (json_t *)json_integer(new_blocks, 0);
    json_object_set_new(v83, "Network Blocks", v22);
    sub_CCAE4((__int64)(dbl_1512A8 * 100.0));
    v23 = json_real();
    json_object_set_new(v83, "Total MH", (json_t *)v23);
    v24 = json_real();
    json_object_set_new(v83, "Work Utility", (json_t *)v24);
    sub_CCAE4((__int64)(total_diff_accepted * 100.0));
    v25 = json_real();
    json_object_set_new(v83, "Difficulty Accepted", (json_t *)v25);
    sub_CCAE4((__int64)(total_diff_rejected * 100.0));
    v26 = json_real();
    json_object_set_new(v83, "Difficulty Rejected", (json_t *)v26);
    sub_CCAE4((__int64)(total_diff_stale * 100.0));
    v27 = json_real();
    json_object_set_new(v83, "Difficulty Stale", (json_t *)v27);
    v28 = (json_t *)json_integer(LODWORD(dbl_1512B8), HIDWORD(dbl_1512B8));
    json_object_set_new(v83, "Best Share", v28);
    if ( v74 + *(_QWORD *)&total_diff1 )
    {
      LODWORD(v30) = sub_CCAD4(v74);
      HIDWORD(v30) = v29;
      LODWORD(v31) = sub_CCAD4(v74 + *(_QWORD *)&total_diff1);
      v32 = v30 / v31;
    }
    else
    {
      v32 = 0.0;
    }
    v68 = v32;
    sub_CCAE4((__int64)(v32 * 100.0));
    v33 = json_real();
    json_object_set_new(v83, "Device Hardware%", (json_t *)v33);
    if ( *(_QWORD *)&total_diff1 )
    {
      v34 = total_diff_rejected;
      LODWORD(v35) = sub_CCAE4(*(__int64 *)&total_diff1);
      v36 = v34 / v35;
    }
    else
    {
      v36 = 0.0;
    }
    v67 = v36;
    sub_CCAE4((__int64)(v36 * 100.0));
    v37 = json_real();
    json_object_set_new(v83, "Device Rejected%", (json_t *)v37);
    if ( total_diff_accepted + total_diff_rejected + total_diff_stale == 0.0 )
      v38 = 0.0;
    else
      v38 = total_diff_rejected / (total_diff_accepted + total_diff_rejected + total_diff_stale);
    v66 = v38;
    sub_CCAE4((__int64)(v38 * 100.0));
    v39 = json_real();
    json_object_set_new(v83, "Pool Rejected%", (json_t *)v39);
    if ( total_diff_accepted + total_diff_rejected + total_diff_stale == 0.0 )
      v40 = 0.0;
    else
      v40 = total_diff_stale / (total_diff_accepted + total_diff_rejected + total_diff_stale);
    v65 = v40;
    sub_CCAE4((__int64)(v40 * 100.0));
    v41 = json_real();
    json_object_set_new(v83, "Pool Stale%", (json_t *)v41);
    v42 = (json_t *)json_integer(last_getwork, last_getwork >> 31);
    json_object_set_new(v83, "Last getwork", v42);
    v43 = (json_t *)json_string(v56);
    json_object_set_new(v83, "RT HASHRATE", v43);
    v44 = (json_t *)json_string(v53);
    json_object_set_new(v83, "AV HASHRATE", v44);
    v45 = (json_t *)json_string(v52);
    json_object_set_new(v83, "THEORY HASHRATE", v45);
    json_array_append_new(v84, v83);
    json_object_set_new(a1, "SUMMARY", v84);
    v46 = (json_t *)json_integer(1, 0);
    json_object_set_new(a1, "id", v46);
    return v85;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v49, 0x1000u, 0, "%s: input bad api param", "get_summary_old");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/api_new.c",
      147,
      "get_summary_old",
      15,
      1123,
      100,
      v49);
    return -2147483646;
  }
}
