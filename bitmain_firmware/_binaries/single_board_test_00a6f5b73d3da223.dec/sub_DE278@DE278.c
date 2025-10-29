__int64 __fastcall sub_DE278(int a1, int a2, int a3)
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
  for ( i = 0; i <= 3; ++i )
  {
    v3 = snprintf(&v10[v13], 4096 - v13, "%02x ", *(unsigned __int8 *)(i + a2 + 2));
    v13 += v3;
  }
  V_LOCK();
  logfmt_raw(v9, 0x1000u, 0, "work_id: %02x diff %02x", *(unsigned __int8 *)(a2 + 7), *(_BYTE *)(a2 + 6) & 0x3F);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_ltc/backend_ltc.c",
    83,
    "dump_nonce_ltc",
    14,
    214,
    20,
    v9);
  V_LOCK();
  logfmt_raw(v9, 0x1000u, 0, "back nonce: %s", v10);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_ltc/backend_ltc.c",
    83,
    "dump_nonce_ltc",
    14,
    215,
    20,
    v9);
  i = 0;
  v13 = 0;
  while ( i <= 3 )
  {
    v4 = snprintf(&v10[v13], 4096 - v13, "%02x ", *(unsigned __int8 *)(i + a3 + 80));
    v13 += v4;
    ++i;
  }
  V_LOCK();
  sub_DAC34((int)v11, *(int *)(a1 + 140));
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
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_ltc/backend_ltc.c",
    83,
    "dump_nonce_ltc",
    14,
    221,
    20,
    v9);
  V_LOCK();
  logfmt_raw(v9, 0x1000u, 0, "nonce: %s", v10);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_ltc/backend_ltc.c",
           83,
           "dump_nonce_ltc",
           14,
           222,
           20,
           v9);
}
