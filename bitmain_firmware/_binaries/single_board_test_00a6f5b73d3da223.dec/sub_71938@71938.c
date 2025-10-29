int __fastcall sub_71938(int a1, char a2)
{
  float v2; // s0
  _BYTE v6[28]; // [sp+24h] [bp+14h] BYREF
  _DWORD v7[4]; // [sp+1024h] [bp+1014h] BYREF
  unsigned int v8; // [sp+1034h] [bp+1024h] BYREF
  int v9; // [sp+1038h] [bp+1028h]
  float v10; // [sp+103Ch] [bp+102Ch]

  v8 = 0;
  memset(v7, 0, sizeof(v7));
  LOBYTE(v7[2]) = 0;
  BYTE1(v7[2]) = *(_DWORD *)(a1 + 240) * a2;
  HIWORD(v7[2]) = 12;
  sub_716D4(&v8);
  v10 = v2;
  v7[0] = v8;
  V_LOCK();
  logfmt_raw(v6, 0x1000u, 0, "set freq: %.2f, expected freq: %.2f", v10, v2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/chip_setting.c",
    72,
    "ChipSetting_one_asic_freq_AE",
    28,
    304,
    20,
    v6);
  v9 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 156))(a1, v7);
  usleep(0x2710u);
  return v9;
}
