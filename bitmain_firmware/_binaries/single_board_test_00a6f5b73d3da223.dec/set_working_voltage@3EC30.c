int __fastcall set_working_voltage(char a1)
{
  int v3; // [sp+1Ch] [bp+Ch] BYREF
  __int16 v4; // [sp+101Eh] [bp+100Eh]

  v4 = 0;
  if ( a1 )
    v4 = set_voltage_by_steps(dword_479DBC, byte_479DB0);
  else
    v4 = set_voltage(dword_479DBC, byte_479DB0);
  if ( !v4 )
    return 0;
  V_LOCK();
  logfmt_raw(&v3, 0x1000u, 0, "%s error!", "set_working_voltage");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/miner_util/power_api.c",
    72,
    "set_working_voltage",
    19,
    348,
    60,
    &v3);
  return -1;
}
