int __fastcall chip_setting_ticket_value_dcr(int a1, int a2)
{
  _BYTE v5[28]; // [sp+1Ch] [bp+Ch] BYREF
  _DWORD v6[4]; // [sp+101Ch] [bp+100Ch] BYREF
  int v7; // [sp+102Ch] [bp+101Ch]
  int v8; // [sp+1030h] [bp+1020h]
  int v9; // [sp+1034h] [bp+1024h]

  v9 = 0;
  v8 = a2;
  memset(v6, 0, sizeof(v6));
  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "ticket_mask %s reg %02x tm %02x", "chip_setting_ticket_value_dcr", 3, a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_dcr/chip_setting_dcr.c",
    88,
    "chip_setting_ticket_value_dcr",
    29,
    103,
    60,
    v5);
  v6[2] = 196609;
  v6[0] = (unsigned __int8)a2;
  BYTE2(v6[3]) = 1;
  LOBYTE(v6[3]) = -1;
  BYTE1(v6[3]) = *(_DWORD *)(a1 + 200);
  v7 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 160))(a1, v6);
  usleep(0x3E8u);
  *(_DWORD *)(a1 + 244) = (unsigned __int8)a2;
  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "set tm %d", a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_dcr/chip_setting_dcr.c",
    88,
    "chip_setting_ticket_value_dcr",
    29,
    117,
    60,
    v5);
  return v7;
}
