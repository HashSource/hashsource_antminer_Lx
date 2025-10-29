int __fastcall sub_4C1FC(int a1)
{
  char v3[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "%s unknow temp type %d", a1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/miner_util/set_pwm_by_temp.c",
    164,
    "get_temp",
    8,
    133,
    100,
    v3);
  return 0x7FFFFFFF;
}
