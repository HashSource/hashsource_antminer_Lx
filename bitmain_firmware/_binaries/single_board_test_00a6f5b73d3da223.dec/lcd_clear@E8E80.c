int __fastcall lcd_clear(int a1)
{
  char v3[2048]; // [sp+18h] [bp+8h] BYREF
  _BYTE v4[4096]; // [sp+818h] [bp+808h] BYREF

  if ( !dword_47B4D8 )
    return -2;
  if ( a1 == dword_47B4D4 )
  {
    if ( pthread_mutex_lock(&stru_47B4DC) )
    {
      strcpy(v3, "failed to lcd lock\n");
      V_LOCK();
      logfmt_raw(v4, 0x1000u, 0, v3);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_lcd.c",
        93,
        "lcd_clear",
        9,
        123,
        100,
        v4);
      return -4;
    }
    else
    {
      memset(&unk_47B4F4, 32, 0x40u);
      lseek(dword_47B4D4, 0, 0);
      write(dword_47B4D4, &unk_47B4F4, 0x40u);
      pthread_mutex_unlock(&stru_47B4DC);
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
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_lcd.c",
      93,
      "lcd_clear",
      9,
      117,
      80,
      v4);
    return -3;
  }
}
