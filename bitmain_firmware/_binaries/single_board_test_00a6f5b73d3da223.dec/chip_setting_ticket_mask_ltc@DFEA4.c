int __fastcall chip_setting_ticket_mask_ltc(int a1, unsigned int a2)
{
  _BYTE v5[28]; // [sp+1Ch] [bp+Ch] BYREF
  _DWORD v6[4]; // [sp+101Ch] [bp+100Ch] BYREF
  int v7; // [sp+102Ch] [bp+101Ch]
  unsigned int v8; // [sp+1030h] [bp+1020h]
  int v9; // [sp+1034h] [bp+1024h]

  v9 = 0;
  v8 = a2;
  memset(v6, 0, sizeof(v6));
  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "ticket_mask %s reg %02x tm %08x", "chip_setting_ticket_mask_ltc", 2, a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_ltc/chip_setting_ltc.c",
    88,
    "chip_setting_ticket_mask_ltc",
    28,
    146,
    60,
    v5);
  v6[2] = 131073;
  v6[0] = (unsigned __int16)a2;
  BYTE2(v6[3]) = 1;
  LOBYTE(v6[3]) = 0;
  BYTE1(v6[3]) = *(_DWORD *)(a1 + 200);
  v7 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 160))(a1, v6);
  usleep(0x3E8u);
  v6[2] = 262145;
  v6[0] = HIWORD(a2);
  BYTE2(v6[3]) = 1;
  LOBYTE(v6[3]) = 0;
  BYTE1(v6[3]) = *(_DWORD *)(a1 + 200);
  v7 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 160))(a1, v6);
  while ( (v8 & 1) != 0 )
  {
    ++v9;
    v8 >>= 1;
  }
  v9 += 16;
  *(_DWORD *)(a1 + 244) = v9;
  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "cal mask %d", v9);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_ltc/chip_setting_ltc.c",
    88,
    "chip_setting_ticket_mask_ltc",
    28,
    175,
    60,
    v5);
  return v7;
}
