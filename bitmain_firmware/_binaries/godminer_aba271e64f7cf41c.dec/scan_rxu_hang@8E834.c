int __fastcall scan_rxu_hang(int a1)
{
  float v1; // s15
  float v2; // s15
  int v3; // r3
  char v5[16]; // [sp+34h] [bp-1290h] BYREF
  _DWORD v6[133]; // [sp+1034h] [bp-290h] BYREF
  _DWORD v7[7]; // [sp+1248h] [bp-7Ch] BYREF
  int v8; // [sp+1264h] [bp-60h]
  _DWORD v9[7]; // [sp+1268h] [bp-5Ch] BYREF
  int v10; // [sp+1284h] [bp-40h]
  int rxu_status_x7; // [sp+1288h] [bp-3Ch]
  void *v12; // [sp+128Ch] [bp-38h]
  void *ptr; // [sp+1290h] [bp-34h]
  int v14; // [sp+1294h] [bp-30h]
  int v15; // [sp+1298h] [bp-2Ch]
  int v16; // [sp+129Ch] [bp-28h]
  int j; // [sp+12A0h] [bp-24h]
  int i; // [sp+12A4h] [bp-20h]
  int v19; // [sp+12A8h] [bp-1Ch]
  int v20; // [sp+12ACh] [bp-18h]
  int v21; // [sp+12B0h] [bp-14h]
  int v22; // [sp+12B4h] [bp-10h]

  v16 = a1;
  v15 = *(_DWORD *)(a1 + 1288);
  v14 = 0;
  memset(&v6[5], 0, 0x200u);
  v21 = 0;
  v22 = 1;
  ptr = calloc(1u, 8 * *(_DWORD *)(v16 + 336));
  v12 = calloc(1u, 12 * *(_DWORD *)(v16 + 336));
  while ( !*(_BYTE *)(v15 + 9) )
  {
    if ( !*(_BYTE *)(v16 + 258) )
      goto LABEL_30;
    if ( v21 == 1 )
    {
      rxu_status_x7 = read_rxu_status_x7(v16, v12, v6);
      if ( rxu_status_x7 )
      {
        V_LOCK();
        sub_89210((int)v7, *(int *)(v16 + 252));
        logfmt_raw(
          v5,
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
          "read_rxu_status_x7 err, code %d",
          rxu_status_x7);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/backend/backend_x7_2044/backend_x7_2044.c",
          179,
          "scan_rxu_hang",
          13,
          1432,
          100,
          v5);
      }
      v20 = 0;
      v19 = 0;
      for ( i = 0; i < v6[0]; ++i )
      {
        if ( *((_DWORD *)v12 + 3 * i) < *(_DWORD *)(v16 + 336) )
        {
          v20 += *((_DWORD *)v12 + 3 * i + 1);
          *((_DWORD *)ptr + 2 * *((_DWORD *)v12 + 3 * i)) += *((_DWORD *)v12 + 3 * i + 1);
          v1 = *((float *)ptr + 2 * *((_DWORD *)v12 + 3 * i) + 1) + (float)*((int *)v12 + 3 * i + 1) * 0.4;
          *((float *)ptr + 2 * *((_DWORD *)v12 + 3 * i) + 1) = v1;
          if ( *((float *)ptr + 2 * *((_DWORD *)v12 + 3 * i) + 1) <= (float)*((int *)ptr + 2 * *((_DWORD *)v12 + 3 * i))
                                                                   + 0.001 )
            v2 = *((float *)ptr + 2 * *((_DWORD *)v12 + 3 * i) + 1);
          else
            v2 = (float)*((int *)ptr + 2 * *((_DWORD *)v12 + 3 * i)) + 0.001;
          *((float *)ptr + 2 * *((_DWORD *)v12 + 3 * i) + 1) = v2;
          v19 += (int)*((float *)ptr + 2 * *((_DWORD *)v12 + 3 * i) + 1);
        }
      }
      if ( v20 - v19 <= 0 )
      {
        usleep(0x1C9C3800u);
      }
      else
      {
        v22 = 2;
        V_LOCK();
        sub_89210((int)v9, *(int *)(v16 + 252));
        logfmt_raw(
          v5,
          0x1000u,
          0,
          v10,
          v9[0],
          v9[1],
          v9[2],
          v9[3],
          v9[4],
          v9[5],
          v9[6],
          v10,
          "%d rxu hang, prepare to restart chip",
          v20);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/backend/backend_x7_2044/backend_x7_2044.c",
          179,
          "scan_rxu_hang",
          13,
          1468,
          40,
          v5);
      }
      goto LABEL_29;
    }
    if ( v21 )
    {
      if ( v21 != 2 )
        goto LABEL_29;
      for ( j = 0; j < *(_DWORD *)(v16 + 336); ++j )
      {
        if ( (float)*((int *)ptr + 2 * *((_DWORD *)v12 + 3 * j)) > *((float *)ptr + 2 * *((_DWORD *)v12 + 3 * j) + 1) )
        {
          *(_BYTE *)(v16 + 1096) = 1;
          *((_DWORD *)ptr + 2 * *((_DWORD *)v12 + 3 * j)) = 0;
          rxu_status_x7 = restart_one_chip_x7(v16, *((_DWORD *)v12 + 3 * j));
          *(_BYTE *)(v16 + 1096) = 0;
          pthread_mutex_lock((pthread_mutex_t *)(x7_chip_seed_status[*(_DWORD *)(v16 + 248)]
                                               + 76 * *((_DWORD *)v12 + 3 * j)
                                               + 52));
          chip_setting_seed_x7(
            v16,
            (char *)&last_seed_hash_x7 + 32 * *(_DWORD *)(v16 + 248),
            0x20u,
            v5,
            *((_DWORD *)v12 + 3 * j));
          pthread_mutex_unlock((pthread_mutex_t *)(x7_chip_seed_status[*(_DWORD *)(v16 + 248)]
                                                 + 76 * *((_DWORD *)v12 + 3 * j)
                                                 + 52));
          reset_chip_seed_status(v16, *((_DWORD *)v12 + 3 * j));
          chip_seed_status_set_calculating(v16, *((_DWORD *)v12 + 3 * j));
          sleep(0xFu);
        }
      }
    }
    usleep(0x1C9C3800u);
    v22 = 1;
LABEL_29:
    v21 = v22;
LABEL_30:
    usleep(0x7A120u);
  }
  *(_BYTE *)(v15 + 9) = 0;
  free(ptr);
  free(v12);
  return v3;
}
