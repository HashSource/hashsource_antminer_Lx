int __fastcall chip_setting_software_reset_ltc(int a1)
{
  _DWORD v3[1025]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw((char *)v3, 0x1000u, 0, "software_reset %s %02x", "chip_setting_software_reset_ltc", 52);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/backend_ltc/chip_setting_ltc.c",
    174,
    "chip_setting_software_reset_ltc",
    31,
    39,
    20,
    v3);
  v3[2] = 3407873;
  v3[0] = 0;
  v3[1] = 0;
  v3[3] = 0;
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 156))(a1, v3);
}
