int __fastcall config_rxifrx_sigdet_ovr_one_lane(int a1, int a2, unsigned __int8 a3, __int16 a4)
{
  __int16 v7; // r4
  int v8; // r5
  _DWORD v10[7]; // [sp+28h] [bp-1024h] BYREF
  int v11; // [sp+44h] [bp-1008h]
  char v12[4100]; // [sp+48h] [bp-1004h] BYREF

  V_LOCK();
  V_INT((int)v10, "chain", *(int *)(a1 + 148));
  v7 = a4 << 12;
  v8 = (unsigned __int16)(a4 << 12) | 1;
  logfmt_raw(
    v12,
    0x1000u,
    0,
    v11,
    v10[0],
    v10[1],
    v10[2],
    v10[3],
    v10[4],
    v10[5],
    v10[6],
    v11,
    "%s...",
    "config_rxifrx_sigdet_ovr_one_lane");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "config_rxifrx_sigdet_ovr_one_lane",
    33,
    9140,
    60,
    v12);
  sub_5F554(a1, a3, v8, -134217729);
  sub_5F554(a1, a3, v7 & 0xF000 | 0x99, 0x8000000);
  sub_5F554(a1, a3, v8, 0x7FFFFFFF);
  sub_5F554(a1, a3, v7 & 0xF000 | 0x7F, 0x80000000);
  sub_5F554(a1, a3, v8, 0);
  return 0;
}
