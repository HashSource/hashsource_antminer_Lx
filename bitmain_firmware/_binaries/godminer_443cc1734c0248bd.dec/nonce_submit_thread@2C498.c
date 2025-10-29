void __noreturn nonce_submit_thread()
{
  int v0; // r11
  int *all_created_runtime; // r7
  char *v2; // r4
  int v3; // r0
  pthread_t v4; // r0
  int v5; // r7
  int v6; // r4
  const char *v7; // r0
  double v8; // d7
  double v9; // d5
  int v10; // r2
  bool v11; // cf
  double v12; // d7
  int v13; // r1
  const void *src; // [sp+10h] [bp-1944h]
  int srca; // [sp+10h] [bp-1944h]
  size_t n; // [sp+1Ch] [bp-1938h]
  int v17; // [sp+34h] [bp-1920h] BYREF
  _QWORD v18[127]; // [sp+38h] [bp-191Ch] BYREF
  void *v19[326]; // [sp+438h] [bp-151Ch] BYREF
  char v20[4100]; // [sp+950h] [bp-1004h] BYREF

  v0 = frontend_runtime_instance();
  all_created_runtime = (int *)get_all_created_runtime(&v17);
  v2 = (char *)calloc(1u, 0x40u);
  snprintf(v2, 0x40u, "%.10s_%d", "nonce_submit_thread", 0);
  V_LOCK();
  v3 = syscall(224);
  logfmt_raw(v20, 0x1000u, 0, "%s on pid %ld", v2, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "nonce_submit_thread",
    19,
    326,
    60,
    v20);
  prctl(15, v2);
  v4 = pthread_self();
  pthread_detach(v4);
  v5 = *all_created_runtime;
  while ( 1 )
  {
    while ( 1 )
    {
      (*(void (__fastcall **)(int, _QWORD *))(v5 + 32))(v5, v18);
      if ( v18[0] < (unsigned __int64)total_pools )
      {
        v6 = *(_DWORD *)(pools + 4 * LODWORD(v18[0]));
        if ( v6 )
          break;
      }
      V_LOCK();
      logfmt_raw(v20, 0x1000u, 0, "the pool is NULL");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "nonce_submit_thread",
        19,
        341,
        80,
        v20);
    }
    pthread_mutex_lock((pthread_mutex_t *)(v6 + 1752));
    if ( v19[288] )
    {
      free(v19[288]);
      v19[288] = 0;
    }
    if ( v19[290] )
    {
      free(v19[290]);
      v19[290] = 0;
    }
    memcpy(v19, (const void *)(v6 + 448), sizeof(v19));
    v7 = *(const char **)(v6 + 1600);
    if ( v7 )
      v19[288] = _strdup(v7);
    src = *(const void **)(v6 + 1608);
    if ( src )
    {
      n = *(_DWORD *)(v6 + 1604);
      v19[290] = malloc(n);
      memcpy(v19[290], src, n);
    }
    srca = (*(int (__fastcall **)(int, void **, _QWORD *))(v0 + 40))(v6, v19, v18);
    pthread_mutex_unlock((pthread_mutex_t *)(v6 + 1752));
    if ( srca == 1 )
    {
      v8 = *(double *)(v6 + 1968);
      v9 = *(double *)(v6 + 1976) + v8;
      v10 = dword_16B644;
      v11 = __CFADD__(total_stale, 1);
      v12 = total_diff_stale + v8;
      v13 = *(_DWORD *)(v6 + 1800) + 1;
      ++total_stale;
      *(_DWORD *)(v6 + 1800) = v13;
      dword_16B644 = v11 + v10;
      *(double *)(v6 + 1976) = v9;
      total_diff_stale = v12;
    }
    else
    {
      workio_submit_work((int)v19, (unsigned __int8 *)v6);
    }
  }
}
