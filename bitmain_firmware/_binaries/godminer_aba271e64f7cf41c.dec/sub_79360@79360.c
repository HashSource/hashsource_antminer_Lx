int __fastcall sub_79360(int a1, int a2)
{
  char v5[68]; // [sp+30h] [bp-1044h] BYREF
  _DWORD s[4]; // [sp+1030h] [bp-44h] BYREF
  _DWORD v7[7]; // [sp+1040h] [bp-34h] BYREF
  int v8; // [sp+105Ch] [bp-18h]
  int v9; // [sp+1064h] [bp-10h]

  memset(s, 0, sizeof(s));
  s[2] = 6356993;
  s[0] = a2;
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
    "set bist err num threshold %08x",
    s[0]);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/./backend/chip_setting.c",
    162,
    "ChipSetting_bist_threshold_set_rvn_LTC_1491",
    43,
    246,
    40,
    v5);
  v9 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 268))(a1, s);
  usleep(0x2710u);
  return v9;
}
