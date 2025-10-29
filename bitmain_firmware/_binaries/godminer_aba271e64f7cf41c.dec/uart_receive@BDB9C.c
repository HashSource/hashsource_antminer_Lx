ssize_t __fastcall uart_receive(int a1, void *a2, size_t a3, int a4)
{
  char v10[12]; // [sp+20h] [bp-180Ch] BYREF
  char v11[12]; // [sp+820h] [bp-100Ch] BYREF
  ssize_t v12; // [sp+1820h] [bp-Ch]
  int fd; // [sp+1824h] [bp-8h]

  v12 = 0;
  pthread_mutex_lock(&stru_160760[a1]);
  fd = sub_BD580(a1);
  if ( fd >= 0 )
  {
    v12 = read(fd, a2, a3);
    pthread_mutex_unlock(&stru_160760[a1]);
    return v12;
  }
  else
  {
    snprintf(v10, 0x800u, "failed to get fd of chain %d, ret = %d\n", a1, fd);
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, v10);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_uart.c",
      186,
      "uart_receive",
      12,
      235,
      100,
      v11,
      a4,
      a3,
      a2);
    pthread_mutex_unlock(&stru_160760[a1]);
    return -1;
  }
}
