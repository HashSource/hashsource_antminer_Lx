int __fastcall clear_rxeqcal_ext(int a1, int a2, int a3)
{
  char v4; // r6
  int v5; // r10
  int v6; // r11
  int v7; // r6
  int v8; // r4
  _BOOL4 v9; // r3
  _WORD *v11; // [sp+28h] [bp-103Ch]
  int v14; // [sp+3Ch] [bp-1028h]
  _DWORD v15[7]; // [sp+40h] [bp-1024h] BYREF
  int v16; // [sp+5Ch] [bp-1008h] BYREF
  _DWORD v17[3]; // [sp+60h] [bp-1004h] BYREF
  __int16 v18; // [sp+6Ch] [bp-FF8h] BYREF

  v4 = a2;
  V_LOCK();
  v14 = 0;
  V_INT((int)v15, "chain", *(int *)(a1 + 140));
  logfmt_raw(
    (char *)v17,
    0x1000u,
    0,
    v16,
    v15[0],
    v15[1],
    v15[2],
    v15[3],
    v15[4],
    v15[5],
    v15[6],
    v16,
    "%s...",
    "clear_rxeqcal_ext");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "clear_rxeqcal_ext",
    17,
    3519,
    60,
    v17);
  v17[0] = 100991489;
  v17[1] = 235735561;
  v17[2] = 134677248;
  v18 = 3851;
  v5 = a1;
  v6 = (unsigned __int8)(v4 - 1) + 1;
  do
  {
    v11 = (_WORD *)((char *)&v16 + 3);
    do
    {
      v7 = *((unsigned __int8 *)v11 + 1);
      v11 = (_WORD *)((char *)v11 + 1);
      if ( a2 )
      {
        v8 = 0;
        do
        {
          v9 = (unsigned __int8)v8 <= 3u && v7 == 3;
          if ( !v9 && *(_BYTE *)(a3 + 8 * (v7 + 2 * v14) + v8) )
          {
            serdes_apb_write_1_chip(v5, v14, v7, (unsigned __int16)((_WORD)v8 << 12) | 1, -4194305);
            serdes_apb_write_1_chip(v5, v14, v7, (unsigned __int16)((_WORD)v8 << 12) | 0x2F, 0x400000);
          }
          ++v8;
        }
        while ( v8 != v6 );
      }
    }
    while ( v11 != (__int16 *)((char *)&v18 + 1) );
    ++v14;
  }
  while ( v14 != 8 );
  sub_5BD68(v5, 0xFFu, 144, 0);
  sub_5BD68(v5, 0xFFu, 145, -2147422207);
  return 0;
}
