int __fastcall enable_rxbist_autostop(int a1, int a2, unsigned __int8 a3, int a4, unsigned __int8 a5)
{
  int v8; // r4
  int v9; // r9
  int v10; // r8
  _DWORD v12[7]; // [sp+28h] [bp-1024h] BYREF
  int v13; // [sp+44h] [bp-1008h]
  char v14[4088]; // [sp+48h] [bp-1004h] BYREF

  V_LOCK();
  V_INT((int)v12, "chain", *(int *)(a1 + 148));
  v8 = 61441;
  logfmt_raw(
    v14,
    0x1000u,
    0,
    v13,
    v12[0],
    v12[1],
    v12[2],
    v12[3],
    v12[4],
    v12[5],
    v12[6],
    v13,
    "%s...",
    "enable_rxbist_autostop");
  V_UNLOCK();
  v9 = 61457;
  v10 = 61459;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "enable_rxbist_autostop",
    22,
    9152,
    60,
    v14);
  if ( a4 != 8 )
  {
    v8 = 1;
    v9 = 17;
    v10 = 19;
  }
  sub_5F554(a1, a3, v8, -5);
  sub_5F554(a1, a3, v9, 4);
  sub_5F554(a1, a3, v8, -66060289);
  sub_5F554(a1, a3, v10, (a5 << 20) & 0x3F00000);
  sub_5F554(a1, a3, v8, 0);
  return 0;
}
