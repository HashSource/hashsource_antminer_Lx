int __fastcall setup_mac_lane_cross(int a1)
{
  _BYTE v3[16]; // [sp+18h] [bp+8h] BYREF
  int v4; // [sp+1018h] [bp+1008h] BYREF
  int v5; // [sp+101Ch] [bp+100Ch] BYREF
  unsigned int j; // [sp+1020h] [bp+1010h]
  unsigned int i; // [sp+1024h] [bp+1014h]

  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "%s...", "setup_mac_lane_cross");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "setup_mac_lane_cross",
    20,
    11325,
    60,
    v3);
  v5 = 100925952;
  v4 = 117768961;
  for ( i = 0; i <= 3; ++i )
  {
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v5 + i)), 3, 199, (int)&unk_1ACFFF);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v5 + i)), 0, 83, 255);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v5 + i)), 1, 83, 255);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v5 + i)), 2, 83, 0);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v5 + i)), 3, 83, 192);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v5 + i)), 5, 83, 127);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v5 + i)), 6, 83, 254);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v5 + i)), 7, 83, 255);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v5 + i)), 8, 83, 255);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v5 + i)), 9, 83, 15);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v5 + i)), 10, 83, 32);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v5 + i)), 11, 83, 0);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v5 + i)), 13, 83, 0);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v5 + i)), 14, 83, 15);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v5 + i)), 15, 83, 0);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v5 + i)), 0, 96, 1);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v5 + i)), 1, 96, 1);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v5 + i)), 2, 96, 128);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v5 + i)), 3, 96, 16);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v5 + i)), 5, 96, 128);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v5 + i)), 6, 96, 1);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v5 + i)), 7, 96, 1);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v5 + i)), 8, 96, 1);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v5 + i)), 9, 96, 1);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v5 + i)), 10, 96, 1);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v5 + i)), 11, 96, 1);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v5 + i)), 13, 96, 1);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v5 + i)), 14, 96, 1);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v5 + i)), 15, 96, 1);
  }
  for ( j = 0; j <= 3; ++j )
  {
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 0, 199, 342384);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 1, 199, 342384);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 3, 199, 1527807);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 6, 199, 342384);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 7, 199, 342384);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 8, 199, 342384);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 9, 199, 342384);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 10, 199, 342384);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 11, 199, 342384);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 13, 199, 342384);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 14, 199, 342384);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 15, 199, 342384);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 0, 83, 255);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 1, 83, 255);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 2, 83, 0);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 3, 83, 192);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 5, 83, 127);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 6, 83, 254);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 7, 83, 255);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 8, 83, 255);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 9, 83, 15);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 10, 83, 32);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 11, 83, 0);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 13, 83, 0);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 14, 83, 15);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 15, 83, 0);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 0, 96, 1);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 1, 96, 1);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 2, 96, 128);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 3, 96, 16);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 5, 96, 128);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 6, 96, 1);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 7, 96, 1);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 8, 96, 1);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 9, 96, 1);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 10, 96, 1);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 11, 96, 1);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 13, 96, 1);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 14, 96, 1);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 15, 96, 1);
  }
  usleep(0xF4240u);
  return 0;
}
