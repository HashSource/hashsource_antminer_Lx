int __fastcall pakcet_2_nonce_vbk(int a1, _BYTE *a2, int a3, _BYTE *a4, void *dest, _DWORD *a6, _DWORD *a7)
{
  unsigned __int16 v11; // [sp+16h] [bp+16h]
  int v12; // [sp+18h] [bp+18h]
  unsigned __int8 v13; // [sp+1Fh] [bp+1Fh]

  if ( a2[2] != 8 || (char)a2[9] >= 0 )
    return 1;
  v12 = *(_DWORD *)(a1 + 624);
  *(_QWORD *)a3 = *(_QWORD *)(8 * (unsigned __int8)a2[8] + v12);
  *a7 = *(_DWORD *)(8 * (unsigned __int8)a2[8] + v12);
  *(_QWORD *)(a3 + 16) = *(_QWORD *)(8 * ((unsigned __int8)a2[8] + 256) + v12);
  memcpy((void *)(a3 + 24), a2 + 3, 4u);
  *(_DWORD *)(a3 + 24) = _byteswap_ulong(*(_DWORD *)(a2 + 3));
  *(_BYTE *)(a3 + 28) = a2[7] & 0x7F;
  *(_BYTE *)(a3 + 29) = a2[8];
  *(_DWORD *)(a3 + 36) = *(_DWORD *)(v12 + 4 * ((unsigned __int8)a2[8] + 5120));
  memcpy((void *)(a3 + 40), (const void *)(((unsigned __int8)a2[8] << 6) + 4132 + v12), 0x10u);
  v13 = (unsigned int)(unsigned __int8)a2[3] / *(_DWORD *)(a1 + 240);
  *a6 = v13;
  *(_DWORD *)(a3 + 8) = v13;
  *(_DWORD *)(a3 + 12) = 0;
  v11 = BM_CRC5(a2 + 2, 8 * (unsigned __int8)a2[2] - 5);
  if ( v11 == (a2[9] & 0x1F) )
  {
    memcpy(dest, (const void *)(a3 + 24), 4u);
    *a4 = 1;
    return 0;
  }
  else
  {
    printf("get nonce crc error calc value %04x expected value %04x\n", v11, a2[9] & 0x1F);
    return 2;
  }
}
