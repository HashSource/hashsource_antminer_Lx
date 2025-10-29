int lcd_clear_result()
{
  _DWORD v1[512]; // [sp+10h] [bp-1804h] BYREF
  char v2[4]; // [sp+810h] [bp-1004h] BYREF

  if ( pthread_mutex_lock(&stru_15F9AC) )
  {
    strcpy((char *)v1, "failed to api lock\n");
    V_LOCK();
    logfmt_raw(v2, 0x1000u, 0, v1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_ui.c",
      184,
      "lcd_clear_result",
      16,
      484,
      100,
      v2,
      v1[0],
      v1[1],
      v1[2],
      v1[3],
      v1[4]);
  }
  if ( dword_1505EC > 0 )
    lcd_clear(dword_1505EC);
  return pthread_mutex_unlock(&stru_15F9AC);
}
