int __fastcall power_on_hal(int a1, unsigned __int16 a2, int a3)
{
  char v8[16]; // [sp+24h] [bp-1010h] BYREF
  int v9; // [sp+1024h] [bp-10h]
  int v10; // [sp+1028h] [bp-Ch]
  int v11; // [sp+102Ch] [bp-8h]

  v11 = 0;
  v10 = 0;
  v9 = 2;
  if ( platform_is_pic_mcu_en() )
  {
    v11 += pic1704_reset(g_chain_info[2 * a1]);
    usleep(0x493E0u);
    v11 += pic1704_jump_to_app(g_chain_info[2 * a1]);
    usleep(0x493E0u);
  }
  if ( !a3 && platform_is_pic_mcu_en() )
    set_chain_isl_voltage(g_chain_info[2 * a1], a2);
  if ( !platform_is_pic_mcu_en() || (v11 += pic1704_enable_disable_dc_dc(g_chain_info[2 * a1], 1), v11 == 3) )
  {
    sleep(1u);
    return 0;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, "chain %d, pic init failed, err:%d!!!", g_chain_info[2 * a1], v11);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/device/platform_device_hal.c",
      174,
      "power_on_hal",
      12,
      460,
      100,
      v8);
    return -1;
  }
}
