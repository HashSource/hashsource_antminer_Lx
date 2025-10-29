void platform_uninit()
{
  char v0[20]; // [sp+10h] [bp-1814h] BYREF
  char v1[20]; // [sp+810h] [bp-1014h] BYREF
  int v2; // [sp+1810h] [bp-14h]
  int v3; // [sp+1814h] [bp-10h]
  int v4; // [sp+1818h] [bp-Ch]
  int i; // [sp+181Ch] [bp-8h]

  if ( platform_inited )
  {
    v4 = hal_chain_max_num();
    fpga_uninit();
    for ( i = 0; i < v4; ++i )
    {
      v3 = hal_chain_plug_addr(i);
      if ( v3 >= 0 )
      {
        gpio_unexport(v3);
        v2 = hal_chain_reset_addr(i);
        if ( v2 >= 0 )
        {
          gpio_unexport(v2);
        }
        else
        {
          snprintf(v0, 0x800u, "fail to get reset for chain %d\n", i);
          V_LOCK();
          logfmt_raw(v1, 0x1000u, 0, v0);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_common.c",
            188,
            "platform_uninit",
            15,
            120,
            80,
            v1);
        }
      }
      else
      {
        snprintf(v0, 0x800u, "fail to get socket for chain %d\n", i);
        V_LOCK();
        logfmt_raw(v1, 0x1000u, 0, v0);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/backend/device/hal/platform/cv183x/cv183x_common.c",
          188,
          "platform_uninit",
          15,
          112,
          80,
          v1);
      }
    }
    uart_uninit();
    fan_uninit();
    ui_uninit();
    gpio_uninit();
    platform_inited = 0;
  }
}
