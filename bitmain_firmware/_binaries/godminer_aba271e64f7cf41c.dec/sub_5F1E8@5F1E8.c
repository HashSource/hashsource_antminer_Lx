__int64 sub_5F1E8()
{
  double v0; // d0
  int (**v1)(); // r0
  int v2; // r0
  int (**v3)(); // r0
  int v4; // r0
  char v6[28]; // [sp+10h] [bp-101Ch] BYREF
  double v7; // [sp+1010h] [bp-1Ch]
  double v8; // [sp+1018h] [bp-14h]
  int i; // [sp+1020h] [bp-Ch]
  int device_num; // [sp+1024h] [bp-8h]

  v8 = 0.0;
  device_num = query_device_num();
  for ( i = 0; i < device_num; ++i )
  {
    v1 = dev_ctrl();
    v2 = ((int (__fastcall *)(int))v1[12])(i);
    read_feedback_voltage(v2);
    v7 = v0;
    V_LOCK();
    v3 = dev_ctrl();
    v4 = ((int (__fastcall *)(int))v3[12])(i);
    logfmt_raw(v6, 0x1000u, 0, "chain %d feedback voltage = %.2f", v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/miner_util/power_api.c",
      160,
      "get_minimal_feedback_voltage",
      28,
      69,
      40,
      v6);
    if ( v7 > 0.1 && (v8 > v7 || v8 < 0.1) )
      v8 = v7;
  }
  V_LOCK();
  logfmt_raw(v6, 0x1000u, 0, "the minimal voltage = %.2f", v8);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godm"
           "iner-origin_godminer-branch1/miner_util/power_api.c",
           160,
           "get_minimal_feedback_voltage",
           28,
           74,
           20,
           v6);
}
