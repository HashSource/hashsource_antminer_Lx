int __fastcall lcd_show_result(unsigned __int8 a1, int a2, unsigned int a3)
{
  char v8[2048]; // [sp+24h] [bp+14h] BYREF
  int v9; // [sp+824h] [bp+814h] BYREF
  int v10; // [sp+1824h] [bp+1814h]

  v10 = -1;
  if ( pthread_mutex_lock(&stru_47B328) )
  {
    strcpy(v8, "failed to api lock\n");
    V_LOCK();
    logfmt_raw(&v9, 0x1000u, 0, v8);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_ui.c",
      92,
      "lcd_show_result",
      15,
      470,
      100,
      &v9);
    return -4;
  }
  else
  {
    if ( dword_1EF698 < 0 )
    {
      dword_1EF698 = lcd_init(lcd_path[0]);
      lcd_clear(dword_1EF698);
    }
    if ( dword_1EF698 <= 0 )
    {
      snprintf(v8, 0x800u, "failed to init %s\n", lcd_path[0]);
      V_LOCK();
      logfmt_raw(&v9, 0x1000u, 0, v8);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_ui.c",
        92,
        "lcd_show_result",
        15,
        486,
        100,
        &v9);
      v10 = -1;
    }
    else
    {
      v10 = lcd_write(dword_1EF698, a1, a2, a3);
    }
    pthread_mutex_unlock(&stru_47B328);
    return v10;
  }
}
