int __fastcall work_2_packet_hns(int a1, int a2, _BYTE *a3, _DWORD *a4)
{
  int v6; // r8
  const void *v8; // r11
  int v9; // r2
  int v10; // r12
  _DWORD *v11; // r0
  int v12; // r6
  int v13; // r4
  int v14; // lr
  int v15; // r6
  int v16; // r4
  int v17; // lr
  int v18; // r7
  int v19; // r5
  int v20; // r4
  int v21; // r1
  int v22; // t1
  __int16 v23; // r0
  int v24; // r3
  int v26; // [sp+14h] [bp-2010h]
  int v27; // [sp+18h] [bp-200Ch]
  char v29[4064]; // [sp+20h] [bp-2004h] BYREF
  char v30[4100]; // [sp+1020h] [bp-1004h] BYREF

  v6 = *(_DWORD *)(a1 + 624);
  *a3 = 85;
  a3[1] = -86;
  a3[2] = 32;
  v8 = (const void *)(a2 + 40);
  if ( *(_DWORD *)(a1 + 304) == 1 )
    a3[2] = 48;
  v9 = *(unsigned __int8 *)(v6 + 42496);
  v26 = a2 + 8;
  *(_QWORD *)(v6 + 8 * v9) = *(_QWORD *)a2;
  strcpy((char *)(v6 + 32 * (v9 + 32)), (const char *)(a2 + 8));
  v10 = *(unsigned __int8 *)(v6 + 42496);
  *(_DWORD *)(v6 + 4 * (v10 + 9472)) = *(_DWORD *)(a2 + 296);
  v11 = (_DWORD *)(v6 + 32 * (v10 + 1200));
  v12 = *(_DWORD *)(a2 + 304);
  v13 = *(_DWORD *)(a2 + 308);
  v14 = *(_DWORD *)(a2 + 312);
  *v11 = *(_DWORD *)(a2 + 300);
  v11[1] = v12;
  v11[2] = v13;
  v11[3] = v14;
  v15 = *(_DWORD *)(a2 + 320);
  v16 = *(_DWORD *)(a2 + 324);
  v17 = *(_DWORD *)(a2 + 328);
  v11[4] = *(_DWORD *)(a2 + 316);
  v11[5] = v15;
  v11[6] = v16;
  v18 = a2 + 295;
  v11[7] = v17;
  v19 = a2 + 39;
  v20 = 0;
  memcpy((void *)(v6 + ((*(unsigned __int8 *)(v6 + 42496) + 20) << 8)), v8, 0x100u);
  v21 = *(unsigned __int8 *)(v6 + 42496);
  a3[3] = v21;
  v27 = v21;
  *(_BYTE *)(v6 + 42496) = (v21 + 1) & 0x7F;
  do
  {
    v22 = *(unsigned __int8 *)++v19;
    snprintf(&v29[v20], 4096 - v20, "%02x ", v22);
    v20 += 3;
  }
  while ( v19 != v18 );
  V_LOCK();
  logfmt_raw(v30, 0x1000u, 0, "hns dump work jobid %s, work count %d", v26, v27);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_hns/backend_hns.c",
    154,
    "dump_work_hns",
    13,
    84,
    20,
    v30);
  V_LOCK();
  logfmt_raw(v30, 0x1000u, 0, "dump work: %s", v29);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_hns/backend_hns.c",
    154,
    "dump_work_hns",
    13,
    85,
    20,
    v30);
  memcpy(a3 + 4, v8, 0x100u);
  if ( !memcmp(&last_header_hns, v8, 0x100u) )
  {
    V_LOCK();
    logfmt_raw(v30, 0x1000u, 0, "found repeat work");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_hns/backend_hns.c",
      154,
      "work_2_packet_hns",
      17,
      118,
      80,
      v30);
  }
  memcpy(&last_header_hns, v8, 0x100u);
  v23 = BM_CRC16(a3 + 2, 258);
  a3[261] = v23;
  a3[260] = HIBYTE(v23);
  v24 = *(unsigned __int8 *)(a1 + 145);
  *a4 = 262;
  if ( !v24 || !*(_BYTE *)(a1 + 146) )
    return 0;
  memset(*(void **)(a1 + 264), 0, 48 * *(_DWORD *)(a1 + 196));
  chip_setting_ticket_value_hns(a1, 26);
  *(_BYTE *)(a1 + 145) = 0;
  return 0;
}
