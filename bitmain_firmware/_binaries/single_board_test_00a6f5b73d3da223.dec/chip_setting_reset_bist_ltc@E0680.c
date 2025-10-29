int __fastcall chip_setting_reset_bist_ltc(int a1, char a2, int a3, char a4, int a5)
{
  char v5; // r3
  char v7; // r3
  _BYTE v13[8]; // [sp+20h] [bp+10h] BYREF
  _DWORD v14[4]; // [sp+1020h] [bp+1010h] BYREF
  int v15; // [sp+1030h] [bp+1020h]
  int v16; // [sp+1034h] [bp+1024h]
  int j; // [sp+1038h] [bp+1028h]
  int i; // [sp+103Ch] [bp+102Ch]
  int v19; // [sp+1040h] [bp+1030h]
  int v20; // [sp+1044h] [bp+1034h]

  V_LOCK();
  logfmt_raw(v13, 0x1000u, 0, "%s", "chip_setting_reset_bist_ltc");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_ltc/chip_setting_ltc.c",
    88,
    "chip_setting_reset_bist_ltc",
    27,
    239,
    40,
    v13);
  if ( a4 )
  {
    v20 = 0;
    v19 = *(_DWORD *)(a1 + 200) - 1;
  }
  else
  {
    v19 = a5;
    v20 = a5;
  }
  memset(v14, 0, sizeof(v14));
  LOBYTE(v14[2]) = a2;
  if ( a2 )
    v5 = 0;
  else
    v5 = *(_BYTE *)(a3 + *(_DWORD *)(a1 + 296));
  BYTE1(v14[2]) = v5;
  BYTE1(v14[3]) = *(_DWORD *)(a1 + 200);
  for ( i = v20; i <= v19; ++i )
  {
    v14[0] = 1024;
    HIWORD(v14[2]) = 0;
    LOBYTE(v14[3]) = i;
    HIWORD(v14[3]) = 0;
    v16 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 160))(a1, v14);
    if ( v16 )
    {
      V_LOCK();
      logfmt_raw(v13, 0x1000u, 0, "%s failed, reg:%02x, core_id:%d", "chip_setting_reset_bist_ltc", HIWORD(v14[2]), i);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_ltc/chip_setting_ltc.c",
        88,
        "chip_setting_reset_bist_ltc",
        27,
        262,
        100,
        v13);
      return v16;
    }
    usleep(0x3E8u);
  }
  usleep(0x2710u);
  memset(v14, 0, sizeof(v14));
  LOBYTE(v14[2]) = a2;
  if ( a2 )
    v7 = 0;
  else
    v7 = *(_BYTE *)(a3 + *(_DWORD *)(a1 + 296));
  BYTE1(v14[2]) = v7;
  BYTE1(v14[3]) = *(_DWORD *)(a1 + 200);
  for ( j = v20; j <= v19; ++j )
  {
    v14[0] = 37888;
    HIWORD(v14[2]) = 0;
    LOBYTE(v14[3]) = j;
    HIWORD(v14[3]) = 0;
    v15 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 160))(a1, v14);
    if ( v15 )
    {
      V_LOCK();
      logfmt_raw(v13, 0x1000u, 0, "%s failed, reg:%02x, core_id:%d", "chip_setting_reset_bist_ltc", HIWORD(v14[2]), j);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_ltc/chip_setting_ltc.c",
        88,
        "chip_setting_reset_bist_ltc",
        27,
        284,
        100,
        v13);
      return v15;
    }
    usleep(0x3E8u);
  }
  usleep(0x2710u);
  return 0;
}
