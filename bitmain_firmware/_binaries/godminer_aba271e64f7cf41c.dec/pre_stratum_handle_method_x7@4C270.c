int __fastcall pre_stratum_handle_method_x7(int a1, int a2, int a3, _DWORD *a4)
{
  json_t *v4; // r0
  char v10[16]; // [sp+24h] [bp-1110h] BYREF
  _DWORD v11[23]; // [sp+1024h] [bp-110h] BYREF
  int v12; // [sp+1080h] [bp-B4h] BYREF
  json_t *v13; // [sp+1120h] [bp-14h]
  char *s1; // [sp+1124h] [bp-10h]
  unsigned __int8 v15; // [sp+112Bh] [bp-9h]
  const json_t *v16; // [sp+112Ch] [bp-8h]

  v15 = 0;
  v16 = json_loads(a3, 0, (json_error_t *)v11);
  if ( v16 )
  {
    v4 = json_object_get(v16, "method");
    s1 = (char *)json_string_value(v4);
    if ( s1 )
    {
      v13 = json_object_get(v16, "params");
      if ( v13 )
      {
        if ( !strcasecmp(s1, "job") )
        {
          v15 = (*(int (__fastcall **)(int, int, json_t *))(a1 + 48))(a1, a2, v13);
          if ( v15 )
          {
            *a4 = "notify";
            pool_tset(a2, (unsigned __int8 *)(a2 + 1916), 1);
          }
          else
          {
            pool_tclear(a2, (unsigned __int8 *)(a2 + 1916), 0);
          }
        }
        else if ( v15 != 1 )
        {
          V_LOCK();
          logfmt_raw(v10, 0x1000u, 0, "unknown stratum method %s!", a3);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/frontend/frontend_x7/frontend_x7.c",
            172,
            "pre_stratum_handle_method_x7",
            28,
            83,
            80,
            v10);
        }
      }
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, "JSON decode failed(%d): %s", v11[0], &v12);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/frontend/frontend_x7/frontend_x7.c",
      172,
      "pre_stratum_handle_method_x7",
      28,
      60,
      100,
      v10);
  }
  if ( v16 )
    sub_4BBD8((int)v16);
  return v15;
}
