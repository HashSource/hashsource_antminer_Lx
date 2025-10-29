int __fastcall lcd_uninit(int a1)
{
  char v2[2048]; // [sp+1Ch] [bp+Ch] BYREF
  int v3; // [sp+81Ch] [bp+80Ch] BYREF
  int v4; // [sp+181Ch] [bp+180Ch]

  v4 = 0;
  if ( dword_47B4D8 )
  {
    if ( close(a1) )
    {
      strcpy(v2, "lcd close failed!!!\n");
      V_LOCK();
      logfmt_raw(&v3, 0x1000u, 0, v2);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_lcd.c",
        93,
        "lcd_uninit",
        10,
        147,
        100,
        &v3);
      v4 = -1;
    }
    dword_47B4D8 = 0;
  }
  return v4;
}
