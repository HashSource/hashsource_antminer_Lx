time_t get_miner_elapsed_time()
{
  time_t result; // r0
  int v1; // r5
  char *v2; // r0
  struct sysinfo info; // [sp+10h] [bp-1044h] BYREF
  char v4[4100]; // [sp+50h] [bp-1004h] BYREF

  if ( sysinfo(&info) )
  {
    V_LOCK();
    v1 = *_errno_location();
    v2 = strerror(v1);
    logfmt_raw(v4, 0x1000u, 0, "Failed to get sysinfo, errno:%u, reason:%s", v1, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/api_new.c",
      130,
      "get_miner_elapsed_time",
      22,
      289,
      40,
      v4);
    result = time(0);
    dword_163EB8 = result;
  }
  else
  {
    result = info.uptime;
    dword_163EB8 = info.uptime;
  }
  return result;
}
