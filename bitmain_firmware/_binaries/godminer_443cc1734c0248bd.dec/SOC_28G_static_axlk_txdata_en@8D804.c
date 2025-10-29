int __fastcall SOC_28G_static_axlk_txdata_en(int a1, int a2, unsigned __int8 a3)
{
  _DWORD v6[7]; // [sp+28h] [bp-1024h] BYREF
  int v7; // [sp+44h] [bp-1008h]
  char v8[4100]; // [sp+48h] [bp-1004h] BYREF

  V_LOCK();
  V_INT((int)v6, "chain", *(int *)(a1 + 140));
  logfmt_raw(
    v8,
    0x1000u,
    0,
    v7,
    v6[0],
    v6[1],
    v6[2],
    v6[3],
    v6[4],
    v6[5],
    v6[6],
    v7,
    "%s...",
    "SOC_28G_static_axlk_txdata_en");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "SOC_28G_static_axlk_txdata_en",
    29,
    7689,
    60,
    v8);
  sub_5BD68(a1, a3, 144, 0x7FFFFFFF);
  sub_5BD68(a1, a3, 145, -2147422207);
  sub_5BD68(a1, a3, 144, 0x80000000);
  sub_5BD68(a1, a3, 145, -2147422072);
  sub_5BD68(a1, a3, 144, 0x7FFFFFFF);
  sub_5BD68(a1, a3, 145, -2147422207);
  sub_5BD68(a1, a3, 144, 0x80000000);
  sub_5BD68(a1, a3, 145, -2147422047);
  sub_5BD68(a1, a3, 144, 0x7FFFFFFF);
  sub_5BD68(a1, a3, 145, -2147422207);
  sub_5BD68(a1, a3, 144, 0);
  sub_5BD68(a1, a3, 145, -2147422047);
  sub_5BD68(a1, a3, 144, 0x7FFFFFFF);
  sub_5BD68(a1, a3, 145, -2147422207);
  sub_5BD68(a1, a3, 144, 0x80000000);
  sub_5BD68(a1, a3, 145, -2147422047);
  return 0;
}
