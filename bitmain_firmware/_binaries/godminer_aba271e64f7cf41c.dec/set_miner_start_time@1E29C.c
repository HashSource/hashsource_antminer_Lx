time_t set_miner_start_time()
{
  int v0; // r4
  int *v1; // r0
  char *v2; // r0
  time_t result; // r0
  char v4[12]; // [sp+10h] [bp-114Ch] BYREF
  struct sysinfo info; // [sp+1010h] [bp-14Ch] BYREF
  char s[260]; // [sp+1050h] [bp-10Ch] BYREF

  if ( sysinfo(&info) )
  {
    v0 = *_errno_location();
    v1 = _errno_location();
    v2 = strerror(*v1);
    sprintf(s, "Failed to get sysinfo, errno:%u, reason:%s", v0, v2);
    result = time(0);
    dword_151298 = result;
    dword_15129C = result + 1;
  }
  else
  {
    dword_151298 = info.uptime;
    dword_15129C = info.uptime + 1;
    sprintf(s, "%s total_tv_start_sys=%ld total_tv_end_sys=%ld", "set_miner_start_time", info.uptime, info.uptime + 1);
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, "%s", s);
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/go"
             "dminer-origin_godminer-branch1/api_new.c",
             147,
             "set_miner_start_time",
             20,
             373,
             60,
             v4);
  }
  return result;
}
