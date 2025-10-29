int __fastcall chip_setting_misc_kda(int a1)
{
  _DWORD v3[4]; // [sp+10h] [bp-1010h] BYREF
  char v4[4096]; // [sp+20h] [bp-1000h] BYREF

  v3[0] = 5381904;
  v3[2] = 1835009;
  v3[3] = 0;
  v3[1] = 0;
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, "set_misc value %08x", 5381904);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/backend_kda/chip_setting_kda.c",
    174,
    "chip_setting_misc_kda",
    21,
    94,
    60,
    v4);
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 156))(a1, v3);
}
