int __fastcall clear_rxeqcal_ext(int a1, unsigned __int8 a2, int a3)
{
  int v7; // [sp+24h] [bp+14h] BYREF
  _BYTE v8[12]; // [sp+1024h] [bp+1014h] BYREF
  unsigned __int8 v9; // [sp+1037h] [bp+1027h]
  int v10; // [sp+1038h] [bp+1028h]
  __int16 v11; // [sp+103Ch] [bp+102Ch]
  unsigned __int8 k; // [sp+103Fh] [bp+102Fh]
  int j; // [sp+1040h] [bp+1030h]
  unsigned __int8 i; // [sp+1047h] [bp+1037h]

  V_LOCK();
  logfmt_raw(&v7, 0x1000u, 0, "%s...", "clear_rxeqcal_ext");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "clear_rxeqcal_ext",
    17,
    3584,
    60,
    &v7);
  v11 = 0;
  v10 = sub_7936C(v8);
  for ( i = 0; i <= 7u; ++i )
  {
    for ( j = 0; j < v10; ++j )
    {
      v9 = v8[j];
      for ( k = 0; k < (unsigned int)a2; ++k )
      {
        if ( v9 != 3 || k > 3u )
        {
          if ( *(_BYTE *)(a3 + k + 8 * (v9 + 2 * i)) )
          {
            serdes_apb_write_1_chip(a1, i, v9, (k << 12) | 1, -4194305);
            serdes_apb_write_1_chip(a1, i, v9, (k << 12) | 0x2F, 0x400000);
          }
        }
      }
    }
  }
  serdes_apb_write(a1, 0, 255, 0xF001u, 0);
  return 0;
}
