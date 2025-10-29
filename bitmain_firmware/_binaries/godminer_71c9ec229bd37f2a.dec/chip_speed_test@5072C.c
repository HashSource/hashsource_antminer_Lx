int __fastcall chip_speed_test(_DWORD *a1, int a2)
{
  unsigned int v3; // r7
  int v4; // r4
  unsigned int v5; // r1
  int v6; // r3
  unsigned int v7; // r7
  int v8; // r3
  int v9; // r12
  int result; // r0
  int v11; // r6
  int i; // r3
  int v13; // r1
  bool v14; // zf
  int v15; // r2
  char v17[4100]; // [sp+18h] [bp-1004h] BYREF

  if ( (int)a1[51] <= 0 )
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
      logfmt_raw(v17, 0x1000u, 0, "asic %d nonce count %d\n", v4, *(_DWORD *)(a1[74] + 4 * v4));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/update_miner_status/update_chip_status.c",
        186,
        "chip_speed_test",
        15,
        27,
        20,
        v17);
      v5 = a1[51];
      v6 = *(_DWORD *)(a1[74] + 4 * v4++);
      v3 += v6;
    }
    while ( (int)v5 > v4 );
    v7 = (v3 / v5) >> 3;
  }
  v8 = dword_168890;
  if ( dword_168890 < v7 )
    v8 = v7;
  dword_168890 = v8;
  V_LOCK();
  logfmt_raw(v17, 0x1000u, 0, "avg nonce count %d, max avg nonce count %d\n", v7, dword_168890);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/miner_util/miner_monitor/update_miner_status/update_chip_status.c",
    186,
    "chip_speed_test",
    15,
    42,
    20,
    v17);
  v9 = a1[51];
  if ( v9 <= 0 )
    return 0;
  v11 = a1[77];
  result = 0;
  for ( i = 0; i < v9; ++i )
  {
    v13 = *(_DWORD *)(v11 + 4 * (i >> 5));
    v15 = v13 & (1 << (i & 0x1F));
    v14 = v15 == 0;
    if ( v15 )
      v15 = a1[74];
    else
      result = 3;
    *(_DWORD *)(a2 + 4 * i) = (v13 & (1 << (i & 0x1F))) == 0;
    if ( (v13 & (1 << (i & 0x1F))) != 0 )
      *(_DWORD *)(v15 + 4 * i) = 0;
    if ( !v14 )
      v9 = a1[51];
  }
  return result;
}
