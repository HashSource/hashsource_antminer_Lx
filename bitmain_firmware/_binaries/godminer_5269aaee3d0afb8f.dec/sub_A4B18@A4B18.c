int __fastcall sub_A4B18(int a1)
{
  _DWORD v3[1024]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK();
  logfmt_raw((char *)v3, 0x1000u, 0, "%s core_num %d reg %02x %d", "ChipSetting_open_cores_GRIN32", 1, 8, 20000);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/chip_setting.c",
    143,
    "ChipSetting_open_cores_GRIN32",
    29,
    315,
    40,
    v3);
  v3[2] = 524289;
  v3[3] = 272;
  v3[0] = 1;
  v3[1] = 0;
  return (*(int (__fastcall **)(int, _DWORD *, int, _DWORD))(a1 + 168))(a1, v3, 20000, 0);
}
