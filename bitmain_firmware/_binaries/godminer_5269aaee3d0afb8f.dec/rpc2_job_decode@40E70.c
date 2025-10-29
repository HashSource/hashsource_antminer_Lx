int __fastcall rpc2_job_decode(_DWORD *a1, int a2)
{
  int v2; // r5
  pthread_mutex_t *v3; // r9
  char *v6; // r1
  int v7; // r0
  const char *v8; // r1
  char *v9; // r1
  int v10; // r0
  int v11; // r0
  char *v12; // r1
  _DWORD *v13; // r0
  int v14; // r3
  _DWORD *v15; // r7
  int v16; // r1
  size_t v17; // r0
  _BOOL4 v18; // r3
  int v19; // r3
  int v20; // r0
  int v21; // r12
  int v22; // r2
  int v23; // r1
  int v24; // r3
  int v25; // r1
  int v27; // r3
  _DWORD *v28; // r3
  int v29; // r1
  int v30; // r3
  int v31; // r1
  int v32; // r3
  int v33; // r0
  int v34; // r2
  int v35; // r1
  int v36; // r3
  void *v37; // r0
  char *v38; // r0
  void *v39; // r3
  int v40; // r3
  int v41; // r0
  int v42; // r2
  int v43; // r1
  void *v44; // r0
  char *v45; // r1
  int v46; // r0
  __int64 v47; // r0
  __int64 v48; // r0
  void *v49; // r3
  int v50; // r3
  int v51; // r3
  int v52; // r3
  int v53; // r1
  __int64 size; // [sp+18h] [bp-103Ch]
  size_t sizea; // [sp+18h] [bp-103Ch]
  char *v56; // [sp+20h] [bp-1034h]
  int v57; // [sp+24h] [bp-1030h]
  void *ptr; // [sp+28h] [bp-102Ch]
  pthread_mutex_t *mutex; // [sp+2Ch] [bp-1028h]
  _DWORD s[7]; // [sp+30h] [bp-1024h] BYREF
  __int16 v61; // [sp+4Ch] [bp-1008h]
  char v62[4100]; // [sp+50h] [bp-1004h] BYREF

  v2 = *(unsigned __int8 *)(a2 + 1824);
  if ( !*(_BYTE *)(a2 + 1824) )
  {
    V_LOCK();
    LOWORD(v27) = 13840;
    HIWORD(v27) = (unsigned int)"no ratio hashrate last_5s: %f" >> 16;
    logfmt_raw(v62, 0x1000u, v2, v27);
    V_UNLOCK();
    LOWORD(v28) = -14756;
    HIWORD(v28) = (unsigned int)&unk_16E68C >> 16;
    LOWORD(v29) = 13488;
    HIWORD(v29) = (unsigned int)"ction_to_pool" >> 16;
    zlog(*v28, v29, 163, "rpc2_job_decode", 15, 363, 100, v62);
    return v2;
  }
  v3 = (pthread_mutex_t *)(a2 + 1760);
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1760));
  LOWORD(v6) = 13884;
  HIWORD(v6) = (unsigned int)"hrate last_30min: %f" >> 16;
  v7 = json_object_get(a1, v6);
  if ( !v7 )
  {
    V_LOCK();
    LOWORD(v30) = 13892;
    HIWORD(v30) = (unsigned int)"st_30min: %f" >> 16;
    LOWORD(v15) = -14756;
    logfmt_raw(v62, 0x1000u, 0, v30);
    HIWORD(v15) = (unsigned int)&unk_16E68C >> 16;
    V_UNLOCK();
    LOWORD(v31) = 13488;
    HIWORD(v31) = (unsigned int)"ction_to_pool" >> 16;
    zlog(*v15, v31, 163, "rpc2_job_decode", 15, 371, 100, v62);
    goto LABEL_12;
  }
  size = json_integer_value(v7);
  LOWORD(v8) = 13912;
  HIWORD(v8) = (unsigned int)"atio hashrate lifetime: %f" >> 16;
  s[0] = 32;
  v61 = 0;
  memset(&s[1], 0, 24);
  sprintf((char *)s, v8, size);
  LOWORD(v9) = 13920;
  HIWORD(v9) = (unsigned int)"hrate lifetime: %f" >> 16;
  v10 = json_object_get(a1, v9);
  if ( !v10 )
  {
    V_LOCK();
    LOWORD(v15) = -14756;
    LOWORD(v36) = 13928;
    HIWORD(v36) = (unsigned int)"fetime: %f" >> 16;
    HIWORD(v15) = (unsigned int)&unk_16E68C >> 16;
    logfmt_raw(v62, 0x1000u, 0, v36);
    V_UNLOCK();
    v33 = *v15;
    v34 = 380;
    goto LABEL_17;
  }
  v11 = json_integer_value(v10);
  LOWORD(v12) = 13948;
  v57 = v11;
  HIWORD(v12) = (unsigned int)" connection recovered after the system poweroff. Exit and restart mining!" >> 16;
  v13 = (_DWORD *)json_object_get(a1, v12);
  if ( !v13 )
  {
    V_LOCK();
    LOWORD(v15) = -14756;
    LOWORD(v32) = 13024;
    HIWORD(v32) = (unsigned int)"_host_side_baud" >> 16;
    HIWORD(v15) = (unsigned int)&unk_16E68C >> 16;
    logfmt_raw(v62, 0x1000u, 0, v32);
    V_UNLOCK();
    v33 = *v15;
    v34 = 388;
LABEL_17:
    LOWORD(v35) = 13488;
    HIWORD(v35) = (unsigned int)"ction_to_pool" >> 16;
    zlog(v33, v35, 163, "rpc2_job_decode", 15, v34, 100, v62);
    goto LABEL_12;
  }
  v56 = (char *)json_string_value(v13);
  LOWORD(v15) = -14756;
  V_LOCK();
  LOWORD(v14) = 13956;
  HIWORD(v14) = (unsigned int)"ion recovered after the system poweroff. Exit and restart mining!" >> 16;
  HIWORD(v15) = (unsigned int)&unk_16E68C >> 16;
  logfmt_raw(v62, 0x1000u, 0, v14, size, s, v57, v56);
  V_UNLOCK();
  LOWORD(v16) = 13488;
  HIWORD(v16) = (unsigned int)"ction_to_pool" >> 16;
  zlog(*v15, v16, 163, "rpc2_job_decode", 15, 393, 20, v62);
  v17 = strlen(v56);
  if ( (v17 & 1) != 0 || (v17 - 1 <= 0x4E ? (v18 = 1) : (v18 = v17 > 0x201), v18) )
  {
    V_LOCK();
    LOWORD(v19) = 14000;
    HIWORD(v19) = (unsigned int)"t and restart mining!" >> 16;
    logfmt_raw(v62, 0x1000u, 0, v19);
    V_UNLOCK();
    v20 = *v15;
    v21 = 100;
    v22 = 396;
LABEL_11:
    LOWORD(v23) = 13488;
    HIWORD(v23) = (unsigned int)"ction_to_pool" >> 16;
    zlog(v20, v23, 163, "rpc2_job_decode", 15, v22, v21, v62);
LABEL_12:
    pthread_mutex_unlock(v3);
    V_LOCK();
    LOWORD(v24) = -21260;
    HIWORD(v24) = (unsigned int)&unk_13CDBC >> 16;
    logfmt_raw(v62, 0x1000u, 0, v24, "rpc2_job_decode");
    V_UNLOCK();
    LOWORD(v25) = 13488;
    HIWORD(v25) = (unsigned int)"ction_to_pool" >> 16;
    zlog(*v15, v25, 163, "rpc2_job_decode", 15, 453, 80, v62);
    return 0;
  }
  if ( !v17 )
    goto LABEL_20;
  sizea = v17 >> 1;
  mutex = (pthread_mutex_t *)(a2 + 1948);
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1948));
  ptr = malloc(sizea);
  if ( !hex2bin((int)ptr, (unsigned __int8 *)v56, sizea) )
  {
    V_LOCK();
    LOWORD(v40) = 13024;
    HIWORD(v40) = (unsigned int)"_host_side_baud" >> 16;
    logfmt_raw(v62, 0x1000u, 0, v40);
    V_UNLOCK();
    v41 = *v15;
    v42 = 404;
    goto LABEL_28;
  }
  *(_DWORD *)(a2 + 1924) = sizea;
  v44 = malloc(sizea);
  *(_DWORD *)(a2 + 1916) = v44;
  if ( !v44 )
  {
    V_LOCK();
    LOWORD(v51) = 13044;
    HIWORD(v51) = (unsigned int)" baud detected as %d" >> 16;
    logfmt_raw(v62, 0x1000u, 0, v51);
    V_UNLOCK();
    v41 = *v15;
    v42 = 412;
LABEL_28:
    LOWORD(v43) = 13488;
    HIWORD(v43) = (unsigned int)"ction_to_pool" >> 16;
    zlog(v41, v43, 163, "rpc2_job_decode", 15, v42, 100, v62);
    if ( ptr )
      free(ptr);
    goto LABEL_30;
  }
  memcpy(v44, ptr, sizea);
  free(ptr);
  LOWORD(v45) = 14028;
  HIWORD(v45) = (unsigned int)"lost" >> 16;
  v46 = json_object_get(a1, v45);
  if ( !v46 )
  {
    V_LOCK();
    LOWORD(v52) = 14040;
    HIWORD(v52) = (unsigned int)" internet for %d seconds" >> 16;
    logfmt_raw(v62, 0x1000u, 0, v52);
    V_UNLOCK();
    LOWORD(v53) = 13488;
    HIWORD(v53) = (unsigned int)"ction_to_pool" >> 16;
    zlog(*v15, v53, 163, "rpc2_job_decode", 15, 422, 100, v62);
LABEL_30:
    pthread_mutex_unlock(mutex);
    goto LABEL_12;
  }
  v47 = json_integer_value(v46);
  LODWORD(v48) = sub_12D7DC(v47);
  v49 = *(void **)(a2 + 1944);
  *(_QWORD *)(a2 + 1976) = v48;
  if ( v49 )
    free(v49);
  *(_DWORD *)(a2 + 1944) = _strdup((const char *)s);
  pthread_mutex_unlock(mutex);
LABEL_20:
  if ( !*(_DWORD *)(a2 + 1916) )
  {
    V_LOCK();
    LOWORD(v50) = 13056;
    HIWORD(v50) = (unsigned int)"ed as %d" >> 16;
    logfmt_raw(v62, 0x1000u, 0, v50);
    V_UNLOCK();
    v20 = *v15;
    v21 = 80;
    v22 = 435;
    goto LABEL_11;
  }
  memcpy((void *)(a2 + 456), *(const void **)(a2 + 1916), *(_DWORD *)(a2 + 1924));
  memset((void *)(a2 + 1480), 255, 0x20u);
  diff_to_target_grin29((_QWORD *)(a2 + 1480));
  v37 = *(void **)(a2 + 1600);
  *(_QWORD *)(a2 + 1576) = *(_QWORD *)(a2 + 1976);
  if ( v37 )
    free(v37);
  v38 = _strdup((const char *)s);
  v39 = *(void **)(a2 + 1916);
  *(_DWORD *)(a2 + 1600) = v38;
  *(_DWORD *)(a2 + 1592) = 29;
  *(_DWORD *)(a2 + 1596) = v57;
  if ( v39 )
    free(v39);
  pthread_mutex_unlock(v3);
  return v2;
}
