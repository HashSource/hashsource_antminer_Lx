int __fastcall get_timeout_count(int a1)
{
  int v2; // r4
  char v4[4100]; // [sp+10h] [bp+0h] BYREF

  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, "%s...", "get_timeout_count");
  V_UNLOCK();
  v2 = 23;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "get_timeout_count",
    17,
    272,
    0x14u,
    v4);
  do
  {
    sub_5E074(a1, 255, v2++, 0);
    usleep(0x2710u);
  }
  while ( v2 != 29 );
  return 0;
}
