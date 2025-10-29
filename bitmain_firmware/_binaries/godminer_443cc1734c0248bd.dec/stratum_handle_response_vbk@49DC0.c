int __fastcall stratum_handle_response_vbk(int a1, int a2, int a3)
{
  _DWORD *v5; // r0
  _DWORD *v6; // r4
  int command_type; // r0
  int v8; // r5
  char *v9; // r7
  unsigned int *v10; // r3
  unsigned int v11; // r2
  unsigned int v12; // r2
  _DWORD *v14; // r0
  _DWORD *v15; // r0
  int v16; // r0
  char v17[92]; // [sp+14h] [bp-1100h] BYREF
  _BYTE v18[160]; // [sp+70h] [bp-10A4h] BYREF
  char v19[4100]; // [sp+110h] [bp-1004h] BYREF

  v5 = json_loads(a2, 0, v17);
  v6 = v5;
  if ( v5 )
  {
    command_type = get_command_type(v5);
    if ( command_type == 6 )
    {
      v8 = 1;
      v9 = 0;
    }
    else if ( command_type == 5 )
    {
      v14 = (_DWORD *)json_object_get(v6, "reason");
      v15 = (_DWORD *)json_object_get(v14, "data");
      v9 = (char *)json_string_value(v15);
      V_LOCK();
      logfmt_raw(
        v19,
        0x1000u,
        0,
        "%s, Submitting a share failed for the following reason: %s",
        "stratum_handle_response_vbk",
        v9);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_vbk/frontend_vbk.c",
        157,
        "stratum_handle_response_vbk",
        27,
        484,
        20,
        v19);
      v16 = strcmp(v9, "time-too-new");
      v8 = v16;
      if ( v16 )
      {
        v8 = 0;
      }
      else
      {
        (*(void (__fastcall **)(int))(a1 + 8))(a3);
        pool_tclear(a3, (_BYTE *)(a3 + 2076), 0);
        V_LOCK();
        logfmt_raw(v19, 0x1000u, 0, "Stratum connection interrupted");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/frontend/frontend_vbk/frontend_vbk.c",
          157,
          "stratum_handle_response_vbk",
          27,
          488,
          20,
          v19);
      }
    }
    else
    {
      v8 = 0;
      v9 = 0;
    }
    share_result(v8, 0, v9, (double *)a3);
    if ( v6[1] != -1 )
    {
      v10 = v6 + 1;
      __dmb(0xBu);
      do
      {
        v11 = __ldrex(v10);
        v12 = v11 - 1;
      }
      while ( __strex(v12, v10) );
      if ( !v12 )
        json_delete(v6);
    }
    return 1;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v19, 0x1000u, 0, "JSON decode failed(%d): %s", *(_DWORD *)v17, v18);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_vbk/frontend_vbk.c",
      157,
      "stratum_handle_response_vbk",
      27,
      474,
      100,
      v19);
    return 0;
  }
}
