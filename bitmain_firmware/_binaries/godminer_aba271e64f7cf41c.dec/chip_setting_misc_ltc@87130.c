int __fastcall chip_setting_misc_ltc(int a1, int a2, int a3, int a4, int a5)
{
  char v10[28]; // [sp+20h] [bp-101Ch] BYREF
  _DWORD s[4]; // [sp+1020h] [bp-1Ch] BYREF
  unsigned int v12; // [sp+1030h] [bp-Ch]

  memset(s, 0, sizeof(s));
  s[2] = 1835009;
  v12 = (a2 << 22) | (a3 << 21) | (a4 << 20) | (4 * a5) | 0xC1021F10;
  s[0] = v12;
  V_LOCK();
  logfmt_raw(v10, 0x1000u, 0, "set_misc value %08x", s[0]);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/backend_ltc_1491/chip_setting_ltc_1491.c",
    186,
    "chip_setting_misc_ltc",
    21,
    184,
    20,
    v10);
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 268))(a1, s);
}
