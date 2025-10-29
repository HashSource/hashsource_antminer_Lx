int __fastcall set_logic_core_id(int a1)
{
  int v2; // r5
  _DWORD *i; // r6
  int v4; // t1
  int *v5; // r6
  int j; // r5
  int v7; // t1
  int v9; // [sp+2Ch] [bp-24h] BYREF
  _DWORD v10[7]; // [sp+30h] [bp-20h] BYREF
  int v11; // [sp+4Ch] [bp-4h]
  int v12; // [sp+50h] [bp+0h] BYREF
  int v13; // [sp+54h] [bp+4h] BYREF

  V_LOCK();
  v2 = 0;
  V_INT((int)v10, "chain", *(int *)(a1 + 140));
  logfmt_raw(
    (char *)&v12,
    0x1000u,
    0,
    v11,
    v10[0],
    v10[1],
    v10[2],
    v10[3],
    v10[4],
    v10[5],
    v10[6],
    v11,
    "%s...",
    "set_logic_core_id");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "set_logic_core_id",
    17,
    11163,
    60,
    &v12);
  v9 = 100925952;
  v12 = 117768961;
  for ( i = (int *)((char *)&v9 + 1); ; i = (_DWORD *)((char *)i + 1) )
  {
    sub_5BDBC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 0, 19, 256);
    sub_5BDBC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 1u, 19, 257);
    sub_5BDBC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 2u, 19, 258);
    sub_5BDBC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 3u, 19, 259);
    sub_5BDBC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 4u, 19, 260);
    sub_5BDBC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 5u, 19, 261);
    sub_5BDBC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 6u, 19, 262);
    sub_5BDBC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 7u, 19, 263);
    sub_5BDBC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 8u, 19, 264);
    sub_5BDBC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 9u, 19, 265);
    sub_5BDBC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 0xAu, 19, 266);
    sub_5BDBC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 0xBu, 19, 267);
    sub_5BDBC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 0xCu, 19, 268);
    sub_5BDBC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 0xDu, 19, 269);
    sub_5BDBC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 0xEu, 19, 270);
    sub_5BDBC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 0xFu, 19, 271);
    if ( i == v10 )
      break;
    v4 = *(unsigned __int8 *)i;
    v2 = v4;
  }
  v5 = (int *)((char *)&v12 + 1);
  for ( j = 1; ; j = v7 )
  {
    sub_5BDBC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + j), 0, 19, 263);
    sub_5BDBC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + j), 1u, 19, 262);
    sub_5BDBC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + j), 2u, 19, 261);
    sub_5BDBC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + j), 3u, 19, 259);
    sub_5BDBC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + j), 4u, 19, 260);
    sub_5BDBC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + j), 5u, 19, 258);
    sub_5BDBC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + j), 6u, 19, 257);
    sub_5BDBC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + j), 7u, 19, 256);
    sub_5BDBC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + j), 8u, 19, 271);
    sub_5BDBC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + j), 9u, 19, 270);
    sub_5BDBC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + j), 0xAu, 19, 269);
    sub_5BDBC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + j), 0xBu, 19, 267);
    sub_5BDBC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + j), 0xCu, 19, 268);
    sub_5BDBC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + j), 0xDu, 19, 266);
    sub_5BDBC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + j), 0xEu, 19, 265);
    sub_5BDBC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + j), 0xFu, 19, 264);
    if ( &v13 == v5 )
      break;
    v7 = *(unsigned __int8 *)v5;
    v5 = (int *)((char *)v5 + 1);
  }
  return 0;
}
