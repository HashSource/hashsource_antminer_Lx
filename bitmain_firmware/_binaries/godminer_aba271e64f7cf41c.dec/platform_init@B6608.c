int platform_init()
{
  char v2[24]; // [sp+14h] [bp-1818h] BYREF
  char v3[24]; // [sp+814h] [bp-1018h] BYREF
  char v4; // [sp+1817h] [bp-15h] BYREF
  int v5; // [sp+1818h] [bp-14h]
  int i; // [sp+181Ch] [bp-10h]
  int v7; // [sp+1820h] [bp-Ch]
  int v8; // [sp+1824h] [bp-8h]

  if ( platform_inited )
    return 0;
  if ( fpga_init() )
  {
    strcpy(v2, "fpga init failed\n");
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_common.c",
      188,
      "platform_init",
      13,
      45,
      100,
      v3);
    return -1;
  }
  else if ( gpio_init() )
  {
    strcpy(v2, "gpio init failed\n");
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_common.c",
      188,
      "platform_init",
      13,
      50,
      100,
      v3);
    return -2;
  }
  else
  {
    memset(dword_1603F8, 0, sizeof(dword_1603F8));
    v5 = hal_chain_max_num();
    for ( i = 0; i < v5; ++i )
    {
      v7 = hal_chain_plug_addr(i);
      if ( v7 >= 0 )
      {
        gpio_export(v7);
        gpio_direction(v7, 0);
        v8 = hal_chain_reset_addr(i);
        if ( v8 >= 0 )
        {
          gpio_export(v8);
          gpio_direction(v8, 1);
          v4 = 0;
          gpio_read(v7, &v4);
          if ( v4 == 1 )
          {
            dword_1603F8[18 * dword_1603F8[0] + 1] = i;
            dword_1603F8[18 * dword_1603F8[0] + 3 + dword_1603F8[18 * dword_1603F8[0] + 2]++] = i;
            ++dword_1603F8[0];
          }
          else
          {
            snprintf(v2, 0x800u, "no board pluged in socket %d", v7);
            V_LOCK();
            logfmt_raw(v3, 0x1000u, 0, v2);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/g"
              "odminer-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_common.c",
              188,
              "platform_init",
              13,
              89,
              80,
              v3);
          }
        }
        else
        {
          snprintf(v2, 0x800u, "fail to get reset for chain %d\n", i);
          V_LOCK();
          logfmt_raw(v3, 0x1000u, 0, v2);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_common.c",
            188,
            "platform_init",
            13,
            72,
            80,
            v3);
        }
      }
      else
      {
        snprintf(v2, 0x800u, "fail to get socket for chain %d\n", i);
        V_LOCK();
        logfmt_raw(v3, 0x1000u, 0, v2);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_common.c",
          188,
          "platform_init",
          13,
          63,
          80,
          v3);
      }
    }
    sub_B61C4(dword_1603F8);
    platform_inited = 1;
    fan_init();
    uart_init();
    return 0;
  }
}
