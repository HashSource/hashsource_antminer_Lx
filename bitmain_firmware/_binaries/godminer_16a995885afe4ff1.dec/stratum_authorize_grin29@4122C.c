int __fastcall stratum_authorize_grin29(int a1, int a2)
{
  const char *v2; // r8
  const char *v5; // r9
  size_t v6; // r6
  size_t v7; // r0
  char *v8; // r7
  int v9; // r8
  size_t v10; // r6
  size_t v11; // r0
  void *v12; // r6
  double *v14; // r9
  _DWORD *v15; // r6
  _DWORD *v16; // r10
  int v17; // r0
  unsigned int *v18; // r3
  unsigned int v19; // r2
  unsigned int v20; // r2
  _DWORD *v21; // r10
  int v22; // r6
  int v23; // r10
  int v24; // r0
  void *v25; // r6
  double *v26; // r0
  double *v27; // r8
  int v28; // r0
  unsigned int *v29; // r3
  unsigned int v30; // r2
  unsigned int v31; // r2
  _DWORD v32[23]; // [sp+14h] [bp-10FCh] BYREF
  _BYTE v33[160]; // [sp+70h] [bp-10A0h] BYREF
  char v34[4096]; // [sp+110h] [bp-1000h] BYREF

  v2 = *(const char **)(a2 + 12);
  v5 = *(const char **)(a2 + 16);
  v6 = strlen(v2);
  v7 = v6 + strlen(v5);
  if ( *(_BYTE *)(a2 + 1824) )
  {
    v8 = (char *)malloc(v7 + 300);
    sprintf(
      v8,
      "{\"id\": \"0\", \"jsonrpc\": \"2.0\", \"method\": \"login\", \"params\": {\"login\": \"%s\", \"pass\": \"%s\", \"a"
      "gent\": \"%s\"}}",
      v2,
      v5,
      "GodMiner/1.0.0");
  }
  else
  {
    v8 = (char *)malloc(v7 + 80);
    sprintf(v8, "{\"id\": 2, \"method\": \"mining.authorize\", \"params\": [\"%s\", \"%s\"]}", v2, v5);
  }
  v9 = (*(int (__fastcall **)(int, char *))(a1 + 16))(a2, v8);
  if ( !v9 )
  {
LABEL_11:
    free(v8);
    return v9;
  }
  if ( *(_BYTE *)(a2 + 1824) )
  {
    v10 = strlen(*(const char **)(a2 + 12));
    v11 = strlen(*(const char **)(a2 + 16));
    memset(v8, 0, v10 + v11 + 300);
    strcpy(v8, "{\"id\": \"0\", \"jsonrpc\": \"2.0\", \"method\": \"getjobtemplate\", \"params\": null}");
    if ( !(*(int (__fastcall **)(int, char *))(a1 + 16))(a2, v8) )
    {
      v9 = 0;
      free(v8);
      return v9;
    }
  }
  while ( 1 )
  {
    v12 = (void *)(*(int (__fastcall **)(int))(a1 + 12))(a2);
    if ( !v12 )
    {
      v9 = 0;
      goto LABEL_11;
    }
    if ( !(*(int (**)(void))(a1 + 24))() )
      break;
    free(v12);
  }
  v14 = json_loads((int)v12, 0, (char *)v32);
  free(v12);
  if ( !v14 )
  {
    v9 = 0;
    V_LOCK();
    logfmt_raw(v34, 0x1000u, 0, "JSON decode failed(%d): %s", v32[0], v33);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/frontend/frontend_grin29/frontend_grin29.c",
      178,
      "stratum_authorize_grin29",
      24,
      875,
      100,
      v34);
    free(v8);
    return v9;
  }
  v15 = (_DWORD *)json_object_get(v14, "result");
  v16 = (_DWORD *)json_object_get(v14, "error");
  v17 = json_object_get(v14, "id");
  if ( (unsigned int)json_integer_value(v17) == 2 && (!v15 || *v15 == 6 || v16 && *v16 != 7) )
  {
    V_LOCK();
    logfmt_raw(v34, 0x1000u, 0, "Stratum authentication failed");
    V_UNLOCK();
    v9 = 0;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/frontend/frontend_grin29/frontend_grin29.c",
      178,
      "stratum_authorize_grin29",
      24,
      885,
      100,
      v34);
    goto LABEL_20;
  }
  if ( *(_BYTE *)(a2 + 1824) )
  {
    if ( !rpc2_login_decode(v14, a2) )
    {
      v9 = 0;
      goto LABEL_20;
    }
    v21 = (_DWORD *)json_object_get(v15, "job");
    pthread_mutex_lock((pthread_mutex_t *)(a2 + 1760));
    if ( v21 )
      rpc2_job_decode(v21, a2);
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1760));
  }
  strcpy(v8, "{\"id\": 3, \"method\": \"mining.extranonce.subscribe\", \"params\": []}");
  v22 = (*(int (__fastcall **)(int, char *))(a1 + 16))(a2, v8);
  if ( v22 )
  {
    v23 = socket_full(*(_DWORD *)(a2 + 32), 3);
    if ( v23 )
    {
      v24 = (*(int (__fastcall **)(int))(a1 + 12))(a2);
      v25 = (void *)v24;
      if ( v24 )
      {
        v26 = json_loads(v24, 0, (char *)v32);
        v27 = v26;
        if ( v26 )
        {
          v28 = json_object_get(v26, "id");
          if ( json_integer_value(v28) != 3 && !(*(int (__fastcall **)(int, int, void *))(a1 + 24))(a1, a2, v25) )
          {
            V_LOCK();
            logfmt_raw(v34, 0x1000u, 0, "Stratum answer id is not correct!");
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release"
              "/build/godminer-origin_master/frontend/frontend_grin29/frontend_grin29.c",
              178,
              "stratum_authorize_grin29",
              24,
              921,
              80,
              v34);
          }
          if ( *((_DWORD *)v27 + 1) != -1 )
          {
            v29 = (unsigned int *)v27 + 1;
            __dmb(0xBu);
            do
            {
              v30 = __ldrex(v29);
              v31 = v30 - 1;
            }
            while ( __strex(v31, v29) );
            if ( !v31 )
              json_delete(v27);
          }
        }
        else
        {
          V_LOCK();
          logfmt_raw(v34, 0x1000u, 0, "JSON decode failed(%d): %s", v32[0], v33);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/b"
            "uild/godminer-origin_master/frontend/frontend_grin29/frontend_grin29.c",
            178,
            "stratum_authorize_grin29",
            24,
            916,
            80,
            v34);
        }
        v9 = v23;
        free(v25);
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(v34, 0x1000u, 0, "stratum extranonce subscribe timed out");
      V_UNLOCK();
      v9 = v22;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build"
        "/godminer-origin_master/frontend/frontend_grin29/frontend_grin29.c",
        178,
        "stratum_authorize_grin29",
        24,
        908,
        20,
        v34);
    }
  }
LABEL_20:
  free(v8);
  if ( *((_DWORD *)v14 + 1) == -1 )
    return v9;
  v18 = (unsigned int *)v14 + 1;
  __dmb(0xBu);
  do
  {
    v19 = __ldrex(v18);
    v20 = v19 - 1;
  }
  while ( __strex(v20, v18) );
  if ( v20 )
    return v9;
  json_delete(v14);
  return v9;
}
