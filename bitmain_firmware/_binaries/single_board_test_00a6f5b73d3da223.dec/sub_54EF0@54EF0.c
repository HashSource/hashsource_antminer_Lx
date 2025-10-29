__int64 __fastcall sub_54EF0(int a1, int a2, int a3)
{
  int v3; // r0
  int v4; // r0
  _BYTE v9[40]; // [sp+40h] [bp+10h] BYREF
  _BYTE v10[4080]; // [sp+1040h] [bp+1010h] BYREF
  _DWORD v11[7]; // [sp+2040h] [bp+2010h] BYREF
  int v12; // [sp+205Ch] [bp+202Ch]
  int v13; // [sp+2060h] [bp+2030h]
  unsigned int i; // [sp+2064h] [bp+2034h]

  v13 = 0;
  for ( i = 0; i <= 4; ++i )
  {
    v3 = snprintf(&v10[v13], 4096 - v13, "%02x ", *(unsigned __int8 *)(i + a2 + 2));
    v13 += v3;
  }
  V_LOCK();
  logfmt_raw(v9, 0x1000u, 0, "work_id: %02x diff %02x", *(unsigned __int8 *)(a2 + 8), *(_BYTE *)(a2 + 7) & 0x7F);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_ckb/backend_ckb.c",
    83,
    "dump_nonce_ckb",
    14,
    170,
    20,
    v9);
  V_LOCK();
  logfmt_raw(v9, 0x1000u, 0, "back nonce: %s", v10);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_ckb/backend_ckb.c",
    83,
    "dump_nonce_ckb",
    14,
    171,
    20,
    v9);
  i = 0;
  v13 = 0;
  while ( i <= 0xF )
  {
    v4 = snprintf(&v10[v13], 4096 - v13, "%02x ", *(unsigned __int8 *)(i + a3 + 48));
    v13 += v4;
    ++i;
  }
  V_LOCK();
  sub_51024((int)v11, *(int *)(a1 + 140));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v12,
    v11[0],
    v11[1],
    v11[2],
    v11[3],
    v11[4],
    v11[5],
    v11[6],
    v12,
    "asic %d core %d addr_interval %d",
    *(_DWORD *)(a3 + 8),
    *(_DWORD *)(a3 + 12),
    *(_DWORD *)(a1 + 240));
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_ckb/backend_ckb.c",
    83,
    "dump_nonce_ckb",
    14,
    177,
    20,
    v9);
  V_LOCK();
  logfmt_raw(v9, 0x1000u, 0, "nonce: %s", v10);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_ckb/backend_ckb.c",
           83,
           "dump_nonce_ckb",
           14,
           178,
           20,
           v9);
}
