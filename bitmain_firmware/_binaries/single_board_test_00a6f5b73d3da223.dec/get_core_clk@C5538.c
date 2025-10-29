int __fastcall get_core_clk(int a1)
{
  int v2; // [sp+14h] [bp-4h]
  __int64 v3; // [sp+18h] [bp+0h]
  __int64 v4; // [sp+20h] [bp+8h]
  _BYTE v6[8]; // [sp+30h] [bp+18h] BYREF
  unsigned int v7; // [sp+1030h] [bp+1018h]
  unsigned int v8; // [sp+1034h] [bp+101Ch]
  int v9; // [sp+1038h] [bp+1020h]
  unsigned __int8 *v10; // [sp+103Ch] [bp+1024h]
  unsigned __int64 v11; // [sp+1040h] [bp+1028h]
  int k; // [sp+1048h] [bp+1030h]
  int j; // [sp+104Ch] [bp+1034h]
  unsigned __int8 i; // [sp+1053h] [bp+103Bh]
  int v15; // [sp+1054h] [bp+103Ch]

  V_LOCK();
  logfmt_raw(v6, 0x1000u, 0, "%s...", "get_core_clk");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "get_core_clk",
    12,
    8414,
    60,
    v6);
  v4 = 4800000000LL;
  v3 = 37600000000LL;
  v11 = 150000000000LL;
  v15 = 0;
  v10 = (unsigned __int8 *)malloc(0x600u);
  for ( i = 0; i <= 7u; ++i )
  {
    v9 = sub_78DA0(a1, i, 255, 121, v10);
    for ( j = 0; j < v9; ++j )
    {
      v8 = sub_79338(*(_DWORD *)&v10[12 * j]);
      if ( v8 )
        v15 = sub_1A3E94(v11 >> 10, v8);
      else
        v15 = 0;
      V_LOCK();
      logfmt_raw(
        v6,
        0x1000u,
        0,
        "chip %02x core %02x addr %04x, %08x, tx_clk %lld",
        v10[12 * j + 4],
        v10[12 * j + 8],
        121,
        v8,
        v15,
        v2,
        v3,
        v4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
        83,
        "get_core_clk",
        12,
        8428,
        60,
        v6);
    }
    v9 = sub_78DA0(a1, i, 255, 122, v10);
    for ( k = 0; k < v9; ++k )
    {
      v7 = sub_79338(*(_DWORD *)&v10[12 * k]);
      if ( v7 )
        v15 = sub_1A3E94(v11 >> 10, v7);
      else
        v15 = 0;
      V_LOCK();
      logfmt_raw(
        v6,
        0x1000u,
        0,
        "chip %02x core %02x addr %04x, %08x, rx_clk0 %lld",
        v10[12 * k + 4],
        v10[12 * k + 8],
        122,
        v7,
        v15);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
        83,
        "get_core_clk",
        12,
        8438,
        60,
        v6);
    }
  }
  free(v10);
  return 0;
}
