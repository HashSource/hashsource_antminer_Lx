int __fastcall sub_4894C(int a1, int a2, _DWORD *a3, unsigned int a4)
{
  _DWORD *v7; // r0
  const char *v8; // r0
  char *v9; // r8
  int v10; // lr
  int v11; // r12
  int v12; // r0
  int v13; // r3
  _DWORD *v15; // r0
  int v16; // r0
  size_t v17; // r6
  int v18; // r7
  void *v19; // r0
  size_t v20; // r10
  void *v21; // r0
  size_t v22; // r1
  void *v23; // r0
  void *v24; // r4
  int v25; // r12
  char v26[4096]; // [sp+10h] [bp-1000h] BYREF

  v7 = json_array_get(a3, a4);
  v8 = (const char *)json_string_value(v7);
  v9 = (char *)v8;
  if ( !v8 || (strlen(v8) & 1) != 0 )
  {
    V_LOCK();
    logfmt_raw(v26, 0x1000u, 0, "Failed to get extranonce1");
    V_UNLOCK();
    v10 = 100;
    v11 = 67;
    v12 = g_zc;
    LOWORD(v13) = (unsigned __int16)"stratum_parse_extranonce_kda";
LABEL_4:
    HIWORD(v13) = (unsigned int)"stratum_parse_extranonce_kda" >> 16;
    zlog(
      v12,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_kda/frontend_kda.c",
      157,
      v13,
      28,
      v11,
      v10,
      v26);
    return 0;
  }
  v15 = json_array_get(a3, a4 + 1);
  v16 = json_integer_value((int)v15);
  v17 = v16 - 5;
  v18 = v16;
  if ( (unsigned int)(v16 - 5) > 3 )
  {
    V_LOCK();
    logfmt_raw(v26, 0x1000u, 0, "Get invalid n2size in parse_extranonce, xn2_size=%d", v18);
    V_UNLOCK();
    v10 = 60;
    v11 = 72;
    v12 = g_zc;
    LOWORD(v13) = 24528;
    goto LABEL_4;
  }
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1760));
  v19 = *(void **)(a2 + 76);
  if ( v19 )
  {
    free(v19);
    *(_DWORD *)(a2 + 76) = 0;
  }
  v20 = strlen(v9) >> 1;
  *(_DWORD *)(a2 + 72) = v20;
  v21 = calloc(1u, v20);
  *(_DWORD *)(a2 + 76) = v21;
  if ( v21 )
  {
    hex2bin((int)v21, (unsigned __int8 *)v9, v20);
    v22 = v17;
    *(_DWORD *)(a2 + 1604) = v17;
    *(_DWORD *)(a2 + 80) = v17;
    if ( !v17 )
      goto LABEL_14;
    v23 = *(void **)(a2 + 1608);
    if ( v23 )
    {
      free(v23);
      v22 = *(_DWORD *)(a2 + 1604);
    }
    v24 = calloc(1u, v22);
    *(_DWORD *)(a2 + 1608) = v24;
    if ( v24 )
    {
LABEL_14:
      pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1760));
      V_LOCK();
      logfmt_raw(v26, 0x1000u, 0, "Stratum set nonce1 %s, nonce2 size=%d", v9, v18);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_kda/frontend_kda.c",
        157,
        "stratum_parse_extranonce_kda",
        28,
        100,
        20,
        v26);
      return 1;
    }
    V_LOCK();
    logfmt_raw(v26, 0x1000u, 0, "Failed to alloc xnonce2");
    V_UNLOCK();
    v25 = 92;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v26, 0x1000u, 0, "Failed to alloc xnonce1");
    V_UNLOCK();
    v25 = 81;
  }
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/frontend/frontend_kda/frontend_kda.c",
    157,
    "stratum_parse_extranonce_kda",
    28,
    v25,
    100,
    v26);
  pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1760));
  return 0;
}
