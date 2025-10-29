int __fastcall sweep_chip_setting_freq_ltc(int a1, char a2, int a3)
{
  float v3; // s0
  char v4; // r3
  char v9[32]; // [sp+24h] [bp-1020h] BYREF
  _DWORD s[4]; // [sp+1024h] [bp-20h] BYREF
  unsigned int v11; // [sp+1034h] [bp-10h] BYREF
  int v12; // [sp+1038h] [bp-Ch]
  float v13; // [sp+103Ch] [bp-8h]

  v11 = 0;
  memset(s, 0, sizeof(s));
  LOBYTE(s[2]) = a2;
  if ( a2 )
    v4 = 0;
  else
    v4 = *(_BYTE *)(*(_DWORD *)(a1 + 492) + a3);
  BYTE1(s[2]) = v4;
  HIWORD(s[2]) = 8;
  sub_8744C(&v11);
  v13 = v3;
  s[0] = v11;
  if ( a2 )
  {
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, "set freq: %.2f, expected freq: %.2f", v13, v3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/backend_ltc_1491/chip_setting_ltc_1491.c",
      186,
      "sweep_chip_setting_freq_ltc",
      27,
      320,
      20,
      v9);
  }
  v12 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 268))(a1, s);
  usleep(0x2710u);
  return v12;
}
