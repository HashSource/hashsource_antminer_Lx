int __fastcall sub_25CF8(int a1)
{
  _BYTE v4[16]; // [sp+40h] [bp+8h] BYREF
  int v5; // [sp+1040h] [bp+1008h] BYREF
  int v6; // [sp+1044h] [bp+100Ch] BYREF
  _DWORD v7[4]; // [sp+1048h] [bp+1010h] BYREF
  _DWORD v8[7]; // [sp+1058h] [bp+1020h] BYREF
  int v9; // [sp+1074h] [bp+103Ch]
  int v10; // [sp+1078h] [bp+1040h]
  int j; // [sp+107Ch] [bp+1044h]
  unsigned __int8 v12; // [sp+1083h] [bp+104Bh]
  int i; // [sp+1084h] [bp+104Ch]
  unsigned __int8 v14; // [sp+108Bh] [bp+1053h]
  unsigned __int8 *v15; // [sp+108Ch] [bp+1054h]

  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, "get pmdata %s chip_no %d", "ChipSetting_pmdata_DASH", *(_DWORD *)(a1 + 196));
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/./backend/chip_setting.c",
    74,
    "ChipSetting_pmdata_DASH",
    23,
    380,
    20,
    v4);
  memset(v7, 0, sizeof(v7));
  LOBYTE(v7[2]) = 1;
  v14 = 0;
  for ( i = 0; i <= 1; ++i )
  {
    HIWORD(v7[2]) = 255;
    v7[0] = i << 8;
    v10 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 156))(a1, v7);
    if ( v10 < 0 )
    {
      V_LOCK();
      logfmt_raw(v4, 0x1000u, 0, "%s failed, set reg:%02x", "ChipSetting_pmdata_DASH", HIWORD(v7[2]));
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/./backend/chip_setting.c",
        74,
        "ChipSetting_pmdata_DASH",
        23,
        391,
        100,
        v4);
      return -1;
    }
    v15 = (unsigned __int8 *)malloc(12 * *(_DWORD *)(a1 + 196));
    do
    {
      usleep(0x3E8u);
      memset(v15, 0, 12 * *(_DWORD *)(a1 + 196));
      (*(void (__fastcall **)(int, _DWORD, unsigned __int8 *, int *, int, _DWORD))(a1 + 172))(
        a1,
        *(_DWORD *)(a1 + 196),
        v15,
        &v6,
        2000,
        0);
      v12 = 0;
      for ( j = 0; j < v6; ++j )
      {
        if ( *(_WORD *)&v15[12 * j + 6] == 255 )
        {
          v12 = -1;
          v5 = 0;
          sub_245D8(&v5, *(_DWORD *)&v15[12 * j]);
          V_LOCK();
          sub_243CC((int)v8, *(int *)(a1 + 140));
          logfmt_raw(
            v4,
            0x1000u,
            0,
            v9,
            v8[0],
            v8[1],
            v8[2],
            v8[3],
            v8[4],
            v8[5],
            v8[6],
            v9,
            "%s asic %d, reg %02x VT %d PMDATA %08x",
            "ChipSetting_pmdata_DASH",
            v15[12 * j + 4],
            *(unsigned __int16 *)&v15[12 * j + 6],
            i,
            v5);
          V_UNLOCK();
          zlog(
            g_zc,
            "/home/xingfeiwang/work/share-d/code/1489/godminer/./backend/chip_setting.c",
            74,
            "ChipSetting_pmdata_DASH",
            23,
            406,
            60,
            v4);
        }
      }
      if ( v6 && v12 == 255 )
        break;
      ++v14;
    }
    while ( v14 <= 4u );
    v14 = 0;
  }
  free(v15);
  return v6;
}
