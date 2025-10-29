int __fastcall do_32G_retry_seq_all_phy(int a1, int a2, unsigned __int8 a3)
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
    "do_32G_retry_seq_all_phy");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "do_32G_retry_seq_all_phy",
    24,
    8529,
    60,
    v8);
  sub_5BD68(a1, a3, 144, -131073);
  sub_5BD68(a1, a3, 145, -2147450879);
  sub_5BD68(a1, a3, 144, 0x20000);
  sub_5BD68(a1, a3, 145, -2147450850);
  sub_5BD68(a1, a3, 144, -536870913);
  sub_5BD68(a1, a3, 145, -2147450879);
  sub_5BD68(a1, a3, 144, 0x20000000);
  sub_5BD68(a1, a3, 145, -2147450852);
  sub_5BD68(a1, a3, 144, -131073);
  sub_5BD68(a1, a3, 145, -2147450879);
  sub_5BD68(a1, a3, 144, 0);
  sub_5BD68(a1, a3, 145, -2147450850);
  sub_5BD68(a1, a3, 144, -536870913);
  sub_5BD68(a1, a3, 145, -2147450879);
  sub_5BD68(a1, a3, 144, 0);
  sub_5BD68(a1, a3, 145, -2147450852);
  sub_5BD68(a1, a3, 144, -134217729);
  sub_5BD68(a1, a3, 145, -2147450879);
  sub_5BD68(a1, a3, 144, 0x8000000);
  sub_5BD68(a1, a3, 145, -2147450851);
  sub_5BD68(a1, a3, 144, -134217729);
  sub_5BD68(a1, a3, 145, -2147450879);
  sub_5BD68(a1, a3, 144, 0);
  sub_5BD68(a1, a3, 145, -2147450851);
  sub_5BD68(a1, a3, 144, -8388609);
  sub_5BD68(a1, a3, 145, -2147450879);
  sub_5BD68(a1, a3, 144, 0x800000);
  sub_5BD68(a1, a3, 145, -2147450807);
  sub_5BD68(a1, a3, 144, -33554433);
  sub_5BD68(a1, a3, 145, -2147450879);
  sub_5BD68(a1, a3, 144, 0);
  sub_5BD68(a1, a3, 145, -2147450803);
  sub_5BD68(a1, a3, 144, -33554433);
  sub_5BD68(a1, a3, 145, -2147450879);
  sub_5BD68(a1, a3, 144, 0x2000000);
  sub_5BD68(a1, a3, 145, -2147450803);
  sub_5BD68(a1, a3, 144, -33554433);
  sub_5BD68(a1, a3, 145, -2147450879);
  sub_5BD68(a1, a3, 144, 0);
  sub_5BD68(a1, a3, 145, -2147450803);
  sub_5BD68(a1, a3, 144, -268435457);
  sub_5BD68(a1, a3, 145, -2147450879);
  sub_5BD68(a1, a3, 144, 0x10000000);
  sub_5BD68(a1, a3, 145, -2147450807);
  sub_5BD68(a1, a3, 144, -67108865);
  sub_5BD68(a1, a3, 145, -2147450879);
  sub_5BD68(a1, a3, 144, 0);
  sub_5BD68(a1, a3, 145, -2147450803);
  sub_5BD68(a1, a3, 144, -67108865);
  sub_5BD68(a1, a3, 145, -2147450879);
  sub_5BD68(a1, a3, 144, 0x4000000);
  sub_5BD68(a1, a3, 145, -2147450803);
  sub_5BD68(a1, a3, 144, -67108865);
  sub_5BD68(a1, a3, 145, -2147450879);
  sub_5BD68(a1, a3, 144, 0);
  sub_5BD68(a1, a3, 145, -2147450803);
  sub_5BD68(a1, a3, 144, -257);
  sub_5BD68(a1, a3, 145, -2147450879);
  sub_5BD68(a1, a3, 144, 256);
  sub_5BD68(a1, a3, 145, -2147450804);
  sub_5BD68(a1, a3, 144, -3);
  sub_5BD68(a1, a3, 145, -2147450879);
  sub_5BD68(a1, a3, 144, 2);
  sub_5BD68(a1, a3, 145, -2147450800);
  sub_5BD68(a1, a3, 144, 0);
  sub_5BD68(a1, a3, 145, -2147450879);
  return 0;
}
