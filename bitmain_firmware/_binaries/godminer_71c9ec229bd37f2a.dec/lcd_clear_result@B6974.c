int lcd_clear_result()
{
  char v1[2048]; // [sp+10h] [bp-1800h] BYREF
  char v2[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_16E464) )
  {
    strcpy(v1, "failed to api lock\n");
    V_LOCK();
    logfmt_raw(v2, 0x1000u, 0, v1);
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
             "origin_master/backend/device/hal/platform/7007/7007_ui.c",
             163,
             "lcd_clear_result",
             16,
             501,
             100,
             v2);
  }
  else
  {
    if ( dword_165BA0 > 0 )
      lcd_clear(dword_165BA0);
    return pthread_mutex_unlock(&stru_16E464);
  }
}
