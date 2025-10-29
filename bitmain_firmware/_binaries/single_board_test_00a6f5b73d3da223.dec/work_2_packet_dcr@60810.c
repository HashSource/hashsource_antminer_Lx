int __fastcall work_2_packet_dcr(int a1, int a2, _BYTE *a3, _DWORD *a4)
{
  char v4; // r3
  _BYTE v8[20]; // [sp+24h] [bp+14h] BYREF
  unsigned __int16 v9; // [sp+1026h] [bp+1016h]
  int v10; // [sp+1028h] [bp+1018h]
  __int16 v11; // [sp+102Eh] [bp+101Eh]
  int v12; // [sp+1030h] [bp+1020h]
  _BYTE *v13; // [sp+1034h] [bp+1024h]

  v13 = a3;
  v12 = a2;
  v11 = 0;
  v10 = *(_DWORD *)(a1 + 624);
  *a3 = 85;
  v13[1] = -86;
  v13[2] = 32;
  if ( *(_DWORD *)(a1 + 304) == 1 )
    v13[2] |= 0x10u;
  *(_QWORD *)(8 * *(unsigned __int8 *)(v10 + 0x8000) + v10) = *(_QWORD *)v12;
  strcpy((char *)(v10 + 32 * (*(unsigned __int8 *)(v10 + 0x8000) + 32)), (const char *)(v12 + 8));
  *(_DWORD *)(v10 + 4 * (*(unsigned __int8 *)(v10 + 0x8000) + 7040)) = *(_DWORD *)(v12 + 220);
  memcpy((void *)(v10 + 32 * (*(unsigned __int8 *)(v10 + 0x8000) + 896)), (const void *)(v12 + 224), 0x20u);
  memcpy((void *)(v10 + 180 * *(unsigned __int8 *)(v10 + 0x8000) + 5120), (const void *)(v12 + 40), 0xB4u);
  v4 = *(_BYTE *)(v10 + 0x8000);
  *(_BYTE *)(v10 + 0x8000) = v4 + 1;
  v13[3] = v4;
  *(_BYTE *)(v10 + 0x8000) &= ~0x80u;
  memcpy(v13 + 4, (const void *)(v12 + 40), 0xB4u);
  if ( !memcmp(&last_header_dcr, (const void *)(v12 + 40), 0xB4u) )
  {
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, "found repeat work");
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_dcr/backend_dcr.c",
      83,
      "work_2_packet_dcr",
      17,
      118,
      80,
      v8);
  }
  memcpy(&last_header_dcr, (const void *)(v12 + 40), 0xB4u);
  v11 = 182;
  v9 = CRC16_v1(v13 + 2, 182);
  v13[184] = HIBYTE(v9);
  v13[185] = v9;
  *a4 = 186;
  if ( *(_BYTE *)(a1 + 145) && *(_BYTE *)(a1 + 146) )
  {
    memset(*(void **)(a1 + 264), 0, 48 * *(_DWORD *)(a1 + 196));
    chip_setting_ticket_value_dcr(a1, 32);
    *(_BYTE *)(a1 + 145) = 0;
  }
  return 0;
}
