int __fastcall set_voltage(int a1, char a2)
{
  _BYTE v5[4096]; // [sp+18h] [bp+8h] BYREF

  if ( a2 != 1 )
    return -1;
  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "%s to %d.", "set_voltage", a1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/miner_util/power_api.c",
    72,
    "set_voltage",
    11,
    274,
    60,
    v5);
  return sub_3DD40(a1, (int)&byte_479DB0);
}
