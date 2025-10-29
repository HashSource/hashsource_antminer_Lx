int __fastcall check_ref_clock_ready(int a1, int a2, unsigned __int8 a3)
{
  _BYTE v6[12]; // [sp+1Ch] [bp+Ch] BYREF
  int v7; // [sp+101Ch] [bp+100Ch]
  unsigned __int8 *v8; // [sp+1020h] [bp+1010h]
  int kk; // [sp+1024h] [bp+1014h]
  int jj; // [sp+1028h] [bp+1018h]
  int ii; // [sp+102Ch] [bp+101Ch]
  int n; // [sp+1030h] [bp+1020h]
  int m; // [sp+1034h] [bp+1024h]
  int k; // [sp+1038h] [bp+1028h]
  unsigned __int8 j; // [sp+103Fh] [bp+102Fh]
  int i; // [sp+1040h] [bp+1030h]
  unsigned __int8 v17; // [sp+1047h] [bp+1037h]

  V_LOCK();
  logfmt_raw(v6, 0x1000u, 0, "write 0x70: 0 to clear debug_cmnlockstatus_cnt");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "check_ref_clock_ready",
    21,
    8450,
    60,
    v6);
  sub_788A8(a1, 112, 0);
  v17 = 16;
  if ( a3 != 255 )
    v17 = 1;
  for ( i = 0; i <= 2; ++i )
  {
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, "%s round:%d", "check_ref_clock_ready", i);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
      83,
      "check_ref_clock_ready",
      21,
      8457,
      60,
      v6);
    v8 = (unsigned __int8 *)malloc(0x600u);
    for ( j = 0; j < (unsigned int)v17; ++j )
    {
      if ( a3 != 255 )
        j = a3;
      v7 = sub_78A20(a1, j, 112, v8);
      for ( k = 0; k < v7; ++k )
      {
        if ( (*(_DWORD *)&v8[12 * k] & 0x9000000) == 0x9000000 )
        {
          V_LOCK();
          logfmt_raw(
            v6,
            0x1000u,
            0,
            "chip %02x core %02x addr %04x, %08x, cmn locked",
            v8[12 * k + 4],
            v8[12 * k + 8],
            112,
            *(_DWORD *)&v8[12 * k]);
          V_UNLOCK();
          zlog(
            g_zc,
            "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
            83,
            "check_ref_clock_ready",
            21,
            8465,
            20,
            v6);
        }
        else
        {
          V_LOCK();
          logfmt_raw(
            v6,
            0x1000u,
            0,
            "chip %02x core %02x addr %04x, %08x, cmn lock failed",
            v8[12 * k + 4],
            v8[12 * k + 8],
            112,
            *(_DWORD *)&v8[12 * k]);
          V_UNLOCK();
          zlog(
            g_zc,
            "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
            83,
            "check_ref_clock_ready",
            21,
            8467,
            100,
            v6);
        }
      }
      v7 = sub_78A20(a1, j, 113, v8);
      for ( m = 0; m < v7; ++m )
      {
        if ( *(_DWORD *)&v8[12 * m] == -1 )
        {
          V_LOCK();
          logfmt_raw(
            v6,
            0x1000u,
            0,
            "chip %02x core %02x addr %04x, %08x, tx/rx locked",
            v8[12 * m + 4],
            v8[12 * m + 8],
            113,
            *(_DWORD *)&v8[12 * m]);
          V_UNLOCK();
          zlog(
            g_zc,
            "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
            83,
            "check_ref_clock_ready",
            21,
            8476,
            20,
            v6);
        }
        else
        {
          V_LOCK();
          logfmt_raw(
            v6,
            0x1000u,
            0,
            "chip %02x core %02x addr %04x, %08x, tx/rx lock failed",
            v8[12 * m + 4],
            v8[12 * m + 8],
            113,
            *(_DWORD *)&v8[12 * m]);
          V_UNLOCK();
          zlog(
            g_zc,
            "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
            83,
            "check_ref_clock_ready",
            21,
            8474,
            100,
            v6);
        }
      }
      v7 = sub_78A20(a1, j, 114, v8);
      for ( n = 0; n < v7; ++n )
      {
        V_LOCK();
        logfmt_raw(
          v6,
          0x1000u,
          0,
          "chip %02x core %02x addr %04x, %08x",
          v8[12 * n + 4],
          v8[12 * n + 8],
          114,
          *(_DWORD *)&v8[12 * n]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
          83,
          "check_ref_clock_ready",
          21,
          8482,
          100,
          v6);
      }
      v7 = sub_78A20(a1, j, 115, v8);
      for ( ii = 0; ii < v7; ++ii )
      {
        V_LOCK();
        logfmt_raw(
          v6,
          0x1000u,
          0,
          "chip %02x core %02x addr %04x, %08x",
          v8[12 * ii + 4],
          v8[12 * ii + 8],
          115,
          *(_DWORD *)&v8[12 * ii]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
          83,
          "check_ref_clock_ready",
          21,
          8487,
          100,
          v6);
      }
      v7 = sub_78A20(a1, j, 116, v8);
      for ( jj = 0; jj < v7; ++jj )
      {
        V_LOCK();
        logfmt_raw(
          v6,
          0x1000u,
          0,
          "chip %02x core %02x addr %04x, %08x",
          v8[12 * jj + 4],
          v8[12 * jj + 8],
          116,
          *(_DWORD *)&v8[12 * jj]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
          83,
          "check_ref_clock_ready",
          21,
          8492,
          100,
          v6);
      }
      v7 = sub_78A20(a1, j, 117, v8);
      for ( kk = 0; kk < v7; ++kk )
      {
        V_LOCK();
        logfmt_raw(
          v6,
          0x1000u,
          0,
          "chip %02x core %02x addr %04x, %08x",
          v8[12 * kk + 4],
          v8[12 * kk + 8],
          117,
          *(_DWORD *)&v8[12 * kk]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
          83,
          "check_ref_clock_ready",
          21,
          8497,
          100,
          v6);
      }
    }
    free(v8);
  }
  return 0;
}
