int __fastcall work_2_packet_grin32(int a1, _DWORD *a2, int a3, _DWORD *a4)
{
  int v4; // r4
  _DWORD *v5; // r2
  int v6; // r4
  _DWORD *v7; // r2
  int v8; // r4
  _DWORD *v9; // r2
  int v10; // r4
  _DWORD *v11; // r2
  unsigned __int16 v12; // r0
  int v15; // [sp+14h] [bp+14h]

  v15 = *(_DWORD *)(a1 + 624);
  *(_BYTE *)a3 = 85;
  *(_BYTE *)(a3 + 1) = -86;
  *(_BYTE *)(a3 + 2) = 33;
  if ( *(_DWORD *)(a1 + 304) == 1 )
    *(_BYTE *)(a3 + 2) |= 0x10u;
  *(_BYTE *)(a3 + 4) = 0;
  v4 = a2[3];
  v5 = (_DWORD *)(8 * (*(unsigned __int8 *)(v15 + 57088) + 128) + v15);
  *v5 = a2[2];
  v5[1] = v4;
  v6 = a2[1];
  v7 = (_DWORD *)(8 * *(unsigned __int8 *)(v15 + 57088) + v15);
  *v7 = *a2;
  v7[1] = v6;
  memcpy((void *)(a3 + 5), a2 + 4, 0xEEu);
  sub_4BE84((_BYTE *)(a3 + 243), a3 + 243, *(_DWORD *)((char *)a2 + 254), *(_DWORD *)((char *)a2 + 258));
  v8 = *(_DWORD *)((char *)a2 + 258);
  v9 = (_DWORD *)(8 * (*(unsigned __int8 *)(v15 + 57088) + 256) + v15);
  *v9 = 0;
  v9[1] = v8;
  memcpy((void *)(v15 + 246 * *(unsigned __int8 *)(v15 + 57088) + 4096), a2 + 4, 0xF6u);
  v10 = *(_DWORD *)((char *)a2 + 266);
  v11 = (_DWORD *)(8 * (*(unsigned __int8 *)(v15 + 57088) + 384) + v15);
  *v11 = *(_DWORD *)((char *)a2 + 262);
  v11[1] = v10;
  *(_BYTE *)(a3 + 3) = (*(_BYTE *)(v15 + 57088))++;
  if ( *(char *)(v15 + 57088) < 0 )
    *(_BYTE *)(v15 + 57088) = 0;
  v12 = CRC16_v1((const unsigned __int8 *)(a3 + 2), 249);
  *(_BYTE *)(a3 + 251) = HIBYTE(v12);
  *(_BYTE *)(a3 + 252) = v12;
  *a4 = 253;
  return 0;
}
