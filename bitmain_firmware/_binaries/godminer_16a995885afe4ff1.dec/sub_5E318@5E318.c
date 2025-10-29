int __fastcall sub_5E318(int a1)
{
  int (__fastcall *v2)(int, _DWORD *, int, _DWORD); // r4
  _DWORD v4[2]; // [sp+10h] [bp-1004h] BYREF
  int v5; // [sp+18h] [bp-FFCh]
  int v6; // [sp+1Ch] [bp-FF8h]

  V_LOCK();
  logfmt_raw((char *)v4, 0x1000u, 0, "%s core_num %d reg %02x %d", "ChipSetting_open_cores_ETH", 16, 13, 20000);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/chip_setting.c",
    158,
    "ChipSetting_open_cores_ETH",
    26,
    315,
    40,
    v4);
  v5 = 851968;
  v4[0] = 127;
  v4[1] = 0;
  v6 = 4351;
  v2 = *(int (__fastcall **)(int, _DWORD *, int, _DWORD))(a1 + 168);
  LOBYTE(v5) = 1;
  return v2(a1, v4, 20000, 0);
}
