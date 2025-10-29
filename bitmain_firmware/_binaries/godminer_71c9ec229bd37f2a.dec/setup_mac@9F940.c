int __fastcall setup_mac(int a1)
{
  char v3[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "%s...", "setup_mac");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "setup_mac",
    9,
    11457,
    20,
    v3);
  sub_5DDB0(a1, 159, -1);
  usleep(0x2710u);
  return 0;
}
