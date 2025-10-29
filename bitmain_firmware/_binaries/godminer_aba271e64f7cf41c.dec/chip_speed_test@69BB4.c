int __fastcall chip_speed_test(int a1)
{
  int v1; // r3
  bool v2; // nf
  int v3; // r2
  int v4; // r3
  int v5; // r2
  int v6; // r3
  int v7; // r2
  int v8; // r3
  int v9; // r2
  int v10; // r3
  int v11; // r3
  _BYTE v14[60]; // [sp+30h] [bp-243Ch] BYREF
  char v15[28]; // [sp+FD0h] [bp-149Ch] BYREF
  int v16; // [sp+1FD0h] [bp-49Ch] BYREF
  char v17; // [sp+1FD6h] [bp-496h]
  char v18[24]; // [sp+1FE4h] [bp-488h] BYREF
  float v19[17]; // [sp+23E4h] [bp-88h] BYREF
  __int64 v20; // [sp+2428h] [bp-44h] BYREF
  int v21; // [sp+2430h] [bp-3Ch]
  int v22; // [sp+2434h] [bp-38h]
  int v23; // [sp+2438h] [bp-34h]
  int v24; // [sp+243Ch] [bp-30h]
  int v25; // [sp+2440h] [bp-2Ch]
  int v26; // [sp+2444h] [bp-28h]
  int v27; // [sp+2448h] [bp-24h]
  int v28; // [sp+244Ch] [bp-20h]
  float i; // [sp+2450h] [bp-1Ch]
  int k; // [sp+2454h] [bp-18h]
  int j; // [sp+2458h] [bp-14h]
  int v32; // [sp+245Ch] [bp-10h]

  v32 = 0;
  v19[0] = 0.0;
  (*(void (__fastcall **)(int, float *))(a1 + 148))(a1, v19);
  v19[0] = v19[0] * 120.0;
  V_LOCK();
  logfmt_raw(v15, 0x1000u, 0, "qualify nonce count %f", v19[0]);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_chip_status.c",
    203,
    "chip_speed_test",
    15,
    37,
    20,
    v15);
  get_miner_working_status(&v16);
  if ( v17 )
  {
    V_LOCK();
    logfmt_raw(v15, 0x1000u, 0, "check lost connection to pool, keep the state of all chips!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_chip_status.c",
      203,
      "chip_speed_test",
      15,
      45,
      20,
      v15);
  }
  else
  {
    for ( i = 0.0; SLODWORD(i) < *(_DWORD *)(a1 + 336); ++LODWORD(i) )
    {
      if ( *(_DWORD *)(*(_DWORD *)(a1 + 480) + 4 * LODWORD(i)) < (unsigned int)v19[0] )
      {
        if ( *(_DWORD *)(*(_DWORD *)(a1 + 480) + 4 * LODWORD(i)) )
        {
          v6 = v32++;
          v7 = -v6;
          v2 = -v6 < 0;
          v8 = v6 & 0xF;
          v9 = v7 & 0xF;
          if ( !v2 )
            v8 = -v9;
          v19[v8 + 1] = i;
          *(_DWORD *)(*(_DWORD *)(a1 + 528) + 44 * LODWORD(i) + 16) = 3;
        }
        else
        {
          v1 = v32++;
          v3 = -v1;
          v2 = -v1 < 0;
          v4 = v1 & 0xF;
          v5 = v3 & 0xF;
          if ( !v2 )
            v4 = -v5;
          v19[v4 + 1] = i;
          *(_DWORD *)(*(_DWORD *)(a1 + 528) + 44 * LODWORD(i) + 16) = 2;
        }
      }
      else
      {
        *(_DWORD *)(*(_DWORD *)(a1 + 528) + 44 * LODWORD(i) + 16) = 0;
      }
      *(_DWORD *)(*(_DWORD *)(a1 + 480) + 4 * LODWORD(i)) = 0;
    }
    if ( v32 > *(_DWORD *)(a1 + 524) )
    {
      v28 = 0;
      v27 = snprintf(v18, 0x400u, "bad asic id:");
      v28 += v27;
      for ( j = 0; ; ++j )
      {
        v11 = v32;
        if ( v32 >= 16 )
          v11 = 16;
        if ( j >= v11 )
          break;
        v27 = snprintf(&v18[v28], 1024 - v28, "%03d ", v19[j + 1]);
        v28 += v27;
      }
      V_LOCK();
      logfmt_raw(v15, 0x1000u, 0, "%s", v18);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_chip_status.c",
        203,
        "chip_speed_test",
        15,
        86,
        40,
        v15);
      (*(void (__fastcall **)(int, _BYTE *, int))(a1 + 208))(a1, v14, 4000);
      V_LOCK();
      sub_69B80((int)&v20, *(int *)(a1 + 252));
      logfmt_raw(v15, 0x1000u, 0, v26, v20, v21, v22, v23, v24, v25, v26, "%s", v14);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/miner_util/miner_monitor/update_miner_status/update_chip_status.c",
        203,
        "chip_speed_test",
        15,
        89,
        60,
        v15);
    }
    else
    {
      for ( k = 0; ; ++k )
      {
        v10 = v32;
        if ( v32 >= 16 )
          v10 = 16;
        if ( k >= v10 )
          break;
        *(_DWORD *)(*(_DWORD *)(a1 + 528) + 44 * LODWORD(v19[k + 1]) + 16) = 0;
      }
    }
  }
  return 0;
}
