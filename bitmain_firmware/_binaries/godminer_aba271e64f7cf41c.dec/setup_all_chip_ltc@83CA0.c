int __fastcall setup_all_chip_ltc(int a1)
{
  char v4[40]; // [sp+1Ch] [bp-1028h] BYREF
  _DWORD s[7]; // [sp+101Ch] [bp-28h] BYREF
  int v6; // [sp+1038h] [bp-Ch]
  int v7; // [sp+103Ch] [bp-8h]

  v6 = *(_DWORD *)(a1 + 336);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, "%s", "setup_all_chip_ltc");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/backend_ltc_1491/backend_ltc_1491.c",
    181,
    "setup_all_chip_ltc",
    18,
    811,
    60,
    v4);
  if ( !sub_818D8((_DWORD *)a1) )
    return 102;
  *(_DWORD *)(a1 + 428) = sub_83464(*(_DWORD *)(a1 + 492), v6);
  (*(void (__fastcall **)(int, _DWORD, int))(a1 + 260))(a1, *(_DWORD *)(a1 + 492), v6);
  v7 = 0;
  s[6] = 0;
  s[5] = 1;
  s[4] = 0;
  chip_setting_misc_ltc(a1, 0, 0, 1, 0);
  chip_setting_ticket_mask_ltc(a1, 0xFFFFFFFF);
  chip_setting_working_mode_ltc(a1, 1, 0, *(_DWORD *)(a1 + 340), 0, 0xFFu);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, "reset nonce count %s %02x", "setup_all_chip_ltc", 68);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/backend_ltc_1491/backend_ltc_1491.c",
    181,
    "setup_all_chip_ltc",
    18,
    828,
    40,
    v4);
  memset(s, 0, 0x10u);
  s[2] = 3932161;
  s[0] = 0;
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 268))(a1, s);
  *(_DWORD *)(a1 + 464) = 900;
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, "get addr after open cores");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L9_CVCtrl_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
    "igin_godminer-branch1/backend/backend_ltc_1491/backend_ltc_1491.c",
    181,
    "setup_all_chip_ltc",
    18,
    840,
    60,
    v4);
  if ( sub_818D8((_DWORD *)a1) )
    return 0;
  else
    return 102;
}
