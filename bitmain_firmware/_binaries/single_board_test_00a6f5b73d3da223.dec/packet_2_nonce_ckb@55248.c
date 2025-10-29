int __fastcall packet_2_nonce_ckb(unsigned int *a1, _BYTE *a2, int a3, _BYTE *a4, void *dest, _DWORD *a6, _DWORD *a7)
{
  int v8; // r0
  int v9; // r1
  unsigned __int16 v13; // [sp+14h] [bp+14h]
  unsigned int v14; // [sp+18h] [bp+18h]
  unsigned __int8 v15; // [sp+1Fh] [bp+1Fh]

  if ( (char)a2[9] >= 0 )
    return 1;
  v14 = a1[156];
  *(_QWORD *)a3 = *(_QWORD *)(8 * (unsigned __int8)a2[8] + v14);
  *a7 = *(_DWORD *)(8 * (unsigned __int8)a2[8] + v14);
  strcpy((char *)(a3 + 16), (const char *)(32 * ((unsigned __int8)a2[8] + 64) + v14));
  memcpy((void *)(a3 + 48), (const void *)(48 * (unsigned __int8)a2[8] + 10240 + v14 + 32), 0x10u);
  memcpy((void *)(a3 + 59), a2 + 2, 5u);
  *(_BYTE *)(a3 + 64) = a2[7] & 0x7F;
  *(_BYTE *)(a3 + 65) = a2[8];
  v15 = (unsigned __int8)a2[2] / a1[60];
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
  *(_DWORD *)(a3 + 12) = a2[6] & 0x1F;
  v13 = BM_CRC5(a2 + 2, 0x3Bu);
  if ( v13 == (a2[9] & 0x1F) )
  {
    memcpy(dest, (const void *)(a3 + 48), 0x10u);
    *a4 = 1;
    return 0;
  }
  else
  {
    printf("get nonce crc error calc value %04x expected value %04x\n", v13, a2[9] & 0x1F);
    return 2;
  }
}
