int __fastcall sub_5AF50(int a1, int a2)
{
  _BYTE v5[12]; // [sp+1Ch] [bp+Ch] BYREF
  float v6; // [sp+101Ch] [bp+100Ch]
  float v7; // [sp+1020h] [bp+1010h]
  int v8; // [sp+1024h] [bp+1014h]

  v8 = 1;
  v6 = 50.0;
  v7 = 50.0;
  do
  {
    sub_57500(a1);
    usleep(0x61A8u);
    v7 = (float)(a2 * v8++) + v6;
  }
  while ( *(float *)(a1 + 760) >= v7 );
  v7 = v7 - (float)a2;
  if ( *(float *)(a1 + 760) > v7 )
  {
    sub_57500(a1);
    usleep(0x61A8u);
    v7 = *(float *)(a1 + 760);
  }
  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "Set chip final freq=%f", v7);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_dash/backend_dash.c",
    85,
    "set_working_freq_by_steps",
    25,
    313,
    60,
    v5);
  return 0;
}
