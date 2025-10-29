_DWORD *print_summary()
{
  double v0; // d0
  double v1; // r0
  int v2; // r1
  double v3; // d8
  double v4; // r0
  int v5; // r1
  double v6; // d8
  double v7; // r0
  _DWORD *result; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  char v12[40]; // [sp+1Ch] [bp-20A8h] BYREF
  char v13[40]; // [sp+101Ch] [bp-10A8h] BYREF
  int v14; // [sp+201Ch] [bp-A8h] BYREF
  char v15[24]; // [sp+2020h] [bp-A4h] BYREF
  float v16; // [sp+2038h] [bp-8Ch]
  int v17; // [sp+2050h] [bp-74h]
  int v18; // [sp+2054h] [bp-70h]
  int v19; // [sp+205Ch] [bp-68h]
  int v20; // [sp+2060h] [bp-64h]
  _DWORD *v21; // [sp+2064h] [bp-60h]
  int v22; // [sp+2068h] [bp-5Ch]
  int j; // [sp+206Ch] [bp-58h]
  int k; // [sp+2070h] [bp-54h]
  int m; // [sp+2074h] [bp-50h]
  double v26; // [sp+2078h] [bp-4Ch]
  double v27; // [sp+2080h] [bp-44h]
  __int64 v28; // [sp+2088h] [bp-3Ch]
  double v29; // [sp+2090h] [bp-34h]
  int v30; // [sp+209Ch] [bp-28h]
  double v31; // [sp+20A0h] [bp-24h]
  int i; // [sp+20A8h] [bp-1Ch]
  int v33; // [sp+20ACh] [bp-18h]

  read_system_status_from_monitor((int)v15);
  v26 = v16 / 1000.0 / 1000.0;
  get_miner_elapsed_time();
  v27 = v0;
  LODWORD(v28) = (int)v0 / 3600;
  HIDWORD(v28) = (int)v0 % 3600 / 60;
  v30 = (int)v0 % 60;
  LODWORD(v1) = sub_CCAE4(*(__int64 *)&total_accepted);
  v29 = v1 / v27 * 60.0;
  v31 = (total_diff_accepted + total_diff_rejected + total_diff_stale) / v27 * 60.0;
  V_LOCK();
  logfmt_raw(v12, 0x1000u, 0, "Summary of runtime statistics:");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/api_new.c",
    147,
    "print_summary",
    13,
    2206,
    80,
    v12);
  V_LOCK();
  logfmt_raw(v12, 0x1000u, 0, "Runtime: %d hrs : %d mins : %d secs", v28, v30);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/api_new.c",
    147,
    "print_summary",
    13,
    2207,
    80,
    v12);
  V_LOCK();
  logfmt_raw(v12, 0x1000u, 0, "Average hashrate: %.1f Mhash/s", v26);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/api_new.c",
    147,
    "print_summary",
    13,
    2208,
    80,
    v12);
  V_LOCK();
  logfmt_raw(v12, 0x1000u, 0, "Total got job from pools: %lld", total_getworks);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/api_new.c",
    147,
    "print_summary",
    13,
    2209,
    80,
    v12);
  V_LOCK();
  logfmt_raw(v12, 0x1000u, 0, "Total generated local work  %d", local_work);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/api_new.c",
    147,
    "print_summary",
    13,
    2210,
    80,
    v12);
  V_LOCK();
  logfmt_raw(v12, 0x1000u, 0, "Solved blocks: %d", dword_1512A0);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/api_new.c",
    147,
    "print_summary",
    13,
    2211,
    80,
    v12);
  V_LOCK();
  logfmt_raw(v12, 0x1000u, 0, "Share submissions: %lld", *(_QWORD *)&total_rejected + *(_QWORD *)&total_accepted);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/api_new.c",
    147,
    "print_summary",
    13,
    2212,
    80,
    v12);
  V_LOCK();
  logfmt_raw(v12, 0x1000u, 0, "Accepted shares: %lld", total_accepted);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/api_new.c",
    147,
    "print_summary",
    13,
    2213,
    80,
    v12);
  V_LOCK();
  logfmt_raw(v12, 0x1000u, 0, "Rejected shares: %lld", total_rejected);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/api_new.c",
    147,
    "print_summary",
    13,
    2214,
    80,
    v12);
  V_LOCK();
  logfmt_raw(v12, 0x1000u, 0, "Accepted difficulty shares: %1.f", total_diff_accepted);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/api_new.c",
    147,
    "print_summary",
    13,
    2215,
    80,
    v12);
  V_LOCK();
  logfmt_raw(v12, 0x1000u, 0, "Rejected difficulty shares: %1.f", total_diff_rejected);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/api_new.c",
    147,
    "print_summary",
    13,
    2216,
    80,
    v12);
  V_LOCK();
  logfmt_raw(v12, 0x1000u, 0, "Total Hardware errors %llu", v17, v18);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/api_new.c",
    147,
    "print_summary",
    13,
    2217,
    80,
    v12);
  if ( *(_QWORD *)&total_accepted || *(_QWORD *)&total_rejected )
  {
    V_LOCK();
    LODWORD(v3) = sub_CCAE4(
                    3LL * *(_QWORD *)&total_rejected
                  + vshld_n_s64(3LL * *(_QWORD *)&total_rejected, 5u)
                  + *(_QWORD *)&total_rejected);
    HIDWORD(v3) = v2;
    LODWORD(v4) = sub_CCAE4(*(_QWORD *)&total_rejected + *(_QWORD *)&total_accepted);
    logfmt_raw(v12, 0x1000u, 0, "Reject ratio: %.1f%%", v3 / v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/api_new.c",
      147,
      "print_summary",
      13,
      2220,
      80,
      v12);
  }
  V_LOCK();
  logfmt_raw(v12, 0x1000u, 0, "Utility (accepted shares / min): %.2f/min", v29);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/api_new.c",
    147,
    "print_summary",
    13,
    2222,
    80,
    v12);
  V_LOCK();
  logfmt_raw(v12, 0x1000u, 0, "Work Utility (diff1 shares solved / min): %.2f/min", v31);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/api_new.c",
    147,
    "print_summary",
    13,
    2223,
    80,
    v12);
  V_LOCK();
  logfmt_raw(v12, 0x1000u, 0, "Stale submissions discarded due to new blocks: %lld", total_stale);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/api_new.c",
    147,
    "print_summary",
    13,
    2224,
    80,
    v12);
  V_LOCK();
  logfmt_raw(v12, 0x1000u, 0, "Unable to get work from server occasions: %d", total_go);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/api_new.c",
    147,
    "print_summary",
    13,
    2225,
    80,
    v12);
  V_LOCK();
  logfmt_raw(v12, 0x1000u, 0, "Submitting work remotely delay occasions: %d", total_ro);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/api_new.c",
    147,
    "print_summary",
    13,
    2226,
    80,
    v12);
  V_LOCK();
  logfmt_raw(v12, 0x1000u, 0, "New blocks detected on network: %d", new_blocks);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/api_new.c",
    147,
    "print_summary",
    13,
    2227,
    80,
    v12);
  if ( total_pools > 0 )
  {
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, "Summary of pool statistics:");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/api_new.c",
      147,
      "print_summary",
      13,
      2231,
      80,
      v12);
    for ( i = 0; i < total_pools; ++i )
    {
      v33 = *(_DWORD *)(pools + 4 * i);
      V_LOCK();
      logfmt_raw(v12, 0x1000u, 0, "Pool: %s", *(_DWORD *)(v33 + 12));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/api_new.c",
        147,
        "print_summary",
        13,
        2236,
        80,
        v12);
      V_LOCK();
      logfmt_raw(v12, 0x1000u, 0, "User: %s", *(_DWORD *)(v33 + 16));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/api_new.c",
        147,
        "print_summary",
        13,
        2237,
        80,
        v12);
      V_LOCK();
      logfmt_raw(v12, 0x1000u, 0, "Share submissions: %lld", *(_QWORD *)(v33 + 1936) + *(_QWORD *)(v33 + 1928));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/api_new.c",
        147,
        "print_summary",
        13,
        2238,
        80,
        v12);
      V_LOCK();
      logfmt_raw(v12, 0x1000u, 0, "Accepted shares: %lld", *(_DWORD *)(v33 + 1928), *(_DWORD *)(v33 + 1932));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/api_new.c",
        147,
        "print_summary",
        13,
        2239,
        80,
        v12);
      V_LOCK();
      logfmt_raw(v12, 0x1000u, 0, "Rejected shares: %lld", *(_DWORD *)(v33 + 1936), *(_DWORD *)(v33 + 1940));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/api_new.c",
        147,
        "print_summary",
        13,
        2240,
        80,
        v12);
      V_LOCK();
      logfmt_raw(v12, 0x1000u, 0, "Accepted difficulty shares: %1.f", *(_DWORD *)(v33 + 1960), *(_DWORD *)(v33 + 1964));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/api_new.c",
        147,
        "print_summary",
        13,
        2241,
        80,
        v12);
      V_LOCK();
      logfmt_raw(v12, 0x1000u, 0, "Rejected difficulty shares: %1.f", *(_DWORD *)(v33 + 1968), *(_DWORD *)(v33 + 1972));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/api_new.c",
        147,
        "print_summary",
        13,
        2242,
        80,
        v12);
      if ( *(_QWORD *)(v33 + 1928) || *(_QWORD *)(v33 + 1936) )
      {
        V_LOCK();
        LODWORD(v6) = sub_CCAE4(
                        3LL * *(_QWORD *)(v33 + 1936)
                      + vshld_n_s64(3LL * *(_QWORD *)(v33 + 1936), 5u)
                      + *(_QWORD *)(v33 + 1936));
        HIDWORD(v6) = v5;
        LODWORD(v7) = sub_CCAE4(*(_QWORD *)(v33 + 1936) + *(_QWORD *)(v33 + 1928));
        logfmt_raw(v12, 0x1000u, 0, "Reject ratio: %.1f%%", v6 / v7);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/api_new.c",
          147,
          "print_summary",
          13,
          2245,
          80,
          v12);
      }
    }
  }
  V_LOCK();
  logfmt_raw(v12, 0x1000u, 0, "Summary of per device statistics:");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/api_new.c",
    147,
    "print_summary",
    13,
    2250,
    80,
    v12);
  v14 = 0;
  result = get_all_created_runtime(&v14);
  v21 = result;
  v22 = 0;
  for ( j = 0; j < v14; ++j )
  {
    v22 = snprintf(
            v13,
            0x1000u,
            "chain %d device %d wc %llu nc %llu detail: ",
            *(_DWORD *)(v21[j] + 252),
            *(_DWORD *)(v21[j] + 248),
            *(_QWORD *)(v21[j] + 440),
            *(_QWORD *)(v21[j] + 448));
    v20 = *(_DWORD *)(v21[j] + 336);
    for ( k = 0; k < v20; ++k )
    {
      v19 = *(_DWORD *)(v21[j] + 456) + 48 * k;
      v9 = snprintf(&v13[v22], 4096 - v22, "%d:", k + 1);
      v22 += v9;
      for ( m = 0; m <= 5; ++m )
      {
        v10 = snprintf(&v13[v22], 4096 - v22, " %llu", *(_QWORD *)(v19 + 8 * m));
        v22 += v10;
      }
      v11 = snprintf(&v13[v22], 4096 - v22, " /");
      v22 += v11;
    }
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, "%s", v13);
    V_UNLOCK();
    result = (_DWORD *)zlog(
                         g_zc,
                         "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/rele"
                         "ase/build/godminer-origin_godminer-branch1/api_new.c",
                         147,
                         "print_summary",
                         13,
                         2270,
                         80,
                         v12);
  }
  return result;
}
