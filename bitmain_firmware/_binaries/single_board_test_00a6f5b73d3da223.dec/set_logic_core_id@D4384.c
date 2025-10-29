int __fastcall set_logic_core_id(int a1)
{
  _BYTE v3[16]; // [sp+18h] [bp+8h] BYREF
  int v4; // [sp+1018h] [bp+1008h] BYREF
  int v5; // [sp+101Ch] [bp+100Ch] BYREF
  unsigned int j; // [sp+1020h] [bp+1010h]
  unsigned int i; // [sp+1024h] [bp+1014h]

  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "%s...", "set_logic_core_id");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "set_logic_core_id",
    17,
    11216,
    60,
    v3);
  v5 = 100925952;
  v4 = 117768961;
  for ( i = 0; i <= 3; ++i )
  {
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v5 + i)), 0, 19, 256);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v5 + i)), 1, 19, 257);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v5 + i)), 2, 19, 258);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v5 + i)), 3, 19, 259);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v5 + i)), 4, 19, 260);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v5 + i)), 5, 19, 261);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v5 + i)), 6, 19, 262);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v5 + i)), 7, 19, 263);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v5 + i)), 8, 19, 264);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v5 + i)), 9, 19, 265);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v5 + i)), 10, 19, 266);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v5 + i)), 11, 19, 267);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v5 + i)), 12, 19, 268);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v5 + i)), 13, 19, 269);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v5 + i)), 14, 19, 270);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v5 + i)), 15, 19, 271);
  }
  for ( j = 0; j <= 3; ++j )
  {
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 0, 19, 263);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 1, 19, 262);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 2, 19, 261);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 3, 19, 259);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 4, 19, 260);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 5, 19, 258);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 6, 19, 257);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 7, 19, 256);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 8, 19, 271);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 9, 19, 270);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 10, 19, 269);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 11, 19, 267);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 12, 19, 268);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 13, 19, 266);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 14, 19, 265);
    sub_78960(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + *((unsigned __int8 *)&v4 + j)), 15, 19, 264);
  }
  return 0;
}
