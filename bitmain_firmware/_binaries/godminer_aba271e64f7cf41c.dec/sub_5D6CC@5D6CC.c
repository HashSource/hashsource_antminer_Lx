int sub_5D6CC()
{
  int result; // r0
  char v1[8]; // [sp+14h] [bp-1008h] BYREF
  int v2; // [sp+1014h] [bp-8h]

  result = nice(10);
  v2 = result;
  if ( !result )
  {
    V_LOCK();
    logfmt_raw(v1, 0x1000u, 0, "Unable to set thread to low priority");
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/go"
             "dminer-origin_godminer-branch1/miner_util/check_pool.c",
             161,
             "set_lowprio",
             11,
             18,
             20,
             v1);
  }
  return result;
}
