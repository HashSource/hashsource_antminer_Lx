int __fastcall check_nonce_grin29(int a1, int a2)
{
  _DWORD *v3; // r5
  int v4; // r6
  int v5; // r10
  int v6; // r9
  void (**v7)(void); // r7
  int v8; // r6
  int *v9; // r8
  int *v10; // r6
  __int64 v11; // r0
  int v12; // t1
  int *v13; // r0
  int *v14; // r10
  int v15; // r2
  int v16; // r8
  int v17; // r9
  int v18; // r2
  int v19; // r3
  int v20; // t1
  int v21; // r6
  int v22; // r9
  int v23; // lr
  int i; // r7
  int v25; // r3
  unsigned int v26; // r12
  unsigned int v27; // r1
  char *v28; // r0
  char v29; // r2
  bool v30; // zf
  unsigned __int64 v31; // r6
  int v33; // [sp+24h] [bp-1210h]
  int v35; // [sp+48h] [bp-11ECh]
  unsigned __int64 v36; // [sp+50h] [bp-11E4h]
  _DWORD s[8]; // [sp+58h] [bp-11DCh] BYREF
  struct timeval tv; // [sp+78h] [bp-11BCh] BYREF
  int v39; // [sp+80h] [bp-11B4h]
  int v40; // [sp+84h] [bp-11B0h]
  int v41; // [sp+88h] [bp-11ACh]
  int v42; // [sp+8Ch] [bp-11A8h]
  int v43; // [sp+90h] [bp-11A4h]
  int v44; // [sp+94h] [bp-11A0h]
  struct timeval v45[20]; // [sp+98h] [bp-119Ch] BYREF
  char v46[248]; // [sp+138h] [bp-10FCh] BYREF
  char v47[4100]; // [sp+230h] [bp-1004h] BYREF

  v35 = *(_DWORD *)(a1 + 624);
  v3 = (_DWORD *)(a2 + 35);
  memcpy(v46, (const void *)(v35 + 246 * *(unsigned __int8 *)(a2 + 16) + 4352), 0xF6u);
  v4 = *(unsigned __int16 *)(a2 + 33);
  v5 = *(_DWORD *)(a2 + 25);
  v6 = *(_DWORD *)(a2 + 29);
  gettimeofday(&tv, 0);
  v7 = (void (**)(void))new_graph29(29, 21);
  (*((void (__fastcall **)(void (*)(void), char *, int, _DWORD, int, int, int, _DWORD))v7[23] + 18))(
    v7[23],
    v46,
    246,
    *((_DWORD *)v7[23] + 18),
    v5,
    v6,
    25,
    0);
  v8 = v4 >> 2;
  if ( v8 )
  {
    v9 = &v3[v8];
    v10 = (int *)(a2 + 35);
    do
    {
      v11 = ((__int64 (__fastcall *)(void (**)(void), int))v7[29])(v7, *v10);
      v12 = *v10++;
      ((void (__fastcall *)(void (**)(void), _DWORD, int))v7[27])(
        v7,
        (2 * v11) & 0x1FFFFFFE | v12 & 1,
        (2 * HIDWORD(v11)) & 0x1FFFFFFE | v12 & 1);
    }
    while ( v10 != v9 );
  }
  v13 = (int *)((int (__fastcall *)(void (**)(void)))v7[28])(v7);
  v14 = v13;
  if ( v13 )
  {
    if ( *v13 <= 0 )
    {
      v22 = 0;
      v21 = 0;
    }
    else
    {
      v15 = v13[1];
      v16 = 0;
      v17 = 0;
      while ( 1 )
      {
        v18 = v15 + v16;
        v19 = a2 + 31;
        do
        {
          v20 = *(_DWORD *)(v18 + 4);
          v18 += 4;
          *(_DWORD *)(v19 + 4) = v3[v20];
          v19 += 4;
        }
        while ( a2 + 199 != v19 );
        qsort(v3, 0x2Au, 4u, (__compar_fn_t)sub_A1200);
        ++v17;
        v15 = v14[1];
        if ( v17 >= *v14 )
          break;
        v16 += 172;
      }
      v21 = *(unsigned __int8 *)(v15 + v16);
      v22 = v21;
    }
  }
  else
  {
    v22 = 0;
    v21 = 0;
  }
  free_graph29(v7);
  gettimeofday(v45, 0);
  V_LOCK();
  logfmt_raw(
    v47,
    0x1000u,
    0,
    "%s, nsols: %d, time: %ld us",
    "findcycle_grin29",
    *v14,
    v45[0].tv_usec + (_DWORD)&loc_F4240 * v45[0].tv_sec - 1000000 * tv.tv_sec - tv.tv_usec);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_grin29/backend_grin29.c",
    160,
    "findcycle_grin29",
    16,
    408,
    20,
    v47);
  V_LOCK();
  V_INT((int)&tv, "chain", *(int *)(a1 + 140));
  logfmt_raw(
    v47,
    0x1000u,
    0,
    v44,
    tv.tv_sec,
    tv.tv_usec,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    "nonce %llx wc %d sols_len %d cycle len (%d/42)",
    v33,
    *(_DWORD *)(a2 + 25),
    *(_DWORD *)(a2 + 29),
    *(unsigned __int8 *)(a2 + 16),
    *(unsigned __int16 *)(a2 + 33),
    v21);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_grin29/backend_grin29.c",
    160,
    "check_nonce_grin29",
    18,
    434,
    0x14u,
    v47);
  if ( v22 == 42 )
  {
    memset(s, 0, sizeof(s));
    memset(v45, 0, 0x99u);
    v23 = 0;
    for ( i = 0; i != 42; ++i )
    {
      v25 = 0;
      v26 = *(_DWORD *)(a2 + 4 * (i + 8) + 3) & 0x1FFFFFFF;
      do
      {
        v27 = v26 >> v25;
        v28 = &v47[(unsigned int)(v23 + v25) >> 3];
        v29 = (v23 + v25) & 7;
        v30 = ((v26 >> v25) & 1) == 0;
        if ( ((v26 >> v25) & 1) != 0 )
          LOBYTE(v27) = *(v28 - 408);
        ++v25;
        if ( !v30 )
          *(v28 - 408) = v27 | (1 << v29);
      }
      while ( v25 != 29 );
      v23 += 29;
    }
    blake2b(s, (int)v45, 153);
    HIBYTE(v36) = s[0];
    BYTE3(v36) = s[1];
    BYTE6(v36) = BYTE1(s[0]);
    BYTE1(v36) = BYTE2(s[1]);
    BYTE4(v36) = HIBYTE(s[0]);
    BYTE5(v36) = BYTE2(s[0]);
    BYTE2(v36) = BYTE1(s[1]);
    LOBYTE(v36) = HIBYTE(s[1]);
    v31 = *(_QWORD *)(v35 + 8 * (*(unsigned __int8 *)(a2 + 16) + 384));
    if ( v36 > v31 )
    {
      V_LOCK();
      logfmt_raw(
        v47,
        0x1000u,
        0,
        "nonce %016llx hw target (%016llx:%016llx) not reach pool\n",
        *(_DWORD *)(a2 + 25),
        *(_DWORD *)(a2 + 29),
        v36,
        v31);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_grin29/backend_grin29.c",
        160,
        "check_nonce_grin29",
        18,
        462,
        20,
        v47);
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
    V_INT((int)v45, "chain", *(int *)(a1 + 140));
    logfmt_raw(
      v47,
      0x1000u,
      0,
      v45[3].tv_usec,
      v45[0].tv_sec,
      v45[0].tv_usec,
      v45[1].tv_sec,
      v45[1].tv_usec,
      v45[2].tv_sec,
      v45[2].tv_usec,
      v45[3].tv_sec,
      v45[3].tv_usec,
      "wc %d error_nonce",
      *(unsigned __int8 *)(a2 + 16));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_grin29/backend_grin29.c",
      160,
      "check_nonce_grin29",
      18,
      436,
      0x14u,
      v47);
    return 2;
  }
}
