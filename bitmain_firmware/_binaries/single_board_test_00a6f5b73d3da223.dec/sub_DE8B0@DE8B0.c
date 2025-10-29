int __fastcall sub_DE8B0(int a1, unsigned int a2)
{
  int v2; // r1
  int v3; // r3
  _BYTE v7[20]; // [sp+1Ch] [bp+Ch] BYREF
  int v8; // [sp+101Ch] [bp+100Ch]
  int v9; // [sp+1020h] [bp+1010h]
  float v10; // [sp+1024h] [bp+1014h]
  int i; // [sp+1028h] [bp+1018h]
  float v12; // [sp+102Ch] [bp+101Ch]

  v10 = 900.0;
  v9 = sub_1A3658((int)(float)(*(float *)(a1 + 760) - 900.0), a2);
  sub_1A38EC((int)(float)(*(float *)(a1 + 760) - 900.0), a2);
  v8 = v2;
  for ( i = 0; i < v9; ++i )
  {
    chip_setting_freq_ltc(a1, 1, 0);
    *(_DWORD *)(a1 + 272) = (int)(float)((float)(int)(a2 * (i + 1)) + v10);
    usleep(0x7A120u);
    v12 = (float)(int)(a2 * (i + 1)) + v10;
  }
  if ( v8 )
  {
    chip_setting_freq_ltc(a1, 1, 0);
    *(_DWORD *)(a1 + 272) = (int)*(float *)(a1 + 760);
    usleep(0x7A120u);
    v12 = *(float *)(a1 + 760);
  }
  V_LOCK();
  logfmt_raw(v7, 0x1000u, 0, "Set chip freq=%f", v12);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_ltc/backend_ltc.c",
    83,
    "set_working_freq_by_steps",
    25,
    329,
    60,
    v7);
  return v3;
}
