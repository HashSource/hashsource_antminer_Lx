int __fastcall sub_2B8F8(int a1)
{
  int v1; // r2
  int result; // r0
  char v3[4096]; // [sp+10h] [bp-1000h] BYREF

  switch ( a1 )
  {
    case 2:
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, "SIGINT received, exiting");
      V_UNLOCK();
      v1 = 617;
      goto LABEL_3;
    case 3:
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, "SIGQUIT received, exiting");
      V_UNLOCK();
      v1 = 622;
      goto LABEL_3;
    case 10:
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, "SIGUSR1 received, reload log");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build"
        "/godminer-origin_master/god-miner.c",
        147,
        "signal_handler",
        14,
        637,
        80,
        v3);
      return log_reload();
    case 11:
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, "SIGSEGV received, exiting");
      V_UNLOCK();
      v1 = 632;
      goto LABEL_3;
    case 15:
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, "SIGTERM received, exiting");
      V_UNLOCK();
      v1 = 627;
LABEL_3:
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build"
        "/godminer-origin_master/god-miner.c",
        147,
        "signal_handler",
        14,
        v1,
        80,
        v3);
      print_summary();
      exit(0);
      return result;
    default:
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, "catch signal %d, it should not be here");
      V_UNLOCK();
      return zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/releas"
               "e/build/godminer-origin_master/god-miner.c",
               147,
               "signal_handler",
               14,
               641,
               80,
               v3);
  }
}
