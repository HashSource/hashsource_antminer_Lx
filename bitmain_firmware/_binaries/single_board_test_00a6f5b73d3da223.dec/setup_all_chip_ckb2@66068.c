int __fastcall setup_all_chip_ckb2(int a1)
{
  char *v2; // r5
  char v3; // r4
  char v4; // r0
  int v6; // [sp+14h] [bp+4h]
  _BYTE v7[8]; // [sp+18h] [bp+8h] BYREF
  char *v8; // [sp+1018h] [bp+1008h]
  int v9; // [sp+101Ch] [bp+100Ch]

  v6 = a1;
  v9 = *(_DWORD *)(a1 + 196);
  V_LOCK();
  logfmt_raw(v7, 0x1000u, 0, "%s", "setup_all_chip_ckb2");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_ckb2/backend_ckb2.c",
    85,
    "setup_all_chip_ckb2",
    19,
    238,
    60,
    v7);
  if ( !sub_65FC0(v6) )
    return 3;
  *(_DWORD *)(v6 + 240) = makeup_chip_addr_ckb2(*(_DWORD *)(v6 + 296), v9);
  (*(void (__fastcall **)(int, _DWORD, int))(v6 + 148))(v6, *(_DWORD *)(v6 + 296), v9);
  sub_63D14(v6, 0);
  chip_setting_ticket_value_ckb2(v6, 255);
  chip_setting_misc_ckb2(v6);
  v8 = (char *)calloc(1u, 0x80u);
  v2 = v8 + 40;
  v3 = *(_DWORD *)(v6 + 136);
  v4 = rand();
  memset(v2, (unsigned __int8)(v4 + v3), 0x30u);
  push_work_base(v6, (int)v8);
  free(v8);
  V_LOCK();
  logfmt_raw(v7, 0x1000u, 0, "get addr after open cores and set frequency.");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_ckb2/backend_ckb2.c",
    85,
    "setup_all_chip_ckb2",
    19,
    266,
    60,
    v7);
  if ( !sub_65FC0(v6) )
    return 3;
  if ( *(_BYTE *)(v6 + 268) != 1 )
    *(_DWORD *)(v6 + 272) = (int)*(float *)(v6 + 760);
  return 0;
}
