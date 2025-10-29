int __fastcall check_nonce_ae(_DWORD *a1, int a2)
{
  int v3; // r8
  int v5; // r10
  int v6; // r4
  int v7; // r12
  int v8; // r4
  unsigned int v9; // r9
  int *v10; // r11
  int *v11; // r8
  unsigned int v12; // r10
  int v13; // t1
  unsigned int v14; // r0
  int sols_ae; // r10
  _BYTE *v16; // r2
  int v17; // r1
  int v18; // r3
  int v19; // r3
  _DWORD *v21; // r1
  _DWORD *v22; // r3
  int v23; // r2
  int v24; // t1
  int v25; // [sp+3Ch] [bp-1178h]
  unsigned __int64 v27; // [sp+48h] [bp-116Ch]
  int v28; // [sp+54h] [bp-1160h] BYREF
  char v29; // [sp+58h] [bp-115Ch]
  char v30; // [sp+59h] [bp-115Bh]
  char v31; // [sp+5Ah] [bp-115Ah]
  char v32; // [sp+5Bh] [bp-1159h]
  struct timeval tv; // [sp+5Ch] [bp-1158h] BYREF
  struct timeval v34; // [sp+64h] [bp-1150h] BYREF
  _DWORD v35[3]; // [sp+6Ch] [bp-1148h] BYREF
  _DWORD s[8]; // [sp+78h] [bp-113Ch] BYREF
  __int64 v37[4]; // [sp+98h] [bp-111Ch] BYREF
  _DWORD v38[20]; // [sp+B8h] [bp-10FCh] BYREF
  _QWORD v39[21]; // [sp+108h] [bp-10ACh] BYREF
  char v40[4100]; // [sp+1B0h] [bp-1004h] BYREF

  v3 = a1[156];
  v25 = v3;
  v5 = a2 + 87;
  memset(s, 0, sizeof(s));
  v6 = *(unsigned __int8 *)(a2 + 48);
  memcpy(v38, (const void *)(v3 + 80 * v6 + 11520), sizeof(v38));
  v7 = *(_DWORD *)(v3 + 4 * (v6 + 1408));
  v28 = v7;
  v32 = v38[11];
  v30 = BYTE2(v38[11]);
  v31 = BYTE1(v38[11]);
  v29 = HIBYTE(v38[11]);
  base64_encode((int)v35, (int)&v28, 8);
  v8 = *(unsigned __int16 *)(a2 + 85);
  v9 = a1[34];
  v38[11] = v35[0];
  v38[12] = v35[1];
  v38[13] = v35[2];
  memset(v39, 0, sizeof(v39));
  gettimeofday(&tv, 0);
  memset(v37, 0, sizeof(v37));
  generate_sipkeys_ae((int)v38, 80, v37);
  graph_init_ae(v9);
  if ( v8 >> 2 )
  {
    v10 = (int *)(v5 + 4 * (v8 >> 2));
    v11 = (int *)(a2 + 87);
    do
    {
      v12 = sip_node_ae(v9, v37[0], v37[1], v37[2], v37[3], SHIDWORD(v37[3]), *v11, 0);
      v13 = *v11++;
      v14 = sip_node_ae(v9, v37[0], v37[1], v37[2], v37[3], SHIDWORD(v37[3]), v13, 1);
      graph_add_edge_ae(v9, v12 >> 1, v14 >> 1);
    }
    while ( v11 != v10 );
  }
  sols_ae = get_sols_ae(v9, v37[0], v37[1], v37[2], v37[3], SHIDWORD(v37[3]), (int)v39, (int *)(a2 + 87), v8 >> 2);
  if ( sols_ae )
  {
    V_LOCK();
    logfmt_raw(v40, 0x1000u, 0, "[FindCycle] get golden nonce!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/backend/backend_ae/backend_ae.c",
      167,
      "findcycle_ae",
      12,
      311,
      20,
      v40);
    qsort(v39, 0x2Au, 4u, (__compar_fn_t)sub_53470);
    v22 = &v38[19];
    v23 = a2 + 83;
    do
    {
      v24 = v22[1];
      ++v22;
      *(_DWORD *)(v23 + 4) = v24;
      v23 += 4;
    }
    while ( v22 != (_DWORD *)((char *)&v39[20] + 4) );
  }
  graph_exit_ae(v9);
  gettimeofday(&v34, 0);
  V_LOCK();
  logfmt_raw(
    v40,
    0x1000u,
    0,
    "[FindCycle], runtime_id:%d time: %ld us",
    v9,
    v34.tv_usec + (_DWORD)&loc_F4240 * v34.tv_sec - 1000000 * tv.tv_sec - tv.tv_usec);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/backend_ae/backend_ae.c",
    167,
    "findcycle_ae",
    12,
    320,
    20,
    v40);
  if ( sols_ae )
  {
    memset(s, 0, sizeof(s));
    v16 = v39;
    v17 = 0;
    do
    {
      v18 = v17 + 20;
      ++v17;
      v19 = *(_DWORD *)(a2 + 4 * v18 + 7);
      v16[3] = v19;
      v16[2] = BYTE1(v19);
      v16[1] = BYTE2(v19);
      *v16 = HIBYTE(v19);
      v16 += 4;
    }
    while ( v17 != 42 );
    blake2b(s, (int)v39, 168);
    HIBYTE(v27) = s[0];
    BYTE3(v27) = s[1];
    BYTE5(v27) = BYTE2(s[0]);
    BYTE6(v27) = BYTE1(s[0]);
    BYTE4(v27) = HIBYTE(s[0]);
    BYTE1(v27) = BYTE2(s[1]);
    BYTE2(v27) = BYTE1(s[1]);
    LOBYTE(v27) = HIBYTE(s[1]);
    if ( *(_QWORD *)(v25 + 8 * (*(unsigned __int8 *)(a2 + 48) + 768)) < v27 )
    {
      V_LOCK();
      v21 = (_DWORD *)(v25 + 8 * (*(unsigned __int8 *)(a2 + 48) + 768));
      logfmt_raw(
        v40,
        0x1000u,
        0,
        "wc %d nonce %08x hw target (%016llx > %016llx) not reach pool\n",
        *(unsigned __int8 *)(a2 + 48),
        *(_DWORD *)(a2 + 81),
        v27,
        *v21,
        v21[1]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build"
        "/godminer-origin_master/backend/backend_ae/backend_ae.c",
        167,
        "check_nonce_ae",
        14,
        410,
        20,
        v40);
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    V_LOCK();
    V_INT((int)v39, "chain", (int)a1[35]);
    logfmt_raw(
      v40,
      0x1000u,
      0,
      HIDWORD(v39[3]),
      v39[0],
      v39[1],
      v39[2],
      v39[3],
      "wc %d error_nonce %08x",
      *(unsigned __int8 *)(a2 + 48),
      *(_DWORD *)(a2 + 81));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/backend/backend_ae/backend_ae.c",
      167,
      "check_nonce_ae",
      14,
      398,
      20,
      v40);
    return 2;
  }
}
