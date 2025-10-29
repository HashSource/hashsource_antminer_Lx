int __fastcall stratum_handle_method_x7(int a1, int a2, int a3)
{
  json_t *v3; // r0
  char v8[16]; // [sp+24h] [bp-1110h] BYREF
  _DWORD v9[23]; // [sp+1024h] [bp-110h] BYREF
  int v10; // [sp+1080h] [bp-B4h] BYREF
  json_t *v11; // [sp+1120h] [bp-14h]
  char *s1; // [sp+1124h] [bp-10h]
  unsigned __int8 v13; // [sp+112Bh] [bp-9h]
  const json_t *v14; // [sp+112Ch] [bp-8h]

  v13 = 0;
  v14 = json_loads(a3, 0, (json_error_t *)v9);
  if ( v14 )
  {
    v3 = json_object_get(v14, "method");
    s1 = (char *)json_string_value(v3);
    if ( s1 )
    {
      v11 = json_object_get(v14, "params");
      if ( v11 )
      {
        if ( !strcasecmp(s1, "job") )
        {
          v13 = (*(int (__fastcall **)(int, int, json_t *))(a1 + 48))(a1, a2, v11);
          if ( v13 )
            pool_tset(a2, (unsigned __int8 *)(a2 + 1916), 1);
          else
            pool_tclear(a2, (unsigned __int8 *)(a2 + 1916), 0);
        }
        else if ( v13 != 1 )
        {
          V_LOCK();
          logfmt_raw(v8, 0x1000u, 0, "unknown stratum method %s!", a3);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/frontend/frontend_x7/frontend_x7.c",
            172,
            "stratum_handle_method_x7",
            24,
            42,
            80,
            v8);
        }
      }
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, "JSON decode failed(%d): %s", v9[0], &v10);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/frontend/frontend_x7/frontend_x7.c",
      172,
      "stratum_handle_method_x7",
      24,
      20,
      100,
      v8);
  }
  if ( v14 )
    sub_4BBD8((int)v14);
  return v13;
}
