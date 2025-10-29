int miner_6060info_errorcode_init()
{
  char v2[64]; // [sp+14h] [bp-1100h] BYREF
  _BYTE v3[252]; // [sp+1014h] [bp-100h] BYREF

  pthread_mutex_lock(&stru_152504);
  if ( byte_15251C || access(off_14F610[0], 0) )
  {
    pthread_mutex_unlock(&stru_152504);
    return 0;
  }
  else
  {
    dword_152500 = (int)json_load_file(off_14F610[0], 0, (json_error_t *)v3);
    if ( dword_152500 && !*(_DWORD *)dword_152500 )
    {
      byte_15251C = 1;
      pthread_mutex_unlock(&stru_152504);
      return 1;
    }
    else
    {
      V_LOCK();
      logfmt_raw(
        v2,
        0x1000u,
        0,
        "%s, %d bad json format",
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/miner_util/miner_monitor/miner_6060info.c",
        198);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/miner_util/miner_monitor/miner_6060info.c",
        179,
        "miner_6060info_errorcode_init",
        29,
        198,
        100,
        v2);
      pthread_mutex_unlock(&stru_152504);
      return 0;
    }
  }
}
