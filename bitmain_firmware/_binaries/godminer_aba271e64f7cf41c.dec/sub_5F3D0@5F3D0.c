int sub_5F3D0()
{
  double v0; // d0
  int v3; // [sp+4h] [bp-1030h]
  char v4[28]; // [sp+18h] [bp-101Ch] BYREF
  int v5; // [sp+1018h] [bp-1Ch]
  int current_voltage; // [sp+101Ch] [bp-18h]
  double v7; // [sp+1020h] [bp-14h]
  double v8; // [sp+1028h] [bp-Ch]

  v5 = 3;
  current_voltage = get_current_voltage();
  v7 = (double)current_voltage * 0.75 / 100.0;
  v8 = 0.0;
  while ( 1 )
  {
    sleep(1u);
    if ( !platform_is_pic_mcu_en() )
      break;
    sub_5F1E8();
    v8 = v0;
    if ( v0 >= v7 )
    {
      V_LOCK();
      logfmt_raw(
        v4,
        0x1000u,
        0,
        "power voltage qualified! centi_voltage %d feedback_voltage %f qualified_vol %f",
        current_voltage);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/miner_util/power_api.c",
        160,
        "check_feedback_voltage",
        22,
        95,
        80,
        v4);
      goto LABEL_12;
    }
    V_LOCK();
    logfmt_raw(
      v4,
      0x1000u,
      0,
      "power voltage can not meet the target! centi_voltage %d feedback_voltage %f qualified_vol %f",
      current_voltage);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/miner_util/power_api.c",
      160,
      "check_feedback_voltage",
      22,
      91,
      80,
      v4);
LABEL_11:
    if ( !--v5 )
      goto LABEL_12;
  }
  read_feedback_voltage(0);
  v8 = v0;
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, "read fb voltage %.2f", v8);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/miner_util/power_api.c",
    160,
    "check_feedback_voltage",
    22,
    100,
    20,
    v4);
  if ( v8 >= 0.0 )
  {
    if ( v8 * 100.0 <= (double)current_voltage * 1.1 && v8 * 100.0 >= (double)current_voltage * 0.9 )
      goto LABEL_12;
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, "power voltage qualified! centi_voltage %d fb_vol %f", current_voltage, v3, v8 * 100.0);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/miner_util/power_api.c",
      160,
      "check_feedback_voltage",
      22,
      107,
      100,
      v4);
    goto LABEL_11;
  }
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, "read_feedback_voltage_from_psu failed!");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/miner_util/power_api.c",
    160,
    "check_feedback_voltage",
    22,
    102,
    80,
    v4);
LABEL_12:
  if ( v5 )
    return 0;
  else
    return -1;
}
