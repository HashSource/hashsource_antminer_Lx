int __fastcall chip_setting_share_mode_ltc(int a1)
{
  int v2; // r0
  void (__fastcall *v3)(int, _DWORD *); // r2
  _DWORD v5[2]; // [sp+10h] [bp-1004h] BYREF
  char v6; // [sp+18h] [bp-FFCh]
  char v7; // [sp+19h] [bp-FFBh]
  __int16 v8; // [sp+1Ah] [bp-FFAh]
  int v9; // [sp+1Ch] [bp-FF8h]

  V_LOCK();
  logfmt_raw(
    (char *)v5,
    0x1000u,
    0,
    "%s, power_mode: %d",
    "chip_setting_share_mode_ltc",
    *(unsigned __int8 *)(a1 + 780));
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_ltc/chip_setting_ltc.c",
    159,
    "chip_setting_share_mode_ltc",
    27,
    348,
    40,
    v5);
  v2 = *(unsigned __int8 *)(a1 + 780);
  v8 = 0;
  v9 = 0;
  v5[1] = 0;
  v6 = 1;
  v5[0] = (v2 << 13) | 0x4FF;
  v7 = 1;
  v3 = *(void (__fastcall **)(int, _DWORD *))(a1 + 160);
  BYTE2(v9) = 1;
  LOBYTE(v9) = -1;
  v3(a1, v5);
  usleep(0x3E8u);
  return 0;
}
