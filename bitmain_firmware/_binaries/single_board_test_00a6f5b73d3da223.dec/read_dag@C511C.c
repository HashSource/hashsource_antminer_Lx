int __fastcall read_dag(int a1)
{
  _BYTE v3[4088]; // [sp+28h] [bp+8h] BYREF
  _DWORD v4[6]; // [sp+1028h] [bp+1008h]
  _WORD s[66]; // [sp+1040h] [bp+1020h] BYREF
  _BYTE v6[60]; // [sp+10C4h] [bp+10A4h] BYREF
  unsigned int v8; // [sp+1108h] [bp+10E8h]
  unsigned int kk; // [sp+110Ch] [bp+10ECh]
  unsigned __int8 jj; // [sp+1113h] [bp+10F3h]
  unsigned int ii; // [sp+1114h] [bp+10F4h]
  unsigned int n; // [sp+1118h] [bp+10F8h]
  unsigned int m; // [sp+111Ch] [bp+10FCh]
  unsigned int k; // [sp+1120h] [bp+1100h]
  unsigned __int8 j; // [sp+1126h] [bp+1106h]
  unsigned __int8 i; // [sp+1127h] [bp+1107h]

  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "%s...", "read_dag");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "read_dag",
    8,
    8367,
    60,
    v3);
  for ( i = 0; i <= 0xFu; ++i )
  {
    sub_789C4(a1, i, 19, i);
    usleep(0x2710u);
  }
  for ( j = 0; j <= 0xFu; ++j )
  {
    if ( j > 7u )
      sub_789C4(a1, j, 12, 0);
    else
      sub_789C4(a1, j, 12, 3);
  }
  memset(s, 0, 0x81u);
  v4[0] = 0;
  v4[1] = 1;
  v4[2] = 4096;
  v4[3] = 4096;
  v4[4] = 16382;
  v4[5] = 0x3FFF;
  for ( k = 0; k <= 0xB; ++k )
  {
    for ( m = 0; m <= 7; ++m )
    {
      for ( n = 0; n <= 7; ++n )
      {
        for ( ii = 0; ii <= 5; ++ii )
        {
          v8 = (4 * n) | (k << 22) | (v4[ii] << 8) | (32 * m);
          for ( jj = 0; jj <= 7u; ++jj )
          {
            if ( sub_78528(a1, jj, v8, v6) )
            {
              for ( kk = 0; kk <= 0x3F; ++kk )
                sprintf((char *)&s[kk], "%02x", (unsigned __int8)v6[kk]);
              V_LOCK();
              logfmt_raw(
                v3,
                0x1000u,
                0,
                "[DAG] node_index %08x(chip %1d row %02d col %d ch %d s_addr %04x %s",
                v8,
                jj,
                k,
                m,
                n,
                v4[ii],
                s);
              V_UNLOCK();
              zlog(
                g_zc,
                "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
                83,
                "read_dag",
                8,
                8399,
                60,
                v3);
            }
          }
        }
      }
    }
  }
  sub_788A8(a1, 12, 2);
  return 0;
}
