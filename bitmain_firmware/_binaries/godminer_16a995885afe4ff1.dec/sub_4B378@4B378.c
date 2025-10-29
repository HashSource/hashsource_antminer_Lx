int sub_4B378()
{
  char v1[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v1, 0x1000u, 0, "%s error!", "set_working_voltage");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/miner_util/power_api.c",
    158,
    "set_working_voltage",
    19,
    357,
    60,
    v1);
  return -1;
}
