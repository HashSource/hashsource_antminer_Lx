int __fastcall lcd_write(int a1, unsigned __int8 a2, int a3, unsigned int a4)
{
  size_t v5; // r3
  int v6; // r2
  unsigned int v8; // [sp+10h] [bp+0h]
  unsigned __int8 v10; // [sp+1Bh] [bp+Bh]
  char v11[2048]; // [sp+20h] [bp+10h] BYREF
  _BYTE v12[8]; // [sp+820h] [bp+810h] BYREF
  size_t v13; // [sp+1820h] [bp+1810h]
  int v14; // [sp+1824h] [bp+1814h]

  v8 = a4;
  v10 = a2;
  v14 = 0;
  if ( !dword_47B4D8 )
    return -2;
  if ( a1 == dword_47B4D4 && a2 <= 3u && a4 <= 0x40 )
  {
    if ( pthread_mutex_lock(&stru_47B4DC) )
    {
      strcpy(v11, "failed to lcd lock\n");
      V_LOCK();
      logfmt_raw(v12, 0x1000u, 0, v11);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_lcd.c",
        93,
        "lcd_write",
        9,
        75,
        100,
        v12);
      return -4;
    }
    else
    {
      do
      {
        v5 = v8;
        if ( v8 >= 0x10 )
          v5 = 16;
        v13 = v5;
        v6 = (char)v10++;
        memcpy((char *)&unk_47B4F4 + 16 * v6, (const void *)(a3 + v14), v5);
        v14 += v13;
        v8 -= v13;
      }
      while ( v8 && v10 <= 3u );
      write(dword_47B4D4, &unk_47B4F4, 0x40u);
      pthread_mutex_unlock(&stru_47B4DC);
      return 0;
    }
  }
  else
  {
    strcpy(v11, "bad param\n");
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, v11);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_lcd.c",
      93,
      "lcd_write",
      9,
      69,
      80,
      v12);
    return -3;
  }
}
