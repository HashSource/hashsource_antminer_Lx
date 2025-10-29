int __fastcall dev_init_hal(int a1)
{
  int v1; // r4
  unsigned int hash_on_plug; // r9
  int v3; // r3
  int v5; // r0
  int v6; // r3
  unsigned __int8 v8; // [sp+1Fh] [bp-1005h] BYREF
  char v9[4100]; // [sp+20h] [bp-1004h] BYREF

  v1 = platform_init();
  if ( v1 )
  {
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, "platform init failed!\n");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/platform_device_hal.c",
      157,
      "dev_init_hal",
      12,
      52,
      100,
      v9);
    return -1;
  }
  total_chain = 0;
  hash_on_plug = get_hash_on_plug();
  while ( 1 )
  {
    while ( ((hash_on_plug >> v1) & 1) == 0 )
    {
      if ( ++v1 == 16 )
        goto LABEL_10;
    }
    v3 = total_chain;
    g_chain_info[2 * total_chain] = v1;
    LOBYTE(g_chain_info[2 * v3 + 1]) = 1;
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, "chain_offset %d, chain %d", total_chain, g_chain_info[2 * total_chain]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/platform_device_hal.c",
      157,
      "dev_init_hal",
      12,
      62,
      60,
      v9);
    if ( open_pic((unsigned __int8)v1) < 0 )
    {
      V_LOCK();
      logfmt_raw(
        v9,
        0x1000u,
        0,
        "chain_offset %d, chain %d, open pic error!",
        total_chain,
        g_chain_info[2 * total_chain]);
      V_UNLOCK();
      v5 = g_zc;
      v6 = 65;
      goto LABEL_12;
    }
    pic1704_reset(v1);
    usleep(0x493E0u);
    pic1704_jump_to_app(v1);
    usleep(0x493E0u);
    if ( a1 != 7 )
      break;
LABEL_9:
    ++v1;
    ++total_chain;
    if ( v1 == 16 )
    {
LABEL_10:
      fpga_reset();
      V_LOCK();
      logfmt_raw(v9, 0x1000u, 0, "reset fpga");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/platform_device_hal.c",
        157,
        "dev_init_hal",
        12,
        92,
        60,
        v9);
      enable_bypass_mode();
      dev_config_hal((int)"ing_nonce_len_kda");
      return 0;
    }
  }
  if ( pic1704_get_sw_version(g_chain_info[2 * total_chain], &v8) )
  {
    V_LOCK();
    logfmt_raw(
      v9,
      0x1000u,
      0,
      "chain_offset %d, chain %d, pic firmware verion = 0x%02x",
      total_chain,
      g_chain_info[2 * total_chain],
      v8);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/platform_device_hal.c",
      157,
      "dev_init_hal",
      12,
      83,
      60,
      v9);
    goto LABEL_9;
  }
  V_LOCK();
  logfmt_raw(
    v9,
    0x1000u,
    0,
    "chain_offset %d, chain %d, get_sw_version error!",
    total_chain,
    g_chain_info[2 * total_chain]);
  V_UNLOCK();
  v5 = g_zc;
  v6 = 77;
LABEL_12:
  zlog(
    v5,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/platform_device_hal.c",
    157,
    "dev_init_hal",
    12,
    v6,
    100,
    v9);
  return -1;
}
