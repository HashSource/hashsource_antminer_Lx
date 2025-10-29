int __fastcall setup_all_chip_eth(int a1)
{
  float v1; // s15
  unsigned int v3; // r4
  int v4; // r8
  int v5; // r0
  unsigned int v6; // r3
  int result; // r0
  int (**v8)(); // r0
  int v9; // r0
  int (**v10)(); // r0
  int v11; // r0
  int (**v12)(); // r0
  int v13; // r4
  int v14; // r3
  void (__fastcall *v15)(int, int, int); // r3
  int v16; // r1
  bool v17; // zf
  _DWORD v18[4]; // [sp+28h] [bp-1034h] BYREF
  _DWORD v19[7]; // [sp+38h] [bp-1024h] BYREF
  int v20; // [sp+54h] [bp-1008h]
  char v21[4100]; // [sp+58h] [bp-1004h] BYREF

  V_LOCK();
  V_INT((int)v19, "chain", *(int *)(a1 + 140));
  logfmt_raw(v21, 0x1000u, 0, v20, v19[0], v19[1], v19[2], v19[3], v19[4], v19[5], v19[6], v20, "setup_all_chip_eth\n");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "setup_all_chip_eth",
    18,
    12294,
    60,
    v21);
  v3 = *(_DWORD *)(a1 + 196);
  *(_DWORD *)(a1 + 236) = 0;
  if ( v3 )
  {
    v4 = 3;
    while ( 1 )
    {
      v5 = sub_5C6FC(a1, v3);
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
  v13 = 0;
  v14 = *(_DWORD *)(a1 + 296) - 1;
  do
    *(_BYTE *)++v14 = v13++;
  while ( v13 != 8 );
  v15 = *(void (__fastcall **)(int, int, int))(a1 + 148);
  v16 = *(_DWORD *)(a1 + 296);
  *(_DWORD *)(a1 + 240) = 1;
  v15(a1, v16, 8);
  sub_5C6FC(a1, 8);
  setup_clk(a1);
  set_debug_ctrl(a1, 19);
  v18[2] = 4718593;
  v18[0] = 1;
  v18[1] = 0;
  v18[3] = 0;
  V_LOCK();
  logfmt_raw(v21, 0x1000u, 0, "set analog value %08x", 1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/chip_setting.c",
    143,
    "ChipSetting_analog_mux_ETH",
    26,
    480,
    60,
    v21);
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 156))(a1, v18);
  result = *(unsigned __int8 *)(a1 + 268);
  v17 = result == 0;
  if ( *(_BYTE *)(a1 + 268) )
    result = 0;
  else
    v1 = *(float *)(a1 + 760);
  if ( v17 )
    *(_DWORD *)(a1 + 272) = (int)v1;
  return result;
}
