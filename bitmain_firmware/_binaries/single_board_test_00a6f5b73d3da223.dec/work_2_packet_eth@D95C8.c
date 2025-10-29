int __fastcall work_2_packet_eth(int a1, int a2, int a3, _DWORD *a4)
{
  int v4; // r4
  _DWORD *v5; // r2
  int v6; // r4
  _DWORD *v7; // r2
  int v8; // r4
  _DWORD *v9; // r2
  unsigned __int16 v10; // r0
  int v13; // [sp+14h] [bp+14h]

  v13 = *(_DWORD *)(a1 + 624);
  *(_BYTE *)a3 = 85;
  *(_BYTE *)(a3 + 1) = -86;
  *(_BYTE *)(a3 + 2) = 32;
  if ( *(_DWORD *)(a1 + 304) == 1 )
    *(_BYTE *)(a3 + 2) |= 0x10u;
  v4 = *(_DWORD *)(a2 + 12);
  v5 = (_DWORD *)(8 * (*(unsigned __int8 *)(v13 + 35072) + 256) + v13);
  *v5 = *(_DWORD *)(a2 + 8);
  v5[1] = v4;
  v6 = *(_DWORD *)(a2 + 4);
  v7 = (_DWORD *)(8 * *(unsigned __int8 *)(v13 + 35072) + v13);
  *v7 = *(_DWORD *)a2;
  v7[1] = v6;
  *(_BYTE *)(a3 + 3) = *(_BYTE *)(v13 + 35072);
  *(_BYTE *)(v13 + *(unsigned __int8 *)(v13 + 35072) + 34816) = *(_BYTE *)(a2 + 88);
  memcpy((void *)(a3 + 4), (const void *)(a2 + 16), 0x20u);
  memcpy((void *)(v13 + 40 * *(unsigned __int8 *)(v13 + 35072) + 0x2000), (const void *)(a2 + 16), 0x28u);
  memcpy((void *)(v13 + 32 * (*(unsigned __int8 *)(v13 + 35072) + 576)), (const void *)(a2 + 48), 0x20u);
  sub_758E0((_BYTE *)(a3 + 36), a3 + 36, *(_DWORD *)(a2 + 80), *(_DWORD *)(a2 + 84));
  v8 = *(_DWORD *)(a2 + 84);
  v9 = (_DWORD *)(8 * (*(unsigned __int8 *)(v13 + 35072) + 512) + v13);
  *v9 = 0;
  v9[1] = v8;
  ++*(_BYTE *)(v13 + 35072);
  v10 = CRC16_v1((const unsigned __int8 *)(a3 + 2), 42);
  *(_BYTE *)(a3 + 44) = HIBYTE(v10);
  *(_BYTE *)(a3 + 45) = v10;
  *a4 = 46;
  return 0;
}
