void __noreturn nonce_submit_thread()
{
  int v0; // r11
  int *all_created_runtime; // r7
  char *v2; // r4
  int v3; // r0
  pthread_t v4; // r0
  int v5; // r6
  int v6; // r4
  const char *v7; // r0
  double v8; // d7
  double v9; // d5
  double v10; // d7
  __int64 v11; // kr08_8
  const void *src; // [sp+10h] [bp-194Ch]
  int srca; // [sp+10h] [bp-194Ch]
  size_t n; // [sp+1Ch] [bp-1940h]
  int v15; // [sp+34h] [bp-1928h] BYREF
  _QWORD v16[127]; // [sp+38h] [bp-1924h] BYREF
  void *v17[328]; // [sp+438h] [bp-1524h] BYREF
  char v18[4100]; // [sp+958h] [bp-1004h] BYREF

  v0 = frontend_runtime_instance();
  all_created_runtime = (int *)get_all_created_runtime(&v15);
  v2 = (char *)calloc(1u, 0x40u);
  snprintf(v2, 0x40u, "%.10s_%d", "nonce_submit_thread", 0);
  V_LOCK();
  v3 = syscall(224);
  logfmt_raw(v18, 0x1000u, 0, "%s on pid %ld", v2, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/god-miner.c",
    147,
    "nonce_submit_thread",
    19,
    329,
    60,
    v18);
  prctl(15, v2);
  v4 = pthread_self();
  pthread_detach(v4);
  v5 = *all_created_runtime;
  while ( 1 )
  {
    while ( 1 )
    {
      (*(void (__fastcall **)(int, _QWORD *))(v5 + 32))(v5, v16);
      if ( v16[0] < (unsigned __int64)total_pools )
      {
        v6 = *(_DWORD *)(pools + 4 * LODWORD(v16[0]));
        if ( v6 )
          break;
      }
      V_LOCK();
      logfmt_raw(v18, 0x1000u, 0, "the pool is NULL");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build"
        "/godminer-origin_master/god-miner.c",
        147,
        "nonce_submit_thread",
        19,
        344,
        80,
        v18);
    }
    pthread_mutex_lock((pthread_mutex_t *)(v6 + 1760));
    if ( v17[288] )
    {
      free(v17[288]);
      v17[288] = 0;
    }
    if ( v17[290] )
    {
      free(v17[290]);
      v17[290] = 0;
    }
    memcpy(v17, (const void *)(v6 + 448), sizeof(v17));
    v7 = *(const char **)(v6 + 1600);
    if ( v7 )
      v17[288] = _strdup(v7);
    src = *(const void **)(v6 + 1608);
    if ( src )
    {
      n = *(_DWORD *)(v6 + 1604);
      v17[290] = malloc(n);
      memcpy(v17[290], src, n);
    }
    srca = (*(int (__fastcall **)(int, void **, _QWORD *))(v0 + 40))(v6, v17, v16);
    pthread_mutex_unlock((pthread_mutex_t *)(v6 + 1760));
    if ( srca == 1 )
    {
      v8 = *(double *)(v6 + 1976);
      v9 = total_diff_stale + v8;
      v10 = *(double *)(v6 + 1984) + v8;
      v11 = *(_QWORD *)&total_stale + 1LL;
      ++*(_DWORD *)(v6 + 1808);
      total_stale = v11;
      total_diff_stale = v9;
      *(double *)(v6 + 1984) = v10;
      dword_16C74C = HIDWORD(v11);
    }
    else
    {
      workio_submit_work((int)v17, (pthread_mutex_t *)v6);
    }
  }
}
