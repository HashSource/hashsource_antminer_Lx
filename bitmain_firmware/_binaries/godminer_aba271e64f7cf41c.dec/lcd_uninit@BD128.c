int __fastcall lcd_uninit(int a1)
{
  char v2[2048]; // [sp+1Ch] [bp-1808h] BYREF
  char v3[8]; // [sp+81Ch] [bp-1008h] BYREF
  int v4; // [sp+181Ch] [bp-8h]

  v4 = 0;
  if ( dword_160584 )
  {
    if ( close(a1) )
    {
      strcpy(v2, "lcd close failed!!!\n");
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, v2);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_lcd.c",
        185,
        "lcd_uninit",
        10,
        135,
        100,
        v3);
      v4 = -1;
    }
    dword_160584 = 0;
  }
  return v4;
}
