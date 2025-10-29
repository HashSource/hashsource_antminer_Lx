int __fastcall dev_init_hal(int a1)
{
  char v4[20]; // [sp+18h] [bp-1014h] BYREF
  unsigned __int8 v5; // [sp+101Bh] [bp-11h] BYREF
  unsigned int i; // [sp+1020h] [bp-Ch]
  unsigned int hash_on_plug; // [sp+1024h] [bp-8h]

  if ( platform_init() )
  {
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, "platform init failed!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/platform_device_hal.c",
      174,
      "dev_init_hal",
      12,
      59,
      100,
      v4);
    return -1;
  }
  else
  {
    total_chain = 0;
    hash_on_plug = get_hash_on_plug();
    for ( i = 0; i <= 0xF; ++i )
    {
      if ( ((hash_on_plug >> i) & 1) != 0 )
      {
        g_chain_info[2 * total_chain] = i;
        LOBYTE(g_chain_info[2 * total_chain + 1]) = 1;
        V_LOCK();
        logfmt_raw(v4, 0x1000u, 0, "chain_offset %d, chain %d", total_chain, g_chain_info[2 * total_chain]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/backend/device/platform_device_hal.c",
          174,
          "dev_init_hal",
          12,
          69,
          60,
          v4);
        if ( platform_is_pic_mcu_en() )
        {
          if ( open_pic(i) < 0 )
          {
            V_LOCK();
            logfmt_raw(
              v4,
              0x1000u,
              0,
              "chain_offset %d, chain %d, open pic error!",
              total_chain,
              g_chain_info[2 * total_chain]);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/g"
              "odminer-origin_godminer-branch1/backend/device/platform_device_hal.c",
              174,
              "dev_init_hal",
              12,
              73,
              100,
              v4);
            return -1;
          }
          pic1704_reset(i);
          usleep(0x493E0u);
          pic1704_jump_to_app(i);
          usleep(0x493E0u);
          if ( !pic1704_get_sw_version(g_chain_info[2 * total_chain], &v5) )
          {
            V_LOCK();
            logfmt_raw(
              v4,
              0x1000u,
              0,
              "chain_offset %d, chain %d, get_sw_version error!",
              total_chain,
              g_chain_info[2 * total_chain]);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/g"
              "odminer-origin_godminer-branch1/backend/device/platform_device_hal.c",
              174,
              "dev_init_hal",
              12,
              84,
              100,
              v4);
            return -1;
          }
          V_LOCK();
          logfmt_raw(
            v4,
            0x1000u,
            0,
            "chain_offset %d, chain %d, pic firmware verion = 0x%02x",
            total_chain,
            g_chain_info[2 * total_chain],
            v5);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/backend/device/platform_device_hal.c",
            174,
            "dev_init_hal",
            12,
            90,
            60,
            v4);
        }
        ++total_chain;
      }
    }
    if ( a1 != total_chain )
    {
      set_miner_6060info_board_num_less_than_design_err(1);
      V_LOCK();
      logfmt_raw(v4, 0x1000u, 0, "phyiscal chain num = %d, total chain num = %d", a1, total_chain);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/device/platform_device_hal.c",
        174,
        "dev_init_hal",
        12,
        99,
        100,
        v4);
    }
    fpga_reset();
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, "reset fpga");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/platform_device_hal.c",
      174,
      "dev_init_hal",
      12,
      103,
      20,
      v4);
    enable_bypass_mode();
    dev_config_hal(&word_1C200);
    return 0;
  }
}
