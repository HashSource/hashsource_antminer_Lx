int __fastcall lcd_uninit(int a1)
{
  int result; // r0
  char v2[2048]; // [sp+10h] [bp-1804h] BYREF
  char v3[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( !dword_16E61C )
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
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_lcd.c",
      164,
      "lcd_uninit",
      10,
      147,
      100,
      v3);
    result = -1;
  }
  dword_16E61C = 0;
  return result;
}
