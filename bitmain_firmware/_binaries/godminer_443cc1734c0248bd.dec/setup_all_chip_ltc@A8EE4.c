int __fastcall setup_all_chip_ltc(int a1)
{
  int v2; // r8
  unsigned int v3; // r5
  int v4; // r9
  int v5; // r0
  unsigned int v6; // r3
  int (**v8)(); // r0
  int v9; // r0
  int (**v10)(); // r0
  int v11; // r0
  int (**v12)(); // r0
  int v13; // r5
  int v14; // r0
  int v15; // r1
  char v16; // r3
  int v17; // r1
  void (__fastcall *v18)(int, int, int); // r3
  int v19; // r5
  unsigned int v20; // r6
  int v21; // r5
  unsigned int v22; // r3
  int v23; // [sp+0h] [bp-1020h]
  _DWORD v24[4]; // [sp+10h] [bp-1010h] BYREF
  char v25[4096]; // [sp+20h] [bp-1000h] BYREF

  v2 = *(_DWORD *)(a1 + 196);
  V_LOCK();
  logfmt_raw(v25, 0x1000u, 0, "%s", "setup_all_chip_ltc");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_ltc/backend_ltc.c",
    154,
    "setup_all_chip_ltc",
    18,
    335,
    60,
    v25);
  v3 = *(_DWORD *)(a1 + 196);
  *(_DWORD *)(a1 + 236) = 0;
  if ( v3 )
  {
    v4 = 3;
    while ( 1 )
    {
      v5 = sub_A80F8(a1, v3);
      if ( *(_DWORD *)(a1 + 236) < v3 )
      {
        v8 = dev_ctrl(v5);
        ((void (__fastcall *)(_DWORD))v8[7])(*(_DWORD *)(a1 + 136));
        v9 = usleep((__useconds_t)&loc_493E0);
        v10 = dev_ctrl(v9);
        v11 = ((int (__fastcall *)(_DWORD, _DWORD, _DWORD))v10[6])(
                *(_DWORD *)(a1 + 136),
                *(_DWORD *)(a1 + 764),
                *(_DWORD *)(a1 + 776));
        v12 = dev_ctrl(v11);
        ((void (__fastcall *)(_DWORD))v12[9])(*(_DWORD *)(a1 + 136));
      }
      usleep((__useconds_t)&loc_493E0);
      v6 = *(_DWORD *)(a1 + 236);
      if ( v6 >= v3 )
        break;
      if ( !--v4 )
        return 3;
    }
    if ( v6 != v3 )
      return 3;
  }
  v13 = *(_DWORD *)(a1 + 296);
  v14 = sub_12BFC0(256, (unsigned __int8)v2);
  if ( (_BYTE)v2 )
  {
    v15 = v13 - 1;
    v16 = 0;
    do
    {
      *(_BYTE *)++v15 = v16;
      v16 += v14;
    }
    while ( v15 != v13 - 1 + (unsigned __int8)v2 );
    v13 = *(_DWORD *)(a1 + 296);
  }
  v17 = v13;
  v18 = *(void (__fastcall **)(int, int, int))(a1 + 148);
  v19 = 0;
  *(_DWORD *)(a1 + 240) = v14;
  v18(a1, v17, v2);
  v24[2] = 2883585;
  v24[1] = 0;
  v24[3] = 0;
  v24[0] = 0;
  V_LOCK();
  logfmt_raw(v25, 0x1000u, 0, "set analog value %08x", 0);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/chip_setting.c",
    143,
    "ChipSetting_analog_mux_LTC",
    26,
    480,
    60,
    v25);
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 156))(a1, v24);
  chip_setting_ticket_mask_ltc((_DWORD *)a1, 0xFFFFFFFF);
  if ( *(int *)(a1 + 200) > 0 )
  {
    do
    {
      v23 = v19++;
      chip_setting_working_mode_ltc(a1, 1, 0, 0, v23, 0xFFu);
    }
    while ( *(_DWORD *)(a1 + 200) > v19 );
  }
  *(_DWORD *)(a1 + 272) = 900;
  V_LOCK();
  logfmt_raw(v25, 0x1000u, 0, "get addr after open cores and set frequency.");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_ltc/backend_ltc.c",
    154,
    "setup_all_chip_ltc",
    18,
    403,
    60,
    v25);
  v20 = *(_DWORD *)(a1 + 196);
  *(_DWORD *)(a1 + 236) = 0;
  if ( !v20 )
    return 0;
  v21 = 3;
  while ( 1 )
  {
    sub_A80F8(a1, v20);
    usleep((__useconds_t)&loc_493E0);
    v22 = *(_DWORD *)(a1 + 236);
    if ( v20 <= v22 )
      break;
    if ( !--v21 )
      return 3;
  }
  if ( v20 != v22 )
    return 3;
  else
    return 0;
}
