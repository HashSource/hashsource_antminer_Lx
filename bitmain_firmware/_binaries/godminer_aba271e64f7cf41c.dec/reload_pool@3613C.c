int reload_pool()
{
  int result; // r0
  char v1[4]; // [sp+10h] [bp-1004h] BYREF

  if ( dword_15221C )
  {
    V_LOCK();
    logfmt_raw(v1, 0x1000u, 0, "config too fast, pool is changing, please wait");
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/go"
             "dminer-origin_godminer-branch1/pool.c",
             144,
             "reload_pool",
             11,
             956,
             100,
             v1);
  }
  else
  {
    result = pthread_create((pthread_t *)&dword_15221C, 0, (void *(*)(void *))sub_35534, 0);
    if ( result )
    {
      V_LOCK();
      logfmt_raw(v1, 0x1000u, 0, "Failed to create pool_change_thread");
      V_UNLOCK();
      return zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/"
               "godminer-origin_godminer-branch1/pool.c",
               144,
               "reload_pool",
               11,
               954,
               100,
               v1);
    }
  }
  return result;
}
