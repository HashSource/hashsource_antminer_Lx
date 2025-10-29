int __fastcall check_temperature_base(int a1, int *a2, int *a3)
{
  int v3; // r3
  int v5; // r1
  int v6; // r2
  int v7; // r3
  int *v8; // lr
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r3
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int *v16; // lr
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int v20; // r3
  int v21; // r3
  int v22; // r3
  char v26[48]; // [sp+3Ch] [bp-12F0h] BYREF
  int v27; // [sp+103Ch] [bp-2F0h]
  int v28; // [sp+1040h] [bp-2ECh]
  int v29; // [sp+1044h] [bp-2E8h]
  int v30; // [sp+1048h] [bp-2E4h]
  int v31; // [sp+104Ch] [bp-2E0h]
  int v32; // [sp+1050h] [bp-2DCh]
  int v33; // [sp+1054h] [bp-2D8h]
  int v34; // [sp+1058h] [bp-2D4h]
  int v35; // [sp+105Ch] [bp-2D0h]
  int v36; // [sp+1060h] [bp-2CCh]
  int v37; // [sp+1064h] [bp-2C8h]
  int v38; // [sp+1068h] [bp-2C4h]
  int v39; // [sp+106Ch] [bp-2C0h]
  int v40; // [sp+1070h] [bp-2BCh]
  _DWORD v41[129]; // [sp+1074h] [bp-2B8h] BYREF
  _DWORD v42[7]; // [sp+1278h] [bp-B4h] BYREF
  int v43; // [sp+1294h] [bp-98h]
  _DWORD v44[7]; // [sp+1298h] [bp-94h] BYREF
  int v45; // [sp+12B4h] [bp-78h]
  _DWORD v46[7]; // [sp+12B8h] [bp-74h] BYREF
  int v47; // [sp+12D4h] [bp-58h]
  int v48; // [sp+12DCh] [bp-50h]
  int v49; // [sp+12E0h] [bp-4Ch]
  void *ptr; // [sp+12E4h] [bp-48h]
  _DWORD *all_created_runtime; // [sp+12E8h] [bp-44h]
  int v52; // [sp+12ECh] [bp-40h]
  int k; // [sp+12F0h] [bp-3Ch]
  int j; // [sp+12F4h] [bp-38h]
  int v55; // [sp+12F8h] [bp-34h]
  int i; // [sp+12FCh] [bp-30h]
  int v57; // [sp+1300h] [bp-2Ch]
  int v58; // [sp+1304h] [bp-28h]
  int v59; // [sp+1308h] [bp-24h]
  int v60; // [sp+130Ch] [bp-20h]
  int v61; // [sp+1310h] [bp-1Ch]
  int v62; // [sp+1314h] [bp-18h]
  int v63; // [sp+1318h] [bp-14h]
  int v64; // [sp+131Ch] [bp-10h]

  v58 = 0;
  v59 = 256;
  v60 = 255;
  v62 = -64;
  v61 = 0;
  v63 = 0;
  v64 = 0;
  v57 = 0;
  v41[0] = 0;
  v52 = 3;
  v55 = 0;
  all_created_runtime = get_all_created_runtime(v41);
  for ( i = 0; i < v41[0]; ++i )
  {
    v3 = *(_DWORD *)(all_created_runtime[i] + 396);
    if ( v59 < v3 )
      v3 = v59;
    v59 = v3;
  }
  if ( v59 == 256 )
    v59 = 2;
  ptr = calloc(v59 * v41[0], 0xCu);
  if ( ptr )
  {
    for ( i = 0; i < v41[0]; ++i )
    {
      v55 = 0;
      while ( (*(int (__fastcall **)(_DWORD, char *))(all_created_runtime[i] + 228))(
                all_created_runtime[i],
                (char *)ptr + 12 * v59 * i) )
      {
        if ( v55 >= v52 )
        {
          V_LOCK();
          logfmt_raw(v26, 0x1000u, 0, "%s, %d read temp err", "check_temperature_base", 761);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
            176,
            "check_temperature_base",
            22,
            761,
            100,
            v26);
          v58 = 4;
        }
        ++v55;
      }
      usleep(0x1388u);
    }
    for ( j = 0; j < v59; ++j )
    {
      for ( i = 0; i < v41[0]; ++i )
      {
        v5 = *(_DWORD *)(all_created_runtime[i] + 392);
        v6 = *(_DWORD *)(all_created_runtime[i] + 396);
        v7 = *(_DWORD *)(all_created_runtime[i] + 400);
        v8 = (int *)(all_created_runtime[i] + 404);
        v34 = *(_DWORD *)(all_created_runtime[i] + 388);
        v35 = v5;
        v36 = v6;
        v37 = v7;
        v9 = v8[1];
        v10 = v8[2];
        v38 = *v8;
        v39 = v9;
        v40 = v10;
        v48 = v34 + 24 * j;
        if ( *((_DWORD *)ptr + 3 * v59 * i + 3 * j + 1) != -64 )
        {
          if ( *(_DWORD *)(v48 + 12) )
          {
            if ( *(_DWORD *)(v48 + 12) == 1 )
            {
              v12 = v63++;
              v41[v12 + 1] = *((_DWORD *)ptr + 3 * v59 * i + 3 * j + 1);
              V_LOCK();
              sub_4FC8C((int)v44, *(int *)(all_created_runtime[i] + 252));
              logfmt_raw(
                v26,
                0x1000u,
                0,
                v45,
                v44[0],
                v44[1],
                v44[2],
                v44[3],
                v44[4],
                v44[5],
                v44[6],
                v45,
                "chip temp max: %d",
                *((_DWORD *)ptr + 3 * v59 * i + 3 * j + 1));
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build"
                "/godminer-origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
                176,
                "check_temperature_base",
                22,
                780,
                20,
                v26);
            }
          }
          else
          {
            v11 = v61++;
            v41[v11 + 65] = *((_DWORD *)ptr + 3 * v59 * i + 3 * j + 1);
            V_LOCK();
            sub_4FC8C((int)v42, *(int *)(all_created_runtime[i] + 252));
            logfmt_raw(
              v26,
              0x1000u,
              0,
              v43,
              v42[0],
              v42[1],
              v42[2],
              v42[3],
              v42[4],
              v42[5],
              v42[6],
              v43,
              "chip temp min: %d",
              *((_DWORD *)ptr + 3 * v59 * i + 3 * j + 1));
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/g"
              "odminer-origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
              176,
              "check_temperature_base",
              22,
              777,
              20,
              v26);
          }
        }
      }
    }
    for ( i = 0; i < v41[0]; ++i )
    {
      v13 = *(_DWORD *)(all_created_runtime[i] + 392);
      v14 = *(_DWORD *)(all_created_runtime[i] + 396);
      v15 = *(_DWORD *)(all_created_runtime[i] + 400);
      v16 = (int *)(all_created_runtime[i] + 404);
      v27 = *(_DWORD *)(all_created_runtime[i] + 388);
      v28 = v13;
      v29 = v14;
      v30 = v15;
      v17 = v16[1];
      v18 = v16[2];
      v31 = *v16;
      v32 = v17;
      v33 = v18;
      for ( k = 0; k < v59; ++k )
      {
        if ( *((_DWORD *)ptr + 3 * v59 * i + 3 * k + 1) == -64 )
        {
          V_LOCK();
          sub_4FC8C((int)v46, *(int *)(all_created_runtime[i] + 252));
          logfmt_raw(
            v26,
            0x1000u,
            0,
            v47,
            v46[0],
            v46[1],
            v46[2],
            v46[3],
            v46[4],
            v46[5],
            v46[6],
            v47,
            "sensor_addr %02x, J0:6",
            *(_DWORD *)(v27 + 24 * k + 20));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
            176,
            "check_temperature_base",
            22,
            791,
            100,
            v26);
        }
        else
        {
          v49 = v27 + 24 * k;
          if ( *(_DWORD *)(v49 + 12) )
          {
            if ( *(_DWORD *)(v49 + 12) == 1 )
            {
              ++v57;
              v21 = *((_DWORD *)ptr + 3 * v59 * i + 3 * k + 1);
              if ( v60 < v21 )
                v21 = v60;
              v60 = v21;
              v22 = *((_DWORD *)ptr + 3 * v59 * i + 3 * k + 1);
              if ( v62 >= v22 )
                v22 = v62;
              v62 = v22;
            }
          }
          else
          {
            ++v64;
            v19 = *((_DWORD *)ptr + 3 * v59 * i + 3 * k + 1);
            if ( v60 < v19 )
              v19 = v60;
            v60 = v19;
            v20 = *((_DWORD *)ptr + 3 * v59 * i + 3 * k + 1);
            if ( v62 >= v20 )
              v20 = v62;
            v62 = v20;
          }
        }
      }
    }
    free(ptr);
    *a2 = v60;
    *a3 = v62;
    return v58;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "sensor_status");
    return 3;
  }
}
