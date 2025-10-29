int __fastcall sync_get_chip_reg_ltc(int a1, int a2, int a3, int a4, int *a5, unsigned __int64 a6)
{
  char v7; // r0
  __int16 v13; // [sp+18h] [bp+10h] BYREF
  int v14; // [sp+1Ah] [bp+12h] BYREF
  char v15; // [sp+1Eh] [bp+16h]

  if ( *(_BYTE *)(a1 + 144) != 1 )
    return 4;
  v13 = -21931;
  v15 = 0;
  v14 = 2;
  LOBYTE(v14) = (16 * (*(_BYTE *)(a2 + 8) & 1)) | 2;
  LOBYTE(v14) = v14 & 0x1F | 0x40;
  BYTE1(v14) = 5;
  BYTE2(v14) = *(_BYTE *)(a2 + 9);
  HIBYTE(v14) = *(_WORD *)(a2 + 10);
  v15 = 32 * (*(_BYTE *)(a2 + 15) & 3);
  v7 = BM_CRC5(&v14, 0x20u);
  v15 = v15 & 0xE0 | v7 & 0x1F;
  send_command_packet(a1, (int)&v13, 7u);
  if ( *(_BYTE *)(a2 + 8) != 1 )
    a3 = 1;
  return sync_get_status_ltc(a1, a3, a4, a5, a6);
}
