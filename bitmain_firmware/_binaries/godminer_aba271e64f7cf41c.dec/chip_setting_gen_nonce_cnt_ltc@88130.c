int __fastcall chip_setting_gen_nonce_cnt_ltc(int a1, int a2)
{
  char v5[24]; // [sp+1Ch] [bp-1018h] BYREF
  _DWORD s[4]; // [sp+101Ch] [bp-18h] BYREF

  memset(s, 0, sizeof(s));
  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "gen_nonce_cnt %s reg %02x value %08x", "chip_setting_gen_nonce_cnt_ltc", 3, a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/backend_ltc_1491/chip_setting_ltc_1491.c",
    186,
    "chip_setting_gen_nonce_cnt_ltc",
    30,
    388,
    60,
    v5);
  s[2] = 196609;
  s[0] = (unsigned __int16)a2;
  BYTE2(s[3]) = 1;
  LOBYTE(s[3]) = -1;
  BYTE1(s[3]) = *(_DWORD *)(a1 + 340);
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 272))(a1, s);
}
