int dev_init_hal_pcba()
{
  _BYTE v2[8]; // [sp+10h] [bp+0h] BYREF
  unsigned int hash_on_plug; // [sp+1010h] [bp+1000h]
  unsigned int i; // [sp+1014h] [bp+1004h]

  if ( platform_init() )
  {
    V_LOCK();
    logfmt_raw(v2, 0x1000u, 0, "platform init failed!\n");
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/platform_device_hal.c",
      86,
      "dev_init_hal_pcba",
      17,
      102,
      100,
      v2);
    return -1;
  }
  else
  {
    total_chain = 0;
    hash_on_plug = get_hash_on_plug();
    printf("plug_on_status: %x\n", hash_on_plug);
    for ( i = 0; i <= 0xF; ++i )
    {
      if ( ((hash_on_plug >> i) & 1) != 0 )
      {
        g_chain_info[2 * total_chain] = i;
        LOBYTE(g_chain_info[2 * total_chain + 1]) = 1;
        printf("chain_offset %d, chain %d\n", total_chain, g_chain_info[2 * total_chain]);
        ++total_chain;
      }
    }
    enable_bypass_mode();
    dev_config_hal(115200);
    return 0;
  }
}
