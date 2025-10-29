int __fastcall set_voltage_by_steps(int a1, char a2)
{
  signed int v3; // r2
  int v4; // r3
  _BYTE v7[16]; // [sp+18h] [bp+8h] BYREF
  int v8; // [sp+1018h] [bp+1008h]
  int current_voltage; // [sp+101Ch] [bp+100Ch]
  int v10; // [sp+1020h] [bp+1010h]
  int v11; // [sp+1024h] [bp+1014h]

  if ( a2 != 1 )
    return -1;
  V_LOCK();
  logfmt_raw(v7, 0x1000u, 0, "%s to %d.", "set_voltage_by_steps", a1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/miner_util/power_api.c",
    72,
    "set_voltage_by_steps",
    20,
    284,
    60,
    v7);
  v8 = 0;
  v11 = 10;
  current_voltage = get_current_voltage();
  v10 = a1 - current_voltage;
  if ( a1 == current_voltage )
    return 0;
  if ( v10 < 0 )
    v11 = -v11;
  while ( 1 )
  {
    v3 = abs32(v10);
    v4 = v11;
    if ( v11 < 0 )
      v4 = -v11;
    if ( v3 <= v4 )
      break;
    current_voltage += v11;
    v10 -= v11;
    sub_3DD40(current_voltage, (int)&byte_479DB0);
  }
  if ( a1 != current_voltage )
    sub_3DD40(a1, (int)&byte_479DB0);
  return v8;
}
