int __fastcall check_bist_tx_running_one_lane(int a1, unsigned __int8 a2, char a3, unsigned __int8 a4)
{
  _BYTE v9[8]; // [sp+18h] [bp+8h] BYREF
  int v10; // [sp+1018h] [bp+1008h] BYREF
  int back; // [sp+1058h] [bp+1048h]
  int i; // [sp+105Ch] [bp+104Ch]
  int v13; // [sp+1060h] [bp+1050h] BYREF

  V_LOCK();
  logfmt_raw(v9, 0x1000u, 0, "%s...", "check_bist_tx_running_one_lane");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "check_bist_tx_running_one_lane",
    30,
    8910,
    60,
    v9);
  back = serdes_apb_read_back(a1, a2, a3, (a4 << 12) | 0x4A, (int)&v10);
  for ( i = 0; i < back; ++i )
  {
    if ( (*(&v13 + 2 * i - 17) & 0x200) != 0 )
    {
      V_LOCK();
      logfmt_raw(
        v9,
        0x1000u,
        0,
        "channel %1x, chip_id %02x core_id %02x tx bist is running",
        a4,
        *((unsigned __int8 *)&v13 + 8 * i - 72),
        *((unsigned __int8 *)&v13 + 8 * i - 71));
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
        83,
        "check_bist_tx_running_one_lane",
        30,
        8916,
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
        "channel %1x, chip_id %02x core_id %02x %08x tx bist run failed",
        a4,
        *((unsigned __int8 *)&v13 + 8 * i - 72),
        *((unsigned __int8 *)&v13 + 8 * i - 71),
        *(&v13 + 2 * i - 17));
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
        83,
        "check_bist_tx_running_one_lane",
        30,
        8919,
        100,
        v9);
    }
  }
  return 0;
}
