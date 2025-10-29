int __fastcall setup_mac_lane_cross(int a1)
{
  int v2; // r5
  _DWORD *i; // r10
  int v4; // t1
  int v5; // r5
  char *j; // [sp+2Ch] [bp-1038h]
  int v8; // [sp+3Ch] [bp-1028h] BYREF
  _DWORD v9[7]; // [sp+40h] [bp-1024h] BYREF
  int v10; // [sp+5Ch] [bp-1008h]
  int v11; // [sp+60h] [bp-1004h] BYREF
  char v12; // [sp+64h] [bp-1000h] BYREF

  v2 = 0;
  V_LOCK();
  V_INT((int)v9, "chain", *(int *)(a1 + 140));
  logfmt_raw(
    (char *)&v11,
    0x1000u,
    0,
    v10,
    v9[0],
    v9[1],
    v9[2],
    v9[3],
    v9[4],
    v9[5],
    v9[6],
    v10,
    "%s...",
    "setup_mac_lane_cross");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release_USE_APW121417b/build/rootfs/buildroot/tmp/release/build/god"
    "miner-origin_master/backend/backend_eth/backend_eth.c",
    169,
    "setup_mac_lane_cross",
    20,
    11272,
    60,
    &v11);
  v8 = 100925952;
  v11 = 117768961;
  for ( i = (int *)((char *)&v8 + 1); ; i = (_DWORD *)((char *)i + 1) )
  {
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 3u, 199, 1757183);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 0, 83, 255);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 1u, 83, 255);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 2u, 83, 0);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 3u, 83, 192);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 5u, 83, 127);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 6u, 83, 254);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 7u, 83, 255);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 8u, 83, 255);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 9u, 83, 15);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 0xAu, 83, 32);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 0xBu, 83, 0);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 0xDu, 83, 0);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 0xEu, 83, 15);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 0xFu, 83, 0);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 0, 96, 1);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 1u, 96, 1);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 2u, 96, 128);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 3u, 96, 16);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 5u, 96, 128);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 6u, 96, 1);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 7u, 96, 1);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 8u, 96, 1);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 9u, 96, 1);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 0xAu, 96, 1);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 0xBu, 96, 1);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 0xDu, 96, 1);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 0xEu, 96, 1);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 0xFu, 96, 1);
    if ( i == v9 )
      break;
    v4 = *(unsigned __int8 *)i;
    v2 = v4;
  }
  v5 = 1;
  for ( j = (char *)&v11 + 1; ; ++j )
  {
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v5), 0, 199, 342384);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v5), 1u, 199, 342384);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v5), 3u, 199, 1527807);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v5), 6u, 199, 342384);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v5), 7u, 199, 342384);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v5), 8u, 199, 342384);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v5), 9u, 199, 342384);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v5), 0xAu, 199, 342384);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v5), 0xBu, 199, 342384);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v5), 0xDu, 199, 342384);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v5), 0xEu, 199, 342384);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v5), 0xFu, 199, 342384);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v5), 0, 83, 255);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v5), 1u, 83, 255);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v5), 2u, 83, 0);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v5), 3u, 83, 192);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v5), 5u, 83, 127);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v5), 6u, 83, 254);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v5), 7u, 83, 255);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v5), 8u, 83, 255);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v5), 9u, 83, 15);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v5), 0xAu, 83, 32);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v5), 0xBu, 83, 0);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v5), 0xDu, 83, 0);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v5), 0xEu, 83, 15);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v5), 0xFu, 83, 0);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v5), 0, 96, 1);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v5), 1u, 96, 1);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v5), 2u, 96, 128);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v5), 3u, 96, 16);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v5), 5u, 96, 128);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v5), 6u, 96, 1);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v5), 7u, 96, 1);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v5), 8u, 96, 1);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v5), 9u, 96, 1);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v5), 0xAu, 96, 1);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v5), 0xBu, 96, 1);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v5), 0xDu, 96, 1);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v5), 0xEu, 96, 1);
    sub_5C944(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v5), 0xFu, 96, 1);
    if ( &v12 == j )
      break;
    v5 = (unsigned __int8)*j;
  }
  usleep(0xF4240u);
  return 0;
}
