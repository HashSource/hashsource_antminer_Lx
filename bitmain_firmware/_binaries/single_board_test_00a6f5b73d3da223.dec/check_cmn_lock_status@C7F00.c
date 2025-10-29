int __fastcall check_cmn_lock_status(int a1, unsigned __int8 a2, unsigned __int8 a3, int a4, int a5)
{
  _BYTE v9[8]; // [sp+18h] [bp+8h] BYREF
  _BYTE v10[8]; // [sp+58h] [bp+48h] BYREF
  _BYTE v11[16]; // [sp+1058h] [bp+1048h] BYREF
  int back; // [sp+1068h] [bp+1058h]
  int j; // [sp+106Ch] [bp+105Ch]
  int i; // [sp+1070h] [bp+1060h]
  unsigned __int8 v15; // [sp+1077h] [bp+1067h]
  int v16; // [sp+1078h] [bp+1068h]
  int v17; // [sp+107Ch] [bp+106Ch]

  V_LOCK();
  logfmt_raw(v10, 0x1000u, 0, "%s...", "check_cmn_lock_status");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "check_cmn_lock_status",
    21,
    8727,
    60,
    v10);
  v17 = 1;
  v16 = 0;
  if ( a3 == 255 )
    v17 = sub_7936C(v11);
  v15 = 0;
  for ( i = 0; i < v17; ++i )
  {
    if ( a3 == 255 )
      v15 = v11[i];
    else
      v15 = a3;
    if ( v15 != 3 )
    {
      back = serdes_apb_read_back(a1, a2, v15, 0x801Du, (int)v9);
      for ( j = 0; j < back; ++j )
      {
        if ( (*(_DWORD *)&v9[8 * j + 4] & 0x20000000) != 0 )
        {
          if ( a5 )
            *(_BYTE *)(a5 + v15 + 16 * j) = 0;
          V_LOCK();
          logfmt_raw(
            v10,
            0x1000u,
            0,
            "chip_id %02x core_id %02x cmn locked",
            (unsigned __int8)v9[8 * j],
            (unsigned __int8)v9[8 * j + 1]);
          V_UNLOCK();
          zlog(
            g_zc,
            "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
            83,
            "check_cmn_lock_status",
            21,
            8752,
            20,
            v10);
        }
        else
        {
          ++v16;
          if ( a5 )
            *(_BYTE *)(a5 + v15 + 16 * j) = 1;
          V_LOCK();
          logfmt_raw(
            v10,
            0x1000u,
            0,
            "chip_id %02x core_id %02x %08x cmn lock failed!",
            (unsigned __int8)v9[8 * j],
            (unsigned __int8)v9[8 * j + 1],
            *(_DWORD *)&v9[8 * j + 4]);
          V_UNLOCK();
          zlog(
            g_zc,
            "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
            83,
            "check_cmn_lock_status",
            21,
            8758,
            100,
            v10);
          ajust_retry_param(a1, v9[8 * j], v15);
        }
      }
    }
  }
  if ( byte_1EEF8C )
    byte_1EEF8C = 0;
  return v16;
}
