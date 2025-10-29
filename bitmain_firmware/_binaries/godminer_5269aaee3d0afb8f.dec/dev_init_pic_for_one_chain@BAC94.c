int __fastcall dev_init_pic_for_one_chain(int a1)
{
  _DWORD *v3; // r3
  _DWORD *v4; // r3
  _DWORD *v5; // r2
  _DWORD *v6; // r3
  char v7[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( LOBYTE(g_chain_info[2 * a1 + 1]) )
  {
    if ( open_pic(LOBYTE(g_chain_info[2 * a1])) < 0 )
    {
      V_LOCK();
      LOWORD(v5) = -14904;
      HIWORD(v5) = (unsigned int)&unk_16B4C8 >> 16;
      logfmt_raw(v7, 0x1000u, 0, 1312168, *v5, g_chain_info[2 * *v5]);
      V_UNLOCK();
      LOWORD(v6) = -14756;
      HIWORD(v6) = (unsigned int)&unk_16B55C >> 16;
      zlog(
        *v6,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/platform_device_hal.c",
        157,
        "dev_init_pic_for_one_chain",
        26,
        135,
        100,
        v7);
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
        LOWORD(v4) = -14904;
        HIWORD(v4) = (unsigned int)&unk_16B4C8 >> 16;
        printf("chain_offset %d, chain %, pic jump to app error!", *v4, g_chain_info[2 * *v4]);
        return -1;
      }
    }
    else
    {
      LOWORD(v3) = -14904;
      HIWORD(v3) = (unsigned int)&unk_16B4C8 >> 16;
      printf("chain_offset %d, chain %, reset pic error!", *v3, g_chain_info[2 * *v3]);
      return -1;
    }
  }
  else
  {
    printf("Chain offset %d is invalid\n", a1);
    return -1;
  }
}
