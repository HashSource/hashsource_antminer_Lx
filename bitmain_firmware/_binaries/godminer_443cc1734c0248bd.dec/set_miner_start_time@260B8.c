time_t set_miner_start_time()
{
  time_t result; // r0
  int v1; // r4
  char *v2; // r0
  struct sysinfo info; // [sp+10h] [bp-1140h] BYREF
  char s[256]; // [sp+50h] [bp-1100h] BYREF
  char v5[4096]; // [sp+150h] [bp-1000h] BYREF

  if ( sysinfo(&info) )
  {
    v1 = *_errno_location();
    v2 = strerror(v1);
    sprintf(s, "Failed to get sysinfo, errno:%u, reason:%s", v1, v2);
    result = time(0);
    dword_163EB8 = result + 1;
    LODWORD(flt_163EBC) = result;
  }
  else
  {
    flt_163EBC = *(float *)&info.uptime;
    dword_163EB8 = info.uptime + 1;
    sprintf(s, "%s total_tv_start_sys=%ld total_tv_end_sys=%ld", "set_miner_start_time", info.uptime, info.uptime + 1);
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, "%s", s);
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
             "origin_master/api_new.c",
             130,
             "set_miner_start_time",
             20,
             312,
             60,
             v5);
  }
  return result;
}
