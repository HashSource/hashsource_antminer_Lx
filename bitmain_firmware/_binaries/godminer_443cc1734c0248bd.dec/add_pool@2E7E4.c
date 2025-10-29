char *add_pool()
{
  char *v0; // r4
  int v1; // r2
  void *v2; // r0
  int v3; // r1
  _DWORD *v4; // r0
  int v5; // lr
  char v7[4100]; // [sp+10h] [bp-1004h] BYREF

  v0 = (char *)calloc(0x870u, 1u);
  if ( !v0 )
  {
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, "Failed to malloc pool in add_pool");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/pool.c",
      127,
      "add_pool",
      8,
      121,
      100,
      v7);
    exit(1);
  }
  v1 = total_pools;
  v2 = (void *)pools;
  v3 = total_pools + 2;
  *((_DWORD *)v0 + 1) = total_pools;
  *(_DWORD *)v0 = v1;
  v4 = realloc(v2, 4 * v3);
  v5 = total_pools;
  pools = (int)v4;
  ++total_pools;
  v4[v5] = v0;
  *((_DWORD *)v0 + 8) = -1;
  *((_DWORD *)v0 + 10) = 0;
  v0[1808] = 0;
  v0[1816] = 0;
  *((_DWORD *)v0 + 477) = 0;
  *((_DWORD *)v0 + 479) = 0;
  v0[24] = 1;
  *((_QWORD *)v0 + 241) = 0;
  *((_DWORD *)v0 + 484) = 0;
  memset(v0 + 1844, 0, 0x40u);
  *((_QWORD *)v0 + 246) = 0;
  pthread_mutex_init((pthread_mutex_t *)v0 + 73, 0);
  pthread_mutex_init((pthread_mutex_t *)(v0 + 1984), 0);
  pthread_condattr_init((pthread_condattr_t *)v0 + 502);
  pthread_condattr_setclock((pthread_condattr_t *)v0 + 502, 1);
  pthread_cond_init((pthread_cond_t *)v0 + 42, (const pthread_condattr_t *)v0 + 502);
  pthread_mutex_init((pthread_mutex_t *)(v0 + 44), 0);
  pthread_mutex_init((pthread_mutex_t *)v0 + 73, 0);
  pthread_mutex_init((pthread_mutex_t *)(v0 + 1940), 0);
  pthread_mutex_init((pthread_mutex_t *)(v0 + 1820), 0);
  v0[2064] = 1;
  v0[2076] = 0;
  *((_DWORD *)v0 + 517) = -1;
  return v0;
}
