void __noreturn work_generator_thread()
{
  int v0; // r5
  int *all_created_runtime; // r6
  int *v2; // r0
  int v3; // r2
  int v4; // r3
  int v5; // t1
  bool v6; // cc
  unsigned int v7; // r8
  int v8; // r11
  char *v9; // r7
  int v10; // r0
  pthread_mutex_t *current_pool; // r0
  int v12; // r7
  int v13; // r0
  int v14; // r2
  int v15; // r6
  char *v16; // r9
  int v17; // r2
  time_t v18; // r0
  void (__fastcall *v19)(int, _DWORD *); // r3
  int v20; // t1
  int v21; // r2
  int v22; // lr
  int v23; // r12
  unsigned __int64 v24; // r0
  unsigned __int64 *v25; // r6
  unsigned __int64 v26; // r2
  unsigned __int64 v27; // t1
  bool v28; // cf
  int v29; // r2
  int v30; // r0
  void *v31; // r0
  int v32; // r2
  const char *v33; // r0
  const void *v34; // r9
  unsigned __int64 n; // [sp+10h] [bp-156Ch]
  size_t na; // [sp+10h] [bp-156Ch]
  int v37; // [sp+1Ch] [bp-1560h]
  int v38; // [sp+20h] [bp-155Ch]
  char *v39; // [sp+38h] [bp-1544h]
  int v40; // [sp+4Ch] [bp-1530h] BYREF
  struct timespec v41; // [sp+50h] [bp-152Ch] BYREF
  _DWORD s[328]; // [sp+58h] [bp-1524h] BYREF
  struct timespec v43[512]; // [sp+578h] [bp-1004h] BYREF

  v40 = 0;
  v0 = frontend_runtime_instance();
  all_created_runtime = (int *)get_all_created_runtime(&v40);
  memset(s, 0, sizeof(s));
  if ( v40 <= 0 )
  {
    v38 = 0;
    v37 = -1000;
  }
  else
  {
    v2 = all_created_runtime;
    v3 = -1;
    v4 = -1;
    do
    {
      v5 = *v2++;
      v6 = v4 != 0;
      v7 = *(_DWORD *)(v5 + 772);
      if ( !v4 )
        v6 = v3 > v7;
      if ( v6 )
      {
        v3 = v7;
        v4 = 0;
      }
    }
    while ( &all_created_runtime[v40] != v2 );
    v38 = v3 / 1000000;
    v37 = 1000 * (v3 % 1000000);
  }
  v8 = 0;
  v9 = (char *)calloc(1u, 0x40u);
  snprintf(v9, 0x40u, "%.10s_%d", "work_generator_thread", 0);
  V_LOCK();
  v10 = syscall(224);
  logfmt_raw((char *)v43, 0x1000u, 0, "%s on pid %ld", v9, v10);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/god-miner.c",
    147,
    "work_generator_thread",
    21,
    226,
    60,
    v43);
  v39 = (char *)(all_created_runtime - 1);
  prctl(15, v9);
  clock_gettime(1, (struct timespec *)&send_job_timer);
  while ( 1 )
  {
LABEL_11:
    while ( 1 )
    {
      current_pool = (pthread_mutex_t *)get_current_pool();
      v12 = (int)current_pool;
      if ( current_pool )
        break;
LABEL_36:
      V_LOCK();
      logfmt_raw((char *)v43, 0x1000u, v12, "work generator: current pool is NULL");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build"
        "/godminer-origin_master/god-miner.c",
        147,
        "work_generator_thread",
        21,
        246,
        20,
        v43);
    }
    while ( 1 )
    {
      if ( pool_tget(current_pool, (unsigned __int8 *)(v12 + 2072)) )
        goto LABEL_39;
      clock_gettime(1, v43);
      v41.tv_nsec = (v37 + v43[0].tv_nsec) % 1000000000;
      v41.tv_sec = (v37 + v43[0].tv_nsec) / 1000000000 + v43[0].tv_sec + v38;
      v13 = pool_twait_to_be_expected_and_set(v12, (_BYTE *)(v12 + 2084), 1, 0, &v41);
      if ( v13 == 1 )
        break;
      if ( v13 == 110 )
      {
        V_LOCK();
        logfmt_raw((char *)v43, 0x1000u, 0, "Wait for new job timeout");
        V_UNLOCK();
        v14 = 262;
      }
      else
      {
        V_LOCK();
        logfmt_raw((char *)v43, 0x1000u, 0, "New job has come");
        V_UNLOCK();
        v14 = 264;
      }
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build"
        "/godminer-origin_master/god-miner.c",
        147,
        "work_generator_thread",
        21,
        v14,
        20,
        v43);
      pthread_mutex_lock((pthread_mutex_t *)(v12 + 1760));
      if ( pool_tget((pthread_mutex_t *)v12, (unsigned __int8 *)(v12 + 1688)) )
      {
        pthread_mutex_unlock((pthread_mutex_t *)(v12 + 1760));
        V_LOCK();
        logfmt_raw(
          (char *)v43,
          0x1000u,
          0,
          "work generator: jobid %p cancel %d",
          *(_DWORD *)(v12 + 1600),
          *(unsigned __int8 *)(v12 + 1688));
        V_UNLOCK();
        v29 = 270;
        v30 = g_zc;
        goto LABEL_38;
      }
      if ( (*(int (__fastcall **)(_DWORD *, int))(v0 + 44))(s, v12) == 2 )
      {
        V_LOCK();
        logfmt_raw((char *)v43, 0x1000u, 0, "work generator switched to new job %s", *(_DWORD *)(v12 + 1600));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/bui"
          "ld/godminer-origin_master/god-miner.c",
          147,
          "work_generator_thread",
          21,
          276,
          20,
          v43);
        v31 = (void *)s[288];
        v32 = *(_DWORD *)(v12 + 1800);
        ++*(_QWORD *)&total_getworks;
        *(_DWORD *)(v12 + 1800) = v32 + 1;
        if ( v31 )
        {
          free(v31);
          s[288] = 0;
        }
        if ( s[290] )
        {
          free((void *)s[290]);
          s[290] = 0;
        }
        memcpy(s, (const void *)(v12 + 448), sizeof(s));
        v33 = *(const char **)(v12 + 1600);
        if ( v33 )
          s[288] = _strdup(v33);
        v34 = *(const void **)(v12 + 1608);
        v8 = 1;
        if ( v34 )
        {
          na = *(_DWORD *)(v12 + 1604);
          s[290] = malloc(na);
          memcpy((void *)s[290], v34, na);
        }
      }
      pthread_mutex_unlock((pthread_mutex_t *)(v12 + 1760));
      if ( !s[288] )
        goto LABEL_11;
      if ( v40 > 0 )
      {
        v15 = 0;
        v16 = v39;
        do
        {
          if ( v15 )
            v17 = 0;
          else
            v17 = v8;
          (*(void (__fastcall **)(_DWORD *, int, int))(v0 + 48))(s, v12, v17);
          ++v15;
          ++local_work;
          v18 = time(0);
          v19 = *(void (__fastcall **)(int, _DWORD *))(v0 + 32);
          last_getwork = v18;
          v20 = *((_DWORD *)v16 + 1);
          v16 += 4;
          v19(v20, s);
        }
        while ( v40 > v15 );
      }
      V_LOCK();
      clock_gettime(1, &tp);
      if ( v8 )
      {
        logfmt_raw(
          (char *)v43,
          0x1000u,
          0,
          "New job pushed after %lld ms",
          1000LL * (tp.tv_sec - send_job_timer) + (tp.tv_nsec - dword_16C7AC) / 1000000);
        V_UNLOCK();
        v21 = 301;
      }
      else
      {
        logfmt_raw(
          (char *)v43,
          0x1000u,
          0,
          "Updated job pushed after %lld ms",
          1000LL * (tp.tv_sec - send_job_timer) + (tp.tv_nsec - dword_16C7AC) / 1000000);
        V_UNLOCK();
        v21 = 303;
      }
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build"
        "/godminer-origin_master/god-miner.c",
        147,
        "work_generator_thread",
        21,
        v21,
        20,
        v43);
      clock_gettime(1, &tp);
      v22 = 0;
      v23 = 0;
      v24 = -1;
      v25 = (unsigned __int64 *)&max_timeout_value;
      n = (int)&loc_F4240 * (__int64)(tp.tv_sec - send_job_timer) + (tp.tv_nsec - dword_16C7AC) / 1000;
      do
      {
        v27 = *v25++;
        v26 = v27;
        v28 = v27 >= v24;
        if ( v27 < v24 )
          v22 = v23;
        ++v23;
        if ( !v28 )
          v24 = v26;
      }
      while ( v23 != 10 );
      if ( n > v24 )
        *(_QWORD *)&dword_164EE8[2 * v22 + 30] = n;
      v8 = 0;
      clock_gettime(1, (struct timespec *)&send_job_timer);
      current_pool = (pthread_mutex_t *)get_current_pool();
      v12 = (int)current_pool;
      if ( !current_pool )
        goto LABEL_36;
    }
    V_LOCK();
    logfmt_raw((char *)v43, 0x1000u, 0, "pool has been changed");
    V_UNLOCK();
    v29 = 258;
    v30 = g_zc;
LABEL_38:
    zlog(
      v30,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/god-miner.c",
      147,
      "work_generator_thread",
      21,
      v29,
      20,
      v43);
LABEL_39:
    sleep(0);
  }
}
