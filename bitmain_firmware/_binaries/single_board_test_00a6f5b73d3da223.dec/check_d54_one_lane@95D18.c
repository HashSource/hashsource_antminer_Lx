int __fastcall check_d54_one_lane(int a1, char a2, char a3, unsigned __int8 a4, unsigned __int8 a5)
{
  int v5; // r3
  unsigned __int8 v11; // [sp+20h] [bp+8h] BYREF
  unsigned __int8 v12; // [sp+21h] [bp+9h]
  int v13; // [sp+24h] [bp+Ch]
  _BYTE v14[8]; // [sp+60h] [bp+48h] BYREF
  int back_1_chip; // [sp+1060h] [bp+1048h]
  int v16; // [sp+1064h] [bp+104Ch]

  V_LOCK();
  logfmt_raw(
    v14,
    0x1000u,
    0,
    "%s chip_id %02x core_id %02x channel_id %1x exp %1x",
    "check_d54_one_lane",
    (unsigned __int8)a2,
    (unsigned __int8)a3,
    a4,
    a5);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "check_d54_one_lane",
    18,
    3459,
    60,
    v14);
  v16 = 0;
  while ( 1 )
  {
    usleep((__useconds_t)&stru_1869C.st_value);
    back_1_chip = serdes_apb_read_back_1_chip(a1, a2, a3, (a4 << 12) | 0x36, (int)&v11);
    if ( (!back_1_chip || !a5 || (unsigned __int8)(v13 & a5) != a5) && (a5 || (v13 & 8) != 0) )
      break;
    V_LOCK();
    logfmt_raw(v14, 0x1000u, 0, "channel %1x, chip_id %02x core_id %02x d'54 bit[3] change to %d", a4, v11, v12, a5);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
      83,
      "check_d54_one_lane",
      18,
      3469,
      20,
      v14);
    v5 = v16++;
    if ( v5 > 19 )
      return 0;
  }
  V_LOCK();
  logfmt_raw(
    v14,
    0x1000u,
    0,
    "channel %1x, chip_id %02x core_id %02x %08x d'54 bit[3] error status, exp:%02x",
    a4,
    v11,
    v12,
    v13,
    a5);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "check_d54_one_lane",
    18,
    3472,
    100,
    v14);
  return 0;
}
