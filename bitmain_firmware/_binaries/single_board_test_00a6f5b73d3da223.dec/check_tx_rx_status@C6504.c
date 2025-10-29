int __fastcall check_tx_rx_status(int a1, int a2, unsigned __int8 a3)
{
  int v6; // [sp+1Ch] [bp+Ch] BYREF
  int v7; // [sp+101Ch] [bp+100Ch] BYREF
  int v8; // [sp+102Ch] [bp+101Ch]
  int v9; // [sp+1030h] [bp+1020h]
  unsigned __int8 *v10; // [sp+1034h] [bp+1024h]
  int j; // [sp+1038h] [bp+1028h]
  unsigned __int8 i; // [sp+103Eh] [bp+102Eh]
  unsigned __int8 v13; // [sp+103Fh] [bp+102Fh]
  _BYTE v14[4]; // [sp+1040h] [bp+1030h] BYREF

  V_LOCK();
  logfmt_raw(&v6, 0x1000u, 0, "%s...", "check_tx_rx_status");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "check_tx_rx_status",
    18,
    8509,
    60,
    &v6);
  v10 = (unsigned __int8 *)malloc(0x600u);
  v9 = sub_7936C(&v7);
  v13 = 0;
  for ( i = 0; i < v9; ++i )
  {
    if ( a3 == 255 )
      v13 = v14[i - 36];
    else
      v13 = a3;
    v8 = sub_78A20(a1, v13, 113, v10);
    for ( j = 0; j < v8; ++j )
    {
      if ( *(_DWORD *)&v10[12 * j] == -1 )
      {
        V_LOCK();
        logfmt_raw(
          &v6,
          0x1000u,
          0,
          "chip %02x core %02x addr %04x, %08x, tx/rx locked",
          v10[12 * j + 4],
          v10[12 * j + 8],
          113,
          *(_DWORD *)&v10[12 * j]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
          83,
          "check_tx_rx_status",
          18,
          8526,
          20,
          &v6);
      }
      else
      {
        V_LOCK();
        logfmt_raw(
          &v6,
          0x1000u,
          0,
          "chip %02x core %02x addr %04x, %08x, tx/rx lock failed",
          v10[12 * j + 4],
          v10[12 * j + 8],
          113,
          *(_DWORD *)&v10[12 * j]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
          83,
          "check_tx_rx_status",
          18,
          8524,
          100,
          &v6);
      }
    }
  }
  free(v10);
  return 0;
}
