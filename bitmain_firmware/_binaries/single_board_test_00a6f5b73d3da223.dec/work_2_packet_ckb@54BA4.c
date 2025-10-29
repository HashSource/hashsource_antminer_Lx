int __fastcall work_2_packet_ckb(int a1, int a2, _BYTE *a3, _DWORD *a4)
{
  char v4; // r3
  _BYTE v7[20]; // [sp+24h] [bp+14h] BYREF
  unsigned __int16 v8; // [sp+1026h] [bp+1016h]
  int v9; // [sp+1028h] [bp+1018h]
  int v10; // [sp+102Ch] [bp+101Ch]
  int v11; // [sp+1030h] [bp+1020h]
  _BYTE *v12; // [sp+1034h] [bp+1024h]

  v12 = a3;
  v11 = a2;
  v10 = 0;
  v9 = *(_DWORD *)(a1 + 624);
  *a3 = 85;
  v12[1] = -86;
  v12[2] = 32;
  if ( *(_DWORD *)(a1 + 304) == 1 )
    v12[2] |= 0x10u;
  *(_QWORD *)(8 * *(unsigned __int8 *)(v9 + 31744) + v9) = *(_QWORD *)v11;
  *(_DWORD *)(v9 + 4 * (*(unsigned __int8 *)(v9 + 31744) + 5632)) = *(_DWORD *)(v11 + 88);
  memcpy((void *)(v9 + 32 * (*(unsigned __int8 *)(v9 + 31744) + 736)), (const void *)(v11 + 92), 0x20u);
  strcpy((char *)(v9 + 32 * (*(unsigned __int8 *)(v9 + 31744) + 64)), (const char *)(v11 + 8));
  memcpy((void *)(v9 + 48 * *(unsigned __int8 *)(v9 + 31744) + 10240), (const void *)(v11 + 40), 0x30u);
  v4 = *(_BYTE *)(v9 + 31744);
  *(_BYTE *)(v9 + 31744) = v4 + 1;
  v12[3] = v4;
  *(_BYTE *)(v9 + 31744) = *(_BYTE *)(v9 + 31744);
  memcpy(v12 + 4, (const void *)(v11 + 40), 0x30u);
  if ( !memcmp(&last_header_ckb, (const void *)(v11 + 40), 0x30u) )
  {
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, "found repeat work");
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_ckb/backend_ckb.c",
      83,
      "work_2_packet_ckb",
      17,
      142,
      80,
      v7);
    sub_54A10(v11, v12[3]);
  }
  memcpy(&last_header_ckb, (const void *)(v11 + 40), 0x30u);
  v10 = 50;
  v8 = CRC16_v1(v12 + 2, 50);
  v12[52] = HIBYTE(v8);
  v12[53] = v8;
  *a4 = 54;
  return 0;
}
