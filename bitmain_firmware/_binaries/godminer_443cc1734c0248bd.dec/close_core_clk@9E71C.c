int __fastcall close_core_clk(int a1)
{
  char v3[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "%s...", "close_core_clk");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "close_core_clk",
    14,
    11606,
    20,
    v3);
  sub_5BD10(a1, 15, 0);
  usleep(0x2710u);
  return 0;
}
