int __fastcall packet_2_nonce_ckb2(unsigned int *a1, _BYTE *a2, int a3, _BYTE *a4, void *dest, _DWORD *a6, _DWORD *a7)
{
  int v8; // r0
  int v9; // r1
  unsigned __int16 v13; // [sp+14h] [bp+14h]
  unsigned int v14; // [sp+20h] [bp+20h]
  unsigned __int8 v15; // [sp+27h] [bp+27h]

  if ( (char)a2[11] >= 0 )
    return 1;
  v14 = a1[156];
  *(_QWORD *)a3 = *(_QWORD *)(8 * (unsigned __int8)a2[10] + v14);
  *a7 = *(_DWORD *)(8 * (unsigned __int8)a2[10] + v14);
  strcpy((char *)(a3 + 16), (const char *)(32 * ((unsigned __int8)a2[10] + 32) + v14));
  memcpy((void *)(a3 + 48), (const void *)(48 * (unsigned __int8)a2[10] + 5120 + v14 + 32), 0x10u);
  memcpy((void *)(a3 + 58), a2 + 3, 7u);
  *(_BYTE *)(a3 + 65) = a2[10] & 0x7F;
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
  *(_DWORD *)(a3 + 12) = (a2[8] & 7) + 4 * (a2[8] >> 3);
  v13 = BM_CRC5(a2 + 2, 0x4Bu);
  if ( v13 == (a2[11] & 0x1F) )
  {
    memcpy(dest, (const void *)(a3 + 48), 0x10u);
    *a4 = 1;
    return 0;
  }
  else
  {
    printf("get nonce crc error calc value %04x expected value %04x\n", v13, a2[11] & 0x1F);
    return 2;
  }
}
