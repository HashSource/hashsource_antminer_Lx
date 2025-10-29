int __fastcall chip_setting_working_mode_ltc(int a1, char a2, int a3, char a4, int a5, unsigned __int8 a6)
{
  char v6; // r3
  char v13[24]; // [sp+24h] [bp-1018h] BYREF
  _DWORD s[4]; // [sp+1024h] [bp-18h] BYREF
  int v15; // [sp+1034h] [bp-8h]

  V_LOCK();
  logfmt_raw(v13, 0x1000u, 0, "%s", "chip_setting_working_mode_ltc");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/backend_ltc_1491/chip_setting_ltc_1491.c",
    186,
    "chip_setting_working_mode_ltc",
    29,
    532,
    20,
    v13);
  memset(s, 0, sizeof(s));
  LOBYTE(s[2]) = a2;
  if ( a2 )
    v6 = 0;
  else
    v6 = *(_BYTE *)(*(_DWORD *)(a1 + 492) + a3);
  BYTE1(s[2]) = v6;
  BYTE1(s[3]) = a4;
  s[0] = a6 | 0x400;
  HIWORD(s[2]) = 0;
  LOBYTE(s[3]) = -1;
  v15 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 272))(a1, s);
  if ( v15 )
  {
    V_LOCK();
    logfmt_raw(
      v13,
      0x1000u,
      0,
      "%s failed, chip_all %d chip_addr %02x reg:%02x, all core",
      "chip_setting_working_mode_ltc",
      LOBYTE(s[2]),
      BYTE1(s[2]),
      HIWORD(s[2]));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/backend_ltc_1491/chip_setting_ltc_1491.c",
      186,
      "chip_setting_working_mode_ltc",
      29,
      546,
      100,
      v13);
    return v15;
  }
  else
  {
    usleep(0x3E8u);
    return 0;
  }
}
