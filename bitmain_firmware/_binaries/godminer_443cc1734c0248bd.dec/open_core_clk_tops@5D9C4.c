int __fastcall open_core_clk_tops(int a1)
{
  void (__fastcall *v2)(int, _DWORD *); // r3
  _DWORD v4[7]; // [sp+28h] [bp-1020h] BYREF
  int v5; // [sp+44h] [bp-1004h]
  _DWORD v6[2]; // [sp+48h] [bp-1000h] BYREF
  int v7; // [sp+50h] [bp-FF8h]
  int v8; // [sp+54h] [bp-FF4h]

  V_LOCK();
  V_INT((int)v4, "chain", *(int *)(a1 + 140));
  logfmt_raw(
    (char *)v6,
    0x1000u,
    0,
    v5,
    v4[0],
    v4[1],
    v4[2],
    v4[3],
    v4[4],
    v4[5],
    v4[6],
    v5,
    "%s...",
    "open_core_clk_tops");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "open_core_clk_tops",
    18,
    210,
    60,
    v6);
  v7 = 1441792;
  v8 = 0;
  v6[1] = 0;
  v6[0] = -2147483641;
  v2 = *(void (__fastcall **)(int, _DWORD *))(a1 + 156);
  LOBYTE(v7) = 1;
  v2(a1, v6);
  usleep(0x2710u);
  return 0;
}
