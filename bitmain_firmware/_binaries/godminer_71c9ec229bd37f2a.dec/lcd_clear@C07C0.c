int __fastcall lcd_clear(int a1)
{
  int v1; // r6
  int v2; // r1
  char v4[2048]; // [sp+10h] [bp-1800h] BYREF
  char v5[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( !dword_16E61C )
    return -2;
  if ( dword_16E620 == a1 )
  {
    if ( pthread_mutex_lock(&stru_16E624) )
    {
      strcpy(v4, "failed to lcd lock\n");
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, v4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_lcd.c",
        164,
        "lcd_clear",
        9,
        123,
        100,
        v5);
      return -4;
    }
    else
    {
      memset(&unk_16E63C, 0x20, 0x40u);
      v1 = dword_16E620;
      lseek64(dword_16E620, v2, 0, 0, 0);
      write(v1, &unk_16E63C, 0x40u);
      pthread_mutex_unlock(&stru_16E624);
      return 0;
    }
  }
  else
  {
    strcpy(v4, "bad param\n");
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_lcd.c",
      164,
      "lcd_clear",
      9,
      117,
      80,
      v5);
    return -3;
  }
}
