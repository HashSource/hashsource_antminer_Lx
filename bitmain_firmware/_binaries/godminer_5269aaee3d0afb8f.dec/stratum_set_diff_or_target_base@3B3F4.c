int __fastcall stratum_set_diff_or_target_base(int a1, int a2, _DWORD *a3)
{
  double v3; // d0
  _DWORD *v7; // r0
  void (__fastcall *v8)(int); // r3
  _DWORD *v9; // r7
  int v10; // r3
  int v11; // r1
  int v12; // r3
  int v13; // r1
  int *v15; // r3
  int v16; // r12
  int v17; // r0
  int v18; // r3
  int v19; // r1
  _DWORD *v20; // r0
  const char *v21; // r0
  char *v22; // r5
  int v23; // r3
  _DWORD *v24; // r3
  int v25; // r1
  size_t v26; // r0
  int v27; // r1
  int v28; // r2
  int v29; // r3
  int v30; // r1
  int v31; // r2
  int v32; // r3
  int v33; // [sp+4h] [bp-1028h]
  _DWORD v34[1025]; // [sp+28h] [bp-1004h] BYREF

  if ( json_array_get(a3, 0) && *json_array_get(a3, 0) == 2 )
  {
    v20 = json_array_get(a3, 0);
    v21 = (const char *)json_string_value(v20);
    v22 = (char *)v21;
    if ( v21 && strlen(v21) == 64 )
    {
      V_LOCK();
      LOWORD(v23) = 9684;
      HIWORD(v23) = (unsigned int)"c" >> 16;
      logfmt_raw((char *)v34, 0x1000u, 0, v23, "stratum_set_diff_or_target_base", v22);
      V_UNLOCK();
      LOWORD(v24) = -14756;
      HIWORD(v24) = (unsigned int)&unk_16E68C >> 16;
      LOWORD(v25) = 9536;
      HIWORD(v25) = (unsigned int)"ce/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/frontend/frontend_vbk/frontend_vbk.c" >> 16;
      zlog(*v24, v25, 145, "stratum_set_diff_or_target_base", 31, 20, 20, v34);
      v26 = strlen(v22);
      hex2bin((int)v34, (unsigned __int8 *)v22, v26 >> 1);
      pthread_mutex_lock((pthread_mutex_t *)(a2 + 1760));
      v27 = v34[1];
      v28 = v34[2];
      v29 = v34[3];
      *(_DWORD *)(a2 + 1480) = v34[0];
      *(_DWORD *)(a2 + 1484) = v27;
      *(_DWORD *)(a2 + 1488) = v28;
      *(_DWORD *)(a2 + 1492) = v29;
      v30 = v34[5];
      v31 = v34[6];
      v32 = v34[7];
      *(_DWORD *)(a2 + 1496) = v34[4];
      *(_DWORD *)(a2 + 1500) = v30;
      *(_DWORD *)(a2 + 1504) = v31;
      *(_DWORD *)(a2 + 1508) = v32;
      (*(void (__fastcall **)(_DWORD *))(a1 + 80))(v34);
      *(double *)(a2 + 1576) = v3;
      *(double *)(a2 + 440) = v3;
      *(double *)(a2 + 1976) = v3;
      pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1760));
      return 1;
    }
    V_LOCK();
    logfmt_raw((char *)v34, 0x1000u, 0, "Stratum set target: invalid parameters");
    V_UNLOCK();
    LOWORD(v15) = -14756;
    HIWORD(v15) = (unsigned int)&unk_16E68C >> 16;
    v16 = 16;
LABEL_7:
    v17 = *v15;
    LOWORD(v18) = 9324;
    LOWORD(v19) = 9536;
    HIWORD(v18) = (unsigned int)"D\"},\"job_id\":{\"data\":%d,\"type\":\"JOB_ID\"},\"nTime\":{\"data\":%ld,\"type\":\"TIMESTAMP\"},\"nonce\":{\"data\":%u,\"type\":\"NONCE\"},\"extra_nonce\":{\"data\":%lld,\"type\":\"EXTRA_NONCE\"}}" >> 16;
    HIWORD(v19) = (unsigned int)"ce/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/frontend/frontend_vbk/frontend_vbk.c" >> 16;
    zlog(v17, v19, 145, v18, 31, v16, 100, v34);
    return 0;
  }
  v7 = json_array_get(a3, 0);
  json_number_value((int)v7);
  if ( v3 == 0.0 )
  {
    V_LOCK();
    logfmt_raw((char *)v34, 0x1000u, 0, "Stratum set target: invalid parameters");
    V_UNLOCK();
    LOWORD(v15) = -14756;
    HIWORD(v15) = (unsigned int)&unk_16E68C >> 16;
    v16 = 32;
    goto LABEL_7;
  }
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1760));
  v8 = *(void (__fastcall **)(int))(a1 + 76);
  *(double *)(a2 + 1576) = v3;
  LOWORD(v9) = -14756;
  *(double *)(a2 + 440) = v3;
  HIWORD(v9) = (unsigned int)&unk_16E68C >> 16;
  *(double *)(a2 + 1976) = v3;
  v8(a2 + 1480);
  V_LOCK();
  LOWORD(v10) = 9708;
  HIWORD(v10) = (unsigned int)"command' object" >> 16;
  logfmt_raw((char *)v34, 0x1000u, 0, v10, "stratum_set_diff_or_target_base", v33, v3);
  V_UNLOCK();
  LOWORD(v11) = 9536;
  HIWORD(v11) = (unsigned int)"ce/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/frontend/frontend_vbk/frontend_vbk.c" >> 16;
  zlog(*v9, v11, 145, "stratum_set_diff_or_target_base", 31, 39, 20, v34);
  V_LOCK();
  LOWORD(v12) = 9732;
  HIWORD(v12) = (unsigned int)"TIES" >> 16;
  logfmt_raw(
    (char *)v34,
    0x1000u,
    0,
    v12,
    "stratum_set_diff_or_target_base",
    *(_DWORD *)(a2 + 1480),
    *(_DWORD *)(a2 + 1484),
    *(_DWORD *)(a2 + 1488),
    *(_DWORD *)(a2 + 1492),
    *(_DWORD *)(a2 + 1496),
    *(_DWORD *)(a2 + 1500),
    *(_DWORD *)(a2 + 1504),
    *(_DWORD *)(a2 + 1508));
  V_UNLOCK();
  LOWORD(v13) = 9536;
  HIWORD(v13) = (unsigned int)"ce/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/frontend/frontend_vbk/frontend_vbk.c" >> 16;
  zlog(*v9, v13, 145, "stratum_set_diff_or_target_base", 31, 40, 20, v34);
  pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1760));
  return 1;
}
