int __fastcall packet_2_nonce_dash(int *a1, int a2, int a3, _BYTE *a4, void *a5, _DWORD *a6, _DWORD *a7)
{
  _BYTE v11[28]; // [sp+34h] [bp+14h] BYREF
  unsigned __int16 v12; // [sp+1036h] [bp+1016h]
  unsigned __int16 v13; // [sp+1038h] [bp+1018h]
  __int16 v14; // [sp+103Ah] [bp+101Ah]
  unsigned int v15; // [sp+103Ch] [bp+101Ch]
  int v16; // [sp+1040h] [bp+1020h]
  unsigned __int8 v17; // [sp+1047h] [bp+1027h]
  int v18; // [sp+1048h] [bp+1028h]
  unsigned __int8 *v19; // [sp+104Ch] [bp+102Ch]

  v19 = (unsigned __int8 *)a2;
  v18 = a3;
  v17 = 0;
  if ( *(char *)(a2 + 8) >= 0 )
    return 1;
  v16 = a1[156];
  *(_QWORD *)v18 = *(_QWORD *)(8 * v19[7] + v16);
  *a7 = *(_DWORD *)(8 * v19[7] + v16);
  strcpy((char *)(v18 + 16), (const char *)(32 * (v19[7] + 32) + v16));
  memcpy((void *)(v18 + 48), v19 + 2, 4u);
  *(_BYTE *)(v18 + 52) = v19[6] & 0x7F;
  *(_BYTE *)(v18 + 53) = v19[7];
  *(_QWORD *)(v18 + 72) = *(_QWORD *)(8 * (v19[7] + 2689) + v16);
  v17 = v19[2] / (unsigned int)a1[60];
  if ( v17 >= a1[49] )
  {
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, "Nonce error, wrong source chip number");
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_dash/backend_dash.c",
      85,
      "packet_2_nonce_dash",
      19,
      187,
      100,
      v11);
    *a6 = 0;
  }
  else
  {
    *a6 = v17;
  }
  *(_DWORD *)(v18 + 8) = *a6;
  v15 = _byteswap_ulong(*(_DWORD *)(v19 + 2));
  *(_DWORD *)(v18 + 12) = (v15 - ((a1[60] * v17) << 24)) % 0xA;
  V_LOCK();
  logfmt_raw(
    v11,
    0x1000u,
    0,
    "%s Nonce: %02x%02x%02x%02x  chipid:%d  coreid:%d",
    "packet_2_nonce_dash",
    v19[2],
    v19[3],
    v19[4],
    v19[5],
    *(_DWORD *)(v18 + 8),
    *(_DWORD *)(v18 + 12));
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_dash/backend_dash.c",
    85,
    "packet_2_nonce_dash",
    19,
    201,
    20,
    v11);
  v14 = 7;
  v13 = BM_CRC5(v19 + 2, 0x33u);
  v12 = v19[8] & 0x1F;
  if ( v13 == v12 )
  {
    memcpy(a5, (const void *)(v18 + 48), 4u);
    *a4 = 1;
    return 0;
  }
  else
  {
    printf("get nonce crc error calc value %04x expected value %04x\n", v13, v12);
    return 2;
  }
}
