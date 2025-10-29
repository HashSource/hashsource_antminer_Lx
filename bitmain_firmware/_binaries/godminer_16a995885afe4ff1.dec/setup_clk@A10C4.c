int __fastcall setup_clk(int a1)
{
  void (__fastcall *v2)(int, int *); // r3
  void (__fastcall *v3)(int, int *); // r3
  _DWORD v5[7]; // [sp+28h] [bp-1024h] BYREF
  int v6; // [sp+44h] [bp-1008h]
  int v7; // [sp+48h] [bp-1004h] BYREF
  int v8; // [sp+4Ch] [bp-1000h]
  int v9; // [sp+50h] [bp-FFCh]
  int v10; // [sp+54h] [bp-FF8h]

  V_LOCK();
  V_INT((int)v5, "chain", *(int *)(a1 + 140));
  logfmt_raw((char *)&v7, 0x1000u, 0, v6, v5[0], v5[1], v5[2], v5[3], v5[4], v5[5], v5[6], v6, "%s...", "setup_clk");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/backend_eth/backend_eth.c",
    169,
    "setup_clk",
    9,
    527,
    60,
    &v7);
  v9 = 0;
  v10 = 0;
  v8 = 0;
  v2 = *(void (__fastcall **)(int, int *))(a1 + 156);
  HIWORD(v9) = 32;
  v7 = 1;
  LOBYTE(v9) = 1;
  v2(a1, &v7);
  v9 = 0;
  v10 = 0;
  v8 = 0;
  v3 = *(void (__fastcall **)(int, int *))(a1 + 156);
  LOBYTE(v9) = 1;
  v7 = 0;
  HIWORD(v9) = 16;
  v3(a1, &v7);
  usleep((__useconds_t)&stru_1869C.st_value);
  v9 = 1179649;
  v10 = 0;
  v8 = 0;
  v7 = 4727297;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v7);
  usleep((__useconds_t)&stru_1869C.st_value);
  v9 = 1310721;
  v10 = 0;
  v8 = 0;
  v7 = 2105857;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v7);
  usleep((__useconds_t)&stru_1869C.st_value);
  v9 = 1048577;
  v10 = 0;
  v8 = 0;
  v7 = 7;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v7);
  usleep((__useconds_t)&stru_1869C.st_value);
  v9 = 2097153;
  v10 = 0;
  v8 = 0;
  v7 = 15;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v7);
  usleep((__useconds_t)&stru_1869C.st_value);
  v9 = 1441793;
  v10 = 0;
  v8 = 0;
  v7 = -2147483633;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v7);
  usleep((__useconds_t)&stru_1869C.st_value);
  v9 = 3211265;
  v10 = 0;
  v8 = 0;
  v7 = 0;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v7);
  usleep((__useconds_t)&stru_1869C.st_value);
  set_core_reset(a1);
  setup_ref_clk_termination(a1);
  return 0;
}
