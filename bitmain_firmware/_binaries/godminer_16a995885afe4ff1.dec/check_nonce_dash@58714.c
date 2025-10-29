int __fastcall check_nonce_dash(int a1, int a2)
{
  int v4; // r10
  int v5; // r4
  unsigned int v6; // r9
  int v7; // r3
  char *v8; // r2
  char *v9; // r3
  char v10; // r1
  unsigned int v11; // r0
  unsigned int v12; // r4
  unsigned int v13; // r3
  _DWORD *v14; // r3
  int v15; // r10
  int v16; // r2
  unsigned int v17; // r0
  unsigned int v18; // t1
  unsigned int v19; // t1
  bool v20; // cc
  int v22; // r3
  _DWORD v23[7]; // [sp+30h] [bp-1094h] BYREF
  int v24; // [sp+4Ch] [bp-1078h]
  _BYTE v25[32]; // [sp+50h] [bp-1074h] BYREF
  _DWORD v26[20]; // [sp+70h] [bp-1054h] BYREF
  char v27[4100]; // [sp+C0h] [bp-1004h] BYREF

  V_LOCK();
  V_INT((int)v23, "chain", *(int *)(a1 + 140));
  logfmt_raw(
    v27,
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
    "nonce %llx back wc %d",
    *(_DWORD *)(a2 + 48),
    *(unsigned __int8 *)(a2 + 53));
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/backend_dash/backend_dash.c",
    171,
    "check_nonce_dash",
    16,
    617,
    20,
    v27);
  v4 = *(_DWORD *)(a1 + 624);
  v5 = *(unsigned __int8 *)(a2 + 53);
  v6 = *(_DWORD *)(v4 + 4 * (v5 + 3840));
  v7 = *(_DWORD *)(v4 + 12 * v5 + 19972);
  *(_DWORD *)(a2 + 54) = *(_DWORD *)(v4 + 12 * v5 + 19968);
  *(_DWORD *)(a2 + 58) = v7;
  memcpy(v26, (const void *)(v4 + 80 * v5 + 5120), sizeof(v26));
  v8 = (char *)v26;
  v9 = (char *)(v4 + 80 * v5 + 5120);
  do
  {
    v10 = *v9;
    v9 += 4;
    v8[3] = v10;
    v8[2] = *(v9 - 3);
    v8[1] = *(v9 - 2);
    *v8 = *(v9 - 1);
    v8 += 4;
  }
  while ( v8 != v27 );
  v26[19] = *(_DWORD *)(a2 + 48);
  Xhash(v25, v26);
  v11 = target_to_diff_dash((int)v25);
  v12 = v11;
  if ( v11 <= 0x22 )
  {
    V_LOCK();
    logfmt_raw(
      v27,
      0x1000u,
      0,
      "hw error calculate diff %d ans diff %d TICKET_MASK_DASH %d",
      v12,
      *(unsigned __int8 *)(a2 + 52),
      35);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/backend/backend_dash/backend_dash.c",
      171,
      "check_nonce_dash",
      16,
      638,
      20,
      v27);
    v22 = (unsigned __int8)(*(_BYTE *)(a1 + 308) + 1);
    *(_BYTE *)(a1 + 308) = v22;
    if ( v22 )
      return 6;
    else
      return 2;
  }
  else
  {
    v13 = *(unsigned __int8 *)(a2 + 52);
    if ( v13 == v11 )
    {
      if ( v6 > v13 )
      {
LABEL_16:
        V_LOCK();
        logfmt_raw(v27, 0x1000u, 0, "hw diff (%d<%d) not reach pool", *(unsigned __int8 *)(a2 + 52), v6);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/bui"
          "ld/godminer-origin_master/backend/backend_dash/backend_dash.c",
          171,
          "check_nonce_dash",
          16,
          661,
          20,
          v27);
        return 1;
      }
      else
      {
        v14 = v26;
        v15 = v4 + 32 * (*(unsigned __int8 *)(a2 + 53) + 496);
        v16 = v15 + 32;
        do
        {
          v18 = *--v14;
          v17 = v18;
          v19 = *(_DWORD *)(v16 - 4);
          v16 -= 4;
          v20 = v17 > v19;
          if ( v17 < v19 )
            break;
          if ( v20 )
            goto LABEL_16;
        }
        while ( v16 != v15 );
        return 0;
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(v27, 0x1000u, 0, "diff not match (%d!=%d) expected diff %d", v12, *(unsigned __int8 *)(a2 + 52), v6);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build"
        "/godminer-origin_master/backend/backend_dash/backend_dash.c",
        171,
        "check_nonce_dash",
        16,
        647,
        20,
        v27);
      return 3;
    }
  }
}
