int __fastcall phy_power_reset(int a1)
{
  _BYTE v3[8]; // [sp+18h] [bp+8h] BYREF
  unsigned __int32 *p_st_value; // [sp+1018h] [bp+1008h]
  unsigned __int8 i; // [sp+101Fh] [bp+100Fh]

  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "%s...", "phy_power_reset");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "phy_power_reset",
    15,
    657,
    60,
    v3);
  p_st_value = &stru_1869C.st_value;
  sub_788A8(a1, 80, 0);
  usleep((__useconds_t)p_st_value);
  for ( i = 0; i <= 7u; ++i )
  {
    sub_78960(a1, i, 1, 80, 0x10000);
    usleep((__useconds_t)p_st_value);
    sub_78960(a1, i, 2, 80, 0x10000);
    usleep((__useconds_t)p_st_value);
    sub_78960(a1, i, 5, 80, 0x10000);
    usleep((__useconds_t)p_st_value);
    sub_78960(a1, i, 6, 80, 0x10000);
    usleep((__useconds_t)p_st_value);
    sub_78960(a1, i, 9, 80, 0x10000);
    usleep((__useconds_t)p_st_value);
    sub_78960(a1, i, 10, 80, 0x10000);
    usleep((__useconds_t)p_st_value);
    sub_78960(a1, i, 13, 80, 0x10000);
    usleep((__useconds_t)p_st_value);
    sub_78960(a1, i, 14, 80, 0x10000);
    usleep((__useconds_t)p_st_value);
    sub_78960(a1, i, 0, 80, 0x10000);
    usleep((__useconds_t)p_st_value);
    sub_78960(a1, i, 3, 80, 0x10000);
    usleep((__useconds_t)p_st_value);
    sub_78960(a1, i, 7, 80, 0x10000);
    usleep((__useconds_t)p_st_value);
    sub_78960(a1, i, 8, 80, 0x10000);
    usleep((__useconds_t)p_st_value);
    sub_78960(a1, i, 11, 80, 0x10000);
    usleep((__useconds_t)p_st_value);
    sub_78960(a1, i, 15, 80, 0x10000);
    usleep((__useconds_t)p_st_value);
  }
  return 0;
}
