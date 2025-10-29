int __fastcall work_2_packet_x7(int a1, int a2, void *a3, _DWORD *a4)
{
  char v4; // r3
  _BYTE *v5; // r3
  __int16 v6; // r0
  int v10; // [sp+20h] [bp-122Ch] BYREF
  char v11[36]; // [sp+228h] [bp-1024h] BYREF
  int v12; // [sp+1228h] [bp-24h]
  int v13; // [sp+122Ch] [bp-20h]
  int v14; // [sp+1230h] [bp-1Ch]
  int v15; // [sp+1234h] [bp-18h]
  void *src; // [sp+1238h] [bp-14h]
  int k; // [sp+123Ch] [bp-10h]
  int j; // [sp+1240h] [bp-Ch]
  int i; // [sp+1244h] [bp-8h]

  src = a3;
  v15 = a2;
  v14 = 0;
  wait_x7_chip_setting_not_pending(a1);
  v13 = *(_DWORD *)(a1 + 824);
  *(_BYTE *)src = 85;
  *((_BYTE *)src + 1) = -86;
  *((_BYTE *)src + 2) = 3;
  *((_BYTE *)src + 3) = -1;
  *((_BYTE *)src + 4) = -1;
  *((_BYTE *)src + 5) = *(_BYTE *)(v15 + 382) + 8;
  *((_BYTE *)src + 9) = *(_DWORD *)(a1 + 432);
  *((_BYTE *)src + 10) = 4;
  v12 = *(_DWORD *)(v15 + 383);
  if ( v12 == -1 )
  {
    v12 = 432 * *(_DWORD *)(a1 + 248);
    *(_DWORD *)(v15 + 383) = v12;
  }
  memset((void *)(v15 + 223), 0, 4u);
  *(_DWORD *)((char *)src + 11) = *(_DWORD *)(v15 + 383);
  *((_BYTE *)src + 15) = *(_BYTE *)(v15 + 382);
  memcpy((char *)src + 16, (const void *)(v15 + 184), *(unsigned __int8 *)(v15 + 382));
  *(_QWORD *)(v13 + 8 * *(unsigned __int8 *)(v13 + 49024)) = *(_QWORD *)v15;
  memcpy((void *)(v13 + ((*(unsigned __int8 *)(v13 + 49024) + 16) << 6)), (const void *)(v15 + 8), 0x40u);
  memcpy((void *)(v13 + 32 * (*(unsigned __int8 *)(v13 + 49024) + 288)), (const void *)(v15 + 72), 0x20u);
  *(_QWORD *)(v13 + 8 * (*(unsigned __int8 *)(v13 + 49024) + 1664)) = *(_QWORD *)(v15 + 104);
  *(_QWORD *)(v13 + 8 * (*(unsigned __int8 *)(v13 + 49024) + 1792)) = *(_QWORD *)(v15 + 112);
  strcpy((char *)(v13 + ((*(unsigned __int8 *)(v13 + 49024) + 240) << 6)), (const char *)(v15 + 120));
  memcpy(
    (void *)(v13 + 198 * *(unsigned __int8 *)(v13 + 49024) + 23552),
    (const void *)(v15 + 184),
    *(unsigned __int8 *)(v15 + 382));
  *(_BYTE *)(v13 + *(unsigned __int8 *)(v13 + 49024) + 48896) = *(_BYTE *)(v15 + 382);
  pthread_mutex_lock(&msg_ack_lock[*(_DWORD *)(a1 + 248)]);
  pthread_cond_broadcast(&msg_check_process_wakeup_cond[*(_DWORD *)(a1 + 248)]);
  v4 = *(_BYTE *)(v13 + 49024);
  *(_BYTE *)(v13 + 49024) = v4 + 1;
  *((_BYTE *)src + 8) = v4;
  pthread_mutex_unlock(&msg_ack_lock[*(_DWORD *)(a1 + 248)]);
  *(_BYTE *)(v13 + 49024) &= ~0x80u;
  if ( *(unsigned __int8 *)(v15 + 382) == (unsigned __int8)last_blob_len
    && !memcmp(&last_start_nonce_x7, (const void *)(v15 + 383), 4u)
    && !memcmp(&last_blob_x7, (const void *)(v15 + 184), (unsigned __int8)last_blob_len) )
  {
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, "found repeat work");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/backend_x7_2044/backend_x7_2044.c",
      179,
      "work_2_packet_x7",
      16,
      214,
      80,
      v11);
    sub_895FC(v15, *((_BYTE *)src + 8));
  }
  last_blob_len = *(_BYTE *)(v15 + 382);
  memcpy(&last_blob_x7, (const void *)(v15 + 184), *(unsigned __int8 *)(v15 + 382));
  last_start_nonce_x7 = *(_DWORD *)(v15 + 383);
  v5 = src;
  *((_BYTE *)src + 6) = 0;
  v5[7] = 0;
  v6 = BM_CRC16((char *)src, *(unsigned __int8 *)(v15 + 382) + 16);
  *((_WORD *)src + 3) = v6;
  *a4 = *(unsigned __int8 *)(v15 + 382) + 16;
  pthread_mutex_lock(&last_work_lock[*(_DWORD *)(a1 + 248)]);
  memcpy((char *)&last_work_packet + 214 * *(_DWORD *)(a1 + 248), src, 0xD6u);
  last_work_len[*(_DWORD *)(a1 + 248)] = *a4;
  pthread_mutex_unlock(&last_work_lock[*(_DWORD *)(a1 + 248)]);
  if ( *(_BYTE *)(a1 + 257) && *(_BYTE *)(a1 + 258) )
  {
    memset(*(void **)(a1 + 456), 0, 48 * *(_DWORD *)(a1 + 336));
    *(_BYTE *)(a1 + 257) = 0;
  }
  if ( memcmp((char *)&last_seed_hash_x7 + 32 * *(_DWORD *)(a1 + 248), (const void *)(v15 + 72), 0x20u) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 336); ++i )
      pthread_mutex_lock((pthread_mutex_t *)(x7_chip_seed_status[*(_DWORD *)(a1 + 248)] + 76 * i + 52));
    chip_setting_seed_x7(a1, (const void *)(v15 + 72), 0x20u, &v10, 0xFFu);
    memcpy((char *)&last_seed_hash_x7 + 32 * *(_DWORD *)(a1 + 248), (const void *)(v15 + 72), 0x20u);
    for ( j = 0; j < *(_DWORD *)(a1 + 336); ++j )
      pthread_mutex_unlock((pthread_mutex_t *)(x7_chip_seed_status[*(_DWORD *)(a1 + 248)] + 76 * j + 52));
    for ( k = 0; k < *(_DWORD *)(a1 + 336); ++k )
      chip_seed_status_set_calculating(a1, k);
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, "new seed has come");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/backend_x7_2044/backend_x7_2044.c",
      179,
      "work_2_packet_x7",
      16,
      267,
      40,
      v11);
    set_x7_chip_setting_pending(a1, 50);
    *a4 = 0;
  }
  return 0;
}
