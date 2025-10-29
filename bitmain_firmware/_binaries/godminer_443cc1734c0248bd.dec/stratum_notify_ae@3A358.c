int __fastcall stratum_notify_ae(int a1, pthread_mutex_t *a2, _DWORD *a3)
{
  _DWORD *v5; // r0
  const char *v6; // r8
  _DWORD *v7; // r0
  char *v8; // r6
  _DWORD *v9; // r0
  unsigned int v10; // r10
  _DWORD *v11; // r0
  char *v12; // r7
  _DWORD *v13; // r0
  bool v14; // r5
  _BOOL4 v15; // r3
  int v16; // r4
  void *nusers; // r0
  char *v19; // r6
  __int64 v20; // r2
  unsigned int lock; // r12
  unsigned int count; // r1
  int owner; // r2
  int spins; // r1
  unsigned int kind; // lr
  unsigned int v26; // r12
  int v27; // r2
  unsigned int v28; // r1
  size_t v29; // r0
  char v30[4100]; // [sp+10h] [bp-1004h] BYREF

  v5 = json_array_get(a3, 0);
  v6 = (const char *)json_string_value(v5);
  v7 = json_array_get(a3, 1u);
  v8 = (char *)json_string_value(v7);
  v9 = json_array_get(a3, 2u);
  v10 = json_integer_value((int)v9);
  v11 = json_array_get(a3, 3u);
  v12 = (char *)json_string_value(v11);
  v13 = json_array_get(a3, 4u);
  v14 = (char)v13;
  if ( v13 )
    v14 = *json_array_get(a3, 4u) == 5;
  v15 = v8 == 0;
  if ( !v6 )
    v15 = 1;
  if ( v12 )
    v16 = v15;
  else
    v16 = 1;
  if ( v16 || strlen(v8) != 64 || strlen(v12) != 8 )
  {
    V_LOCK();
    logfmt_raw(v30, 0x1000u, 0, "Stratum notify: invalid parameters");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_ae/frontend_ae.c",
      155,
      "stratum_notify_ae",
      17,
      137,
      100,
      v30);
    return 0;
  }
  pthread_mutex_lock(a2 + 73);
  nusers = (void *)a2[3].__nusers;
  if ( nusers )
  {
    free(nusers);
    a2[3].__nusers = 0;
  }
  a2[3].__nusers = (unsigned int)_strdup(v6);
  hex2bin((int)&a2[3].__spins, (unsigned __int8 *)v8, 32);
  a2[75].__count = v10;
  hex2bin((int)&a2[14], (unsigned __int8 *)v12, 4);
  v19 = (char *)a2[66].__nusers;
  v20 = *(_QWORD *)&a2[82].__lock;
  a2[18].__size[4] = v14;
  *((_QWORD *)&a2[18].__align + 1) = v20;
  if ( !v19 )
  {
    if ( strlen(v6) <= 0x1F )
      goto LABEL_18;
    goto LABEL_20;
  }
  if ( !strcmp(v19, v6) )
  {
    V_LOCK();
    logfmt_raw(v30, 0x1000u, 0, "Stratum notify: new job's job_id doesnot change, %s, %s", a2[66].__nusers, v6);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_ae/frontend_ae.c",
      155,
      "stratum_notify_ae",
      17,
      152,
      20,
      v30);
    if ( strlen(v6) <= 0x1F )
    {
LABEL_21:
      v19 = (char *)a2[66].__nusers;
      if ( !v19 )
        goto LABEL_18;
      goto LABEL_17;
    }
LABEL_20:
    V_LOCK();
    v29 = strlen(v6);
    logfmt_raw(v30, 0x1000u, 0, "Stratum notify: job_id len = %s, len %d >= 32", v6, v29);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_ae/frontend_ae.c",
      155,
      "stratum_notify_ae",
      17,
      155,
      100,
      v30);
    goto LABEL_21;
  }
  if ( strlen(v6) > 0x1F )
    goto LABEL_20;
LABEL_17:
  free(v19);
  a2[66].__nusers = 0;
LABEL_18:
  a2[66].__nusers = (unsigned int)_strdup(v6);
  lock = a2[4].__lock;
  count = a2[4].__count;
  owner = a2[4].__owner;
  a2[19].__lock = a2[3].__spins;
  a2[19].__count = lock;
  a2[19].__owner = count;
  a2[19].__kind = owner;
  spins = a2[4].__spins;
  kind = a2[4].__kind;
  v26 = a2[4].__nusers;
  a2[20].__count = a2[5].__lock;
  v27 = a2->__lock;
  a2[20].__lock = spins;
  v28 = a2[75].__count;
  a2[19].__nusers = kind;
  a2[19].__spins = v26;
  a2[66].__kind = v28;
  *((_QWORD *)&a2[18].__align + 2) = v27;
  pthread_mutex_unlock(a2 + 73);
  return 1;
}
