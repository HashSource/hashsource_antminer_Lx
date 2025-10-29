int psu_watchdog()
{
  double v0; // d0
  int v1; // r3
  const char *v2; // r3
  char v4[28]; // [sp+10h] [bp-101Ch] BYREF
  int v5; // [sp+1010h] [bp-1Ch]
  int power_status; // [sp+1014h] [bp-18h]
  double v7; // [sp+1018h] [bp-14h]
  int current_voltage; // [sp+1020h] [bp-Ch]
  int v9; // [sp+1024h] [bp-8h]

  v7 = -1.0;
  current_voltage = 0;
  v5 = 0;
  v9 = 0;
  power_status = bitmain_set_watchdog(1);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, "enable power watchdog: 0x%04x", power_status);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/miner_util/check_heartbeat.c",
    166,
    "psu_watchdog",
    12,
    77,
    60,
    v4);
  if ( power_status == 1 )
  {
    while ( 1 )
    {
      pthread_setcancelstate(1, 0);
      read_feedback_voltage(0);
      v7 = v0;
      current_voltage = get_current_voltage();
      if ( is_power_on() )
      {
        if ( v7 >= 0.0 )
        {
          if ( v7 * 100.0 <= (double)current_voltage * 1.1 && v7 * 100.0 >= (double)current_voltage * 0.9 )
          {
            v9 = 0;
          }
          else
          {
            V_LOCK();
            if ( v7 * 100.0 - (double)current_voltage <= 0.0 )
              v2 = "drop";
            else
              v2 = "rise";
            logfmt_raw(
              v4,
              0x1000u,
              0,
              ">> chain avg vol %s from %d to %.2f, pls check <<",
              v2,
              current_voltage,
              v7 * 100.0);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/g"
              "odminer-origin_godminer-branch1/miner_util/check_heartbeat.c",
              166,
              "psu_watchdog",
              12,
              93,
              80,
              v4);
            ++v9;
          }
        }
        else
        {
          V_LOCK();
          logfmt_raw(v4, 0x1000u, 0, ">> read_feedback_voltage failed!, pls check <<");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/miner_util/check_heartbeat.c",
            166,
            "psu_watchdog",
            12,
            89,
            100,
            v4);
          ++v9;
        }
        V_LOCK();
        logfmt_raw(v4, 0x1000u, 0, "cur_voltage = %d, avg_voltage = %.2f", current_voltage);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/miner_util/check_heartbeat.c",
          166,
          "psu_watchdog",
          12,
          99,
          20,
          v4);
      }
      power_status = bitmain_get_power_status();
      if ( power_status )
      {
        V_LOCK();
        logfmt_raw(v4, 0x1000u, 0, ">> power status error, ret %d, err_times %d <<", power_status, ++v5);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/miner_util/check_heartbeat.c",
          166,
          "psu_watchdog",
          12,
          110,
          80,
          v4);
        v1 = v9;
        if ( v9 )
          return v1;
        v1 = v5;
        if ( v5 > 3 )
          return v1;
      }
      else
      {
        v5 = 0;
      }
      if ( v9 > 3 )
        break;
      pthread_setcancelstate(0, 0);
      pthread_testcancel();
      sleep(0xAu);
    }
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, ">> feedback voltage: too many times error, pls check <<");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/miner_util/check_heartbeat.c",
      166,
      "psu_watchdog",
      12,
      117,
      100,
      v4);
  }
  else
  {
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, "%s enable power watchdog failed!", "psu_watchdog");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/miner_util/check_heartbeat.c",
      166,
      "psu_watchdog",
      12,
      79,
      100,
      v4);
    return 0;
  }
  return v1;
}
