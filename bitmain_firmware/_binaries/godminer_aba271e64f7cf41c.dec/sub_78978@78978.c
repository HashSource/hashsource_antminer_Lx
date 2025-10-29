int __fastcall sub_78978(int a1)
{
  char v3[24]; // [sp+1Ch] [bp-1018h] BYREF
  _DWORD s[4]; // [sp+101Ch] [bp-18h] BYREF

  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "bridge reset %s %02x", "ChipSetting_bridge_reset_LTC_1491", 68);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/./backend/chip_setting.c",
    162,
    "ChipSetting_bridge_reset_LTC_1491",
    33,
    110,
    20,
    v3);
  memset(s, 0, sizeof(s));
  s[2] = 4456449;
  s[0] = 2;
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 268))(a1, s);
}
