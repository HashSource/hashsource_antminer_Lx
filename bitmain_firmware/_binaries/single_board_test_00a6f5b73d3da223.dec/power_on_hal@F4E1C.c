int __fastcall power_on_hal(int a1, unsigned __int16 a2, int a3)
{
  _BYTE v8[12]; // [sp+24h] [bp+14h] BYREF
  int v9; // [sp+1024h] [bp+1014h]
  int v10; // [sp+1028h] [bp+1018h]
  int i; // [sp+102Ch] [bp+101Ch]

  v10 = 0;
  i = 0;
  v9 = 2;
  chain_reset_low(g_chain_info[2 * a1]);
  usleep(0x493E0u);
  v10 = pic1704_reset(g_chain_info[2 * a1]);
  usleep(0x493E0u);
  v10 += pic1704_jump_to_app(g_chain_info[2 * a1]);
  usleep(0x493E0u);
  if ( !a3 )
    set_chain_isl_voltage(g_chain_info[2 * a1], a2);
  v10 += pic1704_enable_disable_dc_dc(g_chain_info[2 * a1], 1);
  if ( v10 == 3 )
  {
    usleep(0x493E0u);
    chain_reset_high(g_chain_info[2 * a1]);
    for ( i = 0; i < v9; ++i )
    {
      usleep(0x493E0u);
      chain_reset_low(g_chain_info[2 * a1]);
      usleep(0xF4240u);
      chain_reset_high(g_chain_info[2 * a1]);
    }
    usleep(0x493E0u);
    return 0;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, "chain %d, pic init failed, err:%d!!!", g_chain_info[2 * a1], v10);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/platform_device_hal.c",
      86,
      "power_on_hal",
      12,
      369,
      100,
      v8);
    return -1;
  }
}
