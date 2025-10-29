int __fastcall check_nonce_grin32(int a1, int a2)
{
  _DWORD *v3; // r5
  int v4; // r6
  int v5; // r11
  int v6; // r10
  void (**v7)(void); // r7
  int v8; // r6
  int *v9; // r10
  int *v10; // r6
  int v11; // r0
  int v12; // t1
  int v13; // r9
  int v14; // r0
  int *v15; // r0
  int *v16; // r10
  int v17; // r9
  int v18; // r11
  int v19; // r2
  int v20; // r11
  int v21; // r2
  int v22; // r3
  int v23; // t1
  int v24; // r7
  int v25; // lr
  int v26; // r3
  unsigned int v27; // r12
  unsigned int v28; // r1
  char *v29; // r0
  char v30; // r2
  bool v31; // zf
  unsigned __int64 v32; // r6
  int v34; // [sp+24h] [bp-1218h]
  int v36; // [sp+44h] [bp-11F8h]
  unsigned __int64 v37; // [sp+50h] [bp-11ECh]
  _DWORD s[8]; // [sp+58h] [bp-11E4h] BYREF
  struct timeval tv; // [sp+78h] [bp-11C4h] BYREF
  int v40; // [sp+80h] [bp-11BCh]
  int v41; // [sp+84h] [bp-11B8h]
  int v42; // [sp+88h] [bp-11B4h]
  int v43; // [sp+8Ch] [bp-11B0h]
  int v44; // [sp+90h] [bp-11ACh]
  int v45; // [sp+94h] [bp-11A8h]
  struct timeval v46[21]; // [sp+98h] [bp-11A4h] BYREF
  char v47[248]; // [sp+140h] [bp-10FCh] BYREF
  char v48[4100]; // [sp+238h] [bp-1004h] BYREF

  v36 = *(_DWORD *)(a1 + 624);
  v3 = (_DWORD *)(a2 + 35);
  memcpy(v47, (const void *)(v36 + 246 * *(unsigned __int8 *)(a2 + 16) + 4096), 0xF6u);
  v4 = *(unsigned __int16 *)(a2 + 33);
  v5 = *(_DWORD *)(a2 + 25);
  v6 = *(_DWORD *)(a2 + 29);
  gettimeofday(&tv, 0);
  v7 = (void (**)(void))new_graph32(32, 25);
  (*((void (__fastcall **)(void (*)(void), char *, int, _DWORD, int, int, int, _DWORD))v7[23] + 18))(
    v7[23],
    v47,
    246,
    *((_DWORD *)v7[23] + 18),
    v5,
    v6,
    21,
    0);
  v8 = v4 >> 2;
  if ( v8 )
  {
    v9 = &v3[v8];
    v10 = (int *)(a2 + 35);
    do
    {
      v11 = ((int (__fastcall *)(void (**)(void), int, _DWORD))v7[29])(v7, *v10, 0);
      v12 = *v10++;
      v13 = v11;
      v14 = ((int (__fastcall *)(void (**)(void), int, int))v7[29])(v7, v12, 1);
      ((void (__fastcall *)(void (**)(void), int, int))v7[27])(v7, v14, v13);
    }
    while ( v10 != v9 );
  }
  v15 = (int *)((int (__fastcall *)(void (**)(void)))v7[28])(v7);
  v16 = v15;
  if ( v15 )
  {
    v17 = 0;
    if ( *v15 > 0 )
    {
      v19 = v15[1];
      v20 = 0;
      while ( 1 )
      {
        v21 = v19 + v17;
        v22 = a2 + 31;
        do
        {
          v23 = *(_DWORD *)(v21 + 4);
          v21 += 4;
          *(_DWORD *)(v22 + 4) = v3[v23];
          v22 += 4;
        }
        while ( a2 + 199 != v22 );
        qsort(v3, 0x2Au, 4u, (__compar_fn_t)sub_A37C0);
        ++v20;
        v19 = v16[1];
        if ( v20 >= *v16 )
          break;
        v17 += 172;
      }
      v18 = *(unsigned __int8 *)(v19 + v17);
      v17 = v18;
    }
    else
    {
      v18 = 0;
    }
  }
  else
  {
    v17 = 0;
    v18 = 0;
  }
  free_graph32(v7);
  gettimeofday(v46, 0);
  V_LOCK();
  logfmt_raw(
    v48,
    0x1000u,
    0,
    "%s, nsols: %d, time: %ld us",
    "findcycle_grin32",
    *v16,
    v46[0].tv_usec + (_DWORD)&loc_F4240 * v46[0].tv_sec - 1000000 * tv.tv_sec - tv.tv_usec);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/backend_grin32/backend_grin32.c",
    175,
    "findcycle_grin32",
    16,
    378,
    20,
    v48);
  V_LOCK();
  V_INT((int)&tv, "chain", *(int *)(a1 + 140));
  logfmt_raw(
    v48,
    0x1000u,
    0,
    v45,
    tv.tv_sec,
    tv.tv_usec,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    "nonce %llx wc %d sols_len %d cycle len (%d/42)",
    v34,
    *(_DWORD *)(a2 + 25),
    *(_DWORD *)(a2 + 29),
    *(unsigned __int8 *)(a2 + 16),
    *(unsigned __int16 *)(a2 + 33),
    v18);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/backend_grin32/backend_grin32.c",
    175,
    "check_nonce_grin32",
    18,
    392,
    0x14u,
    v48);
  if ( v17 == 42 )
  {
    v24 = 0;
    memset(s, 0, sizeof(s));
    memset(v46, 0, sizeof(v46));
    do
    {
      v25 = 32 * v24;
      v26 = 0;
      v27 = *(_DWORD *)(a2 + 4 * (v24 + 8) + 3);
      do
      {
        v28 = v27 >> v26;
        v29 = &v48[(unsigned int)(v25 + v26) >> 3];
        v30 = (v25 + v26) & 7;
        v31 = ((v27 >> v26) & 1) == 0;
        if ( ((v27 >> v26) & 1) != 0 )
          LOBYTE(v28) = *(v29 - 416);
        ++v26;
        if ( !v31 )
          *(v29 - 416) = v28 | (1 << v30);
      }
      while ( v26 != 32 );
      ++v24;
    }
    while ( v24 != 42 );
    blake2b(s, (int)v46, 168);
    HIBYTE(v37) = s[0];
    BYTE3(v37) = s[1];
    BYTE4(v37) = HIBYTE(s[0]);
    BYTE5(v37) = BYTE2(s[0]);
    LOBYTE(v37) = HIBYTE(s[1]);
    BYTE1(v37) = BYTE2(s[1]);
    BYTE2(v37) = BYTE1(s[1]);
    BYTE6(v37) = BYTE1(s[0]);
    v32 = *(_QWORD *)(v36 + 8 * (*(unsigned __int8 *)(a2 + 16) + 384));
    if ( v37 > v32 )
    {
      V_LOCK();
      logfmt_raw(
        v48,
        0x1000u,
        0,
        "nonce %016llx hw target (%016llx:%016llx) not reach pool",
        *(_DWORD *)(a2 + 25),
        *(_DWORD *)(a2 + 29),
        v37,
        v32);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build"
        "/godminer-origin_master/backend/backend_grin32/backend_grin32.c",
        175,
        "check_nonce_grin32",
        18,
        420,
        20,
        v48);
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
    V_INT((int)v46, "chain", *(int *)(a1 + 140));
    logfmt_raw(
      v48,
      0x1000u,
      0,
      v46[3].tv_usec,
      v46[0].tv_sec,
      v46[0].tv_usec,
      v46[1].tv_sec,
      v46[1].tv_usec,
      v46[2].tv_sec,
      v46[2].tv_usec,
      v46[3].tv_sec,
      v46[3].tv_usec,
      "wc %d error_nonce",
      *(unsigned __int8 *)(a2 + 16));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/backend/backend_grin32/backend_grin32.c",
      175,
      "check_nonce_grin32",
      18,
      394,
      0x14u,
      v48);
    return 2;
  }
}
