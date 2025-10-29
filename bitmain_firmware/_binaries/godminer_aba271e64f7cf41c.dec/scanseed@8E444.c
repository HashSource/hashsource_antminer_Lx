int __fastcall scanseed(int a1)
{
  char v2[48]; // [sp+34h] [bp-1270h] BYREF
  int v3; // [sp+1034h] [bp-270h] BYREF
  _BYTE s[512]; // [sp+1038h] [bp-26Ch] BYREF
  _DWORD v5[7]; // [sp+1238h] [bp-6Ch] BYREF
  int v6; // [sp+1254h] [bp-50h]
  _DWORD v7[7]; // [sp+1258h] [bp-4Ch] BYREF
  int v8; // [sp+1274h] [bp-30h]
  unsigned __int8 v9; // [sp+127Fh] [bp-25h]
  int seed_status; // [sp+1280h] [bp-24h]
  _BYTE *v11; // [sp+1284h] [bp-20h]
  int v12; // [sp+1288h] [bp-1Ch]
  int v13; // [sp+128Ch] [bp-18h]
  int i; // [sp+1290h] [bp-14h]
  int j; // [sp+1294h] [bp-10h]

  v13 = a1;
  v12 = *(_DWORD *)(a1 + 1288);
  v11 = 0;
  memset(s, 0, sizeof(s));
LABEL_2:
  if ( *(_BYTE *)(v12 + 8) )
  {
    *(_BYTE *)(v12 + 8) = 0;
  }
  else
  {
    for ( i = 0; ; ++i )
    {
      if ( i > 9 )
      {
        if ( *(_BYTE *)(v13 + 258) )
        {
          for ( j = 0; j < *(_DWORD *)(v13 + 336); ++j )
          {
            if ( *(_BYTE *)(v12 + 8) )
            {
              *(_BYTE *)(v12 + 8) = 0;
              return 0;
            }
            update_seed_status_expired(v13, j);
            update_outdated_chip_seed(v13, j);
          }
        }
        goto LABEL_2;
      }
      if ( *(_BYTE *)(v13 + 258) )
        break;
LABEL_15:
      usleep(0x7A120u);
    }
    while ( !*(_BYTE *)(v12 + 8) )
    {
      v3 = 0;
      seed_status = try_get_seed_status(v13, 1, (int)s, &v3);
      if ( seed_status )
      {
        V_LOCK();
        sub_89210((int)v5, *(int *)(v13 + 252));
        logfmt_raw(
          v2,
          0x1000u,
          0,
          v6,
          v5[0],
          v5[1],
          v5[2],
          v5[3],
          v5[4],
          v5[5],
          v5[6],
          v6,
          "get seed err, code %d",
          seed_status);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/backend/backend_x7_2044/backend_x7_2044.c",
          179,
          "scanseed",
          8,
          1350,
          100,
          v2);
      }
      if ( v3 )
      {
        v11 = s;
        v9 = s[3];
        if ( s[3] < *(int *)(v13 + 336) )
        {
          update_seed_status_receive_ack(v13, v9, v11 + 12);
          pthread_mutex_lock(&last_work_lock[*(_DWORD *)(v13 + 248)]);
          chip_setting_msg_x7(
            v13,
            (char *)&last_work_packet + 214 * *(_DWORD *)(v13 + 248),
            last_work_len[*(_DWORD *)(v13 + 248)],
            v9);
          pthread_mutex_unlock(&last_work_lock[*(_DWORD *)(v13 + 248)]);
        }
        else
        {
          V_LOCK();
          sub_89210((int)v7, *(int *)(v13 + 252));
          logfmt_raw(
            v2,
            0x1000u,
            0,
            v8,
            v7[0],
            v7[1],
            v7[2],
            v7[3],
            v7[4],
            v7[5],
            v7[6],
            v8,
            "chip_id %d is invalid",
            v9);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/backend/backend_x7_2044/backend_x7_2044.c",
            179,
            "scanseed",
            8,
            1359,
            100,
            v2);
        }
      }
      if ( !v3 )
        goto LABEL_15;
    }
    *(_BYTE *)(v12 + 8) = 0;
  }
  return 0;
}
