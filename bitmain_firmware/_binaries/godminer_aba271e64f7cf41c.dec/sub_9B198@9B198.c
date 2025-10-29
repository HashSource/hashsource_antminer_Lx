int __fastcall sub_9B198(unsigned int a1, int a2)
{
  char v6[2048]; // [sp+18h] [bp-180Ch] BYREF
  char v7[12]; // [sp+818h] [bp-100Ch] BYREF
  int v8; // [sp+1818h] [bp-Ch]
  int v9; // [sp+181Ch] [bp-8h]

  v8 = -1;
  v9 = sub_9A5FC(a1);
  if ( v9 )
  {
    snprintf(v6, 0x800u, "ui type = %d, port = %d, status = %d\n", a1, v9, a2);
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, v6);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_ui.c",
      184,
      "gpio_ctrl_ui",
      12,
      271,
      20,
      v7);
    if ( pthread_mutex_lock(&stru_15F9AC) )
    {
      strcpy(v6, "failed to api lock\n");
      V_LOCK();
      logfmt_raw(v7, 0x1000u, 0, v6);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_ui.c",
        184,
        "gpio_ctrl_ui",
        12,
        274,
        100,
        v7);
      return -1;
    }
    else
    {
      if ( a2 == 1 )
      {
        sub_9AC3C(v9, (int *)dword_15F9C4);
        v8 = gpio_write(v9, 0);
      }
      else if ( a2 )
      {
        if ( a2 == 2 )
        {
          sub_9AD70(v9, 200, (int *)dword_15F9C4);
        }
        else
        {
          strcpy(v6, "unsuported led status\n");
          V_LOCK();
          logfmt_raw(v7, 0x1000u, 0, v6);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_ui.c",
            184,
            "gpio_ctrl_ui",
            12,
            291,
            100,
            v7);
          v8 = -2;
        }
      }
      else
      {
        sub_9AC3C(v9, (int *)dword_15F9C4);
        v8 = gpio_write(v9, 1);
      }
      pthread_mutex_unlock(&stru_15F9AC);
      return v8;
    }
  }
  else
  {
    strcpy(v6, "unsuported gpio port\n");
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, v6);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_ui.c",
      184,
      "gpio_ctrl_ui",
      12,
      268,
      100,
      v7);
    return -1;
  }
}
