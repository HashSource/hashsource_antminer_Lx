bool __fastcall stratum_capabilities_vbk(int a1, int a2)
{
  int v2; // r0
  void *v3; // r6
  double *v4; // r0
  double *v5; // r4
  _BOOL4 v6; // r5
  unsigned int *v7; // r3
  unsigned int v8; // r2
  unsigned int v9; // r2
  _DWORD *v11; // r0
  _DWORD *v12; // r0
  const char *v13; // r0
  const char *v14; // r8
  size_t v15; // r0
  const char *v16; // r0
  int v17; // r11
  int v18; // r10
  int v19; // r9
  int v20; // r0
  int v21; // [sp+4h] [bp-1118h]
  int v22; // [sp+10h] [bp-110Ch]
  int v23; // [sp+14h] [bp-1108h]
  int v24[23]; // [sp+1Ch] [bp-1100h] BYREF
  char v25[160]; // [sp+78h] [bp-10A4h] BYREF
  char v26[4100]; // [sp+118h] [bp-1004h] BYREF

  v2 = (*(int (__fastcall **)(int))(a1 + 12))(a2);
  v3 = (void *)v2;
  if ( !v2 )
  {
    V_LOCK();
    logfmt_raw(v26, 0x1000u, 0, "%s stratum_recv_line failed!", "stratum_capabilities_vbk");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/frontend/frontend_vbk/frontend_vbk.c",
      172,
      "stratum_capabilities_vbk",
      24,
      86,
      100,
      v26);
    return 0;
  }
  v4 = json_loads(v2, 0, (char *)v24);
  v5 = v4;
  if ( !v4 )
  {
    V_LOCK();
    logfmt_raw(v26, 0x1000u, 0, "JSON decode failed(%d): %s", v24[0], v25);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/frontend/frontend_vbk/frontend_vbk.c",
      172,
      "stratum_capabilities_vbk",
      24,
      92,
      100,
      v26);
    free(v3);
    return 0;
  }
  if ( !get_command_type(v4) )
  {
    free(v3);
    v11 = (_DWORD *)json_object_get(v5, "capabilities");
    v12 = (_DWORD *)json_object_get(v11, "data");
    v13 = (const char *)json_string_value(v12);
    v14 = v13;
    if ( !v13 || (v15 = strlen(v13), v15 <= 5) )
    {
      V_LOCK();
      logfmt_raw(v26, 0x1000u, 0, "The server did not send a valid capabilities command!");
      V_UNLOCK();
      v20 = g_zc;
      v21 = 106;
LABEL_24:
      v6 = 0;
      zlog(
        v20,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build"
        "/godminer-origin_master/frontend/frontend_vbk/frontend_vbk.c",
        172,
        "stratum_capabilities_vbk",
        24,
        v21,
        100,
        v26);
      goto LABEL_5;
    }
    v16 = &v14[v15];
    v17 = *((unsigned __int8 *)v16 - 2);
    v18 = *((unsigned __int8 *)v16 - 3);
    v19 = *((unsigned __int8 *)v16 - 4);
    v6 = *((unsigned __int8 *)v16 - 1) == 49;
    v23 = *((unsigned __int8 *)v16 - 5);
    v22 = *((unsigned __int8 *)v16 - 6);
    if ( *(v16 - 1) != 49 )
    {
      V_LOCK();
      logfmt_raw(
        v26,
        0x1000u,
        v6,
        "The specified server does not support MINING_AUTH according to its bitflag (%s)",
        v14);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build"
        "/godminer-origin_master/frontend/frontend_vbk/frontend_vbk.c",
        172,
        "stratum_capabilities_vbk",
        24,
        125,
        100,
        v26);
    }
    if ( v17 != 49 )
    {
      V_LOCK();
      logfmt_raw(
        v26,
        0x1000u,
        0,
        "The specified server does not support MINING_SUBSCRIBE according to its bitflag (%s)",
        v14);
      v6 = 0;
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build"
        "/godminer-origin_master/frontend/frontend_vbk/frontend_vbk.c",
        172,
        "stratum_capabilities_vbk",
        24,
        130,
        100,
        v26);
    }
    if ( v18 == 49 )
    {
      if ( v19 == 49 )
      {
        if ( v23 == 49 )
        {
          if ( v22 == 49 )
          {
            if ( v6 )
            {
              V_LOCK();
              logfmt_raw(v26, 0x1000u, 0, "The specified server supports all necessary commands (bitflag: %s)", v14);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/relea"
                "se/build/godminer-origin_master/frontend/frontend_vbk/frontend_vbk.c",
                172,
                "stratum_capabilities_vbk",
                24,
                155,
                20,
                v26);
              goto LABEL_5;
            }
            goto LABEL_20;
          }
LABEL_29:
          V_LOCK();
          logfmt_raw(
            v26,
            0x1000u,
            0,
            "The specified server does not support MINING_MEMPOOL_UPDATE_ACK according to its bitflag (%s)",
            v14);
          V_UNLOCK();
          v20 = g_zc;
          v21 = 150;
          goto LABEL_24;
        }
LABEL_28:
        V_LOCK();
        logfmt_raw(
          v26,
          0x1000u,
          0,
          "The specified server does not support MINING_RESET_ACK according to its bitflag (%s)",
          v14);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/bui"
          "ld/godminer-origin_master/frontend/frontend_vbk/frontend_vbk.c",
          172,
          "stratum_capabilities_vbk",
          24,
          145,
          100,
          v26);
        if ( v22 == 49 )
          goto LABEL_20;
        goto LABEL_29;
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(
        v26,
        0x1000u,
        0,
        "The specified server does not support MINING_SUBMIT according to its bitflag (%s)",
        v14);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build"
        "/godminer-origin_master/frontend/frontend_vbk/frontend_vbk.c",
        172,
        "stratum_capabilities_vbk",
        24,
        135,
        100,
        v26);
      if ( v19 == 49 )
      {
        if ( v23 == 49 )
          goto LABEL_19;
        goto LABEL_28;
      }
    }
    V_LOCK();
    logfmt_raw(
      v26,
      0x1000u,
      0,
      "The specified server does not support MINING_UNSUBSCRIBE according to its bitflag (%s)",
      v14);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/frontend/frontend_vbk/frontend_vbk.c",
      172,
      "stratum_capabilities_vbk",
      24,
      140,
      100,
      v26);
    if ( v23 == 49 )
    {
LABEL_19:
      if ( v22 == 49 )
      {
LABEL_20:
        v6 = 0;
        goto LABEL_5;
      }
      goto LABEL_29;
    }
    goto LABEL_28;
  }
  V_LOCK();
  v6 = 0;
  logfmt_raw(
    v26,
    0x1000u,
    0,
    "Server did not send its capabilities at the beginning of the setup process! Instead, it sent the command: %s",
    v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/frontend/frontend_vbk/frontend_vbk.c",
    172,
    "stratum_capabilities_vbk",
    24,
    98,
    100,
    v26);
  free(v3);
LABEL_5:
  if ( *((_DWORD *)v5 + 1) == -1 )
    return v6;
  v7 = (unsigned int *)v5 + 1;
  __dmb(0xBu);
  do
  {
    v8 = __ldrex(v7);
    v9 = v8 - 1;
  }
  while ( __strex(v9, v7) );
  if ( v9 )
    return v6;
  json_delete(v5);
  return v6;
}
