int __fastcall lcd_init(const char *a1)
{
  char v3[2048]; // [sp+18h] [bp-1804h] BYREF
  char v4[4]; // [sp+818h] [bp-1004h] BYREF

  if ( dword_160584 )
    return 0;
  if ( a1 )
  {
    dword_160580 = open(a1, 2050);
    if ( dword_160580 >= 0 )
    {
      dword_160584 = 1;
      return dword_160580;
    }
    else
    {
      strcpy(v3, "open lcd failed!!!\n");
      V_LOCK();
      logfmt_raw(v4, 0x1000u, 0, v3);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_lcd.c",
        185,
        "lcd_init",
        8,
        32,
        100,
        v4);
      return -1;
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
      "lcd_init",
      8,
      26,
      100,
      v4);
    return -3;
  }
}
