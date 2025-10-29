int __fastcall sub_2CFB4(int a1)
{
  int result; // r0
  char v2[4]; // [sp+18h] [bp-1004h] BYREF

  switch ( a1 )
  {
    case 2:
      V_LOCK();
      logfmt_raw(v2, 0x1000u, 0, "SIGINT received, exiting");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/god-miner.c",
        149,
        "signal_handler",
        14,
        590,
        80,
        v2);
      print_summary();
      exit(0);
      return result;
    case 3:
      V_LOCK();
      logfmt_raw(v2, 0x1000u, 0, "SIGQUIT received, exiting");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/god-miner.c",
        149,
        "signal_handler",
        14,
        595,
        80,
        v2);
      print_summary();
      exit(0);
      return result;
    case 10:
      V_LOCK();
      logfmt_raw(v2, 0x1000u, 0, "SIGUSR1 received, reload log");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/god-miner.c",
        149,
        "signal_handler",
        14,
        610,
        80,
        v2);
      result = log_reload();
      break;
    case 11:
      V_LOCK();
      logfmt_raw(v2, 0x1000u, 0, "SIGSEGV received, exiting");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/god-miner.c",
        149,
        "signal_handler",
        14,
        605,
        80,
        v2);
      print_summary();
      exit(0);
      return result;
    case 15:
      V_LOCK();
      logfmt_raw(v2, 0x1000u, 0, "SIGTERM received, exiting");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/god-miner.c",
        149,
        "signal_handler",
        14,
        600,
        80,
        v2);
      print_summary();
      exit(0);
      return result;
    default:
      V_LOCK();
      logfmt_raw(v2, 0x1000u, 0, "catch signal %d, it should not be here");
      V_UNLOCK();
      result = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/buil"
                 "d/godminer-origin_godminer-branch1/god-miner.c",
                 149,
                 "signal_handler",
                 14,
                 614,
                 80,
                 v2);
      break;
  }
  return result;
}
