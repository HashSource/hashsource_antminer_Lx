int __fastcall iic_uninit(int a1)
{
  char v3[2048]; // [sp+1Ch] [bp-1808h] BYREF
  char v4[8]; // [sp+81Ch] [bp-1008h] BYREF
  int v5; // [sp+181Ch] [bp-8h]

  v5 = 0;
  if ( pthread_mutex_lock(&stru_15F97C) )
  {
    strcpy(v3, "failed to i2c lock\n");
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, v3);
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/go"
             "dminer-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_iic.c",
             185,
             "iic_uninit",
             10,
             92,
             100,
             v4);
  }
  else
  {
    if ( a1 == 255 )
      i2c_sim_uninit();
    else
      i2c_uninit(a1);
    return pthread_mutex_unlock(&stru_15F97C);
  }
}
