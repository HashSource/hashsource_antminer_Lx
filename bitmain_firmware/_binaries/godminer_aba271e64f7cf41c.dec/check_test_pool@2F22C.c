bool check_test_pool()
{
  char v1[20]; // [sp+10h] [bp-1014h] BYREF
  int v2; // [sp+1010h] [bp-14h]
  int i; // [sp+1014h] [bp-10h]
  char v4; // [sp+101Bh] [bp-9h]
  int v5; // [sp+101Ch] [bp-8h]

  v5 = 0;
  v4 = 0;
  for ( i = 0; i < total_pools; ++i )
  {
    v2 = *(_DWORD *)(pools + 4 * i);
    V_LOCK();
    logfmt_raw(v1, 0x1000u, 0, "droa optpools=%d,%s", i, *(_DWORD *)(v2 + 12));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/god-miner.c",
      149,
      "check_test_pool",
      15,
      1773,
      40,
      v1);
    if ( strstr(*(const char **)(v2 + 12), "TEST") )
      ++v5;
  }
  V_LOCK();
  logfmt_raw(v1, 0x1000u, 0, "droa TEST count=%d", v5);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/god-miner.c",
    149,
    "check_test_pool",
    15,
    1780,
    40,
    v1);
  is_test_pool = v5 > 2;
  return v5 > 2;
}
