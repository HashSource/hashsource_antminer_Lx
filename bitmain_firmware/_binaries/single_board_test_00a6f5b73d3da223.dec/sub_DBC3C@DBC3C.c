int __fastcall sub_DBC3C(int a1)
{
  float v1; // s0
  _BYTE v4[28]; // [sp+1Ch] [bp+Ch] BYREF
  _DWORD v5[4]; // [sp+101Ch] [bp+100Ch] BYREF
  unsigned int v6; // [sp+102Ch] [bp+101Ch] BYREF
  int v7; // [sp+1030h] [bp+1020h]
  float v8; // [sp+1034h] [bp+1024h]

  v6 = 0;
  memset(v5, 0, sizeof(v5));
  v5[2] = 524289;
  sub_DBB2C(&v6);
  v8 = v1;
  v5[0] = v6;
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, "set freq: %.2f, expected freq: %.2f", v8, v1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/chip_setting.c",
    72,
    "ChipSetting_freq_LTC",
    20,
    288,
    20,
    v4);
  v7 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 156))(a1, v5);
  usleep(0x2710u);
  return v7;
}
