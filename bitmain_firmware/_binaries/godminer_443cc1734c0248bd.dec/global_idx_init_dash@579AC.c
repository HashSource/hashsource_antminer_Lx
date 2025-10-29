int __fastcall global_idx_init_dash(int a1)
{
  void *v2; // r0
  void *v3; // r5
  char v5[4096]; // [sp+10h] [bp-1000h] BYREF

  v2 = calloc(0x5808u, 1u);
  *(_DWORD *)(a1 + 624) = v2;
  v3 = v2;
  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "__custom_data init %p\n", v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_dash/backend_dash.c",
    156,
    "global_idx_init_dash",
    20,
    59,
    20,
    v5);
  return 0;
}
