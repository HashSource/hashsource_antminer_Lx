int __fastcall lcd_uninit(int a1)
{
  int result; // r0
  char v2[2048]; // [sp+10h] [bp-1804h] BYREF
  char v3[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( !dword_16C5EC )
    return 0;
  result = close(a1);
  if ( result )
  {
    strcpy(v2, "lcd close failed!!!\n");
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/backend/device/hal/platform/7007/7007_lcd.c",
      179,
      "lcd_uninit",
      10,
      147,
      100,
      v3);
    result = -1;
  }
  dword_16C5EC = 0;
  return result;
}
