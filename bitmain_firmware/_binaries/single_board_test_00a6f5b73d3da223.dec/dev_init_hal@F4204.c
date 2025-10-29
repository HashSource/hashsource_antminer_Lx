int __fastcall dev_init_hal(int a1)
{
  _BYTE v4[16]; // [sp+18h] [bp+8h] BYREF
  unsigned __int8 v5; // [sp+101Bh] [bp+100Bh] BYREF
  unsigned int hash_on_plug; // [sp+1020h] [bp+1010h]
  unsigned int i; // [sp+1024h] [bp+1014h]

  if ( platform_init() )
  {
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, "platform init failed!\n");
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/platform_device_hal.c",
      86,
      "dev_init_hal",
      12,
      52,
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
          "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/platform_device_hal.c",
          86,
          "dev_init_hal",
          12,
          62,
          60,
          v4);
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
            "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/platform_device_hal.c",
            86,
            "dev_init_hal",
            12,
            65,
            100,
            v4);
          return -1;
        }
        pic1704_reset(i);
        usleep(0x493E0u);
        pic1704_jump_to_app(i);
        usleep(0x493E0u);
        if ( a1 != 7 )
        {
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
              "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/platform_device_hal.c",
              86,
              "dev_init_hal",
              12,
              77,
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
            "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/platform_device_hal.c",
            86,
            "dev_init_hal",
            12,
            83,
            60,
            v4);
        }
        ++total_chain;
      }
    }
    enable_bypass_mode();
    dev_config_hal(115200);
    return 0;
  }
}
