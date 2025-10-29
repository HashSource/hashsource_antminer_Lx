int __fastcall config_rxifrx_sigdet_ovr(int a1, int a2, unsigned __int8 a3, int a4)
{
  int v7; // r4
  int v8; // r8
  int v9; // r7
  _DWORD v11[7]; // [sp+28h] [bp-1020h] BYREF
  int v12; // [sp+44h] [bp-1004h]
  char v13[4096]; // [sp+48h] [bp-1000h] BYREF

  V_LOCK();
  V_INT((int)v11, "chain", *(int *)(a1 + 140));
  v7 = 61441;
  logfmt_raw(
    v13,
    0x1000u,
    0,
    v12,
    v11[0],
    v11[1],
    v11[2],
    v11[3],
    v11[4],
    v11[5],
    v11[6],
    v12,
    "%s...",
    "config_rxifrx_sigdet_ovr");
  V_UNLOCK();
  v8 = 61593;
  v9 = 61567;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/backend_eth/backend_eth.c",
    169,
    "config_rxifrx_sigdet_ovr",
    0x18u,
    9124,
    60,
    v13);
  if ( a4 != 8 )
  {
    v7 = 1;
    v8 = 153;
    v9 = 127;
  }
  sub_5E03C(a1, a3, v7, -134217729);
  sub_5E03C(a1, a3, v8, 0x8000000);
  sub_5E03C(a1, a3, v7, 0x7FFFFFFF);
  sub_5E03C(a1, a3, v9, 0x80000000);
  sub_5E03C(a1, a3, v7, 0);
  return 0;
}
