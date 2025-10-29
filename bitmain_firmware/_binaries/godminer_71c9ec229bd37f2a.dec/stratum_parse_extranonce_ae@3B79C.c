int __fastcall stratum_parse_extranonce_ae(int a1, int a2, _DWORD *a3, unsigned int a4)
{
  _DWORD *v7; // r0
  char *v8; // r4
  _DWORD *v9; // r0
  size_t v10; // r0
  size_t v11; // r6
  size_t v12; // r8
  int v13; // lr
  int v14; // r12
  int v15; // r0
  int v16; // r3
  void *v18; // r0
  size_t v19; // r9
  void *v20; // r0
  void *v21; // r0
  void *v22; // r8
  unsigned int v23; // r3
  int v24; // r2
  char v25; // r1
  char v26[4096]; // [sp+10h] [bp-1000h] BYREF

  v7 = json_array_get(a3, a4);
  v8 = (char *)json_string_value(v7);
  if ( !v8 )
  {
    V_LOCK();
    logfmt_raw(v26, 0x1000u, 0, "Failed to get extranonce1");
    V_UNLOCK();
    v13 = 100;
    v14 = 73;
    v15 = g_zc;
    LOWORD(v16) = 16784;
    goto LABEL_7;
  }
  v9 = json_array_get(a3, a4 + 1);
  v10 = json_integer_value((int)v9);
  v11 = v10;
  if ( !v10 )
  {
    V_LOCK();
    logfmt_raw(v26, 0x1000u, 0, "Failed to get extranonce2_size");
    V_UNLOCK();
    v13 = 100;
    v14 = 78;
    goto LABEL_6;
  }
  v12 = v10;
  if ( v10 - 2 > 6 )
  {
    V_LOCK();
    logfmt_raw(v26, 0x1000u, 0, "Failed to get valid n2size in parse_extranonce");
    V_UNLOCK();
    v13 = 40;
    v14 = 82;
    goto LABEL_6;
  }
  if ( v10 + (strlen(v8) >> 1) != 8 )
  {
    V_LOCK();
    logfmt_raw(v26, 0x1000u, 0, "n1size + n2size != %d, in parse_extranonce", 8);
    V_UNLOCK();
    v13 = 100;
    v14 = 86;
LABEL_6:
    v15 = g_zc;
    LOWORD(v16) = (unsigned __int16)"stratum_parse_extranonce_ae";
LABEL_7:
    HIWORD(v16) = (unsigned int)"stratum_parse_extranonce_ae" >> 16;
    zlog(
      v15,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_ae/frontend_ae.c",
      155,
      v16,
      27,
      v14,
      v13,
      v26);
    return 0;
  }
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1760));
  v18 = *(void **)(a2 + 76);
  if ( v18 )
  {
    free(v18);
    *(_DWORD *)(a2 + 76) = 0;
  }
  v19 = strlen(v8) >> 1;
  *(_DWORD *)(a2 + 72) = v19;
  v20 = calloc(1u, v19);
  *(_DWORD *)(a2 + 76) = v20;
  if ( v20 )
  {
    hex2bin((int)v20, (unsigned __int8 *)v8, v19);
    v21 = *(void **)(a2 + 1608);
    *(_DWORD *)(a2 + 1604) = v11;
    *(_DWORD *)(a2 + 80) = v11;
    if ( v21 )
    {
      free(v21);
      v12 = *(_DWORD *)(a2 + 1604);
    }
    v22 = calloc(1u, v12);
    *(_DWORD *)(a2 + 1608) = v22;
    if ( v22 )
    {
      if ( *(_DWORD *)(a2 + 72) )
      {
        v23 = 0;
        v24 = a2 + 487;
        do
        {
          v25 = *(_BYTE *)(*(_DWORD *)(a2 + 76) + v23++);
          *(_BYTE *)++v24 = v25;
        }
        while ( *(_DWORD *)(a2 + 72) > v23 );
      }
      pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1760));
      V_LOCK();
      logfmt_raw(v26, 0x1000u, 0, "Stratum set nonce1 %s, nonce2 size=%d", v8, v11);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_ae/frontend_ae.c",
        155,
        "stratum_parse_extranonce_ae",
        27,
        116,
        20,
        v26);
      return 1;
    }
    else
    {
      V_LOCK();
      logfmt_raw(v26, 0x1000u, 0, "Failed to alloc xnonce2");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_ae/frontend_ae.c",
        155,
        "stratum_parse_extranonce_ae",
        27,
        105,
        100,
        v26);
      pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1760));
      return 0;
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v26, 0x1000u, 0, "Failed to alloc xnonce1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_ae/frontend_ae.c",
      155,
      "stratum_parse_extranonce_ae",
      27,
      95,
      100,
      v26);
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1760));
    return 0;
  }
}
