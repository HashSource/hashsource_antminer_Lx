int __fastcall sub_57A40(int a1)
{
  _DWORD v3[1025]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw((char *)v3, 0x1000u, 0, "software_reset %s %02x", "ChipSetting_software_reset_DASH", 68);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/chip_setting.c",
    143,
    "ChipSetting_software_reset_DASH",
    31,
    108,
    20,
    v3);
  v3[2] = 4456449;
  v3[3] = 0;
  v3[1] = 0;
  v3[0] = 1;
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 156))(a1, v3);
}
