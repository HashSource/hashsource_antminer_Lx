int __fastcall enable_rxbist_autostop_one_lane(
        int a1,
        int a2,
        unsigned __int8 a3,
        unsigned __int16 a4,
        unsigned __int8 a5)
{
  _DWORD v9[7]; // [sp+28h] [bp-1020h] BYREF
  int v10; // [sp+44h] [bp-1004h]
  char v11[4088]; // [sp+48h] [bp-1000h] BYREF

  V_LOCK();
  a4 <<= 12;
  V_INT((int)v9, "chain", *(int *)(a1 + 148));
  logfmt_raw(
    v11,
    0x1000u,
    0,
    v10,
    v9[0],
    v9[1],
    v9[2],
    v9[3],
    v9[4],
    v9[5],
    v9[6],
    v10,
    "%s...",
    "enable_rxbist_autostop_one_lane");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "enable_rxbist_autostop_one_lane",
    31,
    9169,
    60,
    v11);
  sub_5F554(a1, a3, a4 | 1, -5);
  sub_5F554(a1, a3, a4 & 0xF000 | 0x11, 4);
  sub_5F554(a1, a3, a4 | 1, -66060289);
  sub_5F554(a1, a3, a4 & 0xF000 | 0x13, (a5 << 20) & 0x3F00000);
  sub_5F554(a1, a3, a4 | 1, 0);
  return 0;
}
