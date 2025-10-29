int __fastcall chip_setting_ticket_mask_ltc(int a1, unsigned int a2)
{
  char v5[32]; // [sp+1Ch] [bp-1020h] BYREF
  _DWORD s[4]; // [sp+101Ch] [bp-20h] BYREF
  int v7; // [sp+102Ch] [bp-10h]
  unsigned int v8; // [sp+1030h] [bp-Ch]
  int v9; // [sp+1034h] [bp-8h]

  v9 = 0;
  v8 = a2;
  memset(s, 0, sizeof(s));
  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "ticket_mask %s reg %02x tm %08x", "chip_setting_ticket_mask_ltc", 2, a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/backend_ltc_1491/chip_setting_ltc_1491.c",
    186,
    "chip_setting_ticket_mask_ltc",
    28,
    337,
    20,
    v5);
  s[2] = 131073;
  s[0] = (unsigned __int16)a2;
  BYTE2(s[3]) = 1;
  LOBYTE(s[3]) = -1;
  BYTE1(s[3]) = *(_DWORD *)(a1 + 340);
  v7 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 272))(a1, s);
  usleep(0x3E8u);
  s[2] = 262145;
  s[0] = HIWORD(a2);
  BYTE2(s[3]) = 1;
  LOBYTE(s[3]) = -1;
  BYTE1(s[3]) = *(_DWORD *)(a1 + 340);
  v7 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 272))(a1, s);
  while ( (v8 & 1) != 0 )
  {
    ++v9;
    v8 >>= 1;
  }
  v9 += 16;
  *(_DWORD *)(a1 + 432) = v9;
  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "cal mask %d", v9);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/backend_ltc_1491/chip_setting_ltc_1491.c",
    186,
    "chip_setting_ticket_mask_ltc",
    28,
    366,
    20,
    v5);
  return v7;
}
