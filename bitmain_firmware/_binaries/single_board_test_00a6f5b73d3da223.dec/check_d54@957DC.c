int __fastcall check_d54(int a1, unsigned __int8 a2, char a3, unsigned __int8 a4, unsigned __int8 a5)
{
  int v5; // r4
  int v6; // r5
  int v7; // r6
  unsigned int v8; // r0
  int v9; // r3
  _QWORD v15[2]; // [sp+20h] [bp+8h] BYREF
  _BYTE v16[16]; // [sp+60h] [bp+48h] BYREF
  _BYTE v17[16]; // [sp+1060h] [bp+1048h] BYREF
  int back; // [sp+1070h] [bp+1058h]
  int k; // [sp+1074h] [bp+105Ch]
  unsigned __int16 j; // [sp+107Ah] [bp+1062h]
  int i; // [sp+107Ch] [bp+1064h]
  char v22; // [sp+1083h] [bp+106Bh]
  int v23; // [sp+1084h] [bp+106Ch]
  int v24; // [sp+1088h] [bp+1070h]
  int v25; // [sp+108Ch] [bp+1074h]

  V_LOCK();
  logfmt_raw(v16, 0x1000u, 0, "%s...", "check_d54");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "check_d54",
    9,
    3404,
    60,
    v16);
  v25 = 0;
  v24 = 0;
  v23 = 1;
  if ( (unsigned __int8)a3 == 255 )
    v23 = sub_7936C(v17);
  v22 = 0;
  for ( i = 0; i < v23; ++i )
  {
    if ( (unsigned __int8)a3 == 255 )
      v22 = v17[i];
    else
      v22 = a3;
    v25 = 0;
    while ( 1 )
    {
      v24 = 0;
      usleep((__useconds_t)&stru_1869C.st_value);
      for ( j = 0; j < (unsigned int)a4; ++j )
      {
        if ( v22 != 3 || j > 3u )
        {
          back = serdes_apb_read_back(a1, a2, v22, (j << 12) | 0x36, (int)v15);
          for ( k = 0; k < back; ++k )
          {
            if ( (!a5 || (HIDWORD(v15[k]) & a5) != a5) && (a5 || (v15[k] & 0x800000000LL) != 0) )
            {
              v24 /= 8;
              V_LOCK();
              v5 = j;
              v6 = LOBYTE(v15[k]);
              v7 = BYTE1(v15[k]);
              v8 = sub_79338(HIDWORD(v15[k]));
              logfmt_raw(
                v16,
                0x1000u,
                0,
                "channel %1x, chip_id %02x core_id %02x %08x d'54 bit[3] error status, exp:%02x",
                v5,
                v6,
                v7,
                v8,
                a5);
              V_UNLOCK();
              zlog(
                g_zc,
                "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
                83,
                "check_d54",
                9,
                3438,
                100,
                v16);
              break;
            }
            ++v24;
            V_LOCK();
            logfmt_raw(
              v16,
              0x1000u,
              0,
              "channel %1x, chip_id %02x core_id %02x d'54 bit[3] change to %d",
              j,
              LOBYTE(v15[k]),
              BYTE1(v15[k]),
              a5);
            V_UNLOCK();
            zlog(
              g_zc,
              "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
              83,
              "check_d54",
              9,
              3434,
              20,
              v16);
          }
          if ( 8 * (j + 1) > v24 )
            break;
        }
      }
      if ( 8 * a4 <= v24 )
        break;
      v9 = v25++;
      if ( v9 > 19 )
        goto LABEL_25;
    }
    V_LOCK();
    logfmt_raw(v16, 0x1000u, 0, "all lanes d'54 bit[3] change to %d", a5);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
      83,
      "check_d54",
      9,
      3447,
      20,
      v16);
LABEL_25:
    ;
  }
  return 0;
}
