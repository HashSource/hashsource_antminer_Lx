int sub_4B608()
{
  char v1[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v1, 0x1000u, 0, "%s error!", "set_working_voltage");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/miner_util/power_api.c",
    143,
    "set_working_voltage",
    19,
    357,
    60,
    v1);
  return -1;
}
