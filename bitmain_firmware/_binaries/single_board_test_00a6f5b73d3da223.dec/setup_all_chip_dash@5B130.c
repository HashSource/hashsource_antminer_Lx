int __fastcall setup_all_chip_dash(int a1)
{
  char *v1; // r5
  char v2; // r4
  char v3; // r0
  int v5; // [sp+4h] [bp-Ch]
  _BYTE v7[28]; // [sp+1Ch] [bp+Ch] BYREF
  unsigned __int8 v8; // [sp+101Fh] [bp+100Fh] BYREF
  int v9; // [sp+1020h] [bp+1010h]
  int v10; // [sp+1024h] [bp+1014h]
  char v11; // [sp+1028h] [bp+1018h]
  unsigned __int8 v12; // [sp+102Bh] [bp+101Bh] BYREF
  char *v13; // [sp+102Ch] [bp+101Ch]
  int v14; // [sp+1030h] [bp+1020h]
  char v15; // [sp+1037h] [bp+1027h]

  V_LOCK();
  logfmt_raw(v7, 0x1000u, 0, "setup_all_chip_dash\n");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_dash/backend_dash.c",
    85,
    "setup_all_chip_dash",
    19,
    319,
    60,
    v7);
  v12 = 0;
  v15 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v14 = 0;
  v8 = 0;
  sub_5AF50(a1, 25);
  softreset_all_chip_dash(a1);
  usleep(0x4E20u);
  eeprom_read(*(_DWORD *)(a1 + 140), 195, (int)&v12, 1u);
  V_LOCK();
  logfmt_raw(v7, 0x1000u, 0, "read marker %x", v12);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_dash/backend_dash.c",
    85,
    "setup_all_chip_dash",
    19,
    354,
    60,
    v7);
  if ( v12 == 165 )
  {
    *(_BYTE *)(a1 + 310) = 1;
    eeprom_read(*(_DWORD *)(a1 + 140), 196, (int)&v8, 1u);
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, "read eeprom high hashrate: %02x", v8);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_dash/backend_dash.c",
      85,
      "setup_all_chip_dash",
      19,
      358,
      20,
      v7);
    v14 = v8;
    eeprom_read(*(_DWORD *)(a1 + 140), 197, (int)&v8, 1u);
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, "read eeprom low hashrate: %02x", v8);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_dash/backend_dash.c",
      85,
      "setup_all_chip_dash",
      19,
      361,
      20,
      v7);
    v14 = (v14 << 8) | v8;
    *(double *)(a1 + 312) = (double)v14 * 1000.0 * 1000.0 * 1000.0;
    V_LOCK();
    logfmt_raw(
      v7,
      0x1000u,
      0,
      "chain%d  avg hashrate is %f",
      *(_DWORD *)(a1 + 140),
      v5,
      *(_DWORD *)(a1 + 312),
      *(_DWORD *)(a1 + 316));
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_dash/backend_dash.c",
      85,
      "setup_all_chip_dash",
      19,
      364,
      20,
      v7);
  }
  set_ticket_mask_dash(a1, 0xFFu);
  v13 = (char *)calloc(1u, 0xB0u);
  v1 = v13 + 40;
  v2 = *(_DWORD *)(a1 + 136);
  v3 = rand();
  memset(v1, (unsigned __int8)(v3 + v2), 0x50u);
  push_work_base(a1, (int)v13);
  free(v13);
  V_LOCK();
  logfmt_raw(v7, 0x1000u, 0, "get addr after open cores.");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_dash/backend_dash.c",
    85,
    "setup_all_chip_dash",
    19,
    375,
    60,
    v7);
  sub_56628(a1, 70);
  if ( *(_BYTE *)(a1 + 268) != 1 )
    *(_DWORD *)(a1 + 272) = (int)*(float *)(a1 + 760);
  return 0;
}
