int __fastcall sub_47048(int a1, int a2, _DWORD *a3, unsigned int a4)
{
  _DWORD *v7; // r0
  char *v8; // r4
  _DWORD *v9; // r0
  size_t v10; // r0
  size_t v11; // r6
  size_t v12; // r8
  void *v13; // r0
  size_t v14; // r7
  void *v15; // r0
  void *v16; // r0
  void *v17; // r7
  int v19; // r12
  int v20; // r2
  int v21; // r0
  int v22; // r1
  char v23[4096]; // [sp+10h] [bp-1000h] BYREF

  v7 = json_array_get(a3, a4);
  v8 = (char *)json_string_value(v7);
  if ( !v8 )
  {
    V_LOCK();
    logfmt_raw(v23, 0x1000u, 0, "Failed to get extranonce1");
    V_UNLOCK();
    v19 = 100;
    v20 = 327;
    v21 = g_zc;
    LOWORD(v22) = 23780;
    goto LABEL_13;
  }
  v9 = json_array_get(a3, a4 + 1);
  v10 = json_integer_value((int)v9);
  v11 = v10;
  if ( !v10 )
  {
    V_LOCK();
    logfmt_raw(v23, 0x1000u, 0, "Failed to get extranonce2_size");
    V_UNLOCK();
    v19 = 100;
    v20 = 332;
    goto LABEL_12;
  }
  v12 = v10;
  if ( v10 - 2 > 0x16 )
  {
    V_LOCK();
    logfmt_raw(v23, 0x1000u, 0, "Failed to get valid n2size in parse_extranonce, xn2_size=%d", v11);
    V_UNLOCK();
    v19 = 60;
    v20 = 336;
LABEL_12:
    v21 = g_zc;
    LOWORD(v22) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/"
                                    "release/build/godminer-origin_master/frontend/frontend_hns/frontend_hns.c";
LABEL_13:
    HIWORD(v22) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/rele"
                                "ase/build/godminer-origin_master/frontend/frontend_hns/frontend_hns.c" >> 16;
    zlog(v21, v22, 157, "stratum_parse_extranonce_hns", 28, v20, v19, v23);
    return 0;
  }
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1760));
  v13 = *(void **)(a2 + 76);
  if ( v13 )
  {
    free(v13);
    *(_DWORD *)(a2 + 76) = 0;
  }
  v14 = strlen(v8) >> 1;
  *(_DWORD *)(a2 + 72) = v14;
  v15 = calloc(1u, v14);
  *(_DWORD *)(a2 + 76) = v15;
  if ( v15 )
  {
    hex2bin((int)v15, (unsigned __int8 *)v8, v14);
    v16 = *(void **)(a2 + 1608);
    *(_DWORD *)(a2 + 1604) = v11;
    *(_DWORD *)(a2 + 80) = v11;
    if ( v16 )
    {
      free(v16);
      v12 = *(_DWORD *)(a2 + 1604);
    }
    v17 = calloc(1u, v12);
    *(_DWORD *)(a2 + 1608) = v17;
    if ( v17 )
    {
      pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1760));
      V_LOCK();
      logfmt_raw(v23, 0x1000u, 0, "Stratum set nonce1 %s, nonce2 size=%d", v8, v11);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_hns/frontend_hns.c",
        157,
        "stratum_parse_extranonce_hns",
        28,
        361,
        20,
        v23);
      return 1;
    }
    else
    {
      V_LOCK();
      logfmt_raw(v23, 0x1000u, 0, "Failed to alloc work->xnonce2");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_hns/frontend_hns.c",
        157,
        "stratum_parse_extranonce_hns",
        28,
        355,
        100,
        v23);
      pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1760));
      return 0;
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v23, 0x1000u, 0, "Failed to alloc xnonce1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_hns/frontend_hns.c",
      157,
      "stratum_parse_extranonce_hns",
      28,
      345,
      100,
      v23);
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1760));
    return 0;
  }
}
