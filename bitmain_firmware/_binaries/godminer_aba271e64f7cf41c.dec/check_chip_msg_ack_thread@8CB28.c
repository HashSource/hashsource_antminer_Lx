int __fastcall check_chip_msg_ack_thread(char *a1)
{
  pthread_t v1; // r0
  int (**v2)(); // r0
  unsigned int v3; // r0
  int (**v4)(); // r0
  char v7[60]; // [sp+30h] [bp-11BCh] BYREF
  pthread_condattr_t attr; // [sp+1030h] [bp-1BCh] BYREF
  int v9; // [sp+1034h] [bp-1B8h] BYREF
  struct timespec tp; // [sp+1038h] [bp-1B4h] BYREF
  _BYTE dest[216]; // [sp+1040h] [bp-1ACh] BYREF
  _DWORD v12[7]; // [sp+1118h] [bp-D4h] BYREF
  int v13; // [sp+1134h] [bp-B8h]
  _DWORD v14[7]; // [sp+1138h] [bp-B4h] BYREF
  int v15; // [sp+1154h] [bp-98h]
  _DWORD v16[7]; // [sp+1158h] [bp-94h] BYREF
  int v17; // [sp+1174h] [bp-78h]
  _DWORD v18[7]; // [sp+1178h] [bp-74h] BYREF
  int v19; // [sp+1194h] [bp-58h]
  _DWORD v20[7]; // [sp+1198h] [bp-54h] BYREF
  int v21; // [sp+11B4h] [bp-38h]
  int msg_ack; // [sp+11B8h] [bp-34h]
  int v23; // [sp+11BCh] [bp-30h]
  int v24; // [sp+11C0h] [bp-2Ch]
  int i; // [sp+11C4h] [bp-28h]
  int j; // [sp+11C8h] [bp-24h]
  char *v27; // [sp+11CCh] [bp-20h]
  unsigned int v28; // [sp+11D0h] [bp-1Ch]
  unsigned __int8 v29; // [sp+11D7h] [bp-15h]
  int v30; // [sp+11D8h] [bp-14h]
  int v31; // [sp+11DCh] [bp-10h]

  v27 = a1;
  v30 = *(_DWORD *)a1;
  v29 = a1[4];
  memcpy(dest, a1 + 5, 0xD6u);
  v28 = *((_DWORD *)v27 + 55);
  free(a1);
  v31 = *(_DWORD *)(v30 + 824);
  v1 = pthread_self();
  pthread_detach(v1);
  pthread_mutex_lock(&stru_15F808[*(_DWORD *)(v30 + 248)]);
  if ( byte_15F850[*(_DWORD *)(v30 + 248)] != 1 )
  {
    pthread_condattr_init(&attr);
    pthread_condattr_setclock(&attr, 1);
    pthread_cond_init(&msg_check_process_wakeup_cond[*(_DWORD *)(v30 + 248)], &attr);
    byte_15F850[*(_DWORD *)(v30 + 248)] = 1;
    dword_15F854 = (int)malloc(524 * *(_DWORD *)(v30 + 336));
    if ( !dword_15F854 )
    {
      V_LOCK();
      sub_89210((int)v12, *(int *)(v30 + 252));
      logfmt_raw(v7, 0x1000u, 0, v13, v12[0], v12[1], v12[2], v12[3], v12[4], v12[5], v12[6], v13, "malloc failed");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/backend_x7_2044/backend_x7_2044.c",
        179,
        "check_chip_msg_ack_thread",
        25,
        1085,
        120,
        v7);
      exit(1);
    }
  }
  if ( *(unsigned __int8 *)(v31 + 49024) == v29 + 1 )
  {
    for ( i = 0; i <= 2; ++i )
    {
      clock_gettime(1, &tp);
      ++tp.tv_sec;
      v23 = *(_DWORD *)(v30 + 336);
      v24 = 0;
      do
      {
        pthread_mutex_lock(&msg_ack_lock[*(_DWORD *)(v30 + 248)]);
        v24 = pthread_cond_timedwait(
                &msg_check_process_wakeup_cond[*(_DWORD *)(v30 + 248)],
                &msg_ack_lock[*(_DWORD *)(v30 + 248)],
                &tp);
        if ( *(unsigned __int8 *)(v31 + 49024) != v29 + 1 )
        {
          pthread_mutex_unlock(&msg_ack_lock[*(_DWORD *)(v30 + 248)]);
          V_LOCK();
          sub_89210((int)v14, *(int *)(v30 + 252));
          logfmt_raw(
            v7,
            0x1000u,
            0,
            v15,
            v14[0],
            v14[1],
            v14[2],
            v14[3],
            v14[4],
            v14[5],
            v14[6],
            v15,
            "msg debug: new msg come");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/backend/backend_x7_2044/backend_x7_2044.c",
            179,
            "check_chip_msg_ack_thread",
            25,
            1108,
            20,
            v7);
          goto LABEL_25;
        }
        pthread_mutex_unlock(&msg_ack_lock[*(_DWORD *)(v30 + 248)]);
        msg_ack = try_get_msg_ack(v30, v23, dword_15F854, &v9);
        if ( msg_ack )
        {
          V_LOCK();
          sub_89210((int)v16, *(int *)(v30 + 252));
          logfmt_raw(
            v7,
            0x1000u,
            0,
            v17,
            v16[0],
            v16[1],
            v16[2],
            v16[3],
            v16[4],
            v16[5],
            v16[6],
            v17,
            "err while try_get_msg_ack, code %d",
            msg_ack);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/backend/backend_x7_2044/backend_x7_2044.c",
            179,
            "check_chip_msg_ack_thread",
            25,
            1116,
            100,
            v7);
          goto LABEL_23;
        }
        for ( j = 0; j < v9; ++j )
        {
          if ( v29 == *(unsigned __int8 *)(dword_15F854 + 524 * j + 12) )
            --v23;
        }
        if ( v23 <= 0 )
        {
          V_LOCK();
          sub_89210((int)v18, *(int *)(v30 + 252));
          logfmt_raw(
            v7,
            0x1000u,
            0,
            v19,
            v18[0],
            v18[1],
            v18[2],
            v18[3],
            v18[4],
            v18[5],
            v18[6],
            v19,
            "msg debug: msg ack success");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/backend/backend_x7_2044/backend_x7_2044.c",
            179,
            "check_chip_msg_ack_thread",
            25,
            1130,
            20,
            v7);
          goto LABEL_25;
        }
      }
      while ( v24 != 110 );
      V_LOCK();
      sub_89210((int)v20, *(int *)(v30 + 252));
      logfmt_raw(
        v7,
        0x1000u,
        0,
        v21,
        v20[0],
        v20[1],
        v20[2],
        v20[3],
        v20[4],
        v20[5],
        v20[6],
        v21,
        "msg ack expired, resend msg remain_packet_num:%d",
        v23);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/backend_x7_2044/backend_x7_2044.c",
        179,
        "check_chip_msg_ack_thread",
        25,
        1136,
        40,
        v7);
      pthread_mutex_lock((pthread_mutex_t *)(v30 + 1072));
      do
      {
        v2 = dev_ctrl();
        v3 = ((int (__fastcall *)(_DWORD))v2[17])(*(_DWORD *)(v30 + 248));
      }
      while ( v3 < v28 );
      v4 = dev_ctrl();
      ((void (__fastcall *)(_DWORD, _BYTE *, unsigned int))v4[13])(*(_DWORD *)(v30 + 248), dest, v28);
      pthread_mutex_unlock((pthread_mutex_t *)(v30 + 1072));
LABEL_23:
      ;
    }
  }
LABEL_25:
  pthread_mutex_unlock(&stru_15F808[*(_DWORD *)(v30 + 248)]);
  return 0;
}
