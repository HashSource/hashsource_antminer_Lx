int __fastcall chip_setting_io_drive_ltc(int a1)
{
  char v3[24]; // [sp+1Ch] [bp-1018h] BYREF
  _DWORD s[4]; // [sp+101Ch] [bp-18h] BYREF
  int v5; // [sp+102Ch] [bp-8h]

  memset(s, 0, sizeof(s));
  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "io_drive_strenth %s reg %02x value %08x", "chip_setting_io_drive_ltc", 48, 489335);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/backend_ltc_1491/chip_setting_ltc_1491.c",
    186,
    "chip_setting_io_drive_ltc",
    25,
    618,
    60,
    v3);
  s[2] = 3145729;
  s[0] = 489335;
  v5 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 268))(a1, s);
  usleep(0x3E8u);
  return v5;
}
