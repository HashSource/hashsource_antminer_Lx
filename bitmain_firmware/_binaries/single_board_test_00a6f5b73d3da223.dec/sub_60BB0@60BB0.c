__int64 __fastcall sub_60BB0(int a1, int a2, int a3)
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
    v3 = snprintf(&v10[v13], 4096 - v13, "%02x ", *(unsigned __int8 *)(i + a2 + 3));
    v13 += v3;
  }
  V_LOCK();
  logfmt_raw(v9, 0x1000u, 0, "work_id: %02x diff %02x", *(unsigned __int8 *)(a2 + 9), *(_BYTE *)(a2 + 8) & 0x7F);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_dcr/backend_dcr.c",
    83,
    "dump_nonce_dcr",
    14,
    148,
    20,
    v9);
  V_LOCK();
  logfmt_raw(
    v9,
    0x1000u,
    0,
    "back nonce: %s B:%3d S:%1d",
    v10,
    *(unsigned __int8 *)(a3 + 48),
    (*(unsigned __int8 *)(a3 + 49) >> 6) & 3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_dcr/backend_dcr.c",
    83,
    "dump_nonce_dcr",
    14,
    149,
    20,
    v9);
  i = 0;
  v13 = 0;
  while ( i <= 3 )
  {
    v4 = snprintf(&v10[v13], 4096 - v13, "%02x", *(unsigned __int8 *)(i + a3 + 48));
    v13 += v4;
    ++i;
  }
  V_LOCK();
  sub_5CC94((int)v11, *(int *)(a1 + 140));
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
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_dcr/backend_dcr.c",
    83,
    "dump_nonce_dcr",
    14,
    155,
    20,
    v9);
  V_LOCK();
  logfmt_raw(v9, 0x1000u, 0, "nonce: %s", v10);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_dcr/backend_dcr.c",
           83,
           "dump_nonce_dcr",
           14,
           156,
           20,
           v9);
}
