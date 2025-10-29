int __fastcall setup_all_chip_dcr(int a1)
{
  char *v2; // r5
  char v3; // r4
  char v4; // r0
  int v6; // [sp+14h] [bp+4h]
  _BYTE v7[12]; // [sp+1Ch] [bp+Ch] BYREF
  char *v8; // [sp+101Ch] [bp+100Ch]
  int v9; // [sp+1020h] [bp+1010h]
  unsigned __int16 i; // [sp+1026h] [bp+1016h]

  v6 = a1;
  v9 = *(_DWORD *)(a1 + 196);
  V_LOCK();
  logfmt_raw(v7, 0x1000u, 0, "%s", "setup_all_chip_dcr");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_dcr/backend_dcr.c",
    83,
    "setup_all_chip_dcr",
    18,
    248,
    60,
    v7);
  *(_DWORD *)(v6 + 240) = makeup_chip_addr_dcr(*(_BYTE **)(v6 + 296), v9);
  (*(void (__fastcall **)(int, _DWORD, int))(v6 + 148))(v6, *(_DWORD *)(v6 + 296), v9);
  V_LOCK();
  logfmt_raw(v7, 0x1000u, 0, "get addr after open cores and set frequency.");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_dcr/backend_dcr.c",
    83,
    "setup_all_chip_dcr",
    18,
    263,
    60,
    v7);
  if ( !sub_610B4(v6) )
    return 3;
  sub_5FD64(v6, 96, 48);
  sub_5FDAC(v6, 8, 0);
  chip_setting_ticket_value_dcr(v6, 255);
  chip_setting_misc_dcr(v6);
  v8 = (char *)calloc(1u, 0x118u);
  for ( i = 0; i <= 0xBFu; ++i )
  {
    sub_5FEC8(v6, i, 2, 23130);
    usleep(0x4E20u);
    v2 = v8 + 40;
    v3 = *(_DWORD *)(v6 + 136);
    v4 = rand();
    memset(v2, (unsigned __int8)(v4 + v3), 0xB4u);
    push_work_base(v6, (int)v8);
    usleep(0x3D090u);
  }
  free(v8);
  if ( *(_BYTE *)(v6 + 268) != 1 )
    *(_DWORD *)(v6 + 272) = (int)*(float *)(v6 + 760);
  return 0;
}
