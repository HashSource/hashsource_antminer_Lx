int __fastcall stratum_notify_ae(int a1, int *a2, _DWORD *a3)
{
  _DWORD *v5; // r0
  const char *v6; // r8
  _DWORD *v7; // r0
  char *v8; // r6
  _DWORD *v9; // r0
  int v10; // r10
  _DWORD *v11; // r0
  char *v12; // r7
  _DWORD *v13; // r0
  bool v14; // r5
  _BOOL4 v15; // r3
  int v16; // r4
  void *v18; // r0
  char *v19; // r6
  __int64 v20; // r2
  int v21; // r12
  int v22; // r1
  int v23; // r2
  int v24; // r1
  int v25; // lr
  int v26; // r12
  int v27; // r2
  int v28; // r1
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
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/frontend/frontend_ae/frontend_ae.c",
      170,
      "stratum_notify_ae",
      17,
      137,
      100,
      v30);
    return 0;
  }
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 440));
  v18 = (void *)a2[22];
  if ( v18 )
  {
    free(v18);
    a2[22] = 0;
  }
  a2[22] = (int)_strdup(v6);
  hex2bin((int)(a2 + 23), (unsigned __int8 *)v8, 32);
  a2[453] = v10;
  hex2bin((int)(a2 + 84), (unsigned __int8 *)v12, 4);
  v19 = (char *)a2[400];
  v20 = *((_QWORD *)a2 + 247);
  *((_BYTE *)a2 + 436) = v14;
  *((_QWORD *)a2 + 55) = v20;
  if ( !v19 )
  {
    if ( strlen(v6) <= 0x1F )
      goto LABEL_18;
    goto LABEL_20;
  }
  if ( !strcmp(v19, v6) )
  {
    V_LOCK();
    logfmt_raw(v30, 0x1000u, 0, "Stratum notify: new job's job_id doesnot change, %s, %s", a2[400], v6);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/frontend/frontend_ae/frontend_ae.c",
      170,
      "stratum_notify_ae",
      17,
      152,
      20,
      v30);
    if ( strlen(v6) <= 0x1F )
    {
LABEL_21:
      v19 = (char *)a2[400];
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
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/frontend/frontend_ae/frontend_ae.c",
      170,
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
  a2[400] = 0;
LABEL_18:
  a2[400] = (int)_strdup(v6);
  v21 = a2[24];
  v22 = a2[25];
  v23 = a2[26];
  a2[114] = a2[23];
  a2[115] = v21;
  a2[116] = v22;
  a2[117] = v23;
  v24 = a2[29];
  v25 = a2[27];
  v26 = a2[28];
  a2[121] = a2[30];
  v27 = *a2;
  a2[120] = v24;
  v28 = a2[453];
  a2[118] = v25;
  a2[119] = v26;
  a2[399] = v28;
  *((_QWORD *)a2 + 56) = v27;
  pthread_mutex_unlock((pthread_mutex_t *)(a2 + 440));
  return 1;
}
