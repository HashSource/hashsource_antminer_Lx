int __fastcall dev_init_pic_for_one_chain(int a1)
{
  _BYTE v4[4096]; // [sp+18h] [bp+8h] BYREF

  if ( LOBYTE(g_chain_info[2 * a1 + 1]) != 1 )
  {
    printf("Chain offset %d is invalid\n", a1);
    return -1;
  }
  else if ( open_pic(g_chain_info[2 * a1]) >= 0 )
  {
    if ( pic1704_reset(g_chain_info[2 * a1]) )
    {
      usleep(0x493E0u);
      if ( pic1704_jump_to_app(g_chain_info[2 * a1]) )
      {
        usleep(0x493E0u);
        return 0;
      }
      else
      {
        printf("chain_offset %d, chain %, pic jump to app error!", total_chain, g_chain_info[2 * total_chain]);
        return -1;
      }
    }
    else
    {
      printf("chain_offset %d, chain %, reset pic error!", total_chain, g_chain_info[2 * total_chain]);
      return -1;
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, "chain_offset %d, chain %, open pic error!", total_chain, g_chain_info[2 * total_chain]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/platform_device_hal.c",
      86,
      "dev_init_pic_for_one_chain",
      26,
      132,
      100,
      v4);
    return -1;
  }
}
