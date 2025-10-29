int __fastcall lcd_show_result(unsigned __int8 a1, int a2, unsigned int a3)
{
  char v8[2048]; // [sp+24h] [bp-1808h] BYREF
  char v9[8]; // [sp+824h] [bp-1008h] BYREF
  int v10; // [sp+1824h] [bp-8h]

  v10 = -1;
  if ( pthread_mutex_lock(&stru_15F9AC) )
  {
    strcpy(v8, "failed to api lock\n");
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, v8);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_ui.c",
      184,
      "lcd_show_result",
      15,
      456,
      100,
      v9);
    return -4;
  }
  else
  {
    if ( dword_1505EC < 0 )
    {
      dword_1505EC = lcd_init(lcd_path);
      lcd_clear(dword_1505EC);
    }
    if ( dword_1505EC <= 0 )
    {
      snprintf(v8, 0x800u, "failed to init %s\n", lcd_path);
      V_LOCK();
      logfmt_raw(v9, 0x1000u, 0, v8);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_ui.c",
        184,
        "lcd_show_result",
        15,
        470,
        100,
        v9);
      v10 = -1;
    }
    else
    {
      v10 = lcd_write(dword_1505EC, a1, a2, a3);
    }
    pthread_mutex_unlock(&stru_15F9AC);
    return v10;
  }
}
