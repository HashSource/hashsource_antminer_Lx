int __fastcall work_2_packet_kda(int a1, int a2, _BYTE *a3, _DWORD *a4)
{
  int v5; // r4
  _WORD *v7; // r10
  _DWORD *v8; // r3
  int v9; // r2
  int v10; // r1
  int v11; // r12
  _DWORD *v12; // r0
  int v13; // t1
  int v14; // r9
  int v15; // lr
  int v16; // r12
  int v17; // r9
  int v18; // lr
  int v19; // r12
  char *v20; // r6
  int v21; // r3
  char v22; // r1
  char v23; // r12
  char v24; // r1
  char *v25; // r3
  _BYTE *v26; // r2
  char v27; // t1
  int v28; // r4
  __int16 v29; // r0
  int v30; // r3
  _BYTE *v32; // r7
  int v33; // t1
  int v34; // r7
  int v35; // r5
  int v36; // r4
  int v37; // t1
  int v40; // [sp+1Ch] [bp-2010h]
  int v41; // [sp+24h] [bp-2008h]
  char v42[4056]; // [sp+28h] [bp-2004h] BYREF
  char v43[4100]; // [sp+1028h] [bp-1004h] BYREF

  v5 = *(_DWORD *)(a1 + 632);
  *a3 = 85;
  a3[1] = -86;
  a3[2] = 32;
  v7 = (_WORD *)(a2 + 396);
  if ( *(_DWORD *)(a1 + 312) == 1 )
    a3[2] = 48;
  v8 = (_DWORD *)a2;
  v9 = *(unsigned __int8 *)(v5 + 50816);
  v10 = a2 + 8;
  v11 = *(_DWORD *)(v10 + 352);
  v40 = v10;
  *(_QWORD *)(v5 + 8 * v9) = *(_QWORD *)a2;
  *(_DWORD *)(v5 + 4 * (v9 + 11552)) = v11;
  v12 = (_DWORD *)(v5 + 32 * (v9 + 1460));
  v13 = v8[91];
  v8 += 91;
  v14 = v8[1];
  v15 = v8[2];
  v16 = v8[3];
  *v12 = v13;
  v12[1] = v14;
  v12[2] = v15;
  v12[3] = v16;
  v17 = v8[5];
  v18 = v8[6];
  v19 = v8[7];
  v12[4] = v8[4];
  v20 = (char *)(a2 + 72);
  v12[6] = v18;
  v12[7] = v19;
  v12[5] = v17;
  strcpy((char *)(v5 + ((*(unsigned __int8 *)(v5 + 50816) + 16) << 6)), (const char *)v10);
  memcpy((void *)(v5 + 286 * *(unsigned __int8 *)(v5 + 50816) + 9216), (const void *)(a2 + 72), 0x11Eu);
  v21 = 3 * *(unsigned __int8 *)(v5 + 50816) + 45824;
  v22 = *(_BYTE *)(a2 + 398);
  *(_WORD *)(v5 + v21) = *v7;
  *(_BYTE *)(v5 + v21 + 2) = v22;
  v23 = *(_BYTE *)(v5 + 50816);
  a3[3] = v23;
  *(_BYTE *)(v5 + 50816) = (v23 + 1) & 0x7F;
  memset(a3 + 4, 0, 0x11Eu);
  v24 = *(_BYTE *)(a2 + 398);
  v25 = (char *)(a2 + 350);
  v26 = a3 + 6;
  *((_WORD *)a3 + 2) = *v7;
  a3[6] = v24;
  do
  {
    v27 = *--v25;
    *++v26 = v27;
  }
  while ( v25 != v20 );
  v28 = memcmp(&last_header_kda, (const void *)(a2 + 72), 0x11Eu);
  if ( !v28 )
  {
    V_LOCK();
    logfmt_raw(v43, 0x1000u, 0, "found repeat work");
    V_UNLOCK();
    v32 = a3 - 1;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_kda/backend_kda.c",
      154,
      "work_2_packet_kda",
      17,
      130,
      80,
      v43);
    v41 = (unsigned __int8)a3[3];
    do
    {
      v33 = (unsigned __int8)*++v32;
      snprintf(&v42[v28], 4096 - v28, "%02x", v33);
      v28 += 2;
    }
    while ( v32 != a3 + 291 );
    V_LOCK();
    logfmt_raw(v43, 0x1000u, 0, "dump packet %s", v42);
    V_UNLOCK();
    v34 = a2 + 357;
    v35 = a2 + 71;
    v36 = 0;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_kda/backend_kda.c",
      154,
      "dump_work_kda",
      13,
      86,
      60,
      v43);
    do
    {
      v37 = *(unsigned __int8 *)++v35;
      snprintf(&v42[v36], 4096 - v36, "%02x", v37);
      v36 += 2;
    }
    while ( v34 != v35 );
    V_LOCK();
    logfmt_raw(v43, 0x1000u, 0, "kda dump work jobid %s, work count %d", v40, v41);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_kda/backend_kda.c",
      154,
      "dump_work_kda",
      13,
      92,
      60,
      v43);
    V_LOCK();
    logfmt_raw(v43, 0x1000u, 0, "dump work: %s", v42);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_kda/backend_kda.c",
      154,
      "dump_work_kda",
      13,
      93,
      60,
      v43);
  }
  memcpy(&last_header_kda, v20, 0x11Eu);
  v29 = BM_CRC16(a3 + 2, 288);
  a3[291] = v29;
  a3[290] = HIBYTE(v29);
  v30 = *(unsigned __int8 *)(a1 + 153);
  *a4 = 292;
  if ( !v30 || !*(_BYTE *)(a1 + 154) )
    return 0;
  memset(*(void **)(a1 + 272), 0, 48 * *(_DWORD *)(a1 + 204));
  chip_setting_ticket_value_kda(a1, 26);
  *(_BYTE *)(a1 + 153) = 0;
  return 0;
}
