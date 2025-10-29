int __fastcall chip_setting_working_mode_ltc(int a1, char a2, int a3, char a4, int a5, unsigned __int8 a6)
{
  char v6; // r3
  char v8; // r3
  int v14; // [sp+2Ch] [bp+14h] BYREF
  _DWORD v15[4]; // [sp+102Ch] [bp+1014h] BYREF
  int v16; // [sp+103Ch] [bp+1024h]
  int v17; // [sp+1040h] [bp+1028h]
  int v18; // [sp+1044h] [bp+102Ch]
  int v19; // [sp+1048h] [bp+1030h]
  int i; // [sp+104Ch] [bp+1034h]

  V_LOCK();
  logfmt_raw(&v14, 0x1000u, 0, "%s", "chip_setting_working_mode_ltc");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_ltc/chip_setting_ltc.c",
    88,
    "chip_setting_working_mode_ltc",
    29,
    298,
    20,
    &v14);
  if ( !a4 )
  {
    v18 = a5;
    v17 = a5;
    memset(v15, 0, sizeof(v15));
    LOBYTE(v15[2]) = a2;
    if ( a2 )
      v8 = 0;
    else
      v8 = *(_BYTE *)(a3 + *(_DWORD *)(a1 + 296));
    BYTE1(v15[2]) = v8;
    BYTE1(v15[3]) = *(_DWORD *)(a1 + 200);
    for ( i = v17; i <= v18; ++i )
    {
      v15[0] = a6 | 0x400;
      HIWORD(v15[2]) = 0;
      LOBYTE(v15[3]) = i;
      HIWORD(v15[3]) = 0;
      v16 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 160))(a1, v15);
      if ( v16 )
      {
        V_LOCK();
        logfmt_raw(
          &v14,
          0x1000u,
          0,
          "%s failed, chip_all %d chip_addr %02x reg:%02x, core_id:%d",
          "chip_setting_working_mode_ltc",
          LOBYTE(v15[2]),
          BYTE1(v15[2]),
          HIWORD(v15[2]),
          i);
        V_UNLOCK();
        zlog(
          g_zc,
          "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_ltc/chip_setting_ltc.c",
          88,
          "chip_setting_working_mode_ltc",
          29,
          336,
          100,
          &v14);
        return v16;
      }
      usleep(0x3E8u);
    }
    return 0;
  }
  memset(v15, 0, sizeof(v15));
  LOBYTE(v15[2]) = a2;
  if ( a2 )
    v6 = 0;
  else
    v6 = *(_BYTE *)(a3 + *(_DWORD *)(a1 + 296));
  BYTE1(v15[2]) = v6;
  BYTE1(v15[3]) = *(_DWORD *)(a1 + 200);
  v15[0] = a6 | 0x400;
  HIWORD(v15[2]) = 0;
  LOBYTE(v15[3]) = a5;
  HIWORD(v15[3]) = 1;
  v19 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 160))(a1, v15);
  if ( !v19 )
  {
    usleep(0x3E8u);
    return 0;
  }
  V_LOCK();
  logfmt_raw(
    &v14,
    0x1000u,
    0,
    "%s failed, chip_all %d chip_addr %02x reg:%02x, all core",
    "chip_setting_working_mode_ltc",
    LOBYTE(v15[2]),
    BYTE1(v15[2]),
    HIWORD(v15[2]));
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_ltc/chip_setting_ltc.c",
    88,
    "chip_setting_working_mode_ltc",
    29,
    314,
    100,
    &v14);
  return v19;
}
