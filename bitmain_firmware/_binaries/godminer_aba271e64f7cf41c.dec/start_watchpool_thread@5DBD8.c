int start_watchpool_thread()
{
  char v2[12]; // [sp+10h] [bp-100Ch] BYREF
  int *v4; // [sp+1014h] [bp-8h]

  v4 = &dword_161060;
  dword_161060 = 2;
  if ( !sub_5D660((int)&dword_161060, (void *(*)(void *))watchpool_thread) )
    return 0;
  V_LOCK();
  logfmt_raw(v2, 0x1000u, 0, "watchpool thread create failed");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/miner_util/check_pool.c",
    161,
    "start_watchpool_thread",
    22,
    127,
    100,
    v2);
  return 5;
}
