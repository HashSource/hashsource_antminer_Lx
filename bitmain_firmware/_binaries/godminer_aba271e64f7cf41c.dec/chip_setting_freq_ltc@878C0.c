int __fastcall chip_setting_freq_ltc(int a1, char a2, int a3, int a4)
{
  float v4; // s0
  char v5; // r3
  float v6; // s15
  int v8; // [sp+4h] [bp-10A0h]
  int v9; // [sp+24h] [bp-1080h]
  char v14[24]; // [sp+4Ch] [bp-1058h] BYREF
  int v15; // [sp+104Ch] [bp-58h] BYREF
  int v16; // [sp+1050h] [bp-54h] BYREF
  _DWORD s[4]; // [sp+1054h] [bp-50h] BYREF
  unsigned int v18; // [sp+1064h] [bp-40h] BYREF
  _QWORD v19[2]; // [sp+1068h] [bp-3Ch] BYREF
  int v20; // [sp+1078h] [bp-2Ch]
  int v21; // [sp+107Ch] [bp-28h]
  int v22; // [sp+1080h] [bp-24h]
  int v23; // [sp+1084h] [bp-20h]
  void *v24; // [sp+1088h] [bp-1Ch]
  int v25; // [sp+108Ch] [bp-18h]
  float v26; // [sp+1090h] [bp-14h]
  float v27; // [sp+1094h] [bp-10h]

  v18 = 0;
  v16 = 0;
  v27 = 0.0;
  memset(s, 0, sizeof(s));
  LOBYTE(s[2]) = a2;
  if ( a2 )
    v5 = 0;
  else
    v5 = *(_BYTE *)(*(_DWORD *)(a1 + 492) + a3);
  BYTE1(s[2]) = v5;
  if ( a4 )
  {
    if ( a4 == 1 )
      HIWORD(s[2]) = 12;
  }
  else
  {
    HIWORD(s[2]) = 8;
  }
  sub_8744C(&v18);
  v26 = v4;
  s[0] = v18;
  if ( a2 )
  {
    V_LOCK();
    logfmt_raw(v14, 0x1000u, 0, "set freq: %.2f, expected freq: %.2f", v26, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/backend_ltc_1491/chip_setting_ltc_1491.c",
      186,
      "chip_setting_freq_ltc",
      21,
      280,
      20,
      v14);
  }
  v25 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 268))(a1, s);
  usleep(0x2710u);
  LOBYTE(s[2]) = 0;
  BYTE1(s[2]) = *(_BYTE *)(*(_DWORD *)(a1 + 492) + 109);
  HIWORD(s[2]) = 72;
  v24 = malloc(0xCu);
  memset(v24, 0, 0xCu);
  (*(void (__fastcall **)(int, _DWORD *, int, void *, int *, int, int, _DWORD))(a1 + 288))(
    a1,
    s,
    1,
    v24,
    &v16,
    v8,
    200,
    0);
  if ( (*(_DWORD *)v24 & 0x10000) != 0 )
  {
    v15 = 0;
    sub_86BA0(&v15, *(_DWORD *)v24);
    v6 = (double)(25 * (unsigned int)(unsigned __int16)v15) / 256.0;
    v27 = v6;
    V_LOCK();
    sub_86850((int)v19, *(int *)(a1 + 252));
    logfmt_raw(v14, 0x1000u, 0, v23, v19[0], v19[1], v20, v21, v22, v23, "get_cnt freq:%f", v9, v27);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-"
      "origin_godminer-branch1/backend/backend_ltc_1491/chip_setting_ltc_1491.c",
      186,
      "chip_setting_freq_ltc",
      21,
      300,
      20,
      v14);
  }
  return v25;
}
