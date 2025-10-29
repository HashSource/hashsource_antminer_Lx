int __fastcall enable_rx_equalizer_tuning(int a1, int a2, _BYTE *a3, int a4)
{
  int v8; // r10
  int v9; // r8
  int v10; // r6
  int v11; // r7
  int v12; // r12
  int v14; // [sp+2Ch] [bp-1028h]
  _DWORD v15[7]; // [sp+30h] [bp-1024h] BYREF
  int v16; // [sp+4Ch] [bp-1008h]
  char v17[4100]; // [sp+50h] [bp-1004h] BYREF

  V_LOCK();
  v8 = 61495;
  V_INT((int)v15, "chain", *(int *)(a1 + 140));
  v9 = 61487;
  logfmt_raw(
    v17,
    0x1000u,
    0,
    v16,
    v15[0],
    v15[1],
    v15[2],
    v15[3],
    v15[4],
    v15[5],
    v15[6],
    v16,
    "%s...",
    "enable_rx_equalizer_tuning");
  V_UNLOCK();
  v10 = 61441;
  v11 = 61592;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "enable_rx_equalizer_tuning",
    26,
    3453,
    60,
    v17);
  v12 = 61566;
  if ( a4 != 8 )
  {
    v10 = 1;
    v9 = 47;
    v12 = 126;
    v11 = 152;
    v8 = 55;
  }
  v14 = v12;
  sub_5D4B4(a1, (unsigned __int8)a3, v10, -4194305);
  sub_5D4B4(a1, (unsigned __int8)a3, v9, 0);
  sub_5D4B4(a1, (unsigned __int8)a3, v10, -4194305);
  sub_5D4B4(a1, (unsigned __int8)a3, v9, 0x400000);
  sub_5D4B4(a1, (unsigned __int8)a3, v10, -4194305);
  sub_5D4B4(a1, (unsigned __int8)a3, v9, 0);
  sub_5D4B4(a1, (unsigned __int8)a3, v10, -2049);
  sub_5D4B4(a1, (unsigned __int8)a3, v8, 2048);
  sub_5D4B4(a1, (unsigned __int8)a3, v10, -1073741825);
  sub_5D4B4(a1, (unsigned __int8)a3, v14, 0x40000000);
  sub_5D4B4(a1, (unsigned __int8)a3, v10, -16777217);
  sub_5D4B4(a1, (unsigned __int8)a3, v11, 0);
  sub_5D4B4(a1, (unsigned __int8)a3, v10, -16777217);
  sub_5D4B4(a1, (unsigned __int8)a3, v11, 0x1000000);
  check_d54(a1, a2, a3, a4, 8u);
  sub_5D4B4(a1, (unsigned __int8)a3, v10, -16777217);
  sub_5D4B4(a1, (unsigned __int8)a3, v11, 0);
  sub_5D4B4(a1, (unsigned __int8)a3, v10, 0);
  check_d54(a1, a2, a3, a4, 0);
  return 0;
}
