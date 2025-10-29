char *print_summary()
{
  double v0; // d0
  double v1; // d6
  double v2; // d7
  double v3; // d8
  bool v4; // zf
  char *v5; // r3
  double v6; // d11
  int v7; // r8
  double v8; // r0
  double v9; // d10
  double v10; // d9
  char *result; // r0
  _DWORD *v12; // r12
  int v13; // r0
  int v14; // r3
  int v15; // r6
  int v16; // r8
  int v17; // r5
  __int64 *v18; // r4
  __int64 *v19; // r5
  int v20; // r9
  __int64 v21; // t1
  __int64 v22; // r4
  int v23; // r1
  double v24; // d8
  double v25; // r0
  int v26; // r4
  _QWORD *v27; // r8
  __int64 v28; // r4
  int v29; // r1
  double v30; // d8
  double v31; // r0
  int v32; // [sp+4h] [bp-2068h]
  int v33; // [sp+18h] [bp-2054h]
  int v34; // [sp+18h] [bp-2054h]
  int v35; // [sp+1Ch] [bp-2050h]
  char *v36; // [sp+1Ch] [bp-2050h]
  int v37; // [sp+20h] [bp-204Ch]
  int v38; // [sp+20h] [bp-204Ch]
  char *v39; // [sp+24h] [bp-2048h]
  int i; // [sp+30h] [bp-203Ch]
  int v41; // [sp+3Ch] [bp-2030h] BYREF
  int v42; // [sp+40h] [bp-202Ch] BYREF
  float v43; // [sp+54h] [bp-2018h]
  int v44; // [sp+60h] [bp-200Ch]
  int v45; // [sp+64h] [bp-2008h]
  char v46[4056]; // [sp+68h] [bp-2004h] BYREF
  char v47[4100]; // [sp+1068h] [bp-1004h] BYREF

  read_system_status_from_monitor((int)&v42);
  *(float *)&v2 = v43;
  v4 = opt_algo == 3;
  if ( opt_algo != 3 )
    v4 = opt_algo == 0;
  LOWORD(v5) = (unsigned __int16)&dword_164EB0;
  if ( !v4 )
    v1 = 1000.0;
  HIWORD(v5) = (unsigned int)&dword_164EB0 >> 16;
  if ( v4 )
    v3 = v43;
  else
    v2 = v43;
  v39 = v5;
  if ( !v4 )
    v3 = v2 / v1 / v1 / v1;
  if ( v5[32] )
  {
    sub_263BC();
    v6 = v0;
    v35 = (int)v0 / 3600;
    v7 = (int)v0 % 60;
    v33 = (int)v0 % 3600 / 60;
  }
  else
  {
    v6 = 0.0;
    v7 = 0;
    v35 = 0;
    v33 = 0;
  }
  LODWORD(v8) = sub_12D3E4(total_accepted);
  v9 = v8 / v6 * 60.0;
  v10 = (total_diff_accepted + total_diff_rejected + total_diff_stale) / v6 * 60.0;
  V_LOCK();
  logfmt_raw(v47, 0x1000u, 0, "Summary of runtime statistics:");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/api_new.c",
    145,
    "print_summary",
    13,
    1757,
    80,
    v47);
  V_LOCK();
  logfmt_raw(v47, 0x1000u, 0, "Runtime: %d hrs : %d mins : %d secs", v35, v33, v7);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/api_new.c",
    145,
    "print_summary",
    13,
    1758,
    80,
    v47);
  V_LOCK();
  logfmt_raw(v47, 0x1000u, 0, "Average hashrate: %.1f Ghash/s", v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/api_new.c",
    145,
    "print_summary",
    13,
    1759,
    80,
    v47);
  V_LOCK();
  logfmt_raw(v47, 0x1000u, 0, "Total got job from pools: %lld", total_getworks, dword_16C784);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/api_new.c",
    145,
    "print_summary",
    13,
    1760,
    80,
    v47);
  V_LOCK();
  logfmt_raw(v47, 0x1000u, 0, "Total generated local work  %d", local_work);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/api_new.c",
    145,
    "print_summary",
    13,
    1761,
    80,
    v47);
  V_LOCK();
  logfmt_raw(v47, 0x1000u, 0, "Solved blocks: %d", *((_DWORD *)v39 + 9));
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/api_new.c",
    145,
    "print_summary",
    13,
    1762,
    80,
    v47);
  V_LOCK();
  logfmt_raw(v47, 0x1000u, 0, "Share submissions: %lld", total_accepted + total_rejected);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/api_new.c",
    145,
    "print_summary",
    13,
    1763,
    80,
    v47);
  V_LOCK();
  logfmt_raw(v47, 0x1000u, 0, "Accepted shares: %lld", total_accepted);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/api_new.c",
    145,
    "print_summary",
    13,
    1764,
    80,
    v47);
  V_LOCK();
  logfmt_raw(v47, 0x1000u, 0, "Rejected shares: %lld", total_rejected);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/api_new.c",
    145,
    "print_summary",
    13,
    1765,
    80,
    v47);
  V_LOCK();
  logfmt_raw(v47, 0x1000u, 0, "Accepted difficulty shares: %1.f", total_diff_accepted);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/api_new.c",
    145,
    "print_summary",
    13,
    1766,
    80,
    v47);
  V_LOCK();
  logfmt_raw(v47, 0x1000u, 0, "Rejected difficulty shares: %1.f", total_diff_rejected);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/api_new.c",
    145,
    "print_summary",
    13,
    1767,
    80,
    v47);
  V_LOCK();
  logfmt_raw(v47, 0x1000u, 0, "Total Hardware errors %llu", v44, v45);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/api_new.c",
    145,
    "print_summary",
    13,
    1768,
    80,
    v47);
  if ( total_accepted || total_rejected )
  {
    V_LOCK();
    v22 = total_rejected;
    LODWORD(v24) = sub_12D3E4(100 * total_rejected);
    HIDWORD(v24) = v23;
    LODWORD(v25) = sub_12D3E4(v22 + total_accepted);
    logfmt_raw(v47, 0x1000u, 0, "Reject ratio: %.1f%%", v24 / v25);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/api_new.c",
      145,
      "print_summary",
      13,
      1771,
      80,
      v47);
  }
  V_LOCK();
  logfmt_raw(v47, 0x1000u, 0, "Utility (accepted shares / min): %.2f/min", v9);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/api_new.c",
    145,
    "print_summary",
    13,
    1773,
    80,
    v47);
  V_LOCK();
  logfmt_raw(v47, 0x1000u, 0, "Work Utility (diff1 shares solved / min): %.2f/min", v10);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/api_new.c",
    145,
    "print_summary",
    13,
    1774,
    80,
    v47);
  V_LOCK();
  logfmt_raw(v47, 0x1000u, 0, "Stale submissions discarded due to new blocks: %lld", total_stale, dword_16C74C);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/api_new.c",
    145,
    "print_summary",
    13,
    1775,
    80,
    v47);
  V_LOCK();
  logfmt_raw(v47, 0x1000u, 0, "Unable to get work from server occasions: %d", total_go);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/api_new.c",
    145,
    "print_summary",
    13,
    1776,
    80,
    v47);
  V_LOCK();
  logfmt_raw(v47, 0x1000u, 0, "Submitting work remotely delay occasions: %d", total_ro);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/api_new.c",
    145,
    "print_summary",
    13,
    1777,
    80,
    v47);
  V_LOCK();
  logfmt_raw(v47, 0x1000u, 0, "New blocks detected on network: %d", new_blocks);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/api_new.c",
    145,
    "print_summary",
    13,
    1778,
    80,
    v47);
  if ( total_pools > 0 )
  {
    V_LOCK();
    logfmt_raw(v47, 0x1000u, 0, "Summary of pool statistics:");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/api_new.c",
      145,
      "print_summary",
      13,
      1782,
      80,
      v47);
    if ( total_pools > 0 )
    {
      v38 = 0;
      do
      {
        v26 = *(_DWORD *)(pools + 4 * v38);
        V_LOCK();
        v27 = (_QWORD *)(v26 + 2096);
        logfmt_raw(v47, 0x1000u, 0, "Pool: %s", *(_DWORD *)(v26 + 8));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/bui"
          "ld/godminer-origin_master/api_new.c",
          145,
          "print_summary",
          13,
          1787,
          80,
          v47);
        V_LOCK();
        logfmt_raw(v47, 0x1000u, 0, "User: %s", *(_DWORD *)(v26 + 12));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/bui"
          "ld/godminer-origin_master/api_new.c",
          145,
          "print_summary",
          13,
          1788,
          80,
          v47);
        V_LOCK();
        logfmt_raw(v47, 0x1000u, 0, "Share submissions: %lld", *(_QWORD *)(v26 + 2096) + *(_QWORD *)(v26 + 2104));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/bui"
          "ld/godminer-origin_master/api_new.c",
          145,
          "print_summary",
          13,
          1789,
          80,
          v47);
        V_LOCK();
        logfmt_raw(v47, 0x1000u, 0, "Accepted shares: %lld", *(_DWORD *)(v26 + 2096), *(_DWORD *)(v26 + 2100));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/bui"
          "ld/godminer-origin_master/api_new.c",
          145,
          "print_summary",
          13,
          1790,
          80,
          v47);
        V_LOCK();
        logfmt_raw(v47, 0x1000u, 0, "Rejected shares: %lld", *(_DWORD *)(v26 + 2104), *(_DWORD *)(v26 + 2108));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/bui"
          "ld/godminer-origin_master/api_new.c",
          145,
          "print_summary",
          13,
          1791,
          80,
          v47);
        V_LOCK();
        logfmt_raw(
          v47,
          0x1000u,
          0,
          "Accepted difficulty shares: %1.f",
          *(_DWORD *)(v26 + 2128),
          *(_DWORD *)(v26 + 2132));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/bui"
          "ld/godminer-origin_master/api_new.c",
          145,
          "print_summary",
          13,
          1792,
          80,
          v47);
        V_LOCK();
        logfmt_raw(
          v47,
          0x1000u,
          0,
          "Rejected difficulty shares: %1.f",
          *(_DWORD *)(v26 + 2136),
          *(_DWORD *)(v26 + 2140));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/bui"
          "ld/godminer-origin_master/api_new.c",
          145,
          "print_summary",
          13,
          1793,
          80,
          v47);
        if ( *(_QWORD *)(v26 + 2096) || *(_QWORD *)(v26 + 2104) )
        {
          V_LOCK();
          v28 = *(_QWORD *)(v26 + 2104);
          LODWORD(v30) = sub_12D3E4(100 * v28);
          HIDWORD(v30) = v29;
          LODWORD(v31) = sub_12D3E4(v28 + *v27);
          logfmt_raw(v47, 0x1000u, 0, "Reject ratio: %.1f%%", v30 / v31);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/b"
            "uild/godminer-origin_master/api_new.c",
            145,
            "print_summary",
            13,
            1796,
            80,
            v47);
        }
        ++v38;
      }
      while ( total_pools > v38 );
    }
  }
  V_LOCK();
  logfmt_raw(v47, 0x1000u, 0, "Summary of per device statistics:");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/api_new.c",
    145,
    "print_summary",
    13,
    1801,
    80,
    v47);
  v41 = 0;
  result = (char *)get_all_created_runtime(&v41);
  if ( v41 > 0 )
  {
    v36 = result - 4;
    for ( i = 0; i < v41; ++i )
    {
      v12 = (_DWORD *)*((_DWORD *)v36 + 1);
      v36 += 4;
      v13 = snprintf(
              v46,
              0x1000u,
              "chain %d device %d wc %llu nc %llu detail: ",
              v12[35],
              v12[34],
              v32,
              v12[62],
              v12[63],
              v12[64],
              v12[65]);
      v14 = *(_DWORD *)v36;
      v15 = v13;
      v37 = *(_DWORD *)(*(_DWORD *)v36 + 196);
      if ( v37 > 0 )
      {
        v16 = 0;
        v34 = 0;
        while ( 1 )
        {
          v17 = *(_DWORD *)(v14 + 264);
          v18 = (__int64 *)(v17 + v16);
          v16 += 48;
          v19 = (__int64 *)(v17 + v16);
          ++v34;
          v20 = snprintf(&v46[v15], 4096 - v15, "%d:") + v15;
          do
          {
            v21 = *v18++;
            v20 += snprintf(&v46[v20], 4096 - v20, " %llu", v21);
          }
          while ( v19 != v18 );
          v15 = v20 + 2;
          snprintf(&v46[v20], 4096 - v20, " /");
          if ( v34 == v37 )
            break;
          v14 = *(_DWORD *)v36;
        }
      }
      V_LOCK();
      logfmt_raw(v47, 0x1000u, 0, "%s", v46);
      V_UNLOCK();
      result = (char *)zlog(
                         g_zc,
                         "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/"
                         "tmp/release/build/godminer-origin_master/api_new.c",
                         145,
                         "print_summary",
                         13,
                         1818,
                         80,
                         v47);
    }
  }
  return result;
}
