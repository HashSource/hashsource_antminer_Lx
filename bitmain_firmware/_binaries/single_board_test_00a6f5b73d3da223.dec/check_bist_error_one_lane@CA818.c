int __fastcall check_bist_error_one_lane(int a1, unsigned __int8 a2, char a3, unsigned __int8 a4)
{
  _BYTE v9[24]; // [sp+20h] [bp+8h] BYREF
  _DWORD v10[22]; // [sp+1020h] [bp+1008h] BYREF
  int v11; // [sp+1080h] [bp+1068h] BYREF
  _BYTE v12[56]; // [sp+10C0h] [bp+10A8h] BYREF
  int v13; // [sp+1100h] [bp+10E8h] BYREF
  int back; // [sp+1140h] [bp+1128h]
  int n; // [sp+1144h] [bp+112Ch]
  int m; // [sp+1148h] [bp+1130h]
  int k; // [sp+114Ch] [bp+1134h]
  int j; // [sp+1150h] [bp+1138h]
  int i; // [sp+1154h] [bp+113Ch]
  _BYTE v20[4]; // [sp+1158h] [bp+1140h] BYREF

  V_LOCK();
  logfmt_raw(v9, 0x1000u, 0, "%s...", "check_bist_error_one_lane");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "check_bist_error_one_lane",
    25,
    9123,
    60,
    v9);
  back = serdes_apb_read_back(a1, a2, a3, (a4 << 12) | 0x10, (int)&v13);
  if ( *(_DWORD *)(a1 + 236) != back )
  {
    V_LOCK();
    logfmt_raw(
      v9,
      0x1000u,
      0,
      "%s d'16 resp_num is not enough(%d<%d), bist err",
      "check_bist_error_one_lane",
      back,
      *(_DWORD *)(a1 + 236));
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
      83,
      "check_bist_error_one_lane",
      25,
      9131,
      100,
      v9);
  }
  back = serdes_apb_read_back(a1, a2, a3, (a4 << 12) | 0x13, (int)v12);
  if ( *(_DWORD *)(a1 + 236) != back )
  {
    V_LOCK();
    logfmt_raw(
      v9,
      0x1000u,
      0,
      "%s d'19 resp_num is not enough(%d<%d), bist err",
      "check_bist_error_one_lane",
      back,
      *(_DWORD *)(a1 + 236));
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
      83,
      "check_bist_error_one_lane",
      25,
      9137,
      100,
      v9);
  }
  for ( i = 0; i < back; ++i )
    v10[2 * i + 9] = *(_DWORD *)&v20[8 * i - 148] >> 28;
  back = serdes_apb_read_back(a1, a2, a3, (a4 << 12) | 0x14, (int)v12);
  if ( *(_DWORD *)(a1 + 236) != back )
  {
    V_LOCK();
    logfmt_raw(
      v9,
      0x1000u,
      0,
      "%s d'19 resp_num is not enough(%d<%d), bist err",
      "check_bist_error_one_lane",
      back,
      *(_DWORD *)(a1 + 236));
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
      83,
      "check_bist_error_one_lane",
      25,
      9143,
      100,
      v9);
  }
  for ( j = 0; j < back; ++j )
    v10[2 * j + 9] |= 16 * *(_DWORD *)&v20[8 * j - 148];
  back = serdes_apb_read_back(a1, a2, a3, (a4 << 12) | 0x15, (int)&v11);
  if ( *(_DWORD *)(a1 + 236) != back )
  {
    V_LOCK();
    logfmt_raw(
      v9,
      0x1000u,
      0,
      "%s d'19 resp_num is not enough(%d<%d), bist err",
      "check_bist_error_one_lane",
      back,
      *(_DWORD *)(a1 + 236));
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
      83,
      "check_bist_error_one_lane",
      25,
      9149,
      100,
      v9);
  }
  for ( k = 0; k < back; ++k )
  {
    if ( (*(_DWORD *)&v20[8 * k - 84] & 0xE000000) != 0 )
    {
      V_LOCK();
      logfmt_raw(
        v9,
        0x1000u,
        0,
        "channel %1x, chip_id %02x core_id %02x bist err(%02x) cnt %08x %08x",
        a4,
        (unsigned __int8)v20[8 * k - 88],
        (unsigned __int8)v20[8 * k - 87],
        (*(_DWORD *)&v20[8 * k - 84] >> 25) & 7,
        *(_DWORD *)&v20[8 * k - 212],
        v10[2 * k + 9]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
        83,
        "check_bist_error_one_lane",
        25,
        9154,
        60,
        v9);
    }
    else
    {
      V_LOCK();
      logfmt_raw(
        v9,
        0x1000u,
        0,
        "channel %1x, chip_id %02x core_id %02x bist ok",
        a4,
        (unsigned __int8)v20[8 * k - 88],
        (unsigned __int8)v20[8 * k - 87]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
        83,
        "check_bist_error_one_lane",
        25,
        9157,
        60,
        v9);
    }
  }
  memset(v10, 0, 0x20u);
  back = serdes_apb_read_back(a1, a2, a3, (a4 << 12) | 0x16, (int)v12);
  for ( m = 0; m < back; ++m )
    v10[m] = *(_DWORD *)&v20[8 * m - 148] >> 12;
  back = serdes_apb_read_back(a1, a2, a3, (a4 << 12) | 0x17, (int)v12);
  for ( n = 0; n < back; ++n )
  {
    v10[n] |= *(_DWORD *)&v20[8 * n - 148] << 20;
    V_LOCK();
    logfmt_raw(
      v9,
      0x1000u,
      0,
      "channel %1x, chip_id %02x core_id %02x sample_cnt %08x",
      a4,
      (unsigned __int8)v20[8 * n - 152],
      (unsigned __int8)v20[8 * n - 151],
      v10[n]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
      83,
      "check_bist_error_one_lane",
      25,
      9169,
      60,
      v9);
  }
  return 0;
}
