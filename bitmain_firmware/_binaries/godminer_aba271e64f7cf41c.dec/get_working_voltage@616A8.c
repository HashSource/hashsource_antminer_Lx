int get_working_voltage()
{
  char v2[4]; // [sp+10h] [bp-1004h] BYREF

  if ( byte_152428 == 1 )
    return dword_152434;
  V_LOCK();
  logfmt_raw(v2, 0x1000u, 0, "Sweep error string = %s.", "V:1");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/miner_util/power_api.c",
    160,
    "get_working_voltage",
    19,
    506,
    100,
    v2);
  return -1;
}
