int __fastcall global_idx_init_dash(int a1)
{
  int v3; // [sp+1Ch] [bp+Ch] BYREF
  void *v4; // [sp+101Ch] [bp+100Ch]

  v4 = malloc(0x5808u);
  memset(v4, 0, 0x5808u);
  *(_DWORD *)(a1 + 624) = v4;
  V_LOCK();
  logfmt_raw(&v3, 0x1000u, 0, "__custom_data init %p\n", v4);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_dash/backend_dash.c",
    85,
    "global_idx_init_dash",
    20,
    59,
    20,
    &v3);
  return 0;
}
