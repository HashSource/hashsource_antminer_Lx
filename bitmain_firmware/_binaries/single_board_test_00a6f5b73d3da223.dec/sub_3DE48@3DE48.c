int __fastcall sub_3DE48(int a1, int a2)
{
  double v2; // d0
  double v3; // d7
  _BYTE v8[20]; // [sp+2Ch] [bp+Ch] BYREF
  int v9; // [sp+102Ch] [bp+100Ch]
  int v10; // [sp+1030h] [bp+1010h]
  int v11; // [sp+1034h] [bp+1014h]
  double v12; // [sp+1038h] [bp+1018h]
  double v13; // [sp+1040h] [bp+1020h]
  double v14; // [sp+1048h] [bp+1028h]
  int v15; // [sp+1054h] [bp+1034h]
  unsigned int v16; // [sp+1058h] [bp+1038h]
  int v17; // [sp+105Ch] [bp+103Ch]

  v17 = 0;
  v15 = 255;
  v14 = (double)a1 / 100.0;
  v13 = 0.0;
  v12 = (double)*(int *)(a2 + 32) / 100.0;
  v2 = v14;
  v11 = bitmain_set_voltage();
  while ( 1 )
  {
    sub_3D718();
    v13 = v2;
    v10 = bitmain_convert_V_to_N();
    if ( *(_DWORD *)(a2 + 32) )
      v3 = (double)*(int *)(a2 + 32) / 100.0;
    else
      v3 = v13;
    v12 = v3;
    v2 = v3;
    v16 = bitmain_convert_V_to_N();
    v9 = v11 - v10;
    if ( v13 < 0.1 )
    {
      v17 = -1;
      V_LOCK();
      logfmt_raw(v8, 0x1000u, 0, "minimal feedback voltage is zero");
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/miner_util/power_api.c",
        72,
        "set_voltage_with_feedback",
        25,
        147,
        60,
        v8);
      goto LABEL_12;
    }
    if ( !v9 )
      goto LABEL_12;
    V_LOCK();
    logfmt_raw(
      v8,
      0x1000u,
      0,
      "board voltage = %.2f, target voltage = %.2f, power real voltage = %.2f, steps = %d",
      v13,
      v14,
      v12,
      v9);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/miner_util/power_api.c",
      72,
      "set_voltage_with_feedback",
      25,
      151,
      60,
      v8);
    if ( v9 + v16 >= 0x100 )
      break;
    sub_3DAAC(v16, v9 + v16);
    v16 += v9;
    v16 = sub_3DA88(v16);
    bitmain_convert_N_to_V();
    *(_DWORD *)(a2 + 32) = (int)(v3 * 100.0);
    if ( fabs(v13 - v14) > 0.1 )
    {
      if ( v15-- )
        continue;
    }
    goto LABEL_12;
  }
  V_LOCK();
  logfmt_raw(v8, 0x1000u, 0, "overflow to the N limitation");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/miner_util/power_api.c",
    72,
    "set_voltage_with_feedback",
    25,
    154,
    60,
    v8);
  v17 = -2;
LABEL_12:
  if ( v17 )
  {
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, "fail to set taget voltage = %.2f, feedback_vol = %.2f", v14, v13);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/miner_util/power_api.c",
      72,
      "set_voltage_with_feedback",
      25,
      167,
      60,
      v8);
  }
  else
  {
    V_LOCK();
    bitmain_convert_N_to_V();
    logfmt_raw(
      v8,
      0x1000u,
      0,
      "set to target voltage = %.2f, power real voltage = %.2f, feed back voltage = %.2f",
      v14,
      v3,
      v13);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/miner_util/power_api.c",
      72,
      "set_voltage_with_feedback",
      25,
      164,
      60,
      v8);
    *(_DWORD *)(a2 + 28) = a1;
  }
  return v17;
}
