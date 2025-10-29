int __fastcall sub_6BB10(int a1, unsigned __int8 a2)
{
  int v4; // [sp+14h] [bp+4h]
  _BYTE v5[20]; // [sp+1Ch] [bp+Ch] BYREF
  _DWORD v6[4]; // [sp+101Ch] [bp+100Ch] BYREF
  int v7; // [sp+102Ch] [bp+101Ch]

  v4 = a1;
  memset(v6, 0, sizeof(v6));
  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "ticket_mask %s reg %02x tm %d", "ChipSetting_ticket_mask_GRIN29", 20, a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/chip_setting.c",
    72,
    "ChipSetting_ticket_mask_GRIN29",
    30,
    137,
    20,
    v5);
  v6[2] = 1310721;
  v6[0] = a2;
  v7 = (*(int (__fastcall **)(int, _DWORD *))(v4 + 156))(v4, v6);
  *(_DWORD *)(v4 + 244) = a2;
  return v7;
}
