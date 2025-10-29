int __fastcall chip_setting_freq_ltc(int a1, char a2, int a3)
{
  float v3; // s0
  char v4; // r3
  _BYTE v9[28]; // [sp+24h] [bp+14h] BYREF
  _DWORD v10[4]; // [sp+1024h] [bp+1014h] BYREF
  unsigned int v11; // [sp+1034h] [bp+1024h] BYREF
  int v12; // [sp+1038h] [bp+1028h]
  float v13; // [sp+103Ch] [bp+102Ch]

  v11 = 0;
  memset(v10, 0, sizeof(v10));
  LOBYTE(v10[2]) = a2;
  if ( a2 )
    v4 = 0;
  else
    v4 = *(_BYTE *)(a3 + *(_DWORD *)(a1 + 296));
  BYTE1(v10[2]) = v4;
  HIWORD(v10[2]) = 8;
  sub_DFBFC(&v11);
  v13 = v3;
  v10[0] = v11;
  V_LOCK();
  logfmt_raw(v9, 0x1000u, 0, "set freq: %.2f, expected freq: %.2f", v13, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_ltc/chip_setting_ltc.c",
    88,
    "chip_setting_freq_ltc",
    21,
    135,
    60,
    v9);
  v12 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 156))(a1, v10);
  usleep(0x2710u);
  return v12;
}
