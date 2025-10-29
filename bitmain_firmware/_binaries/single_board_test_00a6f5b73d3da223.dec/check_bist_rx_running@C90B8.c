int __fastcall check_bist_rx_running(int a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  _BYTE v9[12]; // [sp+1Ch] [bp+Ch] BYREF
  _BYTE v10[12]; // [sp+5Ch] [bp+4Ch] BYREF
  int back; // [sp+105Ch] [bp+104Ch]
  int k; // [sp+1060h] [bp+1050h]
  unsigned __int16 j; // [sp+1064h] [bp+1054h]
  unsigned __int8 i; // [sp+1066h] [bp+1056h]
  unsigned __int8 v15; // [sp+1067h] [bp+1057h]

  V_LOCK();
  logfmt_raw(v10, 0x1000u, 0, "%s...", "check_bist_rx_running");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "check_bist_rx_running",
    21,
    8928,
    60,
    v10);
  v15 = 16;
  if ( a3 != 255 )
    v15 = 1;
  for ( i = 0; i < (unsigned int)v15; ++i )
  {
    if ( a3 != 255 )
      i = a3;
    for ( j = 0; j < (unsigned int)a4; ++j )
    {
      back = serdes_apb_read_back(a1, a2, i, (j << 12) | 0x11, (int)v9);
      for ( k = 0; k < back; ++k )
      {
        if ( (*(_DWORD *)&v9[8 * k + 4] & 0x400) != 0 || (*(_DWORD *)&v9[8 * k + 4] & 0x8000000) == 0 )
        {
          V_LOCK();
          logfmt_raw(
            v10,
            0x1000u,
            0,
            "channel %1x, chip_id %02x core_id %02x %08x rx bist run failed",
            j,
            (unsigned __int8)v9[8 * k],
            (unsigned __int8)v9[8 * k + 1],
            v9);
          V_UNLOCK();
          zlog(
            g_zc,
            "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
            83,
            "check_bist_rx_running",
            21,
            8945,
            100,
            v10);
        }
        else
        {
          V_LOCK();
          logfmt_raw(
            v10,
            0x1000u,
            0,
            "channel %1x, chip_id %02x core_id %02x rx bist is running",
            j,
            (unsigned __int8)v9[8 * k],
            (unsigned __int8)v9[8 * k + 1]);
          V_UNLOCK();
          zlog(
            g_zc,
            "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
            83,
            "check_bist_rx_running",
            21,
            8942,
            60,
            v10);
        }
      }
    }
  }
  return 0;
}
