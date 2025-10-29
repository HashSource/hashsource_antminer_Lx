int __fastcall check_bist_error(int a1, unsigned __int8 a2, char a3, unsigned __int8 a4)
{
  _DWORD v9[8]; // [sp+34h] [bp+14h] BYREF
  int v10; // [sp+54h] [bp+34h] BYREF
  _BYTE v11[76]; // [sp+1054h] [bp+1034h] BYREF
  int v12; // [sp+10A4h] [bp+1084h] BYREF
  _BYTE v13[60]; // [sp+10E4h] [bp+10C4h] BYREF
  int v14; // [sp+1124h] [bp+1104h] BYREF
  int v15; // [sp+1164h] [bp+1144h]
  unsigned __int8 v16; // [sp+116Bh] [bp+114Bh]
  int v17; // [sp+116Ch] [bp+114Ch]
  int back; // [sp+1170h] [bp+1150h]
  int jj; // [sp+1174h] [bp+1154h]
  int ii; // [sp+1178h] [bp+1158h]
  int n; // [sp+117Ch] [bp+115Ch]
  int m; // [sp+1180h] [bp+1160h]
  int k; // [sp+1184h] [bp+1164h]
  unsigned __int16 j; // [sp+118Ah] [bp+116Ah]
  int i; // [sp+118Ch] [bp+116Ch]
  char v26; // [sp+1193h] [bp+1173h]
  int v27; // [sp+1194h] [bp+1174h]
  int v28; // [sp+1198h] [bp+1178h] BYREF

  V_LOCK();
  logfmt_raw(&v10, 0x1000u, 0, "%s...", "check_bist_error");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "check_bist_error",
    16,
    9038,
    60,
    &v10);
  v27 = 1;
  memset(v11, 0, 0x10u);
  if ( (unsigned __int8)a3 == 255 )
    v27 = sub_7936C(v11);
  v26 = 0;
  back = 0;
  for ( i = 0; i < v27; ++i )
  {
    if ( (unsigned __int8)a3 == 255 )
      v26 = v11[i];
    else
      v26 = a3;
    for ( j = 0; j < (unsigned int)a4; ++j )
    {
      if ( v26 != 3 || j > 3u )
      {
        back = serdes_apb_read_back(a1, a2, v26, (j << 12) | 0x10, (int)&v14);
        if ( *(_DWORD *)(a1 + 236) != back )
        {
          V_LOCK();
          logfmt_raw(
            &v10,
            0x1000u,
            0,
            "%s d'16 resp_num is not enough(%d<%d), bist err",
            "check_bist_error",
            back,
            *(_DWORD *)(a1 + 236));
          V_UNLOCK();
          zlog(
            g_zc,
            "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
            83,
            "check_bist_error",
            16,
            9064,
            100,
            &v10);
        }
        back = serdes_apb_read_back(a1, a2, v26, (j << 12) | 0x13, (int)v13);
        if ( *(_DWORD *)(a1 + 236) == back )
        {
          for ( k = 0; k < back; ++k )
            *(_DWORD *)&v11[8 * k + 20] = (unsigned int)*(&v28 + 2 * k - 44) >> 28;
          back = serdes_apb_read_back(a1, a2, v26, (j << 12) | 0x14, (int)v13);
          if ( *(_DWORD *)(a1 + 236) == back )
          {
            for ( m = 0; m < back; ++m )
              *(_DWORD *)&v11[8 * m + 20] |= 16 * *(&v28 + 2 * m - 44);
            back = serdes_apb_read_back(a1, a2, v26, (j << 12) | 0x15, (int)&v12);
            if ( *(_DWORD *)(a1 + 236) == back )
            {
              v17 = 0;
              for ( n = 0; n < back; ++n )
              {
                if ( (*(&v28 + 2 * n - 28) & 0xE000000) != 0 )
                {
                  v16 = *((_BYTE *)&v28 + 8 * n - 116);
                  V_LOCK();
                  logfmt_raw(
                    &v10,
                    0x1000u,
                    0,
                    "chain %d channel %1x, chip_id %02x c_id %02x bist err(%02x) cnt %08x %08x",
                    *(_DWORD *)(a1 + 136),
                    j,
                    v16,
                    *((unsigned __int8 *)&v28 + 8 * n - 115),
                    ((unsigned int)*(&v28 + 2 * n - 28) >> 25) & 7,
                    *(&v28 + 2 * v16 - 60),
                    *(_DWORD *)&v11[8 * v16 + 20]);
                  V_UNLOCK();
                  zlog(
                    g_zc,
                    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
                    83,
                    "check_bist_error",
                    16,
                    9095,
                    100,
                    &v10);
                  memset(v9, 0, sizeof(v9));
                  v15 = serdes_apb_read_back(a1, v16, *((_BYTE *)&v28 + 8 * n - 115), (j << 12) | 0x16, (int)v13);
                  for ( ii = 0; ii < v15; ++ii )
                    v9[ii] = (unsigned int)*(&v28 + 2 * ii - 44) >> 12;
                  v15 = serdes_apb_read_back(a1, v16, *((_BYTE *)&v28 + 8 * n - 115), (j << 12) | 0x17, (int)v13);
                  for ( jj = 0; jj < v15; ++jj )
                  {
                    v9[jj] |= *(&v28 + 2 * jj - 44) << 20;
                    if ( *((unsigned __int8 *)&v28 + 8 * jj - 180) == *((unsigned __int8 *)&v28 + 8 * n - 116) )
                    {
                      V_LOCK();
                      logfmt_raw(
                        &v10,
                        0x1000u,
                        0,
                        "chain %d channel %1x, chip_id %02x c_id %02x sample_cnt %08x",
                        *(_DWORD *)(a1 + 136),
                        j,
                        *((unsigned __int8 *)&v28 + 8 * jj - 180),
                        *((unsigned __int8 *)&v28 + 8 * jj - 179),
                        v9[jj]);
                      V_UNLOCK();
                      zlog(
                        g_zc,
                        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
                        83,
                        "check_bist_error",
                        16,
                        9110,
                        60,
                        &v10);
                    }
                  }
                }
              }
            }
            else
            {
              V_LOCK();
              logfmt_raw(
                &v10,
                0x1000u,
                0,
                "%s d'21 resp_num is not enough(%d<%d), bist err",
                "check_bist_error",
                back,
                *(_DWORD *)(a1 + 236));
              V_UNLOCK();
              zlog(
                g_zc,
                "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
                83,
                "check_bist_error",
                16,
                9086,
                100,
                &v10);
            }
          }
          else
          {
            V_LOCK();
            logfmt_raw(
              &v10,
              0x1000u,
              0,
              "%s d'20 resp_num is not enough(%d<%d), bist err",
              "check_bist_error",
              back,
              *(_DWORD *)(a1 + 236));
            V_UNLOCK();
            zlog(
              g_zc,
              "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
              83,
              "check_bist_error",
              16,
              9078,
              100,
              &v10);
          }
        }
        else
        {
          V_LOCK();
          logfmt_raw(
            &v10,
            0x1000u,
            0,
            "%s d'19 resp_num is not enough(%d<%d), bist err",
            "check_bist_error",
            back,
            *(_DWORD *)(a1 + 236));
          V_UNLOCK();
          zlog(
            g_zc,
            "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
            83,
            "check_bist_error",
            16,
            9070,
            100,
            &v10);
        }
      }
    }
  }
  return 0;
}
