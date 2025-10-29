int __fastcall check_bist_tx_running(int a1, unsigned __int8 a2, char a3, unsigned __int8 a4)
{
  _BYTE v9[12]; // [sp+1Ch] [bp+Ch] BYREF
  _BYTE v10[12]; // [sp+5Ch] [bp+4Ch] BYREF
  _BYTE v11[16]; // [sp+105Ch] [bp+104Ch] BYREF
  int back; // [sp+106Ch] [bp+105Ch]
  int v13; // [sp+1070h] [bp+1060h]
  int k; // [sp+1074h] [bp+1064h]
  unsigned __int16 j; // [sp+107Ah] [bp+106Ah]
  int i; // [sp+107Ch] [bp+106Ch]
  char v17; // [sp+1083h] [bp+1073h]
  int v18; // [sp+1084h] [bp+1074h]

  v18 = 1;
  if ( (unsigned __int8)a3 == 255 )
    v18 = sub_7936C(v11);
  V_LOCK();
  logfmt_raw(v10, 0x1000u, 0, "%s phy_num %d...", "check_bist_tx_running", v18);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "check_bist_tx_running",
    21,
    8878,
    60,
    v10);
  v17 = 0;
  v13 = 0;
  for ( i = 0; i < v18; ++i )
  {
    if ( (unsigned __int8)a3 == 255 )
      v17 = v11[i];
    else
      v17 = a3;
    for ( j = 0; j < (unsigned int)a4; ++j )
    {
      if ( v17 != 3 || j > 3u )
      {
        back = serdes_apb_read_back(a1, a2, v17, (j << 12) | 0x4A, (int)v9);
        for ( k = 0; k < back; ++k )
        {
          if ( (*(_DWORD *)&v9[8 * k + 4] & 0x200) != 0 )
          {
            V_LOCK();
            logfmt_raw(
              v10,
              0x1000u,
              0,
              "channel %1x, chip_id %02x core_id %02x tx bist is running",
              j,
              (unsigned __int8)v9[8 * k],
              (unsigned __int8)v9[8 * k + 1]);
            V_UNLOCK();
            zlog(
              g_zc,
              "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
              83,
              "check_bist_tx_running",
              21,
              8896,
              20,
              v10);
          }
          else
          {
            V_LOCK();
            logfmt_raw(
              v10,
              0x1000u,
              0,
              "channel %1x, chip_id %02x core_id %02x %08x tx bist run failed",
              j,
              (unsigned __int8)v9[8 * k],
              (unsigned __int8)v9[8 * k + 1],
              *(_DWORD *)&v9[8 * k + 4]);
            V_UNLOCK();
            zlog(
              g_zc,
              "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
              83,
              "check_bist_tx_running",
              21,
              8899,
              100,
              v10);
          }
        }
      }
    }
  }
  return 0;
}
