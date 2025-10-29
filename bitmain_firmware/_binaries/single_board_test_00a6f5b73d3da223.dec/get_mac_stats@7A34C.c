int __fastcall get_mac_stats(int a1)
{
  _BYTE v3[28]; // [sp+1Ch] [bp+Ch] BYREF
  int v4; // [sp+101Ch] [bp+100Ch] BYREF
  unsigned int v5; // [sp+1020h] [bp+1010h]
  int v6; // [sp+1024h] [bp+1014h]
  unsigned __int8 *v7; // [sp+1028h] [bp+1018h]
  int k; // [sp+102Ch] [bp+101Ch]
  unsigned int j; // [sp+1030h] [bp+1020h]
  unsigned __int8 i; // [sp+1037h] [bp+1027h]

  v4 = -1734895979;
  v7 = (unsigned __int8 *)malloc(0x600u);
  for ( i = 0; i <= 7u; ++i )
  {
    for ( j = 0; j <= 3; ++j )
    {
      v6 = sub_78DA0(a1, i, 255, *((unsigned __int8 *)&v4 + j), v7);
      for ( k = 0; k < v6; ++k )
      {
        v5 = sub_79338(*(_DWORD *)&v7[12 * k]);
        V_LOCK();
        logfmt_raw(
          v3,
          0x1000u,
          0,
          "[MAC STATS]chip %02x core %02x addr %04x, %08x",
          v7[12 * k + 4],
          v7[12 * k + 8],
          *((unsigned __int8 *)&v4 + j),
          v5);
        V_UNLOCK();
        zlog(
          g_zc,
          "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
          83,
          "get_mac_stats",
          13,
          397,
          60,
          v3);
      }
    }
  }
  free(v7);
  return 0;
}
