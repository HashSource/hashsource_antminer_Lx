int __fastcall sub_78BA0(int a1, char a2)
{
  char v5[24]; // [sp+1Ch] [bp-1018h] BYREF
  _DWORD s[4]; // [sp+101Ch] [bp-18h] BYREF

  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "software_reset %s %02x", "ChipSetting_software_reset_one_asic_LTC_1491", 68);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/./backend/chip_setting.c",
    162,
    "ChipSetting_software_reset_one_asic_LTC_1491",
    44,
    136,
    20,
    v5);
  memset(s, 0, sizeof(s));
  LOBYTE(s[2]) = 0;
  BYTE1(s[2]) = *(_DWORD *)(a1 + 428) * a2;
  HIWORD(s[2]) = 68;
  s[0] = 3;
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 268))(a1, s);
}
