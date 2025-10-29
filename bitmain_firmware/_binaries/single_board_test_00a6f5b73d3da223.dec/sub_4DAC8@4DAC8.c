int __fastcall sub_4DAC8(int a1)
{
  int v3; // [sp+4h] [bp-34h]
  _BYTE v5[8]; // [sp+40h] [bp+8h] BYREF
  int v6; // [sp+1040h] [bp+1008h] BYREF
  int v7; // [sp+1044h] [bp+100Ch] BYREF
  _DWORD v8[4]; // [sp+1048h] [bp+1010h] BYREF
  _DWORD v9[7]; // [sp+1058h] [bp+1020h] BYREF
  int v10; // [sp+1074h] [bp+103Ch]
  unsigned __int8 *v11; // [sp+1078h] [bp+1040h]
  int v12; // [sp+107Ch] [bp+1044h]
  int i; // [sp+1080h] [bp+1048h]
  unsigned __int8 v14; // [sp+1087h] [bp+104Fh]

  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "get clk cnt %s chip_no %d", "ChipSetting_clk_count_GRIN32", *(_DWORD *)(a1 + 196));
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/chip_setting.c",
    72,
    "ChipSetting_clk_count_GRIN32",
    28,
    428,
    20,
    v5);
  memset(v8, 0, sizeof(v8));
  LOBYTE(v8[2]) = 1;
  HIWORD(v8[2]) = 108;
  v8[0] = 0x80000000;
  v12 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 156))(a1, v8);
  if ( v12 >= 0 )
  {
    v14 = 0;
    v11 = (unsigned __int8 *)malloc(12 * *(_DWORD *)(a1 + 196));
    do
    {
      v6 = 0;
      usleep(0x3E8u);
      memset(v11, 0, 12 * *(_DWORD *)(a1 + 196));
      (*(void (__fastcall **)(int, _DWORD *, _DWORD, unsigned __int8 *, int *, int, int, _DWORD))(a1 + 176))(
        a1,
        v8,
        *(_DWORD *)(a1 + 196),
        v11,
        &v7,
        v3,
        2000,
        0);
      for ( i = 0; i < v7; ++i )
      {
        if ( *(_WORD *)&v11[12 * i + 6] == 108 )
        {
          sub_4BF44(&v6, *(_DWORD *)&v11[12 * i]);
          V_LOCK();
          sub_4BC3C((int)v9, *(int *)(a1 + 140));
          logfmt_raw(
            v5,
            0x1000u,
            0,
            v10,
            v9[0],
            v9[1],
            v9[2],
            v9[3],
            v9[4],
            v9[5],
            v9[6],
            v10,
            "%s asic %d, reg %02x CLKCNT %08x",
            "ChipSetting_clk_count_GRIN32",
            v11[12 * i + 4],
            *(unsigned __int16 *)&v11[12 * i + 6],
            v6);
          V_UNLOCK();
          zlog(
            g_zc,
            "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/chip_setting.c",
            72,
            "ChipSetting_clk_count_GRIN32",
            28,
            451,
            60,
            v5);
        }
      }
      if ( (_WORD)v6 )
        break;
      if ( !v7 )
        ++v14;
    }
    while ( v14 <= 4u );
    free(v11);
    return v7;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, "%s failed, set reg:%02x", "ChipSetting_clk_count_GRIN32", HIWORD(v8[2]));
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/chip_setting.c",
      72,
      "ChipSetting_clk_count_GRIN32",
      28,
      436,
      100,
      v5);
    return -1;
  }
}
