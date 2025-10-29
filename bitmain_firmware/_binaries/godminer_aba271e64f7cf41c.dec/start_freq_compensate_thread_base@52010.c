int __fastcall start_freq_compensate_thread_base(void *a1)
{
  char v3[8]; // [sp+1Ch] [bp-1008h] BYREF

  if ( pthread_create((pthread_t *)&dword_1523E4, 0, (void *(*)(void *))check_working_freq_new, a1) )
  {
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, "freq_compensate_thread create failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
      176,
      "start_freq_compensate_thread_base",
      33,
      491,
      100,
      v3);
    return 5;
  }
  else
  {
    pthread_detach(dword_1523E4);
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, "start freq_compensate_thread");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
      176,
      "start_freq_compensate_thread_base",
      33,
      495,
      60,
      v3);
    return 0;
  }
}
