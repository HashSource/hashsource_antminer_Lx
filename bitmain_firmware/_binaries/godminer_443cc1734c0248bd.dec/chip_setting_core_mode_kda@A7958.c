int __fastcall chip_setting_core_mode_kda(int a1, int a2)
{
  int v4; // r3
  int (__fastcall *v5)(int, _DWORD *); // r3
  int v6; // r9
  int v8; // [sp+Ch] [bp-1018h]
  _DWORD v9[3]; // [sp+10h] [bp-1014h] BYREF
  char v10; // [sp+1Ch] [bp-1008h]
  char v11; // [sp+1Dh] [bp-1007h]
  char v12; // [sp+1Eh] [bp-1006h]
  char v13[4100]; // [sp+20h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v13, 0x1000u, 0, "core_mode %s reg %02x tm %02x", "chip_setting_core_mode_kda", 1, a2, v8, 0, 0, 0, 0);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_kda/chip_setting_kda.c",
    159,
    "chip_setting_core_mode_kda",
    26,
    143,
    60,
    v13);
  v4 = *(_DWORD *)(a1 + 200);
  v10 = -1;
  v9[2] = 65537;
  v12 = 1;
  v11 = v4;
  v5 = *(int (__fastcall **)(int, _DWORD *))(a1 + 160);
  v9[0] = a2;
  v6 = v5(a1, v9);
  usleep(0x3E8u);
  V_LOCK();
  logfmt_raw(v13, 0x1000u, 0, "set core_mode %d", a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_kda/chip_setting_kda.c",
    159,
    "chip_setting_core_mode_kda",
    26,
    156,
    60,
    v13);
  return v6;
}
