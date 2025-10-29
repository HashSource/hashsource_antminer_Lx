ssize_t __fastcall uart_send(int a1, int a2, unsigned int a3)
{
  char v8[20]; // [sp+20h] [bp-1814h] BYREF
  char v9[20]; // [sp+820h] [bp-1014h] BYREF
  ssize_t v10; // [sp+1820h] [bp-14h]
  int fd; // [sp+1824h] [bp-10h]
  unsigned int v12; // [sp+1828h] [bp-Ch]
  int v13; // [sp+182Ch] [bp-8h]

  v10 = 0;
  v12 = 0;
  v13 = 0;
  pthread_mutex_lock(&stru_1605E0[a1]);
  fd = sub_BD580(a1);
  if ( fd >= 0 )
  {
    v13 = 0;
    flock(fd, 2);
    while ( a3 > v12 && v13 <= 29 )
    {
      v10 = write(fd, (const void *)(a2 + v12), a3 - v12);
      if ( v10 < 0 )
      {
        snprintf(v8, 0x800u, "write %d bytes failed, ret = %d on chain %d\n", a3, v10, a1);
        V_LOCK();
        logfmt_raw(v9, 0x1000u, 0, v8);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_uart.c",
          186,
          "uart_send",
          9,
          192,
          100,
          v9);
        pthread_mutex_unlock(&stru_1605E0[a1]);
        return v10;
      }
      v12 += v10;
      if ( a3 == v12 )
        break;
      usleep((__useconds_t)"time");
      ++v13;
    }
    flock(fd, 8);
    pthread_mutex_unlock(&stru_1605E0[a1]);
    if ( a3 != v12 )
    {
      snprintf(v8, 0x800u, "write %d bytes failed, ret = %d on chain %d\n", a3, v12, a1);
      V_LOCK();
      logfmt_raw(v9, 0x1000u, 0, v8);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_uart.c",
        186,
        "uart_send",
        9,
        208,
        100,
        v9);
    }
    return v12;
  }
  else
  {
    snprintf(v8, 0x800u, "failed to get fd of chain %d, ret = %d\n", a1, fd);
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, v8);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_uart.c",
      186,
      "uart_send",
      9,
      175,
      100,
      v9);
    pthread_mutex_unlock(&stru_1605E0[a1]);
    return -1;
  }
}
