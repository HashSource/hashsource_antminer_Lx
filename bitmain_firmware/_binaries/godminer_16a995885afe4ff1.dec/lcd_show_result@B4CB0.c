int __fastcall lcd_show_result(char a1, int a2, unsigned int a3)
{
  int v6; // r0
  int v7; // r4
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v10[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( pthread_mutex_lock(&stru_16C438) )
  {
    v7 = -4;
    strcpy(s, "failed to api lock\n");
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/backend/device/hal/platform/7007/7007_ui.c",
      178,
      "lcd_show_result",
      15,
      470,
      100,
      v10);
  }
  else
  {
    v6 = dword_163B90;
    if ( dword_163B90 < 0 )
    {
      dword_163B90 = lcd_init((int)lcd_path);
      lcd_clear(dword_163B90);
      v6 = dword_163B90;
    }
    if ( v6 <= 0 )
    {
      snprintf(s, 0x800u, "failed to init %s\n", lcd_path);
      V_LOCK();
      logfmt_raw(v10, 0x1000u, 0, s);
      V_UNLOCK();
      v7 = -1;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build"
        "/godminer-origin_master/backend/device/hal/platform/7007/7007_ui.c",
        178,
        "lcd_show_result",
        15,
        486,
        100,
        v10);
    }
    else
    {
      v7 = lcd_write(v6, a1, a2, a3);
    }
    pthread_mutex_unlock(&stru_16C438);
  }
  return v7;
}
