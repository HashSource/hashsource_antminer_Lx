int __fastcall load_32G_advance(int a1, int a2, unsigned __int8 a3)
{
  _DWORD v6[7]; // [sp+28h] [bp-1020h] BYREF
  int v7; // [sp+44h] [bp-1004h]
  char v8[4096]; // [sp+48h] [bp-1000h] BYREF

  V_LOCK();
  V_INT((int)v6, "chain", *(int *)(a1 + 140));
  logfmt_raw(v8, 0x1000u, 0, v7, v6[0], v6[1], v6[2], v6[3], v6[4], v6[5], v6[6], v7, "%s...", "load_32G_advance");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/backend_eth/backend_eth.c",
    169,
    "load_32G_advance",
    16,
    8638,
    60,
    v8);
  sub_5C8F0(a1, a3, 144, 0x7FFFFFFF);
  sub_5C8F0(a1, a3, 145, -2147450879);
  sub_5C8F0(a1, a3, 144, 0);
  sub_5C8F0(a1, a3, 145, -2147450807);
  sub_5C8F0(a1, a3, 144, 0);
  sub_5C8F0(a1, a3, 145, -2147450879);
  return 0;
}
