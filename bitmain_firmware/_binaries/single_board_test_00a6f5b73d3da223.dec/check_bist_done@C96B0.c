int __fastcall check_bist_done(int a1, unsigned __int8 a2, char a3, unsigned __int8 a4)
{
  _BYTE v9[8]; // [sp+18h] [bp+8h] BYREF
  _BYTE v10[8]; // [sp+58h] [bp+48h] BYREF
  _BYTE v11[16]; // [sp+1058h] [bp+1048h] BYREF
  int back; // [sp+1068h] [bp+1058h]
  int k; // [sp+106Ch] [bp+105Ch]
  unsigned __int16 j; // [sp+1072h] [bp+1062h]
  int i; // [sp+1074h] [bp+1064h]
  char v16; // [sp+107Bh] [bp+106Bh]
  int v17; // [sp+107Ch] [bp+106Ch]

  V_LOCK();
  logfmt_raw(v10, 0x1000u, 0, "%s...", "check_bist_done");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "check_bist_done",
    15,
    8974,
    60,
    v10);
  v17 = 1;
  if ( (unsigned __int8)a3 == 255 )
    v17 = sub_7936C(v11);
  v16 = 0;
  for ( i = 0; i < v17; ++i )
  {
    if ( (unsigned __int8)a3 == 255 )
      v16 = v11[i];
    else
      v16 = a3;
    for ( j = 0; j < (unsigned int)a4; ++j )
    {
      if ( v16 != 3 || j > 3u )
      {
        back = serdes_apb_read_back(a1, a2, v16, (j << 12) | 0x11, (int)v9);
        for ( k = 0; k < back; ++k )
        {
          if ( (*(_DWORD *)&v9[8 * k + 4] & 0x20000) != 0 || (*(_DWORD *)&v9[8 * k + 4] & 0x400) == 0 )
          {
            V_LOCK();
            logfmt_raw(
              v10,
              0x1000u,
              0,
              "chain %d channel %1x, chip_id %02x core_id %02x bist error",
              *(_DWORD *)(a1 + 136),
              j,
              (unsigned __int8)v9[8 * k],
              (unsigned __int8)v9[8 * k + 1]);
            V_UNLOCK();
            zlog(
              g_zc,
              "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
              83,
              "check_bist_done",
              15,
              8996,
              100,
              v10);
          }
        }
      }
    }
  }
  return 0;
}
