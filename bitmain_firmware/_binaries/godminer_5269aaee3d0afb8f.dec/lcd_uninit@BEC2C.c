int __fastcall lcd_uninit(int a1)
{
  int result; // r0
  _DWORD *v2; // r3
  char v3[2048]; // [sp+10h] [bp-1804h] BYREF
  char v4[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( !dword_16C5EC )
    return 0;
  result = close(a1);
  if ( result )
  {
    strcpy(v3, "lcd close failed!!!\n");
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, v3);
    V_UNLOCK();
    LOWORD(v2) = -14756;
    HIWORD(v2) = (unsigned int)&unk_16B55C >> 16;
    zlog(
      *v2,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_lcd.c",
      164,
      "lcd_uninit",
      10,
      147,
      100,
      v4);
    result = -1;
  }
  dword_16C5EC = 0;
  return result;
}
