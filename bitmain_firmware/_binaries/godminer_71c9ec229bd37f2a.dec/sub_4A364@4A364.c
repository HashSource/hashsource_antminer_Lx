int sub_4A364()
{
  char v1[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK();
  logfmt_raw(v1, 0x1000u, 0, "vbk answer's job has been retired\n");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/frontend/frontend_vbk/frontend_vbk.c",
    157,
    "nonce_pop_handler_vbk",
    21,
    569,
    80,
    v1);
  return 1;
}
