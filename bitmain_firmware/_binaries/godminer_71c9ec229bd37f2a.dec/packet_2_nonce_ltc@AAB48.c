int __fastcall packet_2_nonce_ltc(_DWORD *a1, _BYTE *a2, int a3, _BYTE *a4, _DWORD *a5, int *a6, _DWORD *a7)
{
  int v12; // r2
  int v13; // r3
  int v14; // r8
  int v15; // r1
  int v16; // r3
  int v17; // r2
  int v18; // r3
  int v19; // r3
  unsigned int v20; // r8
  int v21; // r0
  int v22; // r2
  int v23; // r0
  int v24; // r1

  if ( (unsigned __int8)a2[8] >> 5 != 4 )
    return 1;
  v12 = BM_CRC5(a2 + 2, 51);
  v13 = a2[8] & 0x1F;
  if ( v12 == v13 )
  {
    v14 = a1[158];
    v15 = (unsigned __int8)a2[7];
    v16 = *(_DWORD *)(v14 + 8 * v15);
    v17 = *(_DWORD *)(v14 + 8 * v15 + 4);
    *(_DWORD *)a3 = v16;
    *(_DWORD *)(a3 + 4) = v17;
    *a7 = v16;
    strcpy((char *)(a3 + 16), (const char *)(v14 + ((v15 + 16) << 6)));
    *(_DWORD *)(a3 + 80) = *(_DWORD *)(a2 + 2);
    *(_BYTE *)(a3 + 84) = a2[6] & 0x3F;
    v18 = (unsigned __int8)a2[7];
    *(_BYTE *)(a3 + 85) = v18;
    memcpy((void *)(a3 + 86), (const void *)(v14 + 16 * (v18 + 1504)), *(_DWORD *)(v14 + 4 * (v18 + 6528)));
    v19 = (unsigned __int8)a2[7];
    *(_DWORD *)(a3 + 104) = *(_DWORD *)(v14 + 4 * (v19 + 6528));
    *(_DWORD *)(a3 + 108) = *(_DWORD *)(v14 + 4 * (v19 + 6656));
    v20 = (unsigned __int8)a2[2];
    v21 = ((unsigned __int8)((_BYTE)v20 << 7) | ((unsigned __int8)a2[3] >> 1)) / a1[62];
    if ( v21 >= a1[51] )
    {
      v23 = rand();
      sub_12F1D4(v23, a1[51]);
      v21 = v24;
      *a6 = v24;
      v20 = (unsigned __int8)a2[2];
    }
    else
    {
      *a6 = v21;
    }
    v22 = *(_DWORD *)(a3 + 80);
    *(_DWORD *)(a3 + 8) = v21;
    *(_DWORD *)(a3 + 12) = v20 >> 1;
    *a5 = v22;
    *a4 = 1;
    return 0;
  }
  else
  {
    printf("chain[%d] get nonce crc error calc value %04x expected value %04x\n", a1[36], v12, v13);
    return 2;
  }
}
