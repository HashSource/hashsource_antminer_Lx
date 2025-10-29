int __fastcall update_chip_x7(char a1, float *a2)
{
  unsigned int v3; // r3
  int v4; // r3
  float v5; // s15
  char v9[72]; // [sp+3Ch] [bp-1308h] BYREF
  float v10; // [sp+103Ch] [bp-308h]
  int v11; // [sp+1040h] [bp-304h]
  _DWORD v12[6]; // [sp+1044h] [bp-300h]
  __int16 v13; // [sp+105Ch] [bp-2E8h] BYREF
  char v14; // [sp+105Eh] [bp-2E6h]
  _DWORD v15[6]; // [sp+1060h] [bp-2E4h] BYREF
  unsigned int v16; // [sp+1078h] [bp-2CCh]
  int v17; // [sp+107Ch] [bp-2C8h] BYREF
  _BYTE v18[64]; // [sp+1080h] [bp-2C4h] BYREF
  int v19; // [sp+10C0h] [bp-284h] BYREF
  _DWORD v20[50]; // [sp+10C4h] [bp-280h] BYREF
  unsigned int v21; // [sp+118Ch] [bp-1B8h]
  _BYTE v22[128]; // [sp+1190h] [bp-1B4h] BYREF
  char v23[128]; // [sp+1210h] [bp-134h] BYREF
  _DWORD v24[7]; // [sp+1290h] [bp-B4h] BYREF
  int v25; // [sp+12ACh] [bp-98h]
  _DWORD v26[7]; // [sp+12B0h] [bp-94h] BYREF
  int v27; // [sp+12CCh] [bp-78h]
  _DWORD v28[7]; // [sp+12D0h] [bp-74h] BYREF
  int v29; // [sp+12ECh] [bp-58h]
  int status_x7; // [sp+12F4h] [bp-50h]
  signed int v31; // [sp+12F8h] [bp-4Ch]
  int off; // [sp+12FCh] [bp-48h]
  void *ptr; // [sp+1300h] [bp-44h]
  int i; // [sp+1304h] [bp-40h]
  int j; // [sp+1308h] [bp-3Ch]
  int k; // [sp+130Ch] [bp-38h]
  int m; // [sp+1310h] [bp-34h]
  int n; // [sp+1314h] [bp-30h]
  int ii; // [sp+1318h] [bp-2Ch]
  char v40; // [sp+131Dh] [bp-27h]
  char v41; // [sp+131Eh] [bp-26h]
  char v42; // [sp+131Fh] [bp-25h]
  _DWORD *all_created_runtime; // [sp+1320h] [bp-24h]
  float v44; // [sp+1324h] [bp-20h]
  char *filename; // [sp+1328h] [bp-1Ch]
  unsigned int seconds; // [sp+132Ch] [bp-18h]
  unsigned int v47; // [sp+1330h] [bp-14h]
  FILE *stream; // [sp+1334h] [bp-10h]

  strcpy(v23, "/usr/bin/update_app.zip");
  memset(&v23[24], 0, 0x68u);
  strcpy(v22, "/usr/bin/update_total.zip");
  memset(&v22[26], 0, 0x66u);
  v21 = 0;
  memset(v20, 0, sizeof(v20));
  v40 = 0;
  memset(v18, 0, sizeof(v18));
  v41 = 0;
  v42 = 0;
  all_created_runtime = get_all_created_runtime(&v17);
  v13 = 0;
  v14 = 0;
  seconds = 300;
  v44 = *a2;
  v10 = 0.7;
  v11 = 1050253722;
  if ( a1 )
  {
    filename = v23;
    seconds = 300;
  }
  else
  {
    filename = v22;
    seconds = 1200;
  }
  printf(" %s \n", filename);
  stream = fopen(filename, "r");
  if ( stream )
  {
    fseek(stream, 0, 2);
    v47 = ftell(stream);
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, "begin sending update_packets");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/machine_runtime/x7_2044/machine_runtime_x7_2044.c",
      187,
      "update_chip_x7",
      14,
      487,
      40,
      v9);
    while ( 1 )
    {
      while ( 1 )
      {
        ptr = malloc(0x20Cu);
        memset(ptr, 0, 0x20Cu);
        for ( i = 0; i < v17; ++i )
        {
          status_x7 = sync_unblocked_get_status_x7(all_created_runtime[i], 17, 1, (int)ptr, 20, &v19);
          if ( status_x7 )
          {
            V_LOCK();
            logfmt_raw(v9, 0x1000u, 0, "get update ack packet failed,err code:%d", status_x7);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/g"
              "odminer-origin_godminer-branch1/machine_runtime/x7_2044/machine_runtime_x7_2044.c",
              187,
              "update_chip_x7",
              14,
              511,
              100,
              v9);
            free(ptr);
            fclose(stream);
            return 109;
          }
          if ( v19 )
          {
            v16 = *((_DWORD *)ptr + 3);
            v3 = v16;
            if ( v21 < v16 )
              v3 = v21;
            v21 = v3;
            V_LOCK();
            logfmt_raw(v9, 0x1000u, 0, "recv send_again packet, ack_packet_num %d", v21);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/g"
              "odminer-origin_godminer-branch1/machine_runtime/x7_2044/machine_runtime_x7_2044.c",
              187,
              "update_chip_x7",
              14,
              501,
              20,
              v9);
          }
        }
        free(ptr);
        off = 196 * v21;
        v4 = v47;
        if ( 196 * v21 < v47 )
          v4 = 196 * v21;
        off = v4;
        if ( (float)((float)((float)((float)((float)(1.0 - v44) * (float)(unsigned int)v4) / (float)v47) * v10) + v44) >= *a2 )
          v5 = (float)((float)((float)((float)(1.0 - v44) * (float)(unsigned int)off) / (float)v47) * v10) + v44;
        else
          v5 = *a2;
        *a2 = v5;
        fseek(stream, off, 0);
        v31 = fread(&v20[1], 1u, 0xC4u, stream);
        if ( v31 < 0 )
        {
          V_LOCK();
          logfmt_raw(v9, 0x1000u, 0, "err occured while reading file %s ", filename);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/machine_runtime/x7_2044/machine_runtime_x7_2044.c",
            187,
            "update_chip_x7",
            14,
            526,
            100,
            v9);
          fclose(stream);
          return 306;
        }
        if ( !v31 )
          break;
        v40 = 0;
        v20[0] = v21;
        for ( j = 0; j < v17; ++j )
          chip_setting_send_update_single_packet(all_created_runtime[j], v20, v31 + 4, a1);
        ++v21;
      }
      if ( v40 == 1 )
        break;
      sleep(5u);
      v40 = 1;
    }
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, "send packet complete, prepare checking md5 and update, don't shutdown");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/machine_runtime/x7_2044/machine_runtime_x7_2044.c",
      187,
      "update_chip_x7",
      14,
      549,
      40,
      v9);
    if ( CalcFileMD5(filename, v18) )
    {
      V_LOCK();
      logfmt_raw(v9, 0x1000u, 0, "run cmd \"md5sum\" failed");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/machine_runtime/x7_2044/machine_runtime_x7_2044.c",
        187,
        "update_chip_x7",
        14,
        552,
        100,
        v9);
      fclose(stream);
      return 306;
    }
    else
    {
      for ( k = 0; k < v17; ++k )
      {
        v12[k + 3] = malloc(0x1Cu);
        sub_58970(
          v12[k + 3],
          all_created_runtime[k],
          *(_DWORD *)(all_created_runtime[k] + 336),
          a1,
          (int)v18,
          32,
          (int)&v13 + k,
          (int)&v15[k]);
        pthread_create(&v15[k + 3], 0, (void *(*)(void *))sub_5887C, (void *)v12[k + 3]);
      }
      for ( m = 0; m < v17; ++m )
      {
        pthread_join(v15[m + 3], 0);
        free((void *)v12[m + 3]);
        status_x7 = v15[m];
        if ( status_x7 )
        {
          fclose(stream);
          return 306;
        }
        if ( *((unsigned __int8 *)&v13 + m) != *(_DWORD *)(all_created_runtime[m] + 336) )
        {
          fclose(stream);
          return 102;
        }
      }
      V_LOCK();
      logfmt_raw(v9, 0x1000u, 0, "updating...");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/machine_runtime/x7_2044/machine_runtime_x7_2044.c",
        187,
        "update_chip_x7",
        14,
        579,
        40,
        v9);
      for ( n = 0; n < v17; ++n )
      {
        v12[n] = malloc(0x14u);
        sub_58904(
          v12[n],
          all_created_runtime[n],
          *(_DWORD *)(all_created_runtime[n] + 336),
          a1,
          (int)&v13 + n,
          (int)&v15[n]);
        pthread_create(&v15[n + 3], 0, (void *(*)(void *))sub_58818, (void *)v12[n]);
      }
      for ( ii = 0; ii < v17; ++ii )
      {
        pthread_join(v15[ii + 3], 0);
        free((void *)v12[ii]);
        status_x7 = v15[ii];
        if ( status_x7 )
        {
          V_LOCK();
          sub_56C30((int)v24, *(int *)(all_created_runtime[ii] + 252));
          logfmt_raw(
            v9,
            0x1000u,
            0,
            v25,
            v24[0],
            v24[1],
            v24[2],
            v24[3],
            v24[4],
            v24[5],
            v24[6],
            v25,
            "chip update err code %d, wait %ds and shutdown...",
            status_x7,
            seconds);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/machine_runtime/x7_2044/machine_runtime_x7_2044.c",
            187,
            "update_chip_x7",
            14,
            596,
            100,
            v9);
          sleep(seconds);
          fclose(stream);
          return 306;
        }
        if ( *((unsigned __int8 *)&v13 + ii) != *(_DWORD *)(all_created_runtime[ii] + 336) )
        {
          V_LOCK();
          sub_56C30((int)v26, *(int *)(all_created_runtime[ii] + 252));
          logfmt_raw(
            v9,
            0x1000u,
            0,
            v27,
            v26[0],
            v26[1],
            v26[2],
            v26[3],
            v26[4],
            v26[5],
            v26[6],
            v27,
            "chip update err code %d, wait %ds and shutdown...",
            status_x7,
            seconds);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/machine_runtime/x7_2044/machine_runtime_x7_2044.c",
            187,
            "update_chip_x7",
            14,
            603,
            100,
            v9);
          sleep(seconds);
          fclose(stream);
          return 102;
        }
        V_LOCK();
        sub_56C30((int)v28, *(int *)(all_created_runtime[ii] + 252));
        logfmt_raw(
          v9,
          0x1000u,
          0,
          v29,
          v28[0],
          v28[1],
          v28[2],
          v28[3],
          v28[4],
          v28[5],
          v28[6],
          v29,
          "chip update complete");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/machine_runtime/x7_2044/machine_runtime_x7_2044.c",
          187,
          "update_chip_x7",
          14,
          608,
          40,
          v9);
        *a2 = 1.0;
      }
      fclose(stream);
      return 0;
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, "open file %s failed", filename);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/machine_runtime/x7_2044/machine_runtime_x7_2044.c",
      187,
      "update_chip_x7",
      14,
      481,
      100,
      v9);
    return 306;
  }
}
