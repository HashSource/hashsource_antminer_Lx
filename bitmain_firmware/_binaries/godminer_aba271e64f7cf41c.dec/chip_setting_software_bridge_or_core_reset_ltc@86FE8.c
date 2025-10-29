int __fastcall chip_setting_software_bridge_or_core_reset_ltc(int a1, int a2, int a3)
{
  char v7[24]; // [sp+24h] [bp-1018h] BYREF
  _DWORD s[4]; // [sp+1024h] [bp-18h] BYREF

  V_LOCK();
  logfmt_raw(v7, 0x1000u, 0, "software_reset %s %02x", "chip_setting_software_bridge_or_core_reset_ltc", 68);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/backend_ltc_1491/chip_setting_ltc_1491.c",
    186,
    "chip_setting_software_bridge_or_core_reset_ltc",
    46,
    158,
    20,
    v7);
  memset(s, 0, sizeof(s));
  s[2] = 4456449;
  s[0] = (2 * a2) | a3;
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 268))(a1, s);
}
