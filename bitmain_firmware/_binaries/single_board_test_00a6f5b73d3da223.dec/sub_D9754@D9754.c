__int64 __fastcall sub_D9754(int a1, int a2)
{
  int v3; // [sp+4h] [bp-14h]
  _BYTE v6[24]; // [sp+20h] [bp+8h] BYREF
  _WORD v7[28]; // [sp+1020h] [bp+1008h] BYREF
  _WORD v8[26]; // [sp+1064h] [bp+104Ch] BYREF
  unsigned __int8 v9; // [sp+10A7h] [bp+108Fh]
  int v10; // [sp+10A8h] [bp+1090h]
  int v11; // [sp+10ACh] [bp+1094h]
  int i; // [sp+10B0h] [bp+1098h]
  unsigned int j; // [sp+10B4h] [bp+109Ch]

  v11 = a2 + 34;
  v10 = a2 + 98;
  v9 = (*(__int64 *)(a2 + 26) >> 9) & 7;
  V_LOCK();
  logfmt_raw(v6, 0x1000u, 0, "wc %d diff: %d", *(unsigned __int8 *)(a2 + 16), *(unsigned __int8 *)(a2 + 17));
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "dump_nonce",
    10,
    12303,
    60,
    v6);
  V_LOCK();
  logfmt_raw(
    v6,
    0x1000u,
    0,
    "chain %d asic %d core %d pe %d addr_interval %d",
    *(_DWORD *)(a1 + 136),
    *(_DWORD *)(a2 + 8),
    *(_DWORD *)(a2 + 12),
    v9,
    *(_DWORD *)(a1 + 240));
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
    83,
    "dump_nonce",
    10,
    12305,
    60,
    v6);
  for ( i = 0; i <= 31; ++i )
    sprintf((char *)&v8[i], "%02x", *(unsigned __int8 *)(i + v11));
  for ( j = 0; j <= 0x1F; ++j )
    sprintf((char *)&v7[j], "%02x", *(unsigned __int8 *)(j + v10));
  V_LOCK();
  logfmt_raw(
    v6,
    0x1000u,
    0,
    "header %s nonce %016llx mixhash %s",
    v8,
    v3,
    *(_DWORD *)(a2 + 26),
    *(_DWORD *)(a2 + 30),
    v7);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_eth/backend_eth.c",
           83,
           "dump_nonce",
           10,
           12313,
           60,
           v6);
}
