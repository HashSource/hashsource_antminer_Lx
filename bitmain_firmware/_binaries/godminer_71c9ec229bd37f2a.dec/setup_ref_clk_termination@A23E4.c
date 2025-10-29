int __fastcall setup_ref_clk_termination(int a1)
{
  _DWORD v3[7]; // [sp+28h] [bp-20h] BYREF
  int v4; // [sp+44h] [bp-4h]
  char v5[4096]; // [sp+48h] [bp+0h] BYREF

  V_LOCK();
  V_INT((int)v3, "chain", *(int *)(a1 + 148));
  logfmt_raw(
    v5,
    0x1000u,
    0,
    v4,
    v3[0],
    v3[1],
    v3[2],
    v3[3],
    v3[4],
    v3[5],
    v3[6],
    v4,
    "%s...",
    "setup_ref_clk_termination");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "setup_ref_clk_termination",
    25,
    12182,
    60,
    v5);
  sub_5DDB0(a1, 81, 256);
  usleep(0x2710u);
  sub_5DE08(a1, 1u, 81, 138);
  usleep(0x2710u);
  sub_5DE08(a1, 5u, 81, 138);
  usleep(0x2710u);
  sub_5DE08(a1, 9u, 81, 138);
  usleep(0x2710u);
  sub_5DE08(a1, 0xDu, 81, 138);
  usleep(0x2710u);
  sub_5DE08(a1, 2u, 81, 6);
  usleep(0x2710u);
  sub_5DE08(a1, 6u, 81, 6);
  usleep(0x2710u);
  sub_5DE08(a1, 0xAu, 81, 6);
  usleep(0x2710u);
  sub_5DE08(a1, 0xEu, 81, 6);
  usleep(0x2710u);
  sub_5DDB0(a1, 84, 9586980);
  usleep(0x2710u);
  sub_5DDB0(a1, 92, 9586980);
  usleep(0x2710u);
  return 0;
}
