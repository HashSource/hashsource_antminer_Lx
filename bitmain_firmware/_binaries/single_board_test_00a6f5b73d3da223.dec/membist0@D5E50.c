int __fastcall membist0(int a1)
{
  int v1; // r4
  int v2; // r5
  unsigned int v3; // r0
  unsigned int v4; // r0
  int v5; // r4
  int v6; // r5
  unsigned int v7; // r0
  unsigned int v8; // r0
  int v9; // r4
  int v10; // r5
  unsigned int v11; // r0
  __int16 v12; // r0
  const char *v13; // r3
  size_t v14; // r0
  _UNKNOWN **v15; // r0
  _BYTE v18[4088]; // [sp+18h] [bp+8h] BYREF
  char v19[64]; // [sp+1018h] [bp+1008h] BYREF
  _DWORD v20[133]; // [sp+1058h] [bp+1048h] BYREF
  unsigned __int8 *v21; // [sp+126Ch] [bp+125Ch]
  int v22; // [sp+1270h] [bp+1260h]
  unsigned __int8 jj; // [sp+1277h] [bp+1267h]
  unsigned __int64 v24; // [sp+1278h] [bp+1268h]
  unsigned int ii; // [sp+1280h] [bp+1270h]
  int n; // [sp+1284h] [bp+1274h]
  int m; // [sp+1288h] [bp+1278h]
  int k; // [sp+128Ch] [bp+127Ch]
  unsigned __int8 j; // [sp+1293h] [bp+1283h]
  unsigned int i; // [sp+1294h] [bp+1284h]
  _DWORD savedregs[4]; // [sp+1298h] [bp+1288h] BYREF

  V_LOCK();
  logfmt_raw(v18, 0x1000u, 0, "%s...", "membist0");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "membist0",
    8,
    11524,
    60,
    v18);
  v22 = 0;
  v20[128] = -2023406815;
  v20[129] = 1266163410;
  v20[130] = 2015285835;
  v20[131] = 517098360;
  v20[132] = -766805986;
  memset(v20, 0, 0x200u);
  v21 = (unsigned __int8 *)malloc(0x600u);
  for ( i = 0; i <= 4; ++i )
  {
    V_LOCK();
    logfmt_raw(v18, 0x1000u, 0, "membist final pattern %08x", savedregs[i - 16]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
      83,
      "membist0",
      8,
      11532,
      60,
      v18);
    sub_788A8(a1, 164, savedregs[i - 16]);
    for ( j = 0; j <= 7u; ++j )
    {
      sub_789C4(a1, j, 12, 1);
      sub_789C4(a1, j, 160, 3);
      usleep((__useconds_t)&stru_1869C.st_value);
      v22 = sub_78A20(a1, j, 161, v21);
      for ( k = 0; k < v22; ++k )
      {
        if ( (*(_DWORD *)&v21[12 * k] & 0x80) != 0 )
        {
          if ( (*(_DWORD *)&v21[12 * k] & 0xFFFFFF00) != 0 )
          {
            V_LOCK();
            v1 = v21[12 * k + 4];
            v2 = v21[12 * k + 8];
            v3 = sub_79338(*(_DWORD *)&v21[12 * k]);
            logfmt_raw(v18, 0x1000u, 0, "chip %02x core %02x membist err cnt: %08x", v1, v2, v3);
            V_UNLOCK();
            zlog(
              g_zc,
              "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
              83,
              "membist0",
              8,
              11544,
              100,
              v18);
            v4 = sub_79338(*(_DWORD *)&v21[12 * k]);
            v20[16 * v21[12 * k + 4] + i] += v4 & 0x7FFFFF;
          }
        }
        else
        {
          V_LOCK();
          logfmt_raw(v18, 0x1000u, 0, "chip %02x core %02x membist not done!", v21[12 * k + 4], v21[12 * k + 8]);
          V_UNLOCK();
          zlog(
            g_zc,
            "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
            83,
            "membist0",
            8,
            11548,
            100,
            v18);
        }
      }
      v22 = sub_78A20(a1, j, 162, v21);
      for ( m = 0; m < v22; ++m )
      {
        if ( (*(_DWORD *)&v21[12 * m] & 0xFFFFFF00) != 0 && (*(_DWORD *)&v21[12 * m] & 0x80) != 0 )
        {
          V_LOCK();
          v5 = v21[12 * m + 4];
          v6 = v21[12 * m + 8];
          v7 = sub_79338(*(_DWORD *)&v21[12 * m]);
          logfmt_raw(v18, 0x1000u, 0, "chip %02x core %02x membist lost cnt: %08x", v5, v6, v7);
          V_UNLOCK();
          zlog(
            g_zc,
            "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
            83,
            "membist0",
            8,
            11555,
            100,
            v18);
          v8 = sub_79338(*(_DWORD *)&v21[12 * m]);
          v20[16 * v21[12 * m + 4] + i] += v8 & 0x7FFFFF;
        }
      }
      v22 = sub_78A20(a1, j, 163, v21);
      for ( n = 0; n < v22; ++n )
      {
        if ( (*(_DWORD *)&v21[12 * n] & 0xFFFF00) != 0 && (*(_DWORD *)&v21[12 * n] & 0xC0) != 0 )
        {
          V_LOCK();
          v9 = v21[12 * n + 4];
          v10 = v21[12 * n + 8];
          v11 = sub_79338(*(_DWORD *)&v21[12 * n]);
          logfmt_raw(v18, 0x1000u, 0, "chip %02x core %02x ethbist err cnt: %08x", v9, v10, v11);
          V_UNLOCK();
          zlog(
            g_zc,
            "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
            83,
            "membist0",
            8,
            11563,
            100,
            v18);
          v12 = sub_79338(*(_DWORD *)&v21[12 * n]);
          v20[16 * v21[12 * n + 4] + i] += v12 & 0x7FFF;
        }
      }
    }
  }
  free(v21);
  memset(v19, 0, sizeof(v19));
  for ( ii = 0; ii <= 4; ++ii )
  {
    v24 = 0;
    for ( jj = 0; jj <= 7u; ++jj )
      v24 += (unsigned int)v20[16 * jj + ii];
    if ( v24 <= 0x800 )
      v13 = "ok";
    else
      v13 = "failed";
    sprintf(v19, "<mbist0 %08x> test %s(%llu)", savedregs[ii - 16], v13, v24);
    v14 = strlen(v19);
    sub_79118(v19, v14);
  }
  v15 = dev_ctrl();
  ((void (__fastcall *)(_DWORD))v15[18])(*(_DWORD *)(a1 + 136));
  return 0;
}
