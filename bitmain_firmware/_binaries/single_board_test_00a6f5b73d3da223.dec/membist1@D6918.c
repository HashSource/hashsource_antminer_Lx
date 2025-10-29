int __fastcall membist1(int a1)
{
  int v1; // r4
  int v2; // r5
  unsigned int v3; // r0
  unsigned int v4; // r0
  int v5; // r4
  int v6; // r5
  unsigned int v7; // r0
  unsigned int v8; // r0
  const char *v9; // r3
  size_t v10; // r0
  _UNKNOWN **v11; // r0
  _BYTE v14[8]; // [sp+18h] [bp+8h] BYREF
  _DWORD v15[25]; // [sp+1018h] [bp+1008h] BYREF
  unsigned __int8 *v16; // [sp+107Ch] [bp+106Ch]
  int v17; // [sp+1080h] [bp+1070h]
  unsigned __int8 m; // [sp+1087h] [bp+1077h]
  unsigned __int64 v19; // [sp+1088h] [bp+1078h]
  int k; // [sp+1094h] [bp+1084h]
  int j; // [sp+1098h] [bp+1088h]
  unsigned __int8 i; // [sp+109Fh] [bp+108Fh]
  _DWORD savedregs[4]; // [sp+10A0h] [bp+1090h] BYREF

  V_LOCK();
  logfmt_raw(v14, 0x1000u, 0, "%s...", "membist1");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "membist1",
    8,
    11590,
    60,
    v14);
  v17 = 0;
  memset(&v15[16], 0, 0x20u);
  v16 = (unsigned __int8 *)malloc(0x600u);
  for ( i = 0; i <= 7u; ++i )
  {
    v15[24] = 0;
    sub_789C4(a1, i, 12, 1);
    usleep(0x2710u);
    sub_789C4(a1, i, 160, -2147483647);
    usleep((__useconds_t)&stru_1869C.st_value);
    v17 = sub_78A20(a1, i, 161, v16);
    for ( j = 0; j < v17; ++j )
    {
      if ( (*(_DWORD *)&v16[12 * j] & 0x80) != 0 )
      {
        if ( (*(_DWORD *)&v16[12 * j] & 0xFFFFFF00) != 0 )
        {
          V_LOCK();
          v1 = v16[12 * j + 4];
          v2 = v16[12 * j + 8];
          v3 = sub_79338(*(_DWORD *)&v16[12 * j]);
          logfmt_raw(v14, 0x1000u, 0, "chip %02x core %02x membist err cnt: %08x", v1, v2, v3);
          V_UNLOCK();
          zlog(
            g_zc,
            "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
            83,
            "membist1",
            8,
            11608,
            100,
            v14);
          v4 = sub_79338(*(_DWORD *)&v16[12 * j]);
          savedregs[v16[12 * j + 4] - 18] += v4 & 0x7FFFFF;
        }
      }
      else
      {
        V_LOCK();
        logfmt_raw(v14, 0x1000u, 0, "chip %02x core %02x membist not done!", v16[12 * j + 4], v16[12 * j + 8]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
          83,
          "membist1",
          8,
          11612,
          100,
          v14);
      }
    }
    v17 = sub_78A20(a1, i, 162, v16);
    for ( k = 0; k < v17; ++k )
    {
      if ( (*(_DWORD *)&v16[12 * k] & 0xFFFFFF00) != 0 && (*(_DWORD *)&v16[12 * k] & 0x80) != 0 )
      {
        V_LOCK();
        v5 = v16[12 * k + 4];
        v6 = v16[12 * k + 8];
        v7 = sub_79338(*(_DWORD *)&v16[12 * k]);
        logfmt_raw(v14, 0x1000u, 0, "chip %02x core %02x membist lost cnt: %08x", v5, v6, v7);
        V_UNLOCK();
        zlog(
          g_zc,
          "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
          83,
          "membist1",
          8,
          11620,
          100,
          v14);
        v8 = sub_79338(*(_DWORD *)&v16[12 * k]);
        savedregs[v16[12 * k + 4] - 18] += v8 & 0x7FFFFF;
      }
    }
  }
  free(v16);
  memset(v15, 0, 0x40u);
  v19 = 0;
  for ( m = 0; m <= 7u; ++m )
    v19 += (unsigned int)savedregs[m - 18];
  if ( v19 <= 0x800 )
    v9 = "ok";
  else
    v9 = "failed";
  sprintf((char *)v15, "<mbist1> test %s(%llu)", v9, v19);
  v10 = strlen((const char *)v15);
  sub_79118((const char *)v15, v10);
  v11 = dev_ctrl();
  ((void (__fastcall *)(_DWORD))v11[18])(*(_DWORD *)(a1 + 136));
  unk_47B2D4 = v15[16];
  unk_47B2D8 = v15[17];
  unk_47B2DC = v15[18];
  unk_47B2E0 = v15[19];
  unk_47B2E4 = v15[20];
  unk_47B2E8 = v15[21];
  unk_47B2EC = v15[22];
  unk_47B2F0 = v15[23];
  return 0;
}
