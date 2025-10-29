int __fastcall chip_setting_core_command_ltc(int a1, int a2)
{
  int v4; // [sp+10h] [bp-1024h]
  char v6[24]; // [sp+1Ch] [bp-1018h] BYREF
  _DWORD s[4]; // [sp+101Ch] [bp-18h] BYREF

  v4 = a2;
  if ( a2 >= *(_DWORD *)(a1 + 340) )
    v4 = *(_DWORD *)(a1 + 340);
  if ( v4 <= 0 )
    return 1;
  V_LOCK();
  logfmt_raw(v6, 0x1000u, 0, "core_command %s %02x", "chip_setting_core_command_ltc", 148);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/backend_ltc_1491/chip_setting_ltc_1491.c",
    186,
    "chip_setting_core_command_ltc",
    29,
    200,
    20,
    v6);
  memset(s, 0, sizeof(s));
  s[2] = 9699329;
  s[0] = (unsigned __int8)v4 | 0x80000000;
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 268))(a1, s);
}
