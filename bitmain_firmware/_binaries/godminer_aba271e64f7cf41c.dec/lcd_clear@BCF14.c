int __fastcall lcd_clear(int a1)
{
  char v3[2048]; // [sp+18h] [bp-1804h] BYREF
  char v4[4]; // [sp+818h] [bp-1004h] BYREF

  if ( !dword_160584 )
    return -2;
  if ( a1 == dword_160580 )
  {
    if ( pthread_mutex_lock(&stru_160588) )
    {
      strcpy(v3, "failed to lcd lock\n");
      V_LOCK();
      logfmt_raw(v4, 0x1000u, 0, v3);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_lcd.c",
        185,
        "lcd_clear",
        9,
        112,
        100,
        v4);
      return -4;
    }
    else
    {
      memset(&unk_1605A0, 32, 0x40u);
      lseek(dword_160580, 0, 0);
      write(dword_160580, &unk_1605A0, 0x40u);
      pthread_mutex_unlock(&stru_160588);
      return 0;
    }
  }
  else
  {
    strcpy(v3, "bad param\n");
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, v3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_lcd.c",
      185,
      "lcd_clear",
      9,
      107,
      80,
      v4);
    return -3;
  }
}
