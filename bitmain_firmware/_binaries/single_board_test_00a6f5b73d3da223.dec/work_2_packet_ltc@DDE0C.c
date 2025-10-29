int __fastcall work_2_packet_ltc(int a1, int a2, _BYTE *a3, _DWORD *a4)
{
  char v4; // r3
  _BYTE v8[20]; // [sp+24h] [bp+14h] BYREF
  unsigned __int16 v9; // [sp+1026h] [bp+1016h]
  int v10; // [sp+1028h] [bp+1018h]
  int v11; // [sp+102Ch] [bp+101Ch]
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
  *(_QWORD *)(8 * *(unsigned __int8 *)(v10 + 27136) + v10) = *(_QWORD *)v12;
  *(_DWORD *)(v10 + 4 * (*(unsigned __int8 *)(v10 + 27136) + 4864)) = *(_DWORD *)(v12 + 152);
  memcpy((void *)(v10 + 32 * (*(unsigned __int8 *)(v10 + 27136) + 624)), (const void *)(v12 + 156), 0x20u);
  strcpy((char *)(v10 + ((*(unsigned __int8 *)(v10 + 27136) + 16) << 6)), (const char *)(v12 + 8));
  memcpy((void *)(v10 + 80 * *(unsigned __int8 *)(v10 + 27136) + 9216), (const void *)(v12 + 72), 0x50u);
  memcpy(
    (void *)(v10 + 16 * (*(unsigned __int8 *)(v10 + 27136) + 1504)),
    (const void *)(v12 + 188),
    *(_DWORD *)(v12 + 204));
  *(_DWORD *)(v10 + 4 * (*(unsigned __int8 *)(v10 + 27136) + 6528)) = *(_DWORD *)(v12 + 204);
  memcpy((void *)(v10 + 4 * (*(unsigned __int8 *)(v10 + 27136) + 6656)), (const void *)(v12 + 208), 4u);
  v4 = *(_BYTE *)(v10 + 27136);
  *(_BYTE *)(v10 + 27136) = v4 + 1;
  v13[3] = v4;
  *(_BYTE *)(v10 + 27136) &= ~0x80u;
  memcpy(v13 + 4, (const void *)(v12 + 72), 0x50u);
  sub_DDDB0((int)(v13 + 4), 80);
  if ( !memcmp(&last_work_ltc, (const void *)(v12 + 72), 0x50u) )
  {
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, "found repeat work");
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_ltc/backend_ltc.c",
      83,
      "work_2_packet_ltc",
      17,
      185,
      80,
      v8);
    sub_DDB6C(v12, v13[3]);
  }
  memcpy(&last_work_ltc, (const void *)(v12 + 72), 0x50u);
  v11 = 82;
  v9 = CRC16_v1(v13 + 2, 82);
  v13[84] = HIBYTE(v9);
  v13[85] = v9;
  *a4 = 86;
  if ( *(_BYTE *)(a1 + 145) && *(_BYTE *)(a1 + 146) )
  {
    memset(*(void **)(a1 + 264), 0, 48 * *(_DWORD *)(a1 + 196));
    chip_setting_ticket_mask_ltc(a1, 0x7FFu);
    *(_BYTE *)(a1 + 145) = 0;
  }
  return 0;
}
