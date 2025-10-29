int __fastcall uart_get_readable_byte_num(int a1)
{
  char v4[2048]; // [sp+18h] [bp-180Ch] BYREF
  char v5[12]; // [sp+818h] [bp-100Ch] BYREF
  int v6; // [sp+1818h] [bp-Ch] BYREF
  int fd; // [sp+181Ch] [bp-8h]

  v6 = 0;
  pthread_mutex_lock(&stru_160760[a1]);
  fd = sub_BD580(a1);
  if ( fd >= 0 )
  {
    if ( ioctl(fd, 0x541Bu, &v6) )
    {
      strcpy(v4, "ioctl to FIONREAD failed\n");
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, v4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_uart.c",
        186,
        "uart_get_readable_byte_num",
        26,
        547,
        80,
        v5);
      v6 = 0;
    }
    pthread_mutex_unlock(&stru_160760[a1]);
    return v6;
  }
  else
  {
    snprintf(v4, 0x800u, "failed to get fd of chain %d, ret = %d\n", a1, fd);
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_uart.c",
      186,
      "uart_get_readable_byte_num",
      26,
      541,
      100,
      v5);
    pthread_mutex_unlock(&stru_160760[a1]);
    return -1;
  }
}
