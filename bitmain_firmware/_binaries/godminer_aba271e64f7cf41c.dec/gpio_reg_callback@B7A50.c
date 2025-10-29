int __fastcall gpio_reg_callback(int a1, int a2)
{
  int v5; // [sp+14h] [bp-1810h] BYREF
  char v6[2048]; // [sp+18h] [bp-180Ch] BYREF
  char v7[12]; // [sp+818h] [bp-100Ch] BYREF
  _DWORD v8[2]; // [sp+1818h] [bp-Ch] BYREF

  v5 = a1;
  if ( a2 )
  {
    if ( pthread_mutex_lock(&stru_160540) )
    {
      strcpy(v6, "fail to lock gpio ctrl mutex");
      V_LOCK();
      logfmt_raw(v7, 0x1000u, 0, v6);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_gpio.c",
        186,
        "gpio_reg_callback",
        17,
        143,
        100,
        v7);
      return -1;
    }
    else
    {
      if ( exists_c_map((int *)dword_160558, (int)&v5) )
      {
        snprintf(v6, 0x800u, "port %d already exist in callback map ", v5);
        V_LOCK();
        logfmt_raw(v7, 0x1000u, 0, v6);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_gpio.c",
          186,
          "gpio_reg_callback",
          17,
          155,
          20,
          v7);
      }
      else
      {
        snprintf(v6, 0x800u, "add %d to callback map", v5);
        V_LOCK();
        logfmt_raw(v7, 0x1000u, 0, v6);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_gpio.c",
          186,
          "gpio_reg_callback",
          17,
          149,
          20,
          v7);
        v8[0] = a2;
        v8[1] = -1;
        insert_c_map((int *)dword_160558, &v5, 4u, v8, 8u);
      }
      pthread_mutex_unlock(&stru_160540);
      return 0;
    }
  }
  else
  {
    strcpy(v6, "bad param");
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, v6);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_gpio.c",
      186,
      "gpio_reg_callback",
      17,
      138,
      100,
      v7);
    return -1;
  }
}
