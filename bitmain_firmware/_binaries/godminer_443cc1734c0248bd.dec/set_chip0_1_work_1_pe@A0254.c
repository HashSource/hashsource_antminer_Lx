int __fastcall set_chip0_1_work_1_pe(int a1)
{
  _DWORD v3[7]; // [sp+28h] [bp-20h] BYREF
  int v4; // [sp+44h] [bp-4h]
  char v5[4096]; // [sp+48h] [bp+0h] BYREF

  V_LOCK();
  V_INT((int)v3, "chain", *(int *)(a1 + 140));
  logfmt_raw(v5, 0x1000u, 0, v4, v3[0], v3[1], v3[2], v3[3], v3[4], v3[5], v3[6], v4, "%s...", "set_chip0_1_work_1_pe");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "set_chip0_1_work_1_pe",
    21,
    12000,
    60,
    v5);
  sub_5D4E8(a1, 0);
  usleep(0x2710u);
  sub_5D4E8(a1, 1);
  usleep(0x2710u);
  return 0;
}
