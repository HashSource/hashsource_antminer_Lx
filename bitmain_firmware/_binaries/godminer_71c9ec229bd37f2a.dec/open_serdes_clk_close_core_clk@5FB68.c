int __fastcall open_serdes_clk_close_core_clk(int a1)
{
  void (__fastcall *v2)(int, _DWORD *); // r3
  _DWORD v4[2]; // [sp+10h] [bp-1004h] BYREF
  int v5; // [sp+18h] [bp-FFCh]
  int v6; // [sp+1Ch] [bp-FF8h]

  V_LOCK();
  logfmt_raw((char *)v4, 0x1000u, 0, "%s...", "open_serdes_clk_close_core_clk");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "open_serdes_clk_close_core_clk",
    30,
    217,
    20,
    v4);
  v5 = 1441792;
  v6 = 0;
  v4[1] = 0;
  v4[0] = -2147483642;
  v2 = *(void (__fastcall **)(int, _DWORD *))(a1 + 164);
  LOBYTE(v5) = 1;
  v2(a1, v4);
  usleep(0x2710u);
  return 0;
}
