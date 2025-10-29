int __fastcall iic_uninit(int a1)
{
  char v3[2048]; // [sp+10h] [bp-1800h] BYREF
  char v4[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_16C10C) )
  {
    strcpy(v3, "failed to i2c lock\n");
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, v3);
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/"
             "build/godminer-origin_master/backend/device/hal/platform/7007/7007_iic.c",
             179,
             "iic_uninit",
             10,
             64,
             100,
             v4);
  }
  else
  {
    i2c_uninit(a1);
    return pthread_mutex_unlock(&stru_16C10C);
  }
}
