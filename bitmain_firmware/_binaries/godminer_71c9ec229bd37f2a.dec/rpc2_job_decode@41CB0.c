int __fastcall rpc2_job_decode(_DWORD *a1, int a2)
{
  int v2; // r5
  pthread_mutex_t *v3; // r9
  int v6; // r0
  int v7; // r0
  _DWORD *v8; // r0
  size_t v9; // r0
  _BOOL4 v10; // r3
  int v11; // r0
  int v12; // r12
  int v13; // r2
  int v15; // r0
  int v16; // r2
  void *v17; // r0
  char *v18; // r0
  void *v19; // r3
  int v20; // r0
  int v21; // r2
  void *v22; // r0
  int v23; // r0
  __int64 v24; // r0
  __int64 v25; // r0
  void *v26; // r3
  __int64 size; // [sp+18h] [bp-103Ch]
  size_t sizea; // [sp+18h] [bp-103Ch]
  char *v29; // [sp+20h] [bp-1034h]
  int v30; // [sp+24h] [bp-1030h]
  void *ptr; // [sp+28h] [bp-102Ch]
  pthread_mutex_t *mutex; // [sp+2Ch] [bp-1028h]
  _DWORD s[7]; // [sp+30h] [bp-1024h] BYREF
  __int16 v34; // [sp+4Ch] [bp-1008h]
  char v35[4100]; // [sp+50h] [bp-1004h] BYREF

  v2 = *(unsigned __int8 *)(a2 + 1824);
  if ( !*(_BYTE *)(a2 + 1824) )
  {
    V_LOCK();
    logfmt_raw(v35, 0x1000u, v2, "Tried to decode job without JSON-RPC 2.0");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin29/frontend_grin29.c",
      163,
      "rpc2_job_decode",
      15,
      363,
      100,
      v35);
    return v2;
  }
  v3 = (pthread_mutex_t *)(a2 + 1760);
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1760));
  v6 = json_object_get(a1, "job_id");
  if ( !v6 )
  {
    V_LOCK();
    logfmt_raw(v35, 0x1000u, 0, "JSON invalid job id");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin29/frontend_grin29.c",
      163,
      "rpc2_job_decode",
      15,
      371,
      100,
      v35);
    goto LABEL_12;
  }
  size = json_integer_value(v6);
  s[0] = 32;
  v34 = 0;
  memset(&s[1], 0, 24);
  sprintf((char *)s, "%llu", size);
  v7 = json_object_get(a1, "height");
  if ( !v7 )
  {
    V_LOCK();
    logfmt_raw(v35, 0x1000u, 0, "JSON invalid height");
    V_UNLOCK();
    v15 = g_zc;
    v16 = 380;
    goto LABEL_17;
  }
  v30 = json_integer_value(v7);
  v8 = (_DWORD *)json_object_get(a1, "pre_pow");
  if ( !v8 )
  {
    V_LOCK();
    logfmt_raw(v35, 0x1000u, 0, "JSON invalid blob");
    V_UNLOCK();
    v15 = g_zc;
    v16 = 388;
LABEL_17:
    zlog(
      v15,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin29/frontend_grin29.c",
      163,
      "rpc2_job_decode",
      15,
      v16,
      100,
      v35);
    goto LABEL_12;
  }
  v29 = (char *)json_string_value(v8);
  V_LOCK();
  logfmt_raw(v35, 0x1000u, 0, "Job id: (%lld-%s) Height %llu hexblob %s", size, s, v30, v29);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/frontend/frontend_grin29/frontend_grin29.c",
    163,
    "rpc2_job_decode",
    15,
    393,
    20,
    v35);
  v9 = strlen(v29);
  if ( (v9 & 1) != 0 || (v9 - 1 <= 0x4E ? (v10 = 1) : (v10 = v9 > 0x201), v10) )
  {
    V_LOCK();
    logfmt_raw(v35, 0x1000u, 0, "JSON invalid blob length");
    V_UNLOCK();
    v11 = g_zc;
    v12 = 100;
    v13 = 396;
LABEL_11:
    zlog(
      v11,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin29/frontend_grin29.c",
      163,
      "rpc2_job_decode",
      15,
      v13,
      v12,
      v35);
LABEL_12:
    pthread_mutex_unlock(v3);
    V_LOCK();
    logfmt_raw(v35, 0x1000u, 0, "%s", "rpc2_job_decode");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin29/frontend_grin29.c",
      163,
      "rpc2_job_decode",
      15,
      453,
      80,
      v35);
    return 0;
  }
  if ( !v9 )
    goto LABEL_20;
  sizea = v9 >> 1;
  mutex = (pthread_mutex_t *)(a2 + 1948);
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1948));
  ptr = malloc(sizea);
  if ( !hex2bin((int)ptr, (unsigned __int8 *)v29, sizea) )
  {
    V_LOCK();
    logfmt_raw(v35, 0x1000u, 0, "JSON invalid blob");
    V_UNLOCK();
    v20 = g_zc;
    v21 = 404;
    goto LABEL_28;
  }
  *(_DWORD *)(a2 + 1924) = sizea;
  v22 = malloc(sizea);
  *(_DWORD *)(a2 + 1916) = v22;
  if ( !v22 )
  {
    V_LOCK();
    logfmt_raw(v35, 0x1000u, 0, "RPC2 OOM!");
    V_UNLOCK();
    v20 = g_zc;
    v21 = 412;
LABEL_28:
    zlog(
      v20,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin29/frontend_grin29.c",
      163,
      "rpc2_job_decode",
      15,
      v21,
      100,
      v35);
    if ( ptr )
      free(ptr);
    goto LABEL_30;
  }
  memcpy(v22, ptr, sizea);
  free(ptr);
  v23 = json_object_get(a1, "difficulty");
  if ( !v23 )
  {
    V_LOCK();
    logfmt_raw(v35, 0x1000u, 0, "JSON invalid difficulty");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin29/frontend_grin29.c",
      163,
      "rpc2_job_decode",
      15,
      422,
      100,
      v35);
LABEL_30:
    pthread_mutex_unlock(mutex);
    goto LABEL_12;
  }
  v24 = json_integer_value(v23);
  LODWORD(v25) = sub_12F50C(v24);
  v26 = *(void **)(a2 + 1944);
  *(_QWORD *)(a2 + 1976) = v25;
  if ( v26 )
    free(v26);
  *(_DWORD *)(a2 + 1944) = _strdup((const char *)s);
  pthread_mutex_unlock(mutex);
LABEL_20:
  if ( !*(_DWORD *)(a2 + 1916) )
  {
    V_LOCK();
    logfmt_raw(v35, 0x1000u, 0, "Work requested before it was received");
    V_UNLOCK();
    v11 = g_zc;
    v12 = 80;
    v13 = 435;
    goto LABEL_11;
  }
  memcpy((void *)(a2 + 456), *(const void **)(a2 + 1916), *(_DWORD *)(a2 + 1924));
  memset((void *)(a2 + 1480), 255, 0x20u);
  diff_to_target_grin29((_QWORD *)(a2 + 1480));
  v17 = *(void **)(a2 + 1600);
  *(_QWORD *)(a2 + 1576) = *(_QWORD *)(a2 + 1976);
  if ( v17 )
    free(v17);
  v18 = _strdup((const char *)s);
  v19 = *(void **)(a2 + 1916);
  *(_DWORD *)(a2 + 1600) = v18;
  *(_DWORD *)(a2 + 1592) = 29;
  *(_DWORD *)(a2 + 1596) = v30;
  if ( v19 )
    free(v19);
  pthread_mutex_unlock(v3);
  return v2;
}
