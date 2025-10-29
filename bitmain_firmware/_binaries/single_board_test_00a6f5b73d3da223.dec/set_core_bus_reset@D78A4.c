int __fastcall set_core_bus_reset(int a1)
{
  int v3; // [sp+1Ch] [bp+Ch] BYREF
  unsigned __int8 i; // [sp+101Fh] [bp+100Fh]

  V_LOCK();
  logfmt_raw(&v3, 0x1000u, 0, "%s...", "set_core_bus_reset");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "set_core_bus_reset",
    18,
    11746,
    60,
    &v3);
  for ( i = 0; i <= 0xFu; ++i )
  {
    sub_789C4(a1, i, 201, 0);
    usleep((__useconds_t)&stru_1869C.st_value);
    sub_789C4(a1, i, 201, 1);
    usleep((__useconds_t)&stru_1869C.st_value);
  }
  return 0;
}
