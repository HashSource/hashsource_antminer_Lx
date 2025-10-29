int __fastcall chip_setting_software_reset_ltc(int a1)
{
  char v3[32]; // [sp+1Ch] [bp-1020h] BYREF
  _DWORD s[4]; // [sp+101Ch] [bp-20h] BYREF
  int v5; // [sp+102Ch] [bp-10h]
  int v6; // [sp+1030h] [bp-Ch]
  void *ptr; // [sp+1034h] [bp-8h]

  ptr = calloc(0x100u, 0xCu);
  v6 = 0;
  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "software_reset %s %02x", "chip_setting_software_reset_ltc", 68);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/backend_ltc_1491/chip_setting_ltc_1491.c",
    186,
    "chip_setting_software_reset_ltc",
    31,
    139,
    20,
    v3);
  memset(s, 0, sizeof(s));
  s[2] = 4456449;
  s[0] = 3;
  v5 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 268))(a1, s);
  usleep(0x2710u);
  free(ptr);
  return v5;
}
