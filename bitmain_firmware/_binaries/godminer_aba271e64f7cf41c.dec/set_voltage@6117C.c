int __fastcall set_voltage(int a1, char a2)
{
  char v5[4]; // [sp+18h] [bp-1004h] BYREF

  if ( a2 != 1 )
  {
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, "set_voltage power is not inited");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/miner_util/power_api.c",
      160,
      "set_voltage",
      11,
      438,
      100,
      v5);
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, "Sweep error string = %s.", "V:1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/miner_util/power_api.c",
      160,
      "set_voltage",
      11,
      439,
      100,
      v5);
    return -1;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, "set_voltage to %d", a1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/miner_util/power_api.c",
      160,
      "set_voltage",
      11,
      442,
      40,
      v5);
    return sub_5FD30(a1, (int)&byte_152428);
  }
}
