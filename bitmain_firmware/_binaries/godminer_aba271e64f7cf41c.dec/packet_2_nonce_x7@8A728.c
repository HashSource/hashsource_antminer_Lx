int __fastcall packet_2_nonce_x7(unsigned int *a1, char *a2, int a3, _BYTE *a4, _DWORD *a5, _DWORD *a6, _DWORD *a7)
{
  int v8; // r0
  int v9; // r1
  _DWORD *v10; // r3
  unsigned int v15; // [sp+14h] [bp-18h]
  unsigned __int16 v16; // [sp+1Ah] [bp-12h]
  unsigned __int16 v17; // [sp+1Ch] [bp-10h]

  if ( a2[2] != 4 )
    return 100;
  v17 = ((unsigned __int8)a2[9] << 8) | (unsigned __int8)a2[8];
  a2[8] = 0;
  a2[9] = 0;
  v16 = BM_CRC16(a2, 52);
  if ( v16 == v17 )
  {
    v15 = a1[206];
    *(_BYTE *)(a3 + 228) = a2[12];
    *(_QWORD *)a3 = *(_QWORD *)(v15 + 8 * (unsigned __int8)a2[12]);
    *a7 = *(_DWORD *)(v15 + 8 * (unsigned __int8)a2[12]);
    *(_DWORD *)(a3 + 8) = (unsigned __int8)a2[3];
    strcpy((char *)(a3 + 16), (const char *)(v15 + (((unsigned __int8)a2[12] + 16) << 6)));
    memcpy((void *)(a3 + 80), (const void *)(v15 + 32 * ((unsigned __int8)a2[12] + 288)), 0x20u);
    *(_QWORD *)(a3 + 112) = *(_QWORD *)(v15 + 8 * ((unsigned __int8)a2[12] + 1664));
    *(_QWORD *)(a3 + 120) = *(_QWORD *)(v15 + 8 * ((unsigned __int8)a2[12] + 1792));
    strcpy((char *)(a3 + 128), (const char *)(v15 + (((unsigned __int8)a2[12] + 240) << 6)));
    memcpy((void *)(a3 + 192), a2 + 16, 0x20u);
    memcpy((void *)(a3 + 196), a2 + 20, 0x20u);
    *(_DWORD *)(a3 + 12) = *((_DWORD *)a2 + 4) % 0x1B0u % 0x48;
    if ( (unsigned __int8)a2[3] >= (int)a1[84] )
    {
      v8 = rand();
      sub_CC7AC(v8, a1[84]);
      *a6 = v9;
    }
    else
    {
      *a6 = (unsigned __int8)a2[3];
    }
    *a5 = *(_DWORD *)(a3 + 192);
    *a4 = 1;
    v10 = (_DWORD *)(a1[121] + 4 * (a1[86] * *a6 + *(_DWORD *)(a3 + 12)));
    ++*v10;
    return 0;
  }
  else
  {
    printf("chain[%d] get nonce crc error calc value %04x expected value %04x\n", v16, v17, v16);
    return 101;
  }
}
