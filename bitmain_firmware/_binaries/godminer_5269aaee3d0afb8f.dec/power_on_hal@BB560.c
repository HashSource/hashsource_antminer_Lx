int __fastcall power_on_hal(int a1, unsigned __int16 a2, int a3)
{
  int v6; // r6
  int v7; // r6
  int v8; // r6
  _DWORD *v10; // r3
  char v11[4096]; // [sp+10h] [bp-1000h] BYREF

  chain_reset_low(g_chain_info[2 * a1]);
  usleep(0x493E0u);
  v6 = pic1704_reset(g_chain_info[2 * a1]);
  usleep(0x493E0u);
  v7 = v6 + pic1704_jump_to_app(g_chain_info[2 * a1]);
  usleep(0x493E0u);
  if ( !a3 )
    set_chain_isl_voltage(g_chain_info[2 * a1], a2);
  v8 = v7 + pic1704_enable_disable_dc_dc(g_chain_info[2 * a1], 1);
  if ( v8 == 3 )
  {
    usleep(0x493E0u);
    chain_reset_high(g_chain_info[2 * a1]);
    usleep(0x493E0u);
    chain_reset_low(g_chain_info[2 * a1]);
    usleep(0xF4240u);
    chain_reset_high(g_chain_info[2 * a1]);
    usleep(0x493E0u);
    chain_reset_low(g_chain_info[2 * a1]);
    usleep(0xF4240u);
    chain_reset_high(g_chain_info[2 * a1]);
    usleep(0x493E0u);
    return 0;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, 1312800, g_chain_info[2 * a1], v8);
    V_UNLOCK();
    LOWORD(v10) = -14756;
    HIWORD(v10) = (unsigned int)&unk_16B55C >> 16;
    zlog(
      *v10,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/platform_device_hal.c",
      157,
      "power_on_hal",
      12,
      372,
      100,
      v11);
    return -1;
  }
}
