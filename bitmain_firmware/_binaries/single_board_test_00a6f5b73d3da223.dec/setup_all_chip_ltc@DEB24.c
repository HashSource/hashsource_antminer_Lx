int __fastcall setup_all_chip_ltc(_DWORD *a1)
{
  _DWORD *v3; // [sp+14h] [bp+4h]
  _BYTE v4[4100]; // [sp+1Ch] [bp+Ch] BYREF
  void *v5; // [sp+1020h] [bp+1010h]
  int v6; // [sp+1024h] [bp+1014h]
  int i; // [sp+102Ch] [bp+101Ch]

  v3 = a1;
  v6 = a1[49];
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, "%s", "setup_all_chip_ltc");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_ltc/backend_ltc.c",
    83,
    "setup_all_chip_ltc",
    18,
    335,
    60,
    v4);
  if ( !sub_DE798(v3, 1) )
    return 3;
  v3[60] = sub_DE860(v3[74], v6);
  ((void (__fastcall *)(_DWORD *, _DWORD, int))v3[37])(v3, v3[74], v6);
  sub_DC2FC((int)v3, 0);
  chip_setting_ticket_mask_ltc((int)v3, 0xFFFFFFFF);
  for ( i = 0; v3[50] > i; ++i )
  {
    v5 = malloc(4 * v6);
    v4[4099] = 1;
    chip_setting_working_mode_ltc((int)v3, 1, 0, 0, i, 0xFFu);
    free(v5);
  }
  v3[68] = 900;
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, "get addr after open cores and set frequency.");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_ltc/backend_ltc.c",
    83,
    "setup_all_chip_ltc",
    18,
    403,
    60,
    v4);
  if ( !sub_DE798(v3, 0) )
    return 3;
  else
    return 0;
}
