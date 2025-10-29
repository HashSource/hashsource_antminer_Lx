int __fastcall chip_setting_reset_bist_ltc(int a1, char a2, int a3, char a4, int a5)
{
  char v5; // r3
  char v7; // r3
  char v13[44]; // [sp+20h] [bp-102Ch] BYREF
  _DWORD s[4]; // [sp+1020h] [bp-2Ch] BYREF
  int v15; // [sp+1030h] [bp-1Ch]
  int v16; // [sp+1034h] [bp-18h]
  int v17; // [sp+1038h] [bp-14h]
  int v18; // [sp+103Ch] [bp-10h]
  int i; // [sp+1040h] [bp-Ch]
  int j; // [sp+1044h] [bp-8h]

  V_LOCK();
  logfmt_raw(v13, 0x1000u, 0, "%s", "chip_setting_reset_bist_ltc");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/backend_ltc_1491/chip_setting_ltc_1491.c",
    186,
    "chip_setting_reset_bist_ltc",
    27,
    460,
    40,
    v13);
  if ( a4 )
  {
    v17 = 0;
    v18 = *(_DWORD *)(a1 + 340) - 1;
  }
  else
  {
    v18 = a5;
    v17 = a5;
  }
  memset(s, 0, sizeof(s));
  LOBYTE(s[2]) = a2;
  if ( a2 )
    v5 = 0;
  else
    v5 = *(_BYTE *)(*(_DWORD *)(a1 + 492) + a3);
  BYTE1(s[2]) = v5;
  BYTE1(s[3]) = *(_DWORD *)(a1 + 340);
  for ( i = v17; i <= v18; ++i )
  {
    s[0] = 1024;
    HIWORD(s[2]) = 0;
    LOBYTE(s[3]) = i;
    BYTE2(s[3]) = 0;
    v15 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 272))(a1, s);
    if ( v15 )
    {
      V_LOCK();
      logfmt_raw(v13, 0x1000u, 0, "%s failed, reg:%02x, core_id:%d", "chip_setting_reset_bist_ltc", HIWORD(s[2]), i);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/backend_ltc_1491/chip_setting_ltc_1491.c",
        186,
        "chip_setting_reset_bist_ltc",
        27,
        482,
        100,
        v13);
      return v15;
    }
    usleep(0x3E8u);
  }
  usleep(0x2710u);
  memset(s, 0, sizeof(s));
  LOBYTE(s[2]) = a2;
  if ( a2 )
    v7 = 0;
  else
    v7 = *(_BYTE *)(*(_DWORD *)(a1 + 492) + a3);
  BYTE1(s[2]) = v7;
  BYTE1(s[3]) = *(_DWORD *)(a1 + 340);
  for ( j = v17; j <= v18; ++j )
  {
    s[0] = 4199424;
    HIWORD(s[2]) = 0;
    LOBYTE(s[3]) = j;
    BYTE2(s[3]) = 0;
    v16 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 272))(a1, s);
    if ( v16 )
    {
      V_LOCK();
      logfmt_raw(v13, 0x1000u, 0, "%s failed, reg:%02x, core_id:%d", "chip_setting_reset_bist_ltc", HIWORD(s[2]), j);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godmine"
        "r-origin_godminer-branch1/backend/backend_ltc_1491/chip_setting_ltc_1491.c",
        186,
        "chip_setting_reset_bist_ltc",
        27,
        503,
        100,
        v13);
      return v16;
    }
    usleep(0x3E8u);
  }
  usleep(0x2710u);
  return 0;
}
