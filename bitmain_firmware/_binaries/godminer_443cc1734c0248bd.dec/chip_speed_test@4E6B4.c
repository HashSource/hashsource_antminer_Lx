int __fastcall chip_speed_test(_DWORD *a1, int a2)
{
  unsigned int v3; // r7
  int v4; // r4
  unsigned int v5; // r1
  int v6; // r3
  unsigned int v7; // r4
  int v8; // r12
  int result; // r0
  int v10; // r6
  int i; // r3
  int v12; // r1
  bool v13; // zf
  int v14; // r2
  char v16[4100]; // [sp+18h] [bp-1004h] BYREF

  if ( (int)a1[49] <= 0 )
  {
    v7 = 0;
  }
  else
  {
    v3 = 0;
    v4 = 0;
    do
    {
      V_LOCK();
      logfmt_raw(v16, 0x1000u, 0, "asic %d nonce count %d\n", v4, *(_DWORD *)(a1[72] + 4 * v4));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/update_miner_status/update_chip_status.c",
        186,
        "chip_speed_test",
        15,
        26,
        20,
        v16);
      v5 = a1[49];
      v6 = *(_DWORD *)(a1[72] + 4 * v4++);
      v3 += v6;
    }
    while ( (int)v5 > v4 );
    v7 = (v3 / v5) >> 3;
  }
  V_LOCK();
  logfmt_raw(v16, 0x1000u, 0, "avg nonce count %d\n", v7);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/miner_util/miner_monitor/update_miner_status/update_chip_status.c",
    186,
    "chip_speed_test",
    15,
    40,
    20,
    v16);
  v8 = a1[49];
  if ( v8 <= 0 )
    return 0;
  v10 = a1[75];
  result = 0;
  for ( i = 0; i < v8; ++i )
  {
    v12 = *(_DWORD *)(v10 + 4 * (i >> 5));
    v14 = v12 & (1 << (i & 0x1F));
    v13 = v14 == 0;
    if ( v14 )
      v14 = a1[72];
    else
      result = 3;
    *(_DWORD *)(a2 + 4 * i) = (v12 & (1 << (i & 0x1F))) == 0;
    if ( (v12 & (1 << (i & 0x1F))) != 0 )
      *(_DWORD *)(v14 + 4 * i) = 0;
    if ( !v13 )
      v8 = a1[49];
  }
  return result;
}
