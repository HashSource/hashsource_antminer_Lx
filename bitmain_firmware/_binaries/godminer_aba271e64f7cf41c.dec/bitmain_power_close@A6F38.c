int bitmain_power_close()
{
  _DWORD v1[512]; // [sp+10h] [bp-1804h] BYREF
  char v2[4]; // [sp+810h] [bp-1004h] BYREF

  if ( !dword_15FAD0 || !dword_15FAD4 )
  {
    pthread_mutex_lock(&power_mutex);
    strcpy((char *)v1, "bitmain power close ===========");
    V_LOCK();
    logfmt_raw(v2, 0x1000u, 0, v1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/power/bitmain_power_APW9.c",
      183,
      "bitmain_power_close",
      19,
      728,
      40,
      v2,
      v1[0],
      v1[1],
      v1[2],
      v1[3],
      v1[4],
      v1[5],
      v1[6],
      v1[7]);
    iic_uninit(dword_15FAD0);
    dword_15FAD4 = 0;
    dword_15FAD8 = 0;
    memset(dword_15FAE8, 0, 0xC0u);
    pthread_mutex_unlock(&power_mutex);
  }
  return 0;
}
