char *print_summary()
{
  double v0; // d0
  double v1; // d6
  double v2; // d7
  double v3; // d8
  bool v4; // zf
  double v5; // r0
  double v6; // d10
  double v7; // d9
  char *result; // r0
  _DWORD *v9; // r12
  int v10; // r0
  int v11; // r3
  int v12; // r6
  int v13; // r8
  int v14; // r5
  __int64 *v15; // r4
  __int64 *v16; // r5
  int v17; // r9
  __int64 v18; // t1
  __int64 v19; // r4
  int v20; // r1
  double v21; // d8
  double v22; // r0
  int v23; // r8
  unsigned int *v24; // r4
  unsigned int v25; // r5
  unsigned int v26; // r6
  int v27; // r1
  double v28; // d8
  double v29; // r0
  int v30; // [sp+4h] [bp-2068h]
  int v31; // [sp+18h] [bp-2054h]
  char *v32; // [sp+1Ch] [bp-2050h]
  int v33; // [sp+1Ch] [bp-2050h]
  int v34; // [sp+20h] [bp-204Ch]
  int i; // [sp+2Ch] [bp-2040h]
  int v36; // [sp+3Ch] [bp-2030h] BYREF
  int v37; // [sp+40h] [bp-202Ch] BYREF
  float v38; // [sp+54h] [bp-2018h]
  int v39; // [sp+60h] [bp-200Ch]
  int v40; // [sp+64h] [bp-2008h]
  char v41[4056]; // [sp+68h] [bp-2004h] BYREF
  char v42[4100]; // [sp+1068h] [bp-1004h] BYREF

  read_system_status_from_monitor((int)&v37);
  *(float *)&v2 = v38;
  v4 = opt_algo == 3;
  if ( opt_algo != 3 )
    v4 = opt_algo == 0;
  if ( v4 )
  {
    v3 = v38;
  }
  else
  {
    v1 = 1000.0;
    v2 = v38;
  }
  if ( !v4 )
    v3 = v2 / v1 / v1 / v1;
  get_miner_elapsed_time();
  LODWORD(v5) = sub_12C58C(total_accepted);
  v6 = v5 / v0 * 60.0;
  v7 = (total_diff_accepted + total_diff_rejected + total_diff_stale) / v0 * 60.0;
  V_LOCK();
  logfmt_raw(v42, 0x1000u, 0, "Summary of runtime statistics:");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1681,
    80,
    v42);
  V_LOCK();
  logfmt_raw(v42, 0x1000u, 0, "Runtime: %d hrs : %d mins : %d secs", (int)v0 / 3600, (int)v0 % 3600 / 60, (int)v0 % 60);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1682,
    80,
    v42);
  V_LOCK();
  logfmt_raw(v42, 0x1000u, 0, "Average hashrate: %.1f Ghash/s", v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1683,
    80,
    v42);
  V_LOCK();
  logfmt_raw(v42, 0x1000u, 0, "Total got job from pools: %lld", total_getworks, dword_16B67C);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1684,
    80,
    v42);
  V_LOCK();
  logfmt_raw(v42, 0x1000u, 0, "Total generated local work  %d", local_work);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1685,
    80,
    v42);
  V_LOCK();
  logfmt_raw(v42, 0x1000u, 0, "Solved blocks: %d", dword_163EC0);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1686,
    80,
    v42);
  V_LOCK();
  logfmt_raw(v42, 0x1000u, 0, "Share submissions: %lld", total_accepted + total_rejected);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1687,
    80,
    v42);
  V_LOCK();
  logfmt_raw(v42, 0x1000u, 0, "Accepted shares: %lld", total_accepted);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1688,
    80,
    v42);
  V_LOCK();
  logfmt_raw(v42, 0x1000u, 0, "Rejected shares: %lld", total_rejected);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1689,
    80,
    v42);
  V_LOCK();
  logfmt_raw(v42, 0x1000u, 0, "Accepted difficulty shares: %1.f", total_diff_accepted);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1690,
    80,
    v42);
  V_LOCK();
  logfmt_raw(v42, 0x1000u, 0, "Rejected difficulty shares: %1.f", total_diff_rejected);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1691,
    80,
    v42);
  V_LOCK();
  logfmt_raw(v42, 0x1000u, 0, "Total Hardware errors %llu", v39, v40);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1692,
    80,
    v42);
  if ( total_accepted || total_rejected )
  {
    V_LOCK();
    v19 = total_rejected;
    LODWORD(v21) = sub_12C58C(100 * total_rejected);
    HIDWORD(v21) = v20;
    LODWORD(v22) = sub_12C58C(v19 + total_accepted);
    logfmt_raw(v42, 0x1000u, 0, "Reject ratio: %.1f%%", v21 / v22);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/api_new.c",
      130,
      "print_summary",
      13,
      1695,
      80,
      v42);
  }
  V_LOCK();
  logfmt_raw(v42, 0x1000u, 0, "Utility (accepted shares / min): %.2f/min", v6);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1697,
    80,
    v42);
  V_LOCK();
  logfmt_raw(v42, 0x1000u, 0, "Work Utility (diff1 shares solved / min): %.2f/min", v7);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1698,
    80,
    v42);
  V_LOCK();
  logfmt_raw(v42, 0x1000u, 0, "Stale submissions discarded due to new blocks: %lld", total_stale, dword_16B644);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1699,
    80,
    v42);
  V_LOCK();
  logfmt_raw(v42, 0x1000u, 0, "Unable to get work from server occasions: %d", total_go);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1700,
    80,
    v42);
  V_LOCK();
  logfmt_raw(v42, 0x1000u, 0, "Submitting work remotely delay occasions: %d", total_ro);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1701,
    80,
    v42);
  V_LOCK();
  logfmt_raw(v42, 0x1000u, 0, "New blocks detected on network: %d", new_blocks);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1702,
    80,
    v42);
  if ( total_pools > 0 )
  {
    V_LOCK();
    logfmt_raw(v42, 0x1000u, 0, "Summary of pool statistics:");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/api_new.c",
      130,
      "print_summary",
      13,
      1706,
      80,
      v42);
    if ( total_pools > 0 )
    {
      v33 = 0;
      do
      {
        v23 = *(_DWORD *)(pools + 4 * v33);
        V_LOCK();
        v24 = (unsigned int *)(v23 + 2096);
        logfmt_raw(v42, 0x1000u, 0, "Pool: %s", *(_DWORD *)(v23 + 8));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/api_new.c",
          130,
          "print_summary",
          13,
          1711,
          80,
          v42);
        V_LOCK();
        logfmt_raw(v42, 0x1000u, 0, "User: %s", *(_DWORD *)(v23 + 12));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/api_new.c",
          130,
          "print_summary",
          13,
          1712,
          80,
          v42);
        V_LOCK();
        logfmt_raw(v42, 0x1000u, 0, "Share submissions: %lld", *(_QWORD *)(v23 + 2088) + *(_QWORD *)(v23 + 2096));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/api_new.c",
          130,
          "print_summary",
          13,
          1713,
          80,
          v42);
        V_LOCK();
        logfmt_raw(v42, 0x1000u, 0, "Accepted shares: %lld", *(_DWORD *)(v23 + 2088), *(_DWORD *)(v23 + 2092));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/api_new.c",
          130,
          "print_summary",
          13,
          1714,
          80,
          v42);
        V_LOCK();
        logfmt_raw(v42, 0x1000u, 0, "Rejected shares: %lld", *(_DWORD *)(v23 + 2096), *(_DWORD *)(v23 + 2100));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/api_new.c",
          130,
          "print_summary",
          13,
          1715,
          80,
          v42);
        V_LOCK();
        v23 += 2128;
        logfmt_raw(v42, 0x1000u, 0, "Accepted difficulty shares: %1.f", *(_DWORD *)(v23 - 8), *(_DWORD *)(v23 - 4));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/api_new.c",
          130,
          "print_summary",
          13,
          1716,
          80,
          v42);
        V_LOCK();
        logfmt_raw(v42, 0x1000u, 0, "Rejected difficulty shares: %1.f", *(_DWORD *)v23, *(_DWORD *)(v23 + 4));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/api_new.c",
          130,
          "print_summary",
          13,
          1717,
          80,
          v42);
        if ( *((_QWORD *)v24 - 1) || *(_QWORD *)v24 )
        {
          V_LOCK();
          v25 = *v24;
          v26 = v24[1];
          LODWORD(v28) = sub_12C58C(100LL * *(_QWORD *)v24);
          HIDWORD(v28) = v27;
          LODWORD(v29) = sub_12C58C(__PAIR64__(v26, v25) + *((_QWORD *)v24 - 1));
          logfmt_raw(v42, 0x1000u, 0, "Reject ratio: %.1f%%", v28 / v29);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/api_new.c",
            130,
            "print_summary",
            13,
            1720,
            80,
            v42);
        }
        ++v33;
      }
      while ( total_pools > v33 );
    }
  }
  V_LOCK();
  logfmt_raw(v42, 0x1000u, 0, "Summary of per device statistics:");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1725,
    80,
    v42);
  v36 = 0;
  result = (char *)get_all_created_runtime(&v36);
  if ( v36 > 0 )
  {
    v32 = result - 4;
    for ( i = 0; i < v36; ++i )
    {
      v9 = (_DWORD *)*((_DWORD *)v32 + 1);
      v32 += 4;
      v10 = snprintf(
              v41,
              0x1000u,
              "chain %d device %d wc %llu nc %llu detail: ",
              v9[35],
              v9[34],
              v30,
              v9[62],
              v9[63],
              v9[64],
              v9[65]);
      v11 = *(_DWORD *)v32;
      v12 = v10;
      v34 = *(_DWORD *)(*(_DWORD *)v32 + 196);
      if ( v34 > 0 )
      {
        v13 = 0;
        v31 = 0;
        while ( 1 )
        {
          v14 = *(_DWORD *)(v11 + 264);
          v15 = (__int64 *)(v14 + v13);
          v13 += 48;
          v16 = (__int64 *)(v14 + v13);
          ++v31;
          v17 = snprintf(&v41[v12], 4096 - v12, "%d:") + v12;
          do
          {
            v18 = *v15++;
            v17 += snprintf(&v41[v17], 4096 - v17, " %llu", v18);
          }
          while ( v16 != v15 );
          v12 = v17 + 2;
          snprintf(&v41[v17], 4096 - v17, " /");
          if ( v31 == v34 )
            break;
          v11 = *(_DWORD *)v32;
        }
      }
      V_LOCK();
      logfmt_raw(v42, 0x1000u, 0, "%s", v41);
      V_UNLOCK();
      result = (char *)zlog(
                         g_zc,
                         "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/bui"
                         "ld/godminer-origin_master/api_new.c",
                         130,
                         "print_summary",
                         13,
                         1742,
                         80,
                         v42);
    }
  }
  return result;
}
