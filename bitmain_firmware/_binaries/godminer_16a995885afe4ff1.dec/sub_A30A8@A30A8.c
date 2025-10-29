int __fastcall sub_A30A8(int a1)
{
  _DWORD v3[1024]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK();
  logfmt_raw((char *)v3, 0x1000u, 0, "%s core_num %d reg %02x %d", "ChipSetting_open_cores_GRIN29", 1, 132, 20000);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/chip_setting.c",
    158,
    "ChipSetting_open_cores_GRIN29",
    29,
    315,
    40,
    v3);
  v3[0] = 1;
  v3[2] = 8650753;
  v3[3] = 256;
  v3[1] = 0;
  return (*(int (__fastcall **)(int, _DWORD *, int, _DWORD))(a1 + 168))(a1, v3, 20000, 0);
}
