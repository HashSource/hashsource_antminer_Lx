int __fastcall setup_all_chip_kda(int a1)
{
  float v1; // s15
  int v3; // r8
  int v4; // r4
  int v5; // r0
  int v6; // r1
  char v7; // r3
  void (__fastcall *v8)(int, int, int); // r3
  void *v9; // r0
  char v10; // r9
  int v11; // r8
  char v12; // r0
  int result; // r0
  bool v14; // zf
  _DWORD v15[4]; // [sp+10h] [bp-1010h] BYREF
  char v16[4096]; // [sp+20h] [bp-1000h] BYREF

  v3 = *(_DWORD *)(a1 + 196);
  V_LOCK();
  logfmt_raw(v16, 0x1000u, 0, "%s", "setup_all_chip_kda");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_kda/backend_kda.c",
    154,
    "setup_all_chip_kda",
    18,
    253,
    60,
    v16);
  if ( !sub_A6828(a1) )
    return 3;
  v4 = *(_DWORD *)(a1 + 296);
  v5 = sub_12BFC0(256, (unsigned __int8)v3);
  if ( (_BYTE)v3 )
  {
    v6 = v4 - 1;
    v7 = 0;
    do
    {
      *(_BYTE *)++v6 = v7;
      v7 += v5;
    }
    while ( v6 != v4 - 1 + (unsigned __int8)v3 );
    v4 = *(_DWORD *)(a1 + 296);
  }
  v8 = *(void (__fastcall **)(int, int, int))(a1 + 148);
  *(_DWORD *)(a1 + 240) = v5;
  v8(a1, v4, v3);
  v15[2] = 4194305;
  v15[1] = 0;
  v15[3] = 0;
  v15[0] = 0;
  V_LOCK();
  logfmt_raw(v16, 0x1000u, 0, "set analog value %08x", 0);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/chip_setting.c",
    143,
    "ChipSetting_analog_mux_KDA",
    26,
    480,
    60,
    v16);
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 156))(a1, v15);
  chip_setting_ticket_value_kda(a1, 255);
  chip_setting_misc_kda(a1);
  chip_setting_nonce_len_kda(a1);
  chip_setting_core_mode_kda(a1, 0);
  chip_setting_core_enable_code_kda(a1, 23130);
  v9 = calloc(1u, 0x190u);
  v10 = *(_BYTE *)(a1 + 136);
  v11 = (int)v9;
  v12 = rand();
  memset((void *)(v11 + 72), (unsigned __int8)(v10 + v12), 0x11Eu);
  push_work_base(a1, v11);
  free((void *)v11);
  V_LOCK();
  logfmt_raw(v16, 0x1000u, 0, "get addr after open cores and set frequency.");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_kda/backend_kda.c",
    154,
    "setup_all_chip_kda",
    18,
    294,
    60,
    v16);
  if ( !sub_A6828(a1) )
    return 3;
  result = *(unsigned __int8 *)(a1 + 268);
  v14 = result == 0;
  if ( *(_BYTE *)(a1 + 268) )
    result = 0;
  else
    v1 = *(float *)(a1 + 760);
  if ( v14 )
    *(_DWORD *)(a1 + 272) = (int)v1;
  return result;
}
