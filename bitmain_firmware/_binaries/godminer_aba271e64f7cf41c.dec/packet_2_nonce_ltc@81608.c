int __fastcall packet_2_nonce_ltc(_DWORD *a1, int a2, int a3, _BYTE *a4, _DWORD *a5, _DWORD *a6, _DWORD *a7)
{
  int v8; // r0
  int v9; // r1
  int v13; // [sp+14h] [bp-18h]
  unsigned __int16 v14; // [sp+1Ah] [bp-12h]
  unsigned __int8 v15; // [sp+1Fh] [bp-Dh]

  if ( *(_BYTE *)(a2 + 9) >> 7 != 1 )
    return 100;
  v14 = BM_CRC5((_BYTE *)(a2 + 2), 0x3Bu);
  if ( v14 == (*(_BYTE *)(a2 + 9) & 0x1F) )
  {
    v13 = a1[206];
    *(_QWORD *)a3 = *(_QWORD *)(v13 + 8 * *(unsigned __int8 *)(a2 + 8));
    *a7 = *(_DWORD *)(v13 + 8 * *(unsigned __int8 *)(a2 + 8));
    strcpy((char *)(a3 + 16), (const char *)(v13 + ((*(unsigned __int8 *)(a2 + 8) + 16) << 6)));
    *(_DWORD *)(a3 + 80) = *(_DWORD *)(a2 + 3);
    *(_BYTE *)(a3 + 84) = *(_BYTE *)(a2 + 7);
    *(_BYTE *)(a3 + 85) = *(_BYTE *)(a2 + 8);
    memcpy(
      (void *)(a3 + 86),
      (const void *)(v13 + 16 * (*(unsigned __int8 *)(a2 + 8) + 1504)),
      *(_DWORD *)(v13 + 4 * (*(unsigned __int8 *)(a2 + 8) + 6528)));
    *(_DWORD *)(a3 + 104) = *(_DWORD *)(v13 + 4 * (*(unsigned __int8 *)(a2 + 8) + 6528));
    *(_DWORD *)(a3 + 108) = *(_DWORD *)(v13 + 4 * (*(unsigned __int8 *)(a2 + 8) + 6656));
    v15 = (unsigned int)*(unsigned __int8 *)(a2 + 4) / a1[107];
    if ( v15 >= (int)a1[84] )
    {
      v8 = rand();
      sub_CC7AC(v8, a1[84]);
      *a6 = v9;
    }
    else
    {
      *a6 = v15;
    }
    *(_DWORD *)(a3 + 8) = *a6;
    *(_DWORD *)(a3 + 12) = *(unsigned __int8 *)(a2 + 3);
    *a5 = *(_DWORD *)(a3 + 80);
    *a4 = 1;
    return 0;
  }
  else
  {
    printf(
      "chain[%d] get nonce crc error calc value %04x expected value %04x\n",
      a1[62],
      v14,
      *(_BYTE *)(a2 + 9) & 0x1F);
    return 101;
  }
}
