int sub_3D8B8()
{
  double v0; // d0
  int v3; // [sp+4h] [bp-14h]
  _BYTE v4[24]; // [sp+18h] [bp+0h] BYREF
  double v5; // [sp+1018h] [bp+1000h]
  double v6; // [sp+1020h] [bp+1008h]
  int current_voltage; // [sp+1028h] [bp+1010h]
  int v8; // [sp+102Ch] [bp+1014h]

  v8 = 3;
  current_voltage = get_current_voltage();
  v6 = (double)current_voltage * 0.75 / 100.0;
  while ( 1 )
  {
    sleep(1u);
    sub_3D718();
    v5 = v0;
    if ( v0 >= v6 )
      break;
    V_LOCK();
    logfmt_raw(
      v4,
      0x1000u,
      0,
      "power voltage can not meet the target! centi_voltage %d min_fb_vol %f qualified_vol %f",
      current_voltage,
      v3,
      v5,
      v6);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/miner_util/power_api.c",
      72,
      "check_feedback_voltage",
      22,
      80,
      80,
      v4);
    if ( !--v8 )
      goto LABEL_6;
  }
  V_LOCK();
  logfmt_raw(
    v4,
    0x1000u,
    0,
    "power voltage qualified! centi_voltage %d min_fb_vol %f qualified_vol %f",
    current_voltage,
    v3,
    v5,
    v6);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/miner_util/power_api.c",
    72,
    "check_feedback_voltage",
    22,
    84,
    60,
    v4);
LABEL_6:
  if ( v8 )
    return 0;
  else
    return -1;
}
