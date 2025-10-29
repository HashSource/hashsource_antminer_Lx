int __fastcall set_miner_6060info_low_hashrate_err(int a1, char a2)
{
  double v2; // d0
  __int64 v3; // r2
  int v6; // [sp+14h] [bp-1098h]
  char v7[20]; // [sp+18h] [bp-1094h] BYREF
  char v8[20]; // [sp+98h] [bp-1014h] BYREF
  struct timeval v9; // [sp+1098h] [bp-14h] BYREF
  struct timeval tv; // [sp+10A0h] [bp-Ch] BYREF

  v6 = a1;
  if ( a1 > 15 )
  {
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, "check_chain_index_valid failed, chain_index >= PLATFORM_MAX_CHAIN_NUM");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/miner_util/miner_monitor/miner_6060info.c",
      179,
      "set_miner_6060info_low_hashrate_err",
      35,
      124,
      40,
      v8);
    v6 = 0;
  }
  pthread_mutex_lock(&miner_6060info_lock);
  byte_152520[16 * v6 + 176] = a2;
  sub_654C4();
  tv.tv_sec = 0;
  tv.tv_usec = 0;
  gettimeofday(&tv, 0);
  if ( byte_152520[16 * v6 + 176] )
  {
    difftime(tv.tv_sec, *(_DWORD *)&byte_152520[16 * v6 + 180]);
    v3 = (__int64)v2 - *(_QWORD *)&byte_152520[16 * v6 + 184];
    if ( HIDWORD(v3) - ((unsigned int)(__int64)v2 == *(_DWORD *)&byte_152520[16 * v6 + 184]) < 0 == __OFSUB__(HIDWORD(v3), 0, (unsigned int)(__int64)v2 != *(_DWORD *)&byte_152520[16 * v6 + 184]) )
    {
      snprintf(v7, 0x80u, "R%d:1", v6);
      V_LOCK();
      logfmt_raw(v8, 0x1000u, 0, "Sweep error string = %s", v7);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/miner_util/miner_monitor/miner_6060info.c",
        179,
        "set_miner_6060info_low_hashrate_err",
        35,
        127,
        100,
        v8);
    }
  }
  v9.tv_sec = 0;
  v9.tv_usec = 0;
  if ( byte_152520[16 * v6 + 176] )
  {
    gettimeofday(&v9, 0);
    *(_DWORD *)&byte_152520[16 * v6 + 180] = v9.tv_sec;
  }
  else
  {
    *(_DWORD *)&byte_152520[16 * v6 + 180] = 0;
  }
  return pthread_mutex_unlock(&miner_6060info_lock);
}
