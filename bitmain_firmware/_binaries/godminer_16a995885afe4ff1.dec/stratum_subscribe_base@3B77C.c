int __fastcall stratum_subscribe_base(int a1, int a2)
{
  int v2; // r4
  double *v5; // r7
  void *v6; // r9
  const char *v7; // r0
  size_t v8; // r0
  char *v9; // r0
  char *v10; // r6
  const char *v11; // r1
  size_t v12; // r2
  int v13; // r2
  int v15; // r0
  _DWORD *v16; // r11
  int v17; // r0
  int v18; // r10
  _BOOL4 v19; // r2
  int v20; // r10
  unsigned int *v21; // r3
  unsigned int v22; // r2
  unsigned int v23; // r2
  unsigned int *v24; // r3
  unsigned int v25; // r2
  unsigned int v26; // r2
  const char *v27; // r0
  int v28; // r11
  int v29; // [sp+4h] [bp-1120h]
  _DWORD *v30; // [sp+18h] [bp-110Ch]
  char v31[92]; // [sp+24h] [bp-1100h] BYREF
  _BYTE v32[160]; // [sp+80h] [bp-10A4h] BYREF
  char v33[4100]; // [sp+120h] [bp-1004h] BYREF

  v2 = *(unsigned __int8 *)(a2 + 1824);
  if ( !*(_BYTE *)(a2 + 1824) )
  {
    v5 = (double *)*(unsigned __int8 *)(a2 + 1824);
    v6 = v5;
    while ( 1 )
    {
      v7 = *(const char **)(a2 + 68);
      v8 = v7 ? strlen(v7) + 128 : 128;
      v9 = (char *)malloc(v8);
      v10 = v9;
      if ( v2 )
      {
        v11 = "{\"id\": 1, \"method\": \"mining.subscribe\", \"params\": [\"ckbminer-v1.0.0\", null]}";
        v12 = 77;
      }
      else
      {
        v11 = "{\"id\": 1, \"method\": \"mining.subscribe\", \"params\": [\"GodMiner/1.0.0\", null]}";
        v12 = 76;
      }
      memcpy(v9, v11, v12);
      if ( !(*(int (__fastcall **)(int, char *))(a1 + 16))(a2, v10) )
        break;
      if ( !socket_full(*(_DWORD *)(a2 + 32), 30) )
      {
        V_LOCK();
        logfmt_raw(v33, 0x1000u, 0, "stratum_subscribe timed out");
        V_UNLOCK();
        v13 = 136;
        goto LABEL_11;
      }
      v15 = (*(int (__fastcall **)(int))(a1 + 12))(a2);
      v6 = (void *)v15;
      if ( !v15 )
        goto LABEL_12;
      v5 = json_loads(v15, 0, v31);
      free(v6);
      if ( v5 )
      {
        v16 = (_DWORD *)json_object_get(v5, "result");
        v30 = (_DWORD *)json_object_get(v5, "error");
        v17 = json_object_get(v5, "id");
        v18 = json_integer_value(v17);
        v19 = v16 == 0;
        if ( v18 != 1 )
          v19 = 1;
        if ( v19 || *v16 == 7 )
        {
          if ( !v2 )
            goto LABEL_41;
          if ( v30 )
            goto LABEL_28;
          v10 = (char *)malloc(0x11u);
          if ( v10 )
            strcpy(v10, "(unknown reason)");
LABEL_29:
          V_LOCK();
          v29 = v18;
          v20 = 0;
          logfmt_raw(v33, 0x1000u, 0, "JSON-RPC call failed: %s, req_id=%d", v10, v29);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/b"
            "uild/godminer-origin_master/frontend/frontend_base.c",
            160,
            "stratum_subscribe_base",
            22,
            162,
            100,
            v33);
        }
        else
        {
          if ( v30 && *v30 != 7 )
          {
            if ( !v2 )
            {
LABEL_41:
              v20 = v2;
              if ( v10 )
                goto LABEL_42;
              goto LABEL_31;
            }
LABEL_28:
            v10 = json_dumps(v30, 3);
            goto LABEL_29;
          }
          v20 = (*(int (__fastcall **)(int, int, _DWORD *, int))(a1 + 64))(a1, a2, v16, 1);
          if ( v20 )
          {
            v27 = *(const char **)(a2 + 28);
            *(_DWORD *)(a2 + 2088) = 2;
            if ( v27 )
            {
              if ( strstr(v27, "nicehash") )
              {
                *(_DWORD *)(a2 + 2088) = 3;
                sprintf(v10, "{\"id\": %d, \"method\": \"mining.extranonce.subscribe\", \"params\": []}", 2);
                v28 = (*(int (__fastcall **)(int, char *))(a1 + 16))(a2, v10);
                if ( v28 )
                {
                  v20 = socket_full(*(_DWORD *)(a2 + 32), 30);
                  if ( v20 )
                  {
                    (*(void (__fastcall **)(int))(a1 + 12))(a2);
                    free(v10);
                    goto LABEL_31;
                  }
                  v20 = v28;
                }
LABEL_42:
                free(v10);
LABEL_31:
                if ( *((_DWORD *)v5 + 1) != -1 )
                {
                  v21 = (unsigned int *)v5 + 1;
                  __dmb(0xBu);
                  do
                  {
                    v22 = __ldrex(v21);
                    v23 = v22 - 1;
                  }
                  while ( __strex(v23, v21) );
                  if ( !v23 )
LABEL_47:
                    json_delete(v5);
                }
                if ( v20 )
                  return 1;
                goto LABEL_15;
              }
            }
          }
        }
        if ( v10 )
          goto LABEL_42;
        goto LABEL_31;
      }
      V_LOCK();
      logfmt_raw(v33, 0x1000u, 0, "JSON decode failed(%d): %s", *(_DWORD *)v31, v32);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build"
        "/godminer-origin_master/frontend/frontend_base.c",
        160,
        "stratum_subscribe_base",
        22,
        147,
        100,
        v33);
      if ( v10 )
        free(v10);
LABEL_15:
      if ( v6 )
        v2 ^= 1u;
      else
        v2 = 0;
      if ( !v2 )
        return 0;
    }
    V_LOCK();
    logfmt_raw(v33, 0x1000u, 0, "stratum_subscribe send failed");
    V_UNLOCK();
    v13 = 131;
LABEL_11:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/frontend/frontend_base.c",
      160,
      "stratum_subscribe_base",
      22,
      v13,
      100,
      v33);
LABEL_12:
    if ( v10 )
    {
      free(v10);
      if ( v5 )
      {
        v20 = 0;
        goto LABEL_31;
      }
    }
    else if ( v5 )
    {
      if ( *((_DWORD *)v5 + 1) != -1 )
      {
        v24 = (unsigned int *)v5 + 1;
        __dmb(0xBu);
        do
        {
          v25 = __ldrex(v24);
          v26 = v25 - 1;
        }
        while ( __strex(v26, v24) );
        if ( !v26 )
        {
          v20 = 0;
          goto LABEL_47;
        }
      }
    }
    goto LABEL_15;
  }
  return 1;
}
