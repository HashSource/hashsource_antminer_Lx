int __fastcall work_2_packet_ae(int a1, int a2, int a3, _DWORD *a4)
{
  int v4; // r4
  _DWORD *v5; // r2
  int v6; // r4
  _DWORD *v7; // r2
  unsigned __int16 v8; // r0
  int v11; // [sp+1Ch] [bp+1Ch]

  v11 = *(_DWORD *)(a1 + 624);
  *(_BYTE *)a3 = 85;
  *(_BYTE *)(a3 + 1) = -86;
  *(_BYTE *)(a3 + 2) = 32;
  if ( *(_DWORD *)(a1 + 304) == 1 )
    *(_BYTE *)(a3 + 2) |= 0x10u;
  strcpy((char *)(v11 + 32 * (*(unsigned __int8 *)(v11 + 113920) + 32)), (const char *)(a2 + 8));
  v4 = *(_DWORD *)(a2 + 4);
  v5 = (_DWORD *)(8 * *(unsigned __int8 *)(v11 + 113920) + v11);
  *v5 = *(_DWORD *)a2;
  v5[1] = v4;
  memset((void *)(a3 + 5), 0, 0x50u);
  memcpy((void *)(v11 + 32 * (*(unsigned __int8 *)(v11 + 113920) + 232)), (const void *)(a2 + 40), 0x20u);
  base64_encode(a3 + 5, a2 + 40, 32);
  memcpy((void *)(a3 + 49), (const void *)(a2 + 72), 8u);
  memcpy((void *)(v11 + 80 * *(unsigned __int8 *)(v11 + 113920) + 11520), (const void *)(a3 + 5), 0x50u);
  v6 = *(_DWORD *)(a2 + 136);
  v7 = (_DWORD *)(8 * (*(unsigned __int8 *)(v11 + 113920) + 768) + v11);
  *v7 = *(_DWORD *)(a2 + 132);
  v7[1] = v6;
  *(_BYTE *)(a3 + 4) = (*(_BYTE *)(v11 + 113920))++;
  if ( *(char *)(v11 + 113920) < 0 )
    *(_BYTE *)(v11 + 113920) = 0;
  *(_BYTE *)(a3 + 3) = 80;
  v8 = CRC16_v1((const unsigned __int8 *)(a3 + 2), *(unsigned __int8 *)(a3 + 3) + 3);
  *(_BYTE *)(a3 + 85) = HIBYTE(v8);
  *(_BYTE *)(a3 + 86) = v8;
  *a4 = 87;
  return 0;
}
