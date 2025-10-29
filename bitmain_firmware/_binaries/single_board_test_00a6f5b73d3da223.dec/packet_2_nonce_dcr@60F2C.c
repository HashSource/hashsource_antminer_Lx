int __fastcall packet_2_nonce_dcr(unsigned int *a1, _BYTE *a2, int a3, _BYTE *a4, void *dest, _DWORD *a6, _DWORD *a7)
{
  int v8; // r0
  int v9; // r1
  unsigned __int16 v13; // [sp+14h] [bp+14h]
  unsigned int v14; // [sp+18h] [bp+18h]
  unsigned __int8 v15; // [sp+1Fh] [bp+1Fh]

  if ( (char)a2[10] >= 0 )
    return 1;
  v14 = a1[156];
  *(_QWORD *)a3 = *(_QWORD *)(8 * (unsigned __int8)a2[9] + v14);
  *a7 = *(_DWORD *)(8 * (unsigned __int8)a2[9] + v14);
  strcpy((char *)(a3 + 16), (const char *)(32 * ((unsigned __int8)a2[9] + 32) + v14));
  *(_BYTE *)(a3 + 52) = a2[3];
  memcpy((void *)(a3 + 53), (const void *)(180 * (unsigned __int8)a2[9] + 5260 + v14), 0xBu);
  memcpy((void *)(a3 + 48), a2 + 4, 4u);
  *(_BYTE *)(a3 + 64) = a2[8];
  *(_BYTE *)(a3 + 65) = a2[9] & 0x7F;
  v15 = (unsigned __int8)a2[3] / a1[60];
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
  *(_DWORD *)(a3 + 12) = (unsigned __int8)a2[4];
  v13 = BM_CRC5(a2 + 2, 0x43u);
  if ( v13 == (a2[10] & 0x1F) )
  {
    memcpy(dest, (const void *)(a3 + 48), 4u);
    *a4 = 1;
    return 0;
  }
  else
  {
    printf("get nonce crc error calc value %04x expected value %04x\n", v13, a2[10] & 0x1F);
    return 2;
  }
}
