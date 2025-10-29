int __fastcall sub_78E30(int a1, unsigned __int8 a2)
{
  char v5[12]; // [sp+38h] [bp-104Ch] BYREF
  _DWORD s[4]; // [sp+1038h] [bp-4Ch] BYREF
  _DWORD v7[7]; // [sp+1048h] [bp-3Ch] BYREF
  int v8; // [sp+1064h] [bp-20h]
  int v9; // [sp+106Ch] [bp-18h]
  int v10; // [sp+1070h] [bp-14h]
  int v11; // [sp+1074h] [bp-10h]

  v11 = 0;
  v10 = a2;
  memset(s, 0, sizeof(s));
  V_LOCK();
  sub_77CE8((int)v7, *(int *)(a1 + 252));
  logfmt_raw(
    v5,
    0x1000u,
    0,
    v8,
    v7[0],
    v7[1],
    v7[2],
    v7[3],
    v7[4],
    v7[5],
    v7[6],
    v8,
    "set core ticket mask reg %02x tm %02x",
    255,
    a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/./backend/chip_setting.c",
    162,
    "ChipSetting_core_ticket_mask_LTC_1491",
    37,
    182,
    40,
    v5);
  s[2] = 16711681;
  s[0] = a2;
  BYTE2(s[3]) = 1;
  LOBYTE(s[3]) = -1;
  BYTE1(s[3]) = *(_DWORD *)(a1 + 340);
  v9 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 272))(a1, s);
  usleep(0x3E8u);
  *(_DWORD *)(a1 + 432) = a2;
  return v9;
}
