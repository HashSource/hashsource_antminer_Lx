int __fastcall set_miner_6060info_uneffective_temp_err(char a1)
{
  double v1; // d0
  int v4[5]; // [sp+18h] [bp-1094h] BYREF
  char v5[20]; // [sp+98h] [bp-1014h] BYREF
  struct timeval v6; // [sp+1098h] [bp-14h] BYREF
  struct timeval tv; // [sp+10A0h] [bp-Ch] BYREF

  pthread_mutex_lock(&miner_6060info_lock);
  byte_152540 = a1;
  sub_654C4();
  tv.tv_sec = 0;
  tv.tv_usec = 0;
  gettimeofday(&tv, 0);
  if ( byte_152540 )
  {
    difftime(tv.tv_sec, dword_152544);
    if ( (int)(((unsigned __int64)((__int64)v1 - *(_QWORD *)&dbl_152548) >> 32)
             - ((unsigned int)(__int64)v1 == LODWORD(dbl_152548))) < 0 == __OFSUB__(
                                                                            (unsigned __int64)((__int64)v1
                                                                                             - *(_QWORD *)&dbl_152548) >> 32,
                                                                            0,
                                                                            (unsigned int)(__int64)v1 != LODWORD(dbl_152548)) )
    {
      v4[0] = 3553866;
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, "Sweep error string = %s", v4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/miner_util/miner_monitor/miner_6060info.c",
        179,
        "set_miner_6060info_uneffective_temp_err",
        39,
        111,
        100,
        v5);
    }
  }
  v6.tv_sec = 0;
  v6.tv_usec = 0;
  if ( byte_152540 )
  {
    gettimeofday(&v6, 0);
    dword_152544 = v6.tv_sec;
  }
  else
  {
    dword_152544 = 0;
  }
  return pthread_mutex_unlock(&miner_6060info_lock);
}
