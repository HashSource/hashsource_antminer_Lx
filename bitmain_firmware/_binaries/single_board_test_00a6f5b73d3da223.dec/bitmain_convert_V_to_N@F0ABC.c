int bitmain_convert_V_to_N()
{
  double v0; // d0
  int v3; // [sp+1Ch] [bp+Ch] BYREF
  int v4; // [sp+101Ch] [bp+100Ch]

  v4 = bitmain_convert_V_to_N_calibration();
  V_LOCK();
  logfmt_raw(&v3, 0x1000u, 0, "N before calibration %d, N after calibration %d", (int)(1280.57782 - v0 * 73.979365), v4);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/power/bitmain_power_APW9.c",
    95,
    "bitmain_convert_V_to_N",
    22,
    547,
    60,
    &v3);
  if ( v4 > 0 )
    return v4;
  switch ( dword_47B8C8 )
  {
    case 'A':
      v4 = (int)(765.411764 - v0 * 35.833333);
      break;
    case 'B':
      v4 = (int)(765.411764 - v0 * 35.833333);
      break;
    case 'C':
      v4 = (int)(933.240365 - v0 * 59.806034);
      break;
    case 'a':
      v4 = (int)(1144.50226 - v0 * 52.243589);
      break;
    case 'q':
      v4 = (int)(1190.93534 - v0 * 78.742588);
      break;
    case 'r':
      v4 = (int)(1190.93534 - v0 * 78.742588);
      break;
    case 's':
      v4 = (int)(1280.57782 - v0 * 73.979365);
      break;
    default:
      v4 = -1;
      break;
  }
  return v4;
}
