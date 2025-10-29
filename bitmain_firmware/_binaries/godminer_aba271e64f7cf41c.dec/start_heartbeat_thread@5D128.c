int start_heartbeat_thread()
{
  char v2[12]; // [sp+10h] [bp-100Ch] BYREF
  _DWORD *v3; // [sp+1010h] [bp-Ch]
  int v4; // [sp+1014h] [bp-8h]

  v3 = calloc(1u, 0x30u);
  *v3 = 5;
  v4 = -1;
  if ( platform_is_pic_mcu_en() )
    v4 = sub_5C99C((int)v3, (void *(*)(void *))heartbeat_on_device);
  else
    v4 = sub_5C99C((int)v3, (void *(*)(void *))psu_watchdog);
  if ( v4 )
  {
    V_LOCK();
    logfmt_raw(v2, 0x1000u, 0, "heartbeat thread create failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/miner_util/check_heartbeat.c",
      166,
      "start_heartbeat_thread",
      22,
      136,
      100,
      v2);
    return 5;
  }
  else
  {
    pthread_detach(v3[1]);
    V_LOCK();
    logfmt_raw(v2, 0x1000u, 0, "start_heartbeat_thread");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/miner_util/check_heartbeat.c",
      166,
      "start_heartbeat_thread",
      22,
      140,
      60,
      v2);
    return 0;
  }
}
