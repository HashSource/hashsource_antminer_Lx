__int64 sub_6873C()
{
  __int64 result; // r0
  int (**v1)(); // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  char v10[20]; // [sp+20h] [bp-2194h] BYREF
  char v11[20]; // [sp+1020h] [bp-1194h] BYREF
  char v12[32]; // [sp+1040h] [bp-1174h] BYREF
  char v13[20]; // [sp+1060h] [bp-1154h] BYREF
  _BYTE v14[20]; // [sp+2060h] [bp-154h] BYREF
  int v15; // [sp+2090h] [bp-124h]
  int v16; // [sp+2094h] [bp-120h]
  _BYTE v17[44]; // [sp+2098h] [bp-11Ch] BYREF
  int v18; // [sp+20E0h] [bp-D4h]
  const char *v19; // [sp+20E4h] [bp-D0h]
  __int64 v20; // [sp+20F0h] [bp-C4h]
  int v21; // [sp+217Ch] [bp-38h] BYREF
  int v22; // [sp+2180h] [bp-34h]
  int v23; // [sp+2184h] [bp-30h]
  _DWORD *all_created_runtime; // [sp+2188h] [bp-2Ch]
  int v25; // [sp+218Ch] [bp-28h]
  int n; // [sp+2190h] [bp-24h]
  int m; // [sp+2194h] [bp-20h]
  int k; // [sp+2198h] [bp-1Ch]
  int j; // [sp+219Ch] [bp-18h]
  int i; // [sp+21A0h] [bp-14h]
  int v31; // [sp+21A4h] [bp-10h]

  v21 = 0;
  v25 = frontend_runtime_instance();
  all_created_runtime = get_all_created_runtime(&v21);
  v31 = 0;
  read_system_status_from_monitor((int)v14);
  format_hashrate_string(*(const char **)(*(_DWORD *)(v25 + 72) + 16), v12);
  format_hashrate_string(*(const char **)(*(_DWORD *)(v25 + 72) + 16), v11);
  V_LOCK();
  logfmt_raw(v10, 0x1000u, 0, "total avg hashrate %s 2min avg hashrate %s hw %llu", v12, v11, v15, v16);
  V_UNLOCK();
  result = zlog(
             g_hash_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/go"
             "dminer-origin_godminer-branch1/miner_util/miner_monitor/miner_monitor.c",
             178,
             "task_applog_printer",
             19,
             125,
             40,
             v10);
  for ( i = 0; i < v21; ++i )
  {
    read_status_from_monitor(v17, all_created_runtime[i]);
    format_hashrate_string(*(const char **)(*(_DWORD *)(v25 + 72) + 16), v12);
    format_hashrate_string(*(const char **)(*(_DWORD *)(v25 + 72) + 16), v11);
    v1 = dev_ctrl();
    v2 = ((int (__fastcall *)(_DWORD))v1[12])(*(_DWORD *)(all_created_runtime[i] + 248));
    v31 = snprintf(
            v13,
            0x1000u,
            "chain %d device %d alive chip count %d avg hashrate %s 30min avg hashrate %s hw %llu\n",
            v2,
            *(_DWORD *)(all_created_runtime[i] + 248),
            v18,
            v12,
            v11,
            v20);
    v3 = snprintf(
           &v13[v31],
           4096 - v31,
           "wc %llu nc %llu chip status str %s detail:\n",
           *(_QWORD *)(all_created_runtime[i] + 440),
           *(_QWORD *)(all_created_runtime[i] + 448),
           v19);
    v31 += v3;
    v23 = *(_DWORD *)(all_created_runtime[i] + 336);
    for ( j = 0; j < v23; ++j )
    {
      v22 = *(_DWORD *)(all_created_runtime[i] + 456) + 48 * j;
      v4 = snprintf(&v13[v31], 4096 - v31, "%d:", j + 1);
      v31 += v4;
      for ( k = 0; k <= 5; ++k )
      {
        v5 = snprintf(&v13[v31], 4096 - v31, " %llu", *(_QWORD *)(v22 + 8 * k));
        v31 += v5;
      }
      v6 = snprintf(&v13[v31], 4096 - v31, " /");
      v31 += v6;
    }
    if ( opt_algo == 13 )
    {
      for ( m = 0; m < v23; ++m )
      {
        v7 = snprintf(&v13[v31], 0x2000 - v31, "\n------%d------", m + 1);
        v31 += v7;
        for ( n = 0; n < *(_DWORD *)(all_created_runtime[i] + 344); ++n )
        {
          if ( (n & 7) == 0 )
          {
            v8 = snprintf(&v13[v31], 0x2000 - v31, "\n");
            v31 += v8;
          }
          v9 = snprintf(
                 &v13[v31],
                 0x2000 - v31,
                 " %d:%d ",
                 n,
                 *(_DWORD *)(*(_DWORD *)(all_created_runtime[i] + 484)
                           + 4 * (m * *(_DWORD *)(all_created_runtime[i] + 344) + n)));
          v31 += v9;
        }
      }
    }
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, "%s", v13);
    V_UNLOCK();
    result = zlog(
               g_hash_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/"
               "godminer-origin_godminer-branch1/miner_util/miner_monitor/miner_monitor.c",
               178,
               "task_applog_printer",
               19,
               159,
               40,
               v10);
  }
  return result;
}
