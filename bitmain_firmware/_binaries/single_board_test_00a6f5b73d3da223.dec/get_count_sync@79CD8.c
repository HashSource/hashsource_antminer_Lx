int __fastcall get_count_sync(int a1, unsigned __int8 a2)
{
  _BYTE v5[12]; // [sp+1Ch] [bp+Ch] BYREF
  int v6; // [sp+101Ch] [bp+100Ch]
  unsigned __int8 *v7; // [sp+1020h] [bp+1010h]
  int i; // [sp+1024h] [bp+1014h]

  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "%s...", "get_count_sync");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "get_count_sync",
    14,
    323,
    60,
    v5);
  v7 = (unsigned __int8 *)malloc(0x600u);
  v6 = sub_78A20(a1, a2, 202, v7);
  for ( i = 0; i < v6; ++i )
  {
    V_LOCK();
    logfmt_raw(
      v5,
      0x1000u,
      0,
      "chip %02x core %02x reg %02x cnt %08x",
      v7[12 * i + 4],
      v7[12 * i + 8],
      *(unsigned __int16 *)&v7[12 * i + 6],
      *(_DWORD *)&v7[12 * i]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
      83,
      "get_count_sync",
      14,
      328,
      60,
      v5);
  }
  free(v7);
  return 0;
}
