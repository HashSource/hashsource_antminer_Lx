int __fastcall work_2_packet_ckb(int a1, _DWORD *a2, _BYTE *a3, _DWORD *a4)
{
  int v5; // r5
  int *v7; // r9
  int v8; // r4
  int v9; // r3
  _DWORD *v11; // r1
  int v12; // r12
  int v13; // r7
  _DWORD *v14; // r3
  _DWORD *v15; // r0
  int v16; // t1
  int v17; // r7
  int v18; // lr
  int v19; // r2
  int v20; // r8
  int v21; // r7
  int v22; // lr
  int *v23; // r2
  int v24; // r3
  int v25; // r5
  int v26; // lr
  int v27; // r12
  int v28; // r1
  char v29; // r1
  int *v30; // r3
  _BYTE *v31; // r2
  int v32; // r12
  int v33; // r0
  int v34; // r1
  int v35; // r4
  _DWORD *v36; // r3
  int v37; // r0
  int v38; // r1
  int v39; // r2
  __int16 v40; // r0
  char *v42; // r5
  char *v43; // r6
  int v44; // t1
  int *v45; // [sp+10h] [bp-2014h]
  _DWORD *v46; // [sp+14h] [bp-2010h]
  int v48; // [sp+1Ch] [bp-2008h]
  char v49[4064]; // [sp+20h] [bp-2004h] BYREF
  char v50[4100]; // [sp+1020h] [bp-1004h] BYREF

  v5 = *(_DWORD *)(a1 + 624);
  *a3 = 85;
  a3[2] = 32;
  v7 = a2 + 10;
  a3[1] = -86;
  v8 = v5 + 28672;
  v9 = *(_DWORD *)(a1 + 304);
  v11 = a2 + 2;
  if ( v9 == 1 )
    a3[2] = 48;
  v12 = *(unsigned __int8 *)(v5 + 31744);
  v13 = v11[20];
  v46 = v11;
  *(_QWORD *)(v5 + 8 * v12) = *((_QWORD *)v11 - 1);
  v14 = (_DWORD *)(v5 + 32 * (v12 + 736));
  *(_DWORD *)(v5 + 4 * (v12 + 5632)) = v13;
  v16 = a2[23];
  v15 = a2 + 23;
  v17 = v15[1];
  v18 = v15[2];
  v19 = v15[3];
  *v14 = v16;
  v14[1] = v17;
  v14[2] = v18;
  v14[3] = v19;
  v20 = v15[4];
  v21 = v15[5];
  v22 = v15[6];
  v14[7] = v15[7];
  v14[4] = v20;
  v14[5] = v21;
  v14[6] = v22;
  strcpy((char *)(v5 + 32 * (*(unsigned __int8 *)(v5 + 31744) + 64)), (const char *)v11);
  v23 = v7;
  v24 = v5 + 48 * *(unsigned __int8 *)(v5 + 31744) + 10240;
  do
  {
    v25 = *v23;
    v23 += 4;
    v26 = *(v23 - 3);
    v24 += 16;
    v27 = *(v23 - 2);
    v28 = *(v23 - 1);
    *(_DWORD *)(v24 - 16) = v25;
    *(_DWORD *)(v24 - 12) = v26;
    *(_DWORD *)(v24 - 8) = v27;
    *(_DWORD *)(v24 - 4) = v28;
  }
  while ( v23 != a2 + 22 );
  v29 = *(_BYTE *)(v8 + 3072);
  v30 = v7;
  v31 = a3 + 4;
  v45 = v7 + 12;
  a3[3] = v29;
  *(_BYTE *)(v8 + 3072) = v29 + 1;
  do
  {
    v30 += 4;
    v31 += 16;
    v32 = *(v30 - 3);
    v33 = *(v30 - 2);
    v34 = *(v30 - 1);
    *((_DWORD *)v31 - 4) = *(v30 - 4);
    *((_DWORD *)v31 - 3) = v32;
    *((_DWORD *)v31 - 2) = v33;
    *((_DWORD *)v31 - 1) = v34;
  }
  while ( v30 != v45 );
  v35 = memcmp(&last_header_ckb, v7, 0x30u);
  if ( !v35 )
  {
    V_LOCK();
    logfmt_raw(v50, 0x1000u, 0, "found repeat work");
    V_UNLOCK();
    v42 = (char *)a2 + 39;
    v43 = (char *)a2 + 87;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/backend/backend_ckb/backend_ckb.c",
      169,
      "work_2_packet_ckb",
      17,
      142,
      80,
      v50);
    v48 = (unsigned __int8)a3[3];
    do
    {
      v44 = (unsigned __int8)*++v42;
      snprintf(&v49[v35], 4096 - v35, "%02x ", v44);
      v35 += 3;
    }
    while ( v42 != v43 );
    V_LOCK();
    logfmt_raw(v50, 0x1000u, 0, "ckb dump work jobid %s, work count %d", v46, v48);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/backend/backend_ckb/backend_ckb.c",
      169,
      "dump_work_ckb",
      13,
      106,
      20,
      v50);
    V_LOCK();
    logfmt_raw(v50, 0x1000u, 0, "dump work: %s", v49);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/g"
      "odminer-origin_master/backend/backend_ckb/backend_ckb.c",
      169,
      "dump_work_ckb",
      13,
      107,
      20,
      v50);
  }
  v36 = &last_header_ckb;
  do
  {
    v7 += 4;
    v36 += 4;
    v37 = *(v7 - 3);
    v38 = *(v7 - 2);
    v39 = *(v7 - 1);
    *(v36 - 4) = *(v7 - 4);
    *(v36 - 3) = v37;
    *(v36 - 2) = v38;
    *(v36 - 1) = v39;
  }
  while ( v7 != v45 );
  v40 = BM_CRC16(a3 + 2, 50);
  a3[53] = v40;
  a3[52] = HIBYTE(v40);
  *a4 = 54;
  return 0;
}
