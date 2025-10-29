void __fastcall __noreturn work_generator_thread(_DWORD *a1)
{
  int v1; // r0
  bool v2; // r3
  char v3[40]; // [sp+1Ch] [bp-14E8h] BYREF
  struct timespec v4; // [sp+101Ch] [bp-4E8h] BYREF
  struct timespec abstime; // [sp+1024h] [bp-4E0h] BYREF
  int v6; // [sp+102Ch] [bp-4D8h] BYREF
  _DWORD v7[285]; // [sp+1030h] [bp-4D4h] BYREF
  int *v8; // [sp+14A4h] [bp-60h]
  struct timespec *v9; // [sp+14A8h] [bp-5Ch]
  int *v10; // [sp+14ACh] [bp-58h]
  int *v11; // [sp+14B0h] [bp-54h]
  int v12; // [sp+14B4h] [bp-50h]
  struct timespec *p_abstime; // [sp+14B8h] [bp-4Ch]
  int v14; // [sp+14BCh] [bp-48h]
  struct timespec *tp; // [sp+14C0h] [bp-44h]
  int v16; // [sp+14C4h] [bp-40h]
  int v17; // [sp+14C8h] [bp-3Ch]
  _DWORD *v18; // [sp+14CCh] [bp-38h]
  _DWORD *all_created_runtime; // [sp+14D0h] [bp-34h]
  int v20; // [sp+14D4h] [bp-30h]
  int i; // [sp+14D8h] [bp-2Ch]
  char v22; // [sp+14DFh] [bp-25h]
  double v23; // [sp+14E0h] [bp-24h]
  int v24; // [sp+14E8h] [bp-1Ch]
  char *s; // [sp+14ECh] [bp-18h]
  int current_pool; // [sp+14F0h] [bp-14h]
  int v27; // [sp+14F4h] [bp-10h]

  v18 = a1;
  v17 = *a1;
  v6 = 0;
  v20 = frontend_runtime_instance();
  all_created_runtime = get_all_created_runtime(&v6);
  v24 = 0;
  v23 = NAN;
  v22 = 0;
  memset(v7, 0, 0x470u);
  for ( i = 0; i < v6; ++i )
  {
    if ( *(_QWORD *)&v23 > *(_QWORD *)(all_created_runtime[i] + 1120) )
      v23 = *(double *)(all_created_runtime[i] + 1120);
  }
  s = (char *)calloc(1u, 0x40u);
  snprintf(s, 0x40u, "%.10s_%d", "work_generator_thread", 0);
  V_LOCK();
  v1 = syscall(224);
  logfmt_raw(v3, 0x1000u, 0, "%s on pid %ld", s, v1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/god-miner.c",
    149,
    "work_generator_thread",
    21,
    208,
    40,
    v3);
  prctl(15, s);
  tp = (struct timespec *)&send_job_timer;
  clock_gettime(1, (struct timespec *)&send_job_timer);
  while ( 1 )
  {
    do
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              v27 = 0;
              current_pool = get_current_pool();
              if ( current_pool )
                break;
              V_LOCK();
              logfmt_raw(v3, 0x1000u, 0, "work generator: current pool is NULL");
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build"
                "/godminer-origin_godminer-branch1/god-miner.c",
                149,
                "work_generator_thread",
                21,
                227,
                20,
                v3);
            }
            if ( !pool_tget((pthread_mutex_t *)current_pool, (unsigned __int8 *)(current_pool + 1904)) )
              break;
            sleep(0);
          }
          v14 = LODWORD(v23);
          p_abstime = &abstime;
          clock_gettime(1, &v4);
          v12 = v4.tv_nsec + 1000 * (v14 - (_DWORD)&unk_F4240 * (v14 / 1000000));
          p_abstime->tv_sec = v4.tv_sec + v12 / 1000000000 + v14 / 1000000;
          p_abstime->tv_nsec = v12 % 1000000000;
          v16 = pool_twait_to_be_expected_and_set(current_pool, (_BYTE *)(current_pool + 1916), 1, 0, &abstime);
          if ( v16 != 1 )
            break;
          V_LOCK();
          logfmt_raw(v3, 0x1000u, 0, "pool has been changed");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/god-miner.c",
            149,
            "work_generator_thread",
            21,
            239,
            20,
            v3);
          sleep(0);
        }
        if ( v16 == 110 )
        {
          V_LOCK();
          logfmt_raw(v3, 0x1000u, 0, "Wait for new job timeout");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/god-miner.c",
            149,
            "work_generator_thread",
            21,
            243,
            20,
            v3);
        }
        else
        {
          V_LOCK();
          logfmt_raw(v3, 0x1000u, 0, "New job has come");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/god-miner.c",
            149,
            "work_generator_thread",
            21,
            245,
            20,
            v3);
        }
        pthread_mutex_lock((pthread_mutex_t *)(current_pool + 1592));
        if ( !pool_tget((pthread_mutex_t *)current_pool, (unsigned __int8 *)(current_pool + 1584)) )
          break;
        pthread_mutex_unlock((pthread_mutex_t *)(current_pool + 1592));
        V_LOCK();
        logfmt_raw(
          v3,
          0x1000u,
          0,
          "work generator: jobid %p cancel %d",
          *(_DWORD *)(current_pool + 1580),
          *(unsigned __int8 *)(current_pool + 1584));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/god-miner.c",
          149,
          "work_generator_thread",
          21,
          251,
          20,
          v3);
        sleep(0);
      }
      if ( (*(int (__fastcall **)(_DWORD *, int))(v20 + 36))(v7, current_pool) == 2 )
      {
        V_LOCK();
        logfmt_raw(
          v3,
          0x1000u,
          0,
          "poolno=%d work generator switched to new job %s",
          *(_DWORD *)current_pool,
          *(_DWORD *)(current_pool + 1580));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/god-miner.c",
          149,
          "work_generator_thread",
          21,
          258,
          20,
          v3);
        ++*(_QWORD *)&total_getworks;
        ++*(_DWORD *)(current_pool + 1632);
        sub_2A644((int)v7);
        sub_2A68C(v7, (const char **)(current_pool + 456));
        v22 = 1;
      }
      pthread_mutex_unlock((pthread_mutex_t *)(current_pool + 1592));
    }
    while ( !v7[281] );
    v7[274] = *(_DWORD *)(current_pool + 80);
    for ( i = 0; ; ++i )
    {
      if ( i >= v6 )
        goto LABEL_30;
      pthread_mutex_lock((pthread_mutex_t *)(current_pool + 1592));
      if ( (*(int (__fastcall **)(_DWORD *, int))(v20 + 36))(v7, current_pool) == 2 )
        break;
      v2 = v22 && !i;
      (**(void (__fastcall ***)(_DWORD *, int, int))(v20 + 72))(v7, current_pool, v2);
      pthread_mutex_unlock((pthread_mutex_t *)(current_pool + 1592));
      ++local_work;
      last_getwork = time(0);
      (*(void (__fastcall **)(_DWORD, _DWORD *))(*(_DWORD *)(v20 + 72) + 4))(all_created_runtime[i], v7);
    }
    pthread_mutex_unlock((pthread_mutex_t *)(current_pool + 1592));
LABEL_30:
    if ( v22 )
    {
      v22 = 0;
      V_LOCK();
      v11 = &send_job_timer;
      clock_gettime(1, (struct timespec *)&dword_1609F8);
      logfmt_raw(
        v3,
        0x1000u,
        0,
        "New job pushed after %lld ms",
        (v11[3] - v11[1]) / 1000000
      + vshld_n_s64(4 * (vshld_n_s64(v11[2] - *v11, 5u) - (v11[2] - *v11)) + v11[2] - *v11, 3u));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/god-miner.c",
        149,
        "work_generator_thread",
        21,
        289,
        20,
        v3);
    }
    else
    {
      V_LOCK();
      v10 = &send_job_timer;
      clock_gettime(1, (struct timespec *)&dword_1609F8);
      logfmt_raw(
        v3,
        0x1000u,
        0,
        "Updated job pushed after %lld ms",
        (v10[3] - v10[1]) / 1000000
      + vshld_n_s64(4 * (vshld_n_s64(v10[2] - *v10, 5u) - (v10[2] - *v10)) + v10[2] - *v10, 3u));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/god-miner.c",
        149,
        "work_generator_thread",
        21,
        291,
        20,
        v3);
    }
    v8 = &send_job_timer;
    clock_gettime(1, (struct timespec *)&dword_1609F8);
    update_recorded_timeout_value((v8[2] - *v8) * (unsigned __int64)(unsigned int)&unk_F4240 + (v8[3] - v8[1]) / 1000);
    v9 = (struct timespec *)&send_job_timer;
    clock_gettime(1, (struct timespec *)&send_job_timer);
  }
}
