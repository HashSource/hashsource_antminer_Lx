int sub_3FC28()
{
  char v1[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK();
  logfmt_raw(v1, 0x1000u, 0, "nonce retired");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/frontend/frontend_eth/frontend_eth.c",
    172,
    "nonce_pop_handler_eth",
    21,
    349,
    80,
    v1);
  return 1;
}
