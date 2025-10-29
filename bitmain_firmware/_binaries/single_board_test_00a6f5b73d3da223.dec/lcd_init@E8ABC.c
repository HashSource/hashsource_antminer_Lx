int __fastcall lcd_init(const char *a1)
{
  char v3[2048]; // [sp+18h] [bp+8h] BYREF
  _BYTE v4[4096]; // [sp+818h] [bp+808h] BYREF

  if ( dword_47B4D8 )
    return 0;
  if ( a1 )
  {
    dword_47B4D4 = open(a1, 2050);
    if ( dword_47B4D4 >= 0 )
    {
      dword_47B4D8 = 1;
      return dword_47B4D4;
    }
    else
    {
      strcpy(v3, "open lcd failed!!!\n");
      V_LOCK();
      logfmt_raw(v4, 0x1000u, 0, v3);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_lcd.c",
        93,
        "lcd_init",
        8,
        41,
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
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_lcd.c",
      93,
      "lcd_init",
      8,
      35,
      100,
      v4);
    return -3;
  }
}
