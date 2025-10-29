int __fastcall sub_8292C(int a1, int a2)
{
  int v2; // r1
  int v3; // r2
  int v4; // r3
  int v5; // r1
  int v6; // r2
  char v11[72]; // [sp+3Ch] [bp-12C8h] BYREF
  int v12; // [sp+103Ch] [bp-2C8h] BYREF
  int v13; // [sp+1040h] [bp-2C4h] BYREF
  int v14; // [sp+1044h] [bp-2C0h] BYREF
  int v15; // [sp+1048h] [bp-2BCh] BYREF
  int v16; // [sp+104Ch] [bp-2B8h] BYREF
  _BYTE v17[440]; // [sp+1050h] [bp-2B4h] BYREF
  int v18; // [sp+1208h] [bp-FCh]
  int v19; // [sp+120Ch] [bp-F8h]
  int v20; // [sp+1210h] [bp-F4h]
  int v21; // [sp+1214h] [bp-F0h]
  int v22; // [sp+1218h] [bp-ECh]
  int v23; // [sp+121Ch] [bp-E8h]
  int v24; // [sp+1220h] [bp-E4h]
  int v25; // [sp+1224h] [bp-E0h] BYREF
  _DWORD v26[7]; // [sp+1228h] [bp-DCh] BYREF
  int v27; // [sp+1244h] [bp-C0h]
  _DWORD v28[7]; // [sp+1248h] [bp-BCh] BYREF
  int v29; // [sp+1264h] [bp-A0h]
  _DWORD v30[7]; // [sp+1268h] [bp-9Ch] BYREF
  int v31; // [sp+1284h] [bp-80h]
  _DWORD v32[7]; // [sp+1288h] [bp-7Ch] BYREF
  int v33; // [sp+12A4h] [bp-60h]
  _DWORD v34[7]; // [sp+12A8h] [bp-5Ch] BYREF
  int v35; // [sp+12C4h] [bp-40h]
  _DWORD *v36; // [sp+12CCh] [bp-38h]
  int v37; // [sp+12D0h] [bp-34h]
  int j; // [sp+12D4h] [bp-30h]
  int i; // [sp+12D8h] [bp-2Ch]
  int k; // [sp+12DCh] [bp-28h]
  int m; // [sp+12E0h] [bp-24h]
  int v42; // [sp+12E4h] [bp-20h]

  v25 = -64;
  v42 = -64;
  v2 = *(_DWORD *)(a1 + 392);
  v3 = *(_DWORD *)(a1 + 396);
  v4 = *(_DWORD *)(a1 + 400);
  v18 = *(_DWORD *)(a1 + 388);
  v19 = v2;
  v20 = v3;
  v21 = v4;
  v5 = *(_DWORD *)(a1 + 408);
  v6 = *(_DWORD *)(a1 + 412);
  v22 = *(_DWORD *)(a1 + 404);
  v23 = v5;
  v24 = v6;
  v15 = -64;
  v14 = -64;
  v13 = -64;
  v37 = 0;
  if ( a2 )
  {
    if ( *(_BYTE *)(a1 + 256) )
    {
      for ( i = 0; i <= 2; ++i )
      {
        sub_81F84(a1, (int)v17, &v16);
        if ( v16 )
          break;
      }
      if ( v16 )
      {
        for ( j = 0; j < v20; ++j )
        {
          calc_chip_temp_min_max_avg_ltc(a1, &v15, &v14, &v13, &v16);
          if ( v16 )
          {
            *(_DWORD *)(a2 + 12 * j + 8) = v13;
            if ( *(_DWORD *)(v18 + 24 * j + 12) )
            {
              if ( *(_DWORD *)(v18 + 24 * j + 12) == 1 )
                *(_DWORD *)(a2 + 12 * j + 4) = v14;
            }
            else
            {
              *(_DWORD *)(a2 + 12 * j + 4) = v15;
            }
          }
          else
          {
            V_LOCK();
            sub_77CE8((int)v28, *(int *)(a1 + 252));
            logfmt_raw(
              v11,
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
              "calc temp failed, sensors may occur errors");
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/g"
              "odminer-origin_godminer-branch1/backend/backend_ltc_1491/backend_ltc_1491.c",
              181,
              "read_temperature_ltc",
              20,
              523,
              100,
              v11);
            *(_DWORD *)(a2 + 12 * j + 8) = -64;
            *(_DWORD *)(a2 + 12 * j + 4) = -64;
            v37 = 4;
          }
        }
      }
      else
      {
        V_LOCK();
        sub_77CE8((int)v30, *(int *)(a1 + 252));
        logfmt_raw(
          v11,
          0x1000u,
          0,
          v31,
          v30[0],
          v30[1],
          v30[2],
          v30[3],
          v30[4],
          v30[5],
          v30[6],
          v31,
          "failed getting chip temp");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/backend/backend_ltc_1491/backend_ltc_1491.c",
          181,
          "read_temperature_ltc",
          20,
          532,
          100,
          v11);
        for ( k = 0; k < v20; ++k )
        {
          *(_DWORD *)(a2 + 12 * k + 8) = -64;
          *(_DWORD *)(a2 + 12 * k + 4) = -64;
        }
        v37 = 4;
      }
    }
    for ( m = 0; m < v20; ++m )
    {
      v36 = (_DWORD *)(v18 + 24 * m);
      v12 = 0;
      (*(void (__fastcall **)(int, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(a1 + 156))(
        a1,
        &v25,
        &v12,
        *v36,
        v36[1],
        v36[2],
        v36[3],
        v36[4],
        v36[5]);
      if ( v12 )
      {
        if ( v25 < -63 )
        {
          v25 = -64;
          V_LOCK();
          sub_77CE8((int)v32, *(int *)(a1 + 252));
          logfmt_raw(
            v11,
            0x1000u,
            0,
            v33,
            v32[0],
            v32[1],
            v32[2],
            v32[3],
            v32[4],
            v32[5],
            v32[6],
            v33,
            "got uneffective temp, sensor[%d], addr:%02x",
            *v36,
            v36[5]);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/god"
            "miner-origin_godminer-branch1/backend/backend_ltc_1491/backend_ltc_1491.c",
            181,
            "read_temperature_ltc",
            20,
            552,
            100,
            v11);
        }
      }
      else
      {
        v25 = -64;
        V_LOCK();
        sub_77CE8((int)v34, *(int *)(a1 + 252));
        logfmt_raw(
          v11,
          0x1000u,
          0,
          v35,
          v34[0],
          v34[1],
          v34[2],
          v34[3],
          v34[4],
          v34[5],
          v34[6],
          v35,
          "read sensor failed, sensor[%d], addr:%02x",
          *v36,
          v36[5]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmi"
          "ner-origin_godminer-branch1/backend/backend_ltc_1491/backend_ltc_1491.c",
          181,
          "read_temperature_ltc",
          20,
          557,
          100,
          v11);
      }
      *(_DWORD *)(a2 + 12 * m) = v25;
    }
    return v37;
  }
  else
  {
    V_LOCK();
    sub_77CE8((int)v26, *(int *)(a1 + 252));
    logfmt_raw(
      v11,
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
      "input sensor_status NULL error");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/backend_ltc_1491/backend_ltc_1491.c",
      181,
      "read_temperature_ltc",
      20,
      493,
      100,
      v11);
    return 4;
  }
}
