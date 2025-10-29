int __fastcall check_bist_error(int a1, int a2, int a3, unsigned __int16 a4)
{
  int v7; // r2
  _DWORD *v8; // r12
  int v9; // r3
  int v10; // r0
  int v11; // r1
  int v12; // r2
  _DWORD *v13; // r2
  int v14; // r3
  int v15; // r11
  unsigned int v16; // r5
  int v17; // r10
  unsigned __int16 v19; // r4
  int back; // r5
  int v21; // r5
  int v22; // r0
  int v23; // r3
  int v24; // r0
  int v25; // r0
  int v26; // r12
  int v27; // r5
  int v28; // r3
  int v29; // r12
  int v30; // r0
  int v31; // r3
  int v32; // r5
  unsigned __int8 *v33; // r9
  int v34; // r11
  int v35; // r4
  int v36; // r0
  _BYTE *v37; // r0
  _BYTE *v38; // r3
  int *v39; // r1
  unsigned int v40; // r2
  int v41; // r0
  int v42; // r4
  int v43; // r11
  unsigned __int8 *v44; // r6
  int v45; // r2
  int v46; // r3
  int v47; // r5
  int v48; // r6
  int v51; // r2
  int v52; // r0
  int v53; // [sp+2Ch] [bp-1270h]
  int v54; // [sp+44h] [bp-1258h]
  unsigned int v56; // [sp+4Ch] [bp-1250h]
  _BOOL4 v57; // [sp+50h] [bp-124Ch]
  unsigned __int8 *v58; // [sp+5Ch] [bp-1240h]
  int v59; // [sp+60h] [bp-123Ch]
  int v61; // [sp+6Ch] [bp-1230h]
  int v62; // [sp+70h] [bp-122Ch]
  _DWORD *v63; // [sp+74h] [bp-1228h]
  unsigned int v64; // [sp+78h] [bp-1224h]
  unsigned int v65; // [sp+7Ch] [bp-1220h]
  _DWORD *v66; // [sp+80h] [bp-121Ch]
  _DWORD v67[4]; // [sp+88h] [bp-1214h] BYREF
  _DWORD v68[7]; // [sp+98h] [bp-1204h] BYREF
  int v69; // [sp+B4h] [bp-11E8h]
  _DWORD v70[7]; // [sp+B8h] [bp-11E4h] BYREF
  int v71; // [sp+D4h] [bp-11C8h]
  _DWORD v72[7]; // [sp+D8h] [bp-11C4h] BYREF
  int v73; // [sp+F4h] [bp-11A8h]
  _DWORD v74[7]; // [sp+F8h] [bp-11A4h] BYREF
  int v75; // [sp+114h] [bp-1188h]
  _DWORD v76[7]; // [sp+118h] [bp-1184h] BYREF
  int v77; // [sp+134h] [bp-1168h]
  _DWORD v78[7]; // [sp+138h] [bp-1164h] BYREF
  int v79; // [sp+154h] [bp-1148h]
  _DWORD v80[7]; // [sp+158h] [bp-1144h] BYREF
  int v81; // [sp+174h] [bp-1128h] BYREF
  _DWORD v82[8]; // [sp+178h] [bp-1124h] BYREF
  _QWORD v83[8]; // [sp+198h] [bp-1104h] BYREF
  _BYTE v84[64]; // [sp+1D8h] [bp-10C4h] BYREF
  _BYTE v85[128]; // [sp+218h] [bp-1084h] BYREF
  char v86[4100]; // [sp+298h] [bp-1004h] BYREF

  V_LOCK();
  V_INT((int)v68, "chain", *(int *)(a1 + 140));
  logfmt_raw(
    v86,
    0x1000u,
    0,
    v69,
    v68[0],
    v68[1],
    v68[2],
    v68[3],
    v68[4],
    v68[5],
    v68[6],
    v69,
    "%s...",
    "check_bist_error");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/backend_eth/backend_eth.c",
    169,
    "check_bist_error",
    16,
    8981,
    60,
    v86);
  v67[0] = 0;
  if ( a3 == 255 )
    v7 = 14;
  v67[1] = 0;
  if ( a3 == 255 )
    v8 = v67;
  v67[2] = 0;
  v67[3] = 0;
  if ( a3 == 255 )
  {
    v9 = (int)&unk_1387B8;
    v63 = (_DWORD *)v7;
  }
  else
  {
    v9 = 1;
  }
  if ( a3 == 255 )
  {
    v10 = *(_DWORD *)v9;
    v11 = *(_DWORD *)(v9 + 4);
    v12 = *(_DWORD *)(v9 + 8);
    v9 = *(_DWORD *)(v9 + 12);
    *v8 = v10;
    v8[1] = v11;
    v8[2] = v12;
    v8 += 3;
  }
  else
  {
    v63 = (_DWORD *)v9;
  }
  LOWORD(v13) = (unsigned __int16)"channel %1x, chip_id %02x c_id %02x sample_cnt %08x";
  if ( a3 == 255 )
    *(_WORD *)v8 = v9;
  HIWORD(v13) = (unsigned int)"channel %1x, chip_id %02x c_id %02x sample_cnt %08x" >> 16;
  v56 = a4;
  v66 = v13;
  v59 = 0;
  do
  {
    if ( a3 == 255 )
    {
      v14 = v59;
      v13 = v67;
    }
    else
    {
      v14 = a3;
    }
    if ( a3 == 255 )
      v14 = *((unsigned __int8 *)v13 + v14);
    v54 = v14;
    if ( v56 )
    {
      v15 = 0;
      v16 = 0;
      v17 = a1;
      v57 = v14 == 3;
      while ( 1 )
      {
        if ( v16 > 3 || !v57 )
        {
          v19 = (_WORD)v16 << 12;
          back = serdes_apb_read_back(v17, a2, v54, (unsigned __int16)((_WORD)v16 << 12) | 0x10, (int)v83);
          if ( *(_DWORD *)(v17 + 236) != back )
          {
            V_LOCK();
            V_INT((int)v70, "chain", *(int *)(v17 + 140));
            logfmt_raw(
              v86,
              0x1000u,
              0,
              v71,
              v70[0],
              v70[1],
              v70[2],
              v70[3],
              v70[4],
              v70[5],
              v70[6],
              v71,
              "%s d'16 resp_num is not enough(%d<%d), bist err",
              "check_bist_error",
              back,
              *(_DWORD *)(v17 + 236));
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release"
              "/build/godminer-origin_master/backend/backend_eth/backend_eth.c",
              169,
              "check_bist_error",
              16,
              9008,
              100,
              v86);
          }
          v21 = serdes_apb_read_back(v17, a2, v54, v19 & 0xF000 | 0x13, (int)v84);
          v22 = *(_DWORD *)(v17 + 236);
          if ( v22 == v21 )
          {
            if ( v22 > 0 )
            {
              v23 = 4;
              v24 = 8 * v22 + 4;
              do
              {
                *(_DWORD *)&v85[v23 + 64] = *(_DWORD *)&v84[v23] >> 28;
                v23 += 8;
              }
              while ( v23 != v24 );
            }
            v25 = serdes_apb_read_back(v17, a2, v54, v19 & 0xF000 | 0x14, (int)v84);
            v26 = *(_DWORD *)(v17 + 236);
            v27 = v25;
            if ( v26 == v25 )
            {
              if ( v26 > 0 )
              {
                v28 = 4;
                v29 = 8 * v26 + 4;
                do
                {
                  *(_DWORD *)&v85[v28 + 64] |= 16 * *(_DWORD *)&v84[v28];
                  v28 += 8;
                }
                while ( v28 != v29 );
              }
              v30 = serdes_apb_read_back(v17, a2, v54, v19 & 0xF000 | 0x15, (int)v85);
              v31 = *(_DWORD *)(v17 + 236);
              v32 = v30;
              if ( v31 == v30 )
              {
                if ( v31 > 0 )
                {
                  v61 = v15;
                  v33 = (unsigned __int8 *)v83;
                  v58 = (unsigned __int8 *)&v83[v31];
                  v34 = v17;
                  v64 = v19 | 0x16;
                  v65 = v19 | 0x17;
                  do
                  {
                    while ( 1 )
                    {
                      if ( (*((_DWORD *)v33 + 1) & 0xE000000) != 0 )
                      {
                        v35 = *v33;
                        V_LOCK();
                        V_INT((int)v78, "chain", *(int *)(v34 + 140));
                        logfmt_raw(
                          v86,
                          0x1000u,
                          0,
                          v79,
                          v78[0],
                          v78[1],
                          v78[2],
                          v78[3],
                          v78[4],
                          v78[5],
                          v78[6],
                          v79,
                          "channel %1x, chip_id %02x c_id %02x bist err(%02x) cnt %08x %08x",
                          v61,
                          v35,
                          v33[1],
                          (*((_DWORD *)v33 + 1) >> 25) & 7,
                          *(_DWORD *)&v85[8 * v35 + 4],
                          *(_DWORD *)&v85[8 * v35 + 68]);
                        V_UNLOCK();
                        zlog(
                          g_zc,
                          "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot"
                          "/tmp/release/build/godminer-origin_master/backend/backend_eth/backend_eth.c",
                          169,
                          "check_bist_error",
                          16,
                          9042,
                          100,
                          v86);
                        memset(v82, 0, sizeof(v82));
                        v36 = serdes_apb_read_back(v34, v35, v33[1], v64, (int)v84);
                        if ( v36 > 0 )
                        {
                          v37 = &v84[8 * v36];
                          v38 = v84;
                          v39 = &v81;
                          do
                          {
                            v40 = *((_DWORD *)v38 + 1);
                            v38 += 8;
                            v39[1] = v40 >> 12;
                            ++v39;
                          }
                          while ( v37 != v38 );
                        }
                        v41 = serdes_apb_read_back(v34, v35, v33[1], v65, (int)v84);
                        if ( v41 > 0 )
                          break;
                      }
                      v33 += 8;
                      if ( v33 == v58 )
                        goto LABEL_49;
                    }
                    v62 = v34;
                    v42 = 0;
                    v43 = v41;
                    do
                    {
                      while ( 1 )
                      {
                        v44 = &v84[8 * v42];
                        v45 = *v44;
                        v46 = *v33;
                        v47 = v82[v42] | (*((_DWORD *)v44 + 1) << 20);
                        v82[v42] = v47;
                        if ( v45 == v46 )
                          break;
                        if ( v43 == ++v42 )
                          goto LABEL_48;
                      }
                      V_LOCK();
                      V_INT((int)v80, "chain", *(int *)(v62 + 140));
                      v53 = v44[1];
                      v48 = (unsigned __int8)v84[8 * v42++];
                      logfmt_raw(
                        v86,
                        0x1000u,
                        0,
                        v81,
                        v80[0],
                        v80[1],
                        v80[2],
                        v80[3],
                        v80[4],
                        v80[5],
                        v80[6],
                        v81,
                        v66,
                        v61,
                        v48,
                        v53,
                        v47);
                      V_UNLOCK();
                      zlog(
                        g_zc,
                        "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/t"
                        "mp/release/build/godminer-origin_master/backend/backend_eth/backend_eth.c",
                        169,
                        "check_bist_error",
                        16,
                        9057,
                        60,
                        v86);
                    }
                    while ( v43 != v42 );
LABEL_48:
                    v33 += 8;
                    v34 = v62;
                  }
                  while ( v33 != v58 );
LABEL_49:
                  v17 = v34;
                  v15 = v61;
                }
                goto LABEL_50;
              }
              V_LOCK();
              V_INT((int)v76, "chain", *(int *)(v17 + 140));
              logfmt_raw(
                v86,
                0x1000u,
                0,
                v77,
                v76[0],
                v76[1],
                v76[2],
                v76[3],
                v76[4],
                v76[5],
                v76[6],
                v77,
                "%s d'21 resp_num is not enough(%d<%d), bist err",
                "check_bist_error",
                v32,
                *(_DWORD *)(v17 + 236));
              V_UNLOCK();
              v51 = 9033;
              v52 = g_zc;
            }
            else
            {
              V_LOCK();
              V_INT((int)v74, "chain", *(int *)(v17 + 140));
              logfmt_raw(
                v86,
                0x1000u,
                0,
                v75,
                v74[0],
                v74[1],
                v74[2],
                v74[3],
                v74[4],
                v74[5],
                v74[6],
                v75,
                "%s d'20 resp_num is not enough(%d<%d), bist err",
                "check_bist_error",
                v27,
                *(_DWORD *)(v17 + 236));
              V_UNLOCK();
              v51 = 9024;
              v52 = g_zc;
            }
          }
          else
          {
            V_LOCK();
            V_INT((int)v72, "chain", *(int *)(v17 + 140));
            logfmt_raw(
              v86,
              0x1000u,
              0,
              v73,
              v72[0],
              v72[1],
              v72[2],
              v72[3],
              v72[4],
              v72[5],
              v72[6],
              v73,
              "%s d'19 resp_num is not enough(%d<%d), bist err",
              "check_bist_error",
              v21,
              *(_DWORD *)(v17 + 236));
            V_UNLOCK();
            v51 = 9015;
            v52 = g_zc;
          }
          zlog(
            v52,
            "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/b"
            "uild/godminer-origin_master/backend/backend_eth/backend_eth.c",
            169,
            "check_bist_error",
            16,
            v51,
            100,
            v86);
        }
LABEL_50:
        v16 = (unsigned __int16)++v15;
        if ( v56 <= (unsigned __int16)v15 )
        {
          a1 = v17;
          break;
        }
      }
    }
    v13 = v63;
  }
  while ( v63 != (_DWORD *)++v59 );
  return 0;
}
