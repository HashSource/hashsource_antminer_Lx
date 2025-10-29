int __fastcall sub_48380(int a1, int a2, _DWORD *a3, unsigned int a4)
{
  _DWORD *v7; // r0
  const char *v8; // r0
  char *v9; // r8
  int v10; // lr
  int v11; // r12
  int v12; // r0
  int v13; // r3
  _DWORD *v15; // r0
  size_t v16; // r6
  size_t v17; // r10
  void *v18; // r0
  size_t v19; // r7
  void *v20; // r0
  void *v21; // r0
  void *v22; // r4
  int v23; // r12
  char v24[4096]; // [sp+10h] [bp-1000h] BYREF

  v7 = json_array_get(a3, a4);
  v8 = (const char *)json_string_value(v7);
  v9 = (char *)v8;
  if ( !v8 || (strlen(v8) & 1) != 0 )
  {
    V_LOCK();
    logfmt_raw(v24, 0x1000u, 0, "Failed to get extranonce1");
    V_UNLOCK();
    v10 = 100;
    v11 = 144;
    v12 = g_zc;
    LOWORD(v13) = (unsigned __int16)"stratum_parse_extranonce_ltc";
LABEL_4:
    HIWORD(v13) = (unsigned int)"stratum_parse_extranonce_ltc" >> 16;
    zlog(
      v12,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_ltc/frontend_ltc.c",
      157,
      v13,
      28,
      v11,
      v10,
      v24);
    return 0;
  }
  v15 = json_array_get(a3, a4 + 1);
  v16 = json_integer_value((int)v15);
  v17 = v16;
  if ( v16 - 2 > 0xE )
  {
    V_LOCK();
    logfmt_raw(v24, 0x1000u, 0, "Get invalid n2size in parse_extranonce, xn2_size=%d", v16);
    V_UNLOCK();
    v10 = 60;
    v11 = 149;
    v12 = g_zc;
    LOWORD(v13) = 16704;
    goto LABEL_4;
  }
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1760));
  v18 = *(void **)(a2 + 76);
  if ( v18 )
  {
    free(v18);
    *(_DWORD *)(a2 + 76) = 0;
  }
  v19 = strlen(v9) >> 1;
  *(_DWORD *)(a2 + 72) = v19;
  v20 = calloc(1u, v19);
  *(_DWORD *)(a2 + 76) = v20;
  if ( v20 )
  {
    hex2bin((int)v20, (unsigned __int8 *)v9, v19);
    v21 = *(void **)(a2 + 1608);
    *(_DWORD *)(a2 + 1604) = v16;
    *(_DWORD *)(a2 + 80) = v16;
    if ( v21 )
    {
      free(v21);
      v17 = *(_DWORD *)(a2 + 1604);
    }
    v22 = calloc(1u, v17);
    *(_DWORD *)(a2 + 1608) = v22;
    if ( v22 )
    {
      pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1760));
      V_LOCK();
      logfmt_raw(v24, 0x1000u, 0, "Stratum set nonce1 %s, nonce2 size=%d", v9, v16);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_ltc/frontend_ltc.c",
        157,
        "stratum_parse_extranonce_ltc",
        28,
        175,
        20,
        v24);
      return 1;
    }
    V_LOCK();
    logfmt_raw(v24, 0x1000u, 0, "Failed to alloc xnonce2");
    V_UNLOCK();
    v23 = 168;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v24, 0x1000u, 0, "Failed to alloc xnonce1");
    V_UNLOCK();
    v23 = 158;
  }
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/frontend/frontend_ltc/frontend_ltc.c",
    157,
    "stratum_parse_extranonce_ltc",
    28,
    v23,
    100,
    v24);
  pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1760));
  return 0;
}
