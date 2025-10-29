int __fastcall packet_2_nonce_ltc(_DWORD *a1, _BYTE *a2, int a3, _BYTE *a4, void *dest, _DWORD *a6, _DWORD *a7)
{
  int v8; // r0
  int v9; // r1
  int v13; // [sp+14h] [bp+14h]
  unsigned __int16 v14; // [sp+1Ah] [bp+1Ah]
  unsigned __int8 v15; // [sp+1Fh] [bp+1Fh]

  if ( a2[8] >> 5 != 4 )
    return 1;
  v14 = BM_CRC5(a2 + 2, 0x33u);
  if ( v14 == (a2[8] & 0x1F) )
  {
    v13 = a1[156];
    *(_QWORD *)a3 = *(_QWORD *)(8 * (unsigned __int8)a2[7] + v13);
    *a7 = *(_DWORD *)(8 * (unsigned __int8)a2[7] + v13);
    strcpy((char *)(a3 + 16), (const char *)((((unsigned __int8)a2[7] + 16) << 6) + v13));
    memcpy((void *)(a3 + 80), a2 + 2, 4u);
    *(_BYTE *)(a3 + 84) = a2[6] & 0x3F;
    *(_BYTE *)(a3 + 85) = a2[7];
    memcpy(
      (void *)(a3 + 86),
      (const void *)(v13 + 16 * ((unsigned __int8)a2[7] + 1504)),
      *(_DWORD *)(v13 + 4 * ((unsigned __int8)a2[7] + 6528)));
    *(_DWORD *)(a3 + 104) = *(_DWORD *)(v13 + 4 * ((unsigned __int8)a2[7] + 6528));
    memcpy((void *)(a3 + 108), (const void *)(4 * ((unsigned __int8)a2[7] + 6656) + v13), 4u);
    v15 = ((a2[3] >> 1) | (unsigned int)(unsigned __int8)(a2[2] << 7)) / a1[60];
    if ( v15 >= (int)a1[49] )
    {
      v8 = rand();
      sub_1A38EC(v8, a1[49]);
      *a6 = v9;
    }
    else
    {
      *a6 = v15;
    }
    *(_DWORD *)(a3 + 8) = *a6;
    *(_DWORD *)(a3 + 12) = a2[2] >> 1;
    memcpy(dest, (const void *)(a3 + 80), 4u);
    *a4 = 1;
    return 0;
  }
  else
  {
    printf("chain[%d] get nonce crc error calc value %04x expected value %04x\n", a1[34], v14, a2[8] & 0x1F);
    return 2;
  }
}
