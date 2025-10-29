int __fastcall stratum_handle_response_x7(int a1, int a2, int a3)
{
  json_t *v3; // r0
  const char *v4; // r0
  json_t *v5; // r0
  unsigned __int8 *v6; // r0
  char v10[32]; // [sp+24h] [bp-1120h] BYREF
  _DWORD v11[23]; // [sp+1024h] [bp-120h] BYREF
  _DWORD v12[41]; // [sp+1080h] [bp-C4h] BYREF
  unsigned __int8 v13; // [sp+1127h] [bp-1Dh]
  json_t *v14; // [sp+1128h] [bp-1Ch]
  const json_t *v15; // [sp+112Ch] [bp-18h]
  const json_t *v16; // [sp+1130h] [bp-14h]
  const json_t *v17; // [sp+1134h] [bp-10h]
  json_t *v18; // [sp+1138h] [bp-Ch]
  json_t *v19; // [sp+113Ch] [bp-8h]

  v13 = 0;
  v15 = json_loads(a2, 0, (json_error_t *)v11);
  if ( !v15 )
  {
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, "JSON decode failed(%d): %s", v11[0], v12);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/frontend/frontend_x7/frontend_x7.c",
      172,
      "stratum_handle_response_x7",
      26,
      380,
      40,
      v10);
    goto LABEL_26;
  }
  v14 = json_object_get(v15, "id");
  v18 = json_object_get(v15, "jsonrpc");
  v17 = json_object_get(v15, "error");
  v16 = json_object_get(v15, "result");
  v19 = json_object_get(v16, "job");
  if ( v19 )
  {
    v13 = (*(int (__fastcall **)(int, int, json_t *))(a1 + 48))(a1, a3, v19);
    if ( v13 )
      pool_tset(a3, (unsigned __int8 *)(a3 + 1916), 1);
    else
      pool_tclear(a3, (unsigned __int8 *)(a3 + 1916), 0);
  }
  else
  {
    if ( !v14 || *(_DWORD *)v14 == 7 )
    {
      V_LOCK();
      logfmt_raw(v10, 0x1000u, 0, "%s json id is null!", "stratum_handle_response_x7");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/frontend/frontend_x7/frontend_x7.c",
        172,
        "stratum_handle_response_x7",
        26,
        400,
        20,
        v10);
      goto LABEL_26;
    }
    if ( !v17 )
    {
      V_LOCK();
      logfmt_raw(v10, 0x1000u, 0, "%s no error value!", "stratum_handle_response_x7");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/frontend/frontend_x7/frontend_x7.c",
        172,
        "stratum_handle_response_x7",
        26,
        410,
        20,
        v10);
      goto LABEL_26;
    }
    if ( *(_DWORD *)v17 == 7 )
    {
      if ( !v16
        || *(_DWORD *)v16
        || !json_object_get(v16, "status")
        || *(_DWORD *)json_object_get(v16, "status") != 2
        || (v3 = json_object_get(v16, "status"), v4 = json_string_value(v3), strcasecmp(v4, "OK")) )
      {
        V_LOCK();
        logfmt_raw(v10, 0x1000u, 0, "%s result value error!", "stratum_handle_response_x7");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/frontend/frontend_x7/frontend_x7.c",
          172,
          "stratum_handle_response_x7",
          26,
          419,
          20,
          v10);
        goto LABEL_26;
      }
      share_result(1, 0, 0, (double *)a3);
    }
    else
    {
      if ( *(_DWORD *)v17 || !json_object_get(v17, "message") || *(_DWORD *)json_object_get(v17, "message") != 2 )
      {
        V_LOCK();
        logfmt_raw(v10, 0x1000u, 0, "%s error value error!", "stratum_handle_response_x7");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/frontend/frontend_x7/frontend_x7.c",
          172,
          "stratum_handle_response_x7",
          26,
          428,
          20,
          v10);
        goto LABEL_26;
      }
      v5 = json_object_get(v17, "message");
      v6 = (unsigned __int8 *)json_string_value(v5);
      share_result(0, 0, v6, (double *)a3);
      v12[40] = json_integer_value((int)v14);
    }
    v13 = 1;
  }
LABEL_26:
  if ( v15 )
    sub_4BBD8((int)v15);
  return v13;
}
