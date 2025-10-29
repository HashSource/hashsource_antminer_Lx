int setsystime_basestampfile()
{
  int v0; // r4
  int *v1; // r0
  char *v2; // r0
  struct stat v4; // [sp+10h] [bp-106Ch] BYREF
  char v5[20]; // [sp+68h] [bp-1014h] BYREF
  time_t when; // [sp+1068h] [bp-14h] BYREF
  FILE *stream; // [sp+106Ch] [bp-10h]

  stream = fopen("/nvdata/timestamp.data", "r+");
  if ( stream )
  {
    when = 0;
    fscanf(stream, "%ld", &when);
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, "timestamp file=%ld", when);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/god-miner.c",
      149,
      "setsystime_basestampfile",
      24,
      1606,
      40,
      v5);
    if ( when )
      stime(&when);
  }
  else
  {
    stream = fopen("/nvdata/timestamp.data", "w+");
    if ( !stream )
    {
      V_LOCK();
      v0 = *_errno_location();
      v1 = _errno_location();
      v2 = strerror(*v1);
      logfmt_raw(v5, 0x1000u, 0, "file op errno = %d reason = %s", v0, v2);
      V_UNLOCK();
      return zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/"
               "godminer-origin_godminer-branch1/god-miner.c",
               149,
               "setsystime_basestampfile",
               24,
               1583,
               40,
               v5);
    }
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, "sys time ref file time");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/god-miner.c",
      149,
      "setsystime_basestampfile",
      24,
      1589,
      40,
      v5);
    if ( sub_CCFF8("/config/sn", &v4) && sub_CCFF8("/config/passwd", &v4) && sub_CCFF8("/config/shadow", &v4) )
    {
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, "No ref time file");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/god-miner.c",
        149,
        "setsystime_basestampfile",
        24,
        1597,
        40,
        v5);
    }
    else
    {
      fprintf(stream, "%ld", v4.st_ctim.tv_sec);
      stime(&v4.st_ctim.tv_sec);
    }
    fflush(stream);
  }
  return fclose(stream);
}
