int __fastcall check_ref_clock_ready_ext(int a1, int a2, unsigned __int8 a3, int a4, int a5)
{
  _BYTE v9[24]; // [sp+18h] [bp+8h] BYREF
  int v10; // [sp+1018h] [bp+1008h] BYREF
  int v11; // [sp+1028h] [bp+1018h]
  int v12; // [sp+102Ch] [bp+101Ch]
  _DWORD *v13; // [sp+1030h] [bp+1020h]
  unsigned __int8 *v14; // [sp+1034h] [bp+1024h]
  int n; // [sp+1038h] [bp+1028h]
  unsigned __int8 m; // [sp+103Fh] [bp+102Fh]
  int k; // [sp+1040h] [bp+1030h]
  unsigned __int8 j; // [sp+1046h] [bp+1036h]
  unsigned __int8 v19; // [sp+1047h] [bp+1037h]
  int i; // [sp+1048h] [bp+1038h]
  int v21; // [sp+104Ch] [bp+103Ch]
  _BYTE v22[4]; // [sp+1050h] [bp+1040h] BYREF

  V_LOCK();
  logfmt_raw(v9, 0x1000u, 0, "clear debug_cmnlockstatus_cnt");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "check_ref_clock_ready_ext",
    25,
    8774,
    60,
    v9);
  sub_788A8(a1, 112, 0);
  v21 = 1;
  if ( a3 == 255 )
    v21 = sub_7936C(&v10);
  for ( i = 0; i <= 2; ++i )
  {
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, "%s round:%d", "check_ref_clock_ready_ext", i);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
      83,
      "check_ref_clock_ready_ext",
      25,
      8783,
      60,
      v9);
    v14 = (unsigned __int8 *)malloc(0x600u);
    v13 = malloc(0x600u);
    v19 = 0;
    for ( j = 0; j < v21; ++j )
    {
      if ( a3 == 255 )
        v19 = v22[j - 56];
      else
        v19 = a3;
      v12 = sub_78A20(a1, v19, 112, v14);
      for ( k = 0; k < v12; ++k )
      {
        if ( (*(_DWORD *)&v14[12 * k] & 0x9000000) == 0x9000000 )
        {
          if ( a5 )
            *(_BYTE *)(a5 + v19 + 16 * k) = 0;
          V_LOCK();
          logfmt_raw(
            v9,
            0x1000u,
            0,
            "chip %02x core %02x addr %04x, %08x, cmn locked",
            v14[12 * k + 4],
            v14[12 * k + 8],
            112,
            *(_DWORD *)&v14[12 * k]);
          V_UNLOCK();
          zlog(
            g_zc,
            "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
            83,
            "check_ref_clock_ready_ext",
            25,
            8798,
            20,
            v9);
          v11 = sub_78DA0(a1, v14[12 * k + 4], v19, 113, v13);
          if ( !v11 || *v13 == -1 )
          {
            if ( a5 )
              *(_BYTE *)(a5 + v19 + 16 * k) = 0;
            V_LOCK();
            logfmt_raw(
              v9,
              0x1000u,
              0,
              "chip %02x core %02x addr %04x, %08x, tx/rx locked",
              *((unsigned __int8 *)v13 + 4),
              *((unsigned __int8 *)v13 + 8),
              113,
              *v13);
            V_UNLOCK();
            zlog(
              g_zc,
              "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
              83,
              "check_ref_clock_ready_ext",
              25,
              8810,
              20,
              v9);
          }
          else
          {
            if ( a5 )
              *(_BYTE *)(a5 + v19 + 16 * k) = 1;
            V_LOCK();
            logfmt_raw(
              v9,
              0x1000u,
              0,
              "chip %02x core %02x addr %04x, %08x, tx/rx lock failed",
              *((unsigned __int8 *)v13 + 4),
              *((unsigned __int8 *)v13 + 8),
              113,
              *v13);
            V_UNLOCK();
            zlog(
              g_zc,
              "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
              83,
              "check_ref_clock_ready_ext",
              25,
              8805,
              100,
              v9);
          }
        }
        else
        {
          if ( a5 )
            *(_BYTE *)(a5 + v19 + 16 * k) = 1;
          V_LOCK();
          logfmt_raw(
            v9,
            0x1000u,
            0,
            "chip %02x core %02x addr %04x, %08x, cmn lock failed",
            v14[12 * k + 4],
            v14[12 * k + 8],
            112,
            *(_DWORD *)&v14[12 * k]);
          V_UNLOCK();
          zlog(
            g_zc,
            "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
            83,
            "check_ref_clock_ready_ext",
            25,
            8816,
            100,
            v9);
        }
      }
    }
    free(v14);
    free(v13);
  }
  if ( a5 )
  {
    for ( m = 0; m <= 7u; ++m )
    {
      for ( n = 0; n <= 15; ++n )
      {
        if ( n != 4 && n != 12 && *(_BYTE *)(a5 + n + 16 * m) )
          return -1;
      }
    }
  }
  return 0;
}
