int __fastcall sub_3CDE0(int a1, int a2, _DWORD *a3, unsigned int a4)
{
  _DWORD *v7; // r0
  char *v8; // r4
  _DWORD *v9; // r0
  int v10; // r0
  int v11; // r6
  void *v12; // r0
  size_t v13; // r7
  void *v14; // r0
  void *v15; // r0
  void *v16; // r7
  int v18; // lr
  int v19; // r12
  int v20; // r0
  int v21; // r3
  char v22[4100]; // [sp+10h] [bp-1004h] BYREF

  v7 = json_array_get(a3, a4);
  v8 = (char *)json_string_value(v7);
  if ( !v8 )
  {
    V_LOCK();
    logfmt_raw(v22, 0x1000u, 0, "Failed to get extranonce1");
    V_UNLOCK();
    v18 = 100;
    v19 = 210;
    v20 = g_zc;
    LOWORD(v21) = 9808;
    goto LABEL_13;
  }
  v9 = json_array_get(a3, a4 + 1);
  v10 = json_integer_value((int)v9);
  v11 = v10;
  if ( !v10 )
  {
    V_LOCK();
    logfmt_raw(v22, 0x1000u, 0, "Failed to get extranonce2_size");
    V_UNLOCK();
    v18 = 100;
    v19 = 215;
    goto LABEL_12;
  }
  if ( (unsigned int)(v10 - 2) > 0xE )
  {
    V_LOCK();
    logfmt_raw(v22, 0x1000u, 0, "Failed to get valid n2size in parse_extranonce, xn2_size=%d", v11);
    V_UNLOCK();
    v18 = 60;
    v19 = 219;
LABEL_12:
    v20 = g_zc;
    LOWORD(v21) = (unsigned __int16)"stratum_parse_extranonce_dash";
LABEL_13:
    HIWORD(v21) = (unsigned int)"stratum_parse_extranonce_dash" >> 16;
    zlog(
      v20,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/frontend/frontend_dash/frontend_dash.c",
      174,
      v21,
      29,
      v19,
      v18,
      v22);
    return 0;
  }
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1760));
  v12 = *(void **)(a2 + 76);
  if ( v12 )
  {
    free(v12);
    *(_DWORD *)(a2 + 76) = 0;
  }
  v13 = strlen(v8) >> 1;
  *(_DWORD *)(a2 + 72) = v13;
  v14 = calloc(1u, v13);
  *(_DWORD *)(a2 + 76) = v14;
  if ( v14 )
  {
    hex2bin((int)v14, (unsigned __int8 *)v8, v13);
    v15 = *(void **)(a2 + 1608);
    *(_DWORD *)(a2 + 1604) = v11;
    *(_DWORD *)(a2 + 80) = v11;
    if ( v15 )
      free(v15);
    v16 = calloc(1u, 4u);
    *(_DWORD *)(a2 + 1608) = v16;
    if ( v16 )
    {
      pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1760));
      V_LOCK();
      logfmt_raw(v22, 0x1000u, 0, "Stratum set nonce1 %s, nonce2 size=%d", v8, v11);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build"
        "/godminer-origin_master/frontend/frontend_dash/frontend_dash.c",
        174,
        "stratum_parse_extranonce_dash",
        29,
        248,
        20,
        v22);
      return 1;
    }
    else
    {
      V_LOCK();
      logfmt_raw(v22, 0x1000u, 0, "Failed to alloc xnonce2");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build"
        "/godminer-origin_master/frontend/frontend_dash/frontend_dash.c",
        174,
        "stratum_parse_extranonce_dash",
        29,
        240,
        100,
        v22);
      pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1760));
      return 0;
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v22, 0x1000u, 0, "Failed to alloc xnonce1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/frontend/frontend_dash/frontend_dash.c",
      174,
      "stratum_parse_extranonce_dash",
      29,
      228,
      100,
      v22);
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1760));
    return 0;
  }
}
