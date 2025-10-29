int get_max_voltage()
{
  double v0; // d0
  char v3[4]; // [sp+10h] [bp-1004h] BYREF

  if ( byte_152428 != 1 )
  {
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, "Sweep error string = %s.", "V:1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/miner_util/power_api.c",
      160,
      "get_max_voltage",
      15,
      516,
      100,
      v3);
    return -1;
  }
  else
  {
    bitmain_convert_N_to_V();
    return (int)(v0 * 100.0);
  }
}
