int __fastcall check_bringup_temperature_base(int a1)
{
  int v1; // r3
  int v3; // r1
  int v4; // r2
  int v5; // r3
  int *v6; // lr
  int v7; // r1
  int v8; // r2
  int v9; // r3
  int v10; // r3
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int *v14; // lr
  int v15; // r1
  int v16; // r2
  int v17; // r3
  char v20[32]; // [sp+34h] [bp-1320h] BYREF
  int v21; // [sp+1034h] [bp-320h]
  int v22; // [sp+1038h] [bp-31Ch]
  int v23; // [sp+103Ch] [bp-318h]
  int v24; // [sp+1040h] [bp-314h]
  int v25; // [sp+1044h] [bp-310h]
  int v26; // [sp+1048h] [bp-30Ch]
  int v27; // [sp+104Ch] [bp-308h]
  int v28; // [sp+1050h] [bp-304h]
  int v29; // [sp+1054h] [bp-300h]
  int v30; // [sp+1058h] [bp-2FCh]
  int v31; // [sp+105Ch] [bp-2F8h]
  int v32; // [sp+1060h] [bp-2F4h]
  int v33; // [sp+1064h] [bp-2F0h]
  int v34; // [sp+1068h] [bp-2ECh]
  int v35; // [sp+106Ch] [bp-2E8h] BYREF
  _DWORD v36[64]; // [sp+1070h] [bp-2E4h] BYREF
  _DWORD v37[64]; // [sp+1170h] [bp-1E4h] BYREF
  _DWORD v38[7]; // [sp+1270h] [bp-E4h] BYREF
  int v39; // [sp+128Ch] [bp-C8h]
  _DWORD v40[7]; // [sp+1290h] [bp-C4h] BYREF
  int v41; // [sp+12ACh] [bp-A8h]
  _DWORD v42[7]; // [sp+12B0h] [bp-A4h] BYREF
  int v43; // [sp+12CCh] [bp-88h]
  _DWORD v44[7]; // [sp+12D0h] [bp-84h] BYREF
  int v45; // [sp+12ECh] [bp-68h]
  _DWORD v46[7]; // [sp+12F0h] [bp-64h] BYREF
  int v47; // [sp+130Ch] [bp-48h]
  int v48; // [sp+1310h] [bp-44h]
  int v49; // [sp+1314h] [bp-40h]
  void *ptr; // [sp+1318h] [bp-3Ch]
  _DWORD *all_created_runtime; // [sp+131Ch] [bp-38h]
  int v52; // [sp+1320h] [bp-34h]
  int v53; // [sp+1324h] [bp-30h]
  int v54; // [sp+1328h] [bp-2Ch]
  int v55; // [sp+132Ch] [bp-28h]
  int v56; // [sp+1330h] [bp-24h]
  int v57; // [sp+1334h] [bp-20h]
  int v58; // [sp+1338h] [bp-1Ch]
  int j; // [sp+133Ch] [bp-18h]
  int i; // [sp+1340h] [bp-14h]
  int k; // [sp+1344h] [bp-10h]

  v52 = 0;
  v53 = 256;
  v54 = 255;
  v55 = 0;
  v56 = 0;
  v57 = 0;
  v58 = 0;
  v35 = 0;
  all_created_runtime = get_all_created_runtime(&v35);
  for ( i = 0; i < v35; ++i )
  {
    v1 = *(_DWORD *)(all_created_runtime[i] + 396);
    if ( v53 < v1 )
      v1 = v53;
    v53 = v1;
  }
  if ( v53 == 256 )
    v53 = 2;
  ptr = calloc(v53 * v35, 0xCu);
  if ( ptr )
  {
    for ( i = 0; i < v35; ++i )
      (*(void (__fastcall **)(_DWORD, char *))(all_created_runtime[i] + 228))(
        all_created_runtime[i],
        (char *)ptr + 12 * v53 * i);
    for ( j = 0; j < v53; ++j )
    {
      for ( i = 0; i < v35; ++i )
      {
        v3 = *(_DWORD *)(all_created_runtime[i] + 392);
        v4 = *(_DWORD *)(all_created_runtime[i] + 396);
        v5 = *(_DWORD *)(all_created_runtime[i] + 400);
        v6 = (int *)(all_created_runtime[i] + 404);
        v28 = *(_DWORD *)(all_created_runtime[i] + 388);
        v29 = v3;
        v30 = v4;
        v31 = v5;
        v7 = v6[1];
        v8 = v6[2];
        v32 = *v6;
        v33 = v7;
        v34 = v8;
        v48 = v28 + 24 * j;
        if ( *((_DWORD *)ptr + 3 * v53 * i + 3 * j + 1) != -64 )
        {
          if ( *(_DWORD *)(v48 + 12) )
          {
            if ( *(_DWORD *)(v48 + 12) == 1 )
            {
              v10 = v56++;
              v36[v10] = *((_DWORD *)ptr + 3 * v53 * i + 3 * j + 1);
              V_LOCK();
              sub_4FC8C((int)v40, *(int *)(all_created_runtime[i] + 252));
              logfmt_raw(
                v20,
                0x1000u,
                0,
                v41,
                v40[0],
                v40[1],
                v40[2],
                v40[3],
                v40[4],
                v40[5],
                v40[6],
                v41,
                "chip temp max: %d",
                *((_DWORD *)ptr + 3 * v53 * i + 3 * j + 1));
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build"
                "/godminer-origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
                176,
                "check_bringup_temperature_base",
                30,
                221,
                40,
                v20);
            }
          }
          else
          {
            v9 = v55++;
            v37[v9] = *((_DWORD *)ptr + 3 * v53 * i + 3 * j + 1);
            V_LOCK();
            sub_4FC8C((int)v38, *(int *)(all_created_runtime[i] + 252));
            logfmt_raw(
              v20,
              0x1000u,
              0,
              v39,
              v38[0],
              v38[1],
              v38[2],
              v38[3],
              v38[4],
              v38[5],
              v38[6],
              v39,
              "chip temp min: %d",
              *((_DWORD *)ptr + 3 * v53 * i + 3 * j + 1));
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/g"
              "odminer-origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
              176,
              "check_bringup_temperature_base",
              30,
              218,
              40,
              v20);
          }
        }
      }
    }
    for ( i = 0; i < v35; ++i )
    {
      v11 = *(_DWORD *)(all_created_runtime[i] + 392);
      v12 = *(_DWORD *)(all_created_runtime[i] + 396);
      v13 = *(_DWORD *)(all_created_runtime[i] + 400);
      v14 = (int *)(all_created_runtime[i] + 404);
      v21 = *(_DWORD *)(all_created_runtime[i] + 388);
      v22 = v11;
      v23 = v12;
      v24 = v13;
      v15 = v14[1];
      v16 = v14[2];
      v25 = *v14;
      v26 = v15;
      v27 = v16;
      for ( k = 0; k < v53; ++k )
      {
        if ( *((_DWORD *)ptr + 3 * v53 * i + 3 * k + 1) == -64 )
        {
          V_LOCK();
          sub_4FC8C((int)v42, *(int *)(all_created_runtime[i] + 252));
          logfmt_raw(
            v20,
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
            "sensor_addr %02x, J0:6",
            *(_DWORD *)(v21 + 24 * k + 20));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
            176,
            "check_bringup_temperature_base",
            30,
            244,
            100,
            v20);
        }
        else
        {
          v49 = v21 + 24 * k;
          if ( *(_DWORD *)(v49 + 12) )
          {
            if ( *(_DWORD *)(v49 + 12) == 1 )
            {
              if ( check_value_valid_with_stdd((int)v36, v56, *((_DWORD *)ptr + 3 * v53 * i + 3 * k + 1)) )
              {
                ++v58;
              }
              else
              {
                V_LOCK();
                sub_4FC8C((int)v46, *(int *)(all_created_runtime[i] + 252));
                logfmt_raw(
                  v20,
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
                  *(_DWORD *)(v49 + 20));
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/bui"
                  "ld/godminer-origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
                  176,
                  "check_bringup_temperature_base",
                  30,
                  259,
                  100,
                  v20);
              }
            }
          }
          else if ( check_value_valid_with_stdd((int)v37, v55, *((_DWORD *)ptr + 3 * v53 * i + 3 * k + 1)) )
          {
            ++v57;
            v17 = *((_DWORD *)ptr + 3 * v53 * i + 3 * k + 1);
            if ( v54 < v17 )
              v17 = v54;
            v54 = v17;
          }
          else
          {
            V_LOCK();
            sub_4FC8C((int)v44, *(int *)(all_created_runtime[i] + 252));
            logfmt_raw(
              v20,
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
              "sensor_addr %02x, J0:6",
              *(_DWORD *)(v49 + 20));
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/g"
              "odminer-origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
              176,
              "check_bringup_temperature_base",
              30,
              251,
              100,
              v20);
          }
        }
      }
    }
    free(ptr);
    if ( v57 <= 0 || v58 <= 0 )
    {
      V_LOCK();
      logfmt_raw(v20, 0x1000u, 0, "J0:6, temp sensor error, pls check it, and reboot system");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/machine_runtime/machine_runtime_base.c",
        176,
        "check_bringup_temperature_base",
        30,
        271,
        100,
        v20);
      while ( 1 )
        ;
    }
    *(_DWORD *)(a1 + 100) = v54;
    return v52;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "sensor_status");
    return 3;
  }
}
