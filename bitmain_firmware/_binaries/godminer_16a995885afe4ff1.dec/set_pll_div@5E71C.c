int __fastcall set_pll_div(int a1)
{
  void (__fastcall *v2)(int, char **); // r3
  char *v4; // [sp+10h] [bp-1004h] BYREF
  int v5; // [sp+14h] [bp-1000h]
  int v6; // [sp+18h] [bp-FFCh]
  int v7; // [sp+1Ch] [bp-FF8h]

  V_LOCK();
  logfmt_raw((char *)&v4, 0x1000u, 0, "%s...", "set_pll_div");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/backend_eth/backend_eth.c",
    169,
    "set_pll_div",
    11,
    224,
    20,
    &v4);
  v6 = 0;
  v4 = "ck_ready_ext";
  v7 = 0;
  v2 = *(void (__fastcall **)(int, char **))(a1 + 156);
  v5 = 0;
  LOBYTE(v6) = 1;
  HIWORD(v6) = 24;
  v2(a1, &v4);
  usleep(0x2710u);
  v6 = 1572865;
  v7 = 0;
  v5 = 0;
  v4 = "k_ready_ext";
  (*(void (__fastcall **)(int, char **))(a1 + 156))(a1, &v4);
  usleep(0x2710u);
  return 0;
}
