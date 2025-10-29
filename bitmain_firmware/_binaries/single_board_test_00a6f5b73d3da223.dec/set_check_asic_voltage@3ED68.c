int __fastcall set_check_asic_voltage(char a1)
{
  int v3; // [sp+1Ch] [bp+Ch] BYREF
  int v4; // [sp+101Ch] [bp+100Ch]

  v4 = 0;
  if ( a1 )
    v4 = set_voltage_by_steps(dword_479DC4, byte_479DB0);
  else
    v4 = set_voltage(dword_479DC4, byte_479DB0);
  if ( !v4 )
    return 0;
  V_LOCK();
  logfmt_raw(&v3, 0x1000u, 0, "%s error!", "set_check_asic_voltage");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/miner_util/power_api.c",
    72,
    "set_check_asic_voltage",
    22,
    370,
    100,
    &v3);
  return -1;
}
