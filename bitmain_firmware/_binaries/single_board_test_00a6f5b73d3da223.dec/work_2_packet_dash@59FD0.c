int __fastcall work_2_packet_dash(int a1, int a2, _BYTE *a3, _DWORD *a4)
{
  char v4; // r3
  _BYTE v8[24]; // [sp+20h] [bp+10h] BYREF
  unsigned __int16 v9; // [sp+1022h] [bp+1012h]
  int v10; // [sp+1024h] [bp+1014h]
  int v11; // [sp+1028h] [bp+1018h]
  int v12; // [sp+102Ch] [bp+101Ch]
  _BYTE *v13; // [sp+1030h] [bp+1020h]
  int i; // [sp+1034h] [bp+1024h]

  v13 = a3;
  v12 = a2;
  v11 = 0;
  v10 = *(_DWORD *)(a1 + 624);
  *a3 = 85;
  v13[1] = -86;
  v13[2] = 32;
  if ( *(_DWORD *)(a1 + 304) == 1 )
    v13[2] |= 0x10u;
  *(_QWORD *)(8 * *(unsigned __int8 *)(v10 + 21504) + v10) = *(_QWORD *)v12;
  *(_DWORD *)(v10 + 4 * (*(unsigned __int8 *)(v10 + 21504) + 3840)) = *(_DWORD *)(v12 + 120);
  memcpy((void *)(v10 + 12 * *(unsigned __int8 *)(v10 + 21504) + 19968), (const void *)(v12 + 156), 8u);
  memcpy((void *)(v10 + 32 * (*(unsigned __int8 *)(v10 + 21504) + 496)), (const void *)(v12 + 124), 0x20u);
  strcpy((char *)(v10 + 32 * (*(unsigned __int8 *)(v10 + 21504) + 32)), (const char *)(v12 + 8));
  memcpy((void *)(v10 + 80 * *(unsigned __int8 *)(v10 + 21504) + 5120), (const void *)(v12 + 40), 0x50u);
  *(_QWORD *)(8 * (*(unsigned __int8 *)(v10 + 21504) + 2689) + v10) = *(_QWORD *)(v12 + 168);
  v4 = *(_BYTE *)(v10 + 21504);
  *(_BYTE *)(v10 + 21504) = v4 + 1;
  v13[3] = v4;
  *(_BYTE *)(v10 + 21504) &= ~0x80u;
  memcpy(v13 + 4, (const void *)(v12 + 40), 0x50u);
  for ( i = 0; i <= 19; ++i )
  {
    v13[4 * i + 7] = *(_BYTE *)(4 * i + v12 + 40);
    v13[4 * i + 6] = *(_BYTE *)(4 * i + 1 + v12 + 40);
    v13[4 * i + 5] = *(_BYTE *)(4 * i + 2 + v12 + 40);
    v13[4 * i + 4] = *(_BYTE *)(4 * i + 3 + v12 + 40);
  }
  if ( !memcmp(&last_header_dash, (const void *)(v12 + 40), 0x50u) )
  {
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, "found repeat work");
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/backend_dash/backend_dash.c",
      85,
      "work_2_packet_dash",
      18,
      122,
      80,
      v8);
    sub_59E3C(v12, v13[3]);
  }
  memcpy(&last_header_dash, (const void *)(v12 + 40), 0x50u);
  v11 = 82;
  v9 = CRC16_v1(v13 + 2, 82);
  v13[84] = HIBYTE(v9);
  v13[85] = v9;
  *a4 = 86;
  if ( *(_BYTE *)(a1 + 145) && *(_BYTE *)(a1 + 146) )
  {
    set_ticket_mask_dash(a1, 0x23u);
    *(_BYTE *)(a1 + 145) = 0;
  }
  return 0;
}
