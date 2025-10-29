void cal_log_init()
{
  _DWORD v0[1024]; // [sp+10h] [bp-2014h] BYREF
  char v1[20]; // [sp+1010h] [bp-1014h] BYREF
  pthread_t newthread; // [sp+2010h] [bp-14h] BYREF
  time_t timer; // [sp+2014h] [bp-10h] BYREF
  struct tm *tp; // [sp+2018h] [bp-Ch]
  void *arg; // [sp+201Ch] [bp-8h]

  arg = &dword_16090C;
  if ( !byte_160936 )
  {
    time(&timer);
    tp = localtime(&timer);
    strftime((char *)arg + 42, 0xFu, "%Y-%m/%d", tp);
    strftime((char *)arg + 72, 0xAu, "%H-%M-%S", tp);
    *(_DWORD *)arg = 1;
    *((_DWORD *)arg + 1) = "/var/log";
    *((_DWORD *)arg + 2) = "nvdata";
    *((_DWORD *)arg + 23) = "cglog_init";
    sub_C7148((int)arg);
    if ( pthread_create(&newthread, 0, (void *(*)(void *))sub_C76AC, arg) )
    {
      strcpy((char *)v0, "Failed to create log thread");
      V_LOCK();
      logfmt_raw(v1, 0x1000u, 0, v0, 0);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/common/general/log/log.c",
        162,
        "cal_log_init",
        12,
        351,
        120,
        v1,
        v0[0],
        v0[1],
        v0[2],
        v0[3],
        v0[4],
        v0[5],
        v0[6]);
    }
    pthread_detach(newthread);
  }
}
