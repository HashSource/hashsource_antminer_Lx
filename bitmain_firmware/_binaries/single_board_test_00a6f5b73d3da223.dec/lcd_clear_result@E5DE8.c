int lcd_clear_result()
{
  char v1[2048]; // [sp+10h] [bp+0h] BYREF
  _BYTE v2[4096]; // [sp+810h] [bp+800h] BYREF

  if ( pthread_mutex_lock(&stru_47B328) )
  {
    strcpy(v1, "failed to api lock\n");
    V_LOCK();
    logfmt_raw(v2, 0x1000u, 0, v1);
    V_UNLOCK();
    return zlog(
             g_zc,
             "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/platform/7007/7007_ui.c",
             92,
             "lcd_clear_result",
             16,
             501,
             100,
             v2);
  }
  else
  {
    if ( dword_1EF698 > 0 )
      lcd_clear(dword_1EF698);
    return pthread_mutex_unlock(&stru_47B328);
  }
}
