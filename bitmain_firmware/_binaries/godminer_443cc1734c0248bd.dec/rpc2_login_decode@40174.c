int __fastcall rpc2_login_decode(_DWORD *a1, int a2)
{
  _DWORD *v4; // r0
  void *v5; // r7
  _BYTE *v6; // r0
  _BYTE *v7; // r6
  _DWORD *v8; // r0
  _DWORD *v9; // r0
  _DWORD *v10; // r6
  int *v11; // r3
  int v12; // r1
  int *v13; // r2
  int v14; // r4
  int v15; // lr
  int v16; // r12
  int v17; // r0
  int v19; // r0
  int v20; // r2
  char v21[4100]; // [sp+10h] [bp-1004h] BYREF

  v4 = (_DWORD *)json_object_get(a1, "result");
  v5 = v4;
  if ( !v4 )
  {
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, "JSON invalid result");
    V_UNLOCK();
    v19 = g_zc;
    v20 = 96;
    goto LABEL_12;
  }
  v6 = json_string_value(v4);
  v7 = v6;
  if ( v6 )
  {
    if ( *v6 == 111 && v6[1] == 107 && !v6[2] )
      goto LABEL_6;
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, "JSON returned status \"%s\"", v7);
    V_UNLOCK();
    v19 = g_zc;
    v20 = 107;
LABEL_12:
    zlog(
      v19,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin29/frontend_grin29.c",
      163,
      "rpc2_login_decode",
      17,
      v20,
      100,
      v21);
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, "%s: fail", "rpc2_login_decode");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin29/frontend_grin29.c",
      163,
      "rpc2_login_decode",
      17,
      148,
      80,
      v21);
    return 0;
  }
  if ( v5 != json_true() )
  {
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, "JSON returned status false");
    V_UNLOCK();
    v19 = g_zc;
    v20 = 102;
    goto LABEL_12;
  }
LABEL_6:
  v8 = (_DWORD *)json_object_get(a1, "id");
  if ( !v8 )
  {
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, "JSON inval id");
    V_UNLOCK();
    v19 = g_zc;
    v20 = 115;
    goto LABEL_12;
  }
  v9 = json_string_value(v8);
  v10 = v9;
  if ( !v9 )
  {
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, "JSON id is not a string");
    V_UNLOCK();
    v19 = g_zc;
    v20 = 120;
    goto LABEL_12;
  }
  v11 = v9;
  v12 = a2 + 1844;
  v13 = v9 + 16;
  do
  {
    v14 = *v11;
    v11 += 4;
    v15 = *(v11 - 3);
    v12 += 16;
    v16 = *(v11 - 2);
    v17 = *(v11 - 1);
    *(_DWORD *)(v12 - 16) = v14;
    *(_DWORD *)(v12 - 12) = v15;
    *(_DWORD *)(v12 - 8) = v16;
    *(_DWORD *)(v12 - 4) = v17;
  }
  while ( v11 != v13 );
  V_LOCK();
  logfmt_raw(v21, 0x1000u, 0, "Auth id: %s", v10);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/frontend/frontend_grin29/frontend_grin29.c",
    163,
    "rpc2_login_decode",
    17,
    126,
    20,
    v21);
  return 1;
}
