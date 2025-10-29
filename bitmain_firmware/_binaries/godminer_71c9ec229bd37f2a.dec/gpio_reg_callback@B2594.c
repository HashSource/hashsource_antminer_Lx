int __fastcall gpio_reg_callback(int a1, int a2)
{
  int v4; // r2
  int v5; // [sp+14h] [bp-1808h] BYREF
  char s[2040]; // [sp+18h] [bp-1804h] BYREF
  _DWORD v7[1025]; // [sp+818h] [bp-1004h] BYREF

  v5 = a1;
  if ( !a2 )
  {
    strcpy(s, "bad param\n");
    V_LOCK();
    logfmt_raw((char *)v7, 0x1000u, 0, s);
    V_UNLOCK();
    v4 = 147;
    goto LABEL_9;
  }
  if ( pthread_mutex_lock(&stru_16E0FC) )
  {
    strcpy(s, "fail to lock gpio ctrl mutex\n");
    V_LOCK();
    logfmt_raw((char *)v7, 0x1000u, 0, s);
    V_UNLOCK();
    v4 = 152;
LABEL_9:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_gpio.c",
      165,
      "gpio_reg_callback",
      17,
      v4,
      100,
      v7);
    return -1;
  }
  if ( exists_c_map((int *)dword_16E114, (int)&v5) )
  {
    snprintf(s, 0x800u, "port %d already exist in callback map \n", v5);
    V_LOCK();
    logfmt_raw((char *)v7, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_gpio.c",
      165,
      "gpio_reg_callback",
      17,
      165,
      20,
      v7);
  }
  else
  {
    snprintf(s, 0x800u, "add %d to callback map\n", v5);
    V_LOCK();
    logfmt_raw((char *)v7, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_gpio.c",
      165,
      "gpio_reg_callback",
      17,
      158,
      20,
      v7);
    v7[0] = a2;
    v7[1] = -1;
    insert_c_map((int *)dword_16E114, &v5, 4u, v7, 8u);
  }
  pthread_mutex_unlock(&stru_16E0FC);
  return 0;
}
