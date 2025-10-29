int __fastcall dev_init_pic_for_one_chain(int a1)
{
  char v3[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( LOBYTE(g_chain_info[2 * a1 + 1]) )
  {
    if ( open_pic(LOBYTE(g_chain_info[2 * a1])) < 0 )
    {
      V_LOCK();
      logfmt_raw(
        v3,
        0x1000u,
        0,
        "chain_offset %d, chain %, open pic error!",
        total_chain,
        g_chain_info[2 * total_chain]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/platform_device_hal.c",
        157,
        "dev_init_pic_for_one_chain",
        26,
        135,
        100,
        v3);
      return -1;
    }
    else if ( pic1704_reset(g_chain_info[2 * a1]) )
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
    printf("Chain offset %d is invalid\n", a1);
    return -1;
  }
}
