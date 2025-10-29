int __fastcall gpio_unreg_callback(int a1, int a2)
{
  int v3; // r2
  int v4; // [sp+14h] [bp-1808h] BYREF
  char s[2040]; // [sp+18h] [bp-1804h] BYREF
  char v6[4100]; // [sp+818h] [bp-1004h] BYREF

  v4 = a1;
  if ( !a2 )
  {
    strcpy(s, "bad param\n");
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, s);
    V_UNLOCK();
    v3 = 183;
    goto LABEL_9;
  }
  if ( pthread_mutex_lock(&stru_16C0D0) )
  {
    strcpy(s, "fail to lock gpio ctrl mutex\n");
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, s);
    V_UNLOCK();
    v3 = 189;
LABEL_9:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/backend/device/hal/platform/7007/7007_gpio.c",
      180,
      "gpio_unreg_callback",
      19,
      v3,
      100,
      v6);
    return -1;
  }
  if ( exists_c_map((int *)dword_16C0E8, (int)&v4) == (int *)1 )
  {
    snprintf(s, 0x800u, "remove %d from callback list\n", v4);
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/backend/device/hal/platform/7007/7007_gpio.c",
      180,
      "gpio_unreg_callback",
      19,
      195,
      20,
      v6);
    remove_c_map((int *)dword_16C0E8, (int)&v4);
  }
  else
  {
    strcpy(s, "callback function not registered before\n");
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/backend/device/hal/platform/7007/7007_gpio.c",
      180,
      "gpio_unreg_callback",
      19,
      200,
      80,
      v6);
  }
  pthread_mutex_unlock(&stru_16C0D0);
  return 0;
}
