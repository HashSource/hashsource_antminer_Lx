int __fastcall enable_rx_equalizer_tuning_ext(int a1, int a2, int a3)
{
  char v4; // r6
  int v5; // r4
  int v6; // r9
  _BOOL4 v7; // r7
  int v8; // r6
  unsigned __int16 v9; // r5
  int v11; // [sp+2Ch] [bp-1048h]
  int v12; // [sp+30h] [bp-1044h]
  _WORD *v13; // [sp+38h] [bp-103Ch]
  int v16; // [sp+4Ch] [bp-1028h]
  _DWORD v17[7]; // [sp+50h] [bp-1024h] BYREF
  int v18; // [sp+6Ch] [bp-1008h] BYREF
  _DWORD v19[3]; // [sp+70h] [bp-1004h] BYREF
  __int16 v20; // [sp+7Ch] [bp-FF8h] BYREF

  v4 = a2;
  V_LOCK();
  v16 = 0;
  V_INT((int)v17, "chain", *(int *)(a1 + 148));
  logfmt_raw(
    (char *)v19,
    0x1000u,
    0,
    v18,
    v17[0],
    v17[1],
    v17[2],
    v17[3],
    v17[4],
    v17[5],
    v17[6],
    v18,
    "%s...",
    "enable_rx_equalizer_tuning_ext");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "enable_rx_equalizer_tuning_ext",
    30,
    3545,
    60,
    v19);
  v12 = (unsigned __int8)(v4 - 1) + 1;
  v19[0] = 100991489;
  v19[1] = 235735561;
  v19[2] = 134677248;
  v20 = 3851;
  do
  {
    v13 = (_WORD *)((char *)&v18 + 3);
    do
    {
      v5 = *((unsigned __int8 *)v13 + 1);
      v13 = (_WORD *)((char *)v13 + 1);
      if ( a2 )
      {
        v6 = 0;
        do
        {
          v7 = (unsigned __int8)v6 <= 3u && v5 == 3;
          if ( !v7 && *(_BYTE *)(a3 + 8 * (v5 + 2 * v16) + v6) )
          {
            v8 = (unsigned __int16)((_WORD)v6 << 12) | 1;
            serdes_apb_write_1_chip(a1, v16, v5, v8, -4194305);
            v11 = (unsigned __int16)((_WORD)v6 << 12) | 0x2F;
            serdes_apb_write_1_chip(a1, v16, v5, v11, 0);
            serdes_apb_write_1_chip(a1, v16, v5, v8, -4194305);
            serdes_apb_write_1_chip(a1, v16, v5, v11, 0x400000);
            serdes_apb_write_1_chip(a1, v16, v5, v8, -4194305);
            serdes_apb_write_1_chip(a1, v16, v5, v11, 0);
            serdes_apb_write_1_chip(a1, v16, v5, v8, -2049);
            serdes_apb_write_1_chip(a1, v16, v5, (unsigned __int16)((_WORD)v6 << 12) | 0x37, 2048);
            serdes_apb_write_1_chip(a1, v16, v5, v8, -1073741825);
            v9 = ((_WORD)v6 << 12) | 0x98;
            serdes_apb_write_1_chip(a1, v16, v5, (unsigned __int16)((_WORD)v6 << 12) | 0x7E, 0x40000000);
            serdes_apb_write_1_chip(a1, v16, v5, v8, -16777217);
            serdes_apb_write_1_chip(a1, v16, v5, v9, 0);
            serdes_apb_write_1_chip(a1, v16, v5, v8, -16777217);
            serdes_apb_write_1_chip(a1, v16, v5, v9, 0x1000000);
            check_d54_one_lane(a1, (unsigned __int8)v16, v5, (unsigned __int8)v6, 8u);
            serdes_apb_write_1_chip(a1, v16, v5, v8, -16777217);
            serdes_apb_write_1_chip(a1, v16, v5, v9, 0);
            serdes_apb_write_1_chip(a1, v16, v5, v8, 0);
            check_d54_one_lane(a1, (unsigned __int8)v16, v5, (unsigned __int8)v6, 0);
          }
          ++v6;
        }
        while ( v6 != v12 );
      }
    }
    while ( v13 != (__int16 *)((char *)&v20 + 1) );
    ++v16;
  }
  while ( v16 != 8 );
  return 0;
}
