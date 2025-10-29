int __fastcall uart_flush(int a1)
{
  char v4[8]; // [sp+1Ch] [bp-1808h] BYREF
  char v5[8]; // [sp+81Ch] [bp-1008h] BYREF
  int fd; // [sp+181Ch] [bp-8h]

  pthread_mutex_lock(&stru_1605E0[a1]);
  fd = sub_BD580(a1);
  if ( fd >= 0 )
  {
    tcflush(fd, 2);
    pthread_mutex_unlock(&stru_1605E0[a1]);
    return 0;
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
      "uart_flush",
      10,
      491,
      100,
      v5);
    pthread_mutex_unlock(&stru_1605E0[a1]);
    return -1;
  }
}
