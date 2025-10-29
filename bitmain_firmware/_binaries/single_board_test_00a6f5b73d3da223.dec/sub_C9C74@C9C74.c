int __fastcall sub_C9C74(int a1, int a2, unsigned __int8 a3, _DWORD *a4)
{
  int v7; // [sp+24h] [bp+14h] BYREF
  int i; // [sp+1024h] [bp+1014h]

  for ( i = 0; i < a2; ++i )
  {
    if ( a3 == *(unsigned __int8 *)(a1 + 8 * i + 1) )
    {
      *a4 = *(_DWORD *)(a1 + 8 * i + 4);
      return 0;
    }
  }
  V_LOCK();
  logfmt_raw(&v7, 0x1000u, 0, "%s %d data not found!", "get_the_core_data", a3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "get_the_core_data",
    17,
    9031,
    100,
    &v7);
  return -1;
}
