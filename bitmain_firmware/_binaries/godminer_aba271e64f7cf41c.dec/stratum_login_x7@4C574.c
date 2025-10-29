int __fastcall stratum_login_x7(int a1, int *a2)
{
  size_t v2; // r4
  size_t v3; // r0
  json_t *v4; // r0
  json_t *v5; // r0
  int v6; // r5
  json_t *v7; // r0
  const char *v8; // r0
  json_t *v9; // r0
  const char *v10; // r0
  json_t *v11; // r0
  const char *v12; // r0
  json_t *v13; // r0
  const char *v14; // r0
  char v18[40]; // [sp+3Ch] [bp-11E8h] BYREF
  _DWORD v19[23]; // [sp+103Ch] [bp-1E8h] BYREF
  int v20; // [sp+1098h] [bp-18Ch] BYREF
  _DWORD v21[7]; // [sp+1138h] [bp-ECh] BYREF
  int v22; // [sp+1154h] [bp-D0h]
  _DWORD v23[7]; // [sp+1158h] [bp-CCh] BYREF
  int v24; // [sp+1174h] [bp-B0h]
  _DWORD v25[7]; // [sp+1178h] [bp-ACh] BYREF
  int v26; // [sp+1194h] [bp-90h]
  _DWORD v27[7]; // [sp+1198h] [bp-8Ch] BYREF
  int v28; // [sp+11B4h] [bp-70h]
  _DWORD v29[7]; // [sp+11B8h] [bp-6Ch] BYREF
  int v30; // [sp+11D4h] [bp-50h]
  _DWORD v31[7]; // [sp+11D8h] [bp-4Ch] BYREF
  int v32; // [sp+11F4h] [bp-30h]
  json_t *v33; // [sp+11F8h] [bp-2Ch]
  const json_t *v34; // [sp+11FCh] [bp-28h]
  unsigned __int8 v35; // [sp+1203h] [bp-21h]
  char *s; // [sp+1204h] [bp-20h]
  void *ptr; // [sp+1208h] [bp-1Ch]
  const json_t *v38; // [sp+120Ch] [bp-18h]
  int v39; // [sp+1210h] [bp-14h]
  const json_t *v40; // [sp+1214h] [bp-10h]

  v38 = 0;
  v35 = 0;
  v39 = 0;
  *((_BYTE *)a2 + 1656) = 1;
  v2 = strlen((const char *)a2[4]);
  v3 = strlen((const char *)a2[5]);
  s = (char *)malloc(v2 + v3 + 128);
  sprintf(
    s,
    "{\"id\": %d, \"jsonrpc\":\"2.0\", \"method\":\"login\", \"params\": {\"login\":\"%s\", \"pass\":\"%s\", \"agent\":\""
    "USER_AGENT\", \"algo\":[\"rx/0\"]}}",
    1,
    (const char *)a2[4],
    (const char *)a2[5]);
  if ( (*(unsigned __int8 (__fastcall **)(int *, char *))(a1 + 12))(a2, s) == 1 )
  {
    while ( 1 )
    {
      ptr = (void *)(*(int (__fastcall **)(int *))(a1 + 8))(a2);
      if ( !ptr )
        break;
      if ( (*(unsigned __int8 (__fastcall **)(int, int *, void *))(a1 + 20))(a1, a2, ptr) != 1 )
      {
        v38 = json_loads((int)ptr, 0, (json_error_t *)v19);
        if ( ptr )
          free(ptr);
        if ( v38 )
        {
          v4 = json_object_get(v38, "id");
          v39 = json_integer_value((int)v4);
          if ( v39 == 1 )
          {
            v40 = json_object_get(v38, "error");
            if ( !v40 || *(_DWORD *)v40 == 7 )
            {
              v34 = json_object_get(v38, "result");
              if ( v34 && !*(_DWORD *)v34 )
              {
                v9 = json_object_get(v34, "status");
                v10 = json_string_value(v9);
                if ( !strcasecmp(v10, "OK") )
                {
                  pthread_mutex_lock((pthread_mutex_t *)(a2 + 415));
                  v11 = json_object_get(v34, "id");
                  v12 = json_string_value(v11);
                  strcpy((char *)a2 + 1684, v12);
                  v13 = json_object_get(v34, "id");
                  v14 = json_string_value(v13);
                  if ( strlen(v14) > 0x3F )
                  {
                    V_LOCK();
                    sub_4BC40((int)v29, *a2);
                    logfmt_raw(
                      v18,
                      0x1000u,
                      0,
                      v30,
                      v29[0],
                      v29[1],
                      v29[2],
                      v29[3],
                      v29[4],
                      v29[5],
                      v29[6],
                      v30,
                      "rpc id len larger than 64!");
                    V_UNLOCK();
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release"
                      "/build/godminer-origin_godminer-branch1/frontend/frontend_x7/frontend_x7.c",
                      172,
                      "stratum_login_x7",
                      16,
                      155,
                      80,
                      v18);
                  }
                  pthread_mutex_unlock((pthread_mutex_t *)(a2 + 415));
                  v33 = json_object_get(v34, "job");
                  if ( v33 && !*(_DWORD *)v33 )
                  {
                    if ( (*(int (__fastcall **)(int, int *, json_t *))(a1 + 48))(a1, a2, v33) )
                      pool_tset((int)a2, (unsigned __int8 *)a2 + 1916, 1);
                    else
                      pool_tclear((int)a2, (unsigned __int8 *)a2 + 1916, 0);
                    a2[480] = 2;
                    v35 = 1;
                  }
                  else
                  {
                    V_LOCK();
                    sub_4BC40((int)v31, *a2);
                    logfmt_raw(
                      v18,
                      0x1000u,
                      0,
                      v32,
                      v31[0],
                      v31[1],
                      v31[2],
                      v31[3],
                      v31[4],
                      v31[5],
                      v31[6],
                      v32,
                      "login failed result job object error");
                    V_UNLOCK();
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release"
                      "/build/godminer-origin_godminer-branch1/frontend/frontend_x7/frontend_x7.c",
                      172,
                      "stratum_login_x7",
                      16,
                      161,
                      80,
                      v18);
                  }
                }
                else
                {
                  V_LOCK();
                  sub_4BC40((int)v27, *a2);
                  logfmt_raw(
                    v18,
                    0x1000u,
                    0,
                    v28,
                    v27[0],
                    v27[1],
                    v27[2],
                    v27[3],
                    v27[4],
                    v27[5],
                    v27[6],
                    v28,
                    "login failed, status error");
                  V_UNLOCK();
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/b"
                    "uild/godminer-origin_godminer-branch1/frontend/frontend_x7/frontend_x7.c",
                    172,
                    "stratum_login_x7",
                    16,
                    148,
                    80,
                    v18);
                }
              }
              else
              {
                V_LOCK();
                sub_4BC40((int)v25, *a2);
                logfmt_raw(
                  v18,
                  0x1000u,
                  0,
                  v26,
                  v25[0],
                  v25[1],
                  v25[2],
                  v25[3],
                  v25[4],
                  v25[5],
                  v25[6],
                  v26,
                  "login failed, result object error");
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/bui"
                  "ld/godminer-origin_godminer-branch1/frontend/frontend_x7/frontend_x7.c",
                  172,
                  "stratum_login_x7",
                  16,
                  143,
                  80,
                  v18);
              }
            }
            else
            {
              V_LOCK();
              sub_4BC40((int)v23, *a2);
              v5 = json_object_get(v40, "code");
              v6 = json_integer_value((int)v5);
              v7 = json_object_get(v40, "message");
              v8 = json_string_value(v7);
              logfmt_raw(
                v18,
                0x1000u,
                0,
                v24,
                v23[0],
                v23[1],
                v23[2],
                v23[3],
                v23[4],
                v23[5],
                v23[6],
                v24,
                "login failed, reason: %d %s",
                v6,
                v8);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build"
                "/godminer-origin_godminer-branch1/frontend/frontend_x7/frontend_x7.c",
                172,
                "stratum_login_x7",
                16,
                136,
                20,
                v18);
            }
          }
          else
          {
            V_LOCK();
            sub_4BC40((int)v21, *a2);
            logfmt_raw(
              v18,
              0x1000u,
              0,
              v22,
              v21[0],
              v21[1],
              v21[2],
              v21[3],
              v21[4],
              v21[5],
              v21[6],
              v22,
              "login failed, req id %d != 1",
              v39);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/g"
              "odminer-origin_godminer-branch1/frontend/frontend_x7/frontend_x7.c",
              172,
              "stratum_login_x7",
              16,
              129,
              80,
              v18);
          }
        }
        else
        {
          V_LOCK();
          logfmt_raw(v18, 0x1000u, 0, "JSON decode failed(%d): %s", v19[0], &v20);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/frontend/frontend_x7/frontend_x7.c",
            172,
            "stratum_login_x7",
            16,
            123,
            100,
            v18);
        }
        break;
      }
      free(ptr);
    }
  }
  if ( s )
    free(s);
  if ( v38 )
    sub_4BBD8((int)v38);
  return v35;
}
