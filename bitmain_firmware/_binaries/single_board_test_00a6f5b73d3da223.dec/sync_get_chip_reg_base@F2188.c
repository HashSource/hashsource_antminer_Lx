int __fastcall sync_get_chip_reg_base(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  char v9; // r0
  __int16 v15; // [sp+18h] [bp+10h] BYREF
  int v16; // [sp+1Ah] [bp+12h] BYREF
  char v17; // [sp+1Eh] [bp+16h]

  if ( *(_BYTE *)(a1 + 144) != 1 )
    return 4;
  v15 = -21931;
  v17 = 0;
  v16 = 2;
  LOBYTE(v16) = (16 * (*(_BYTE *)(a2 + 8) & 1)) | 2;
  LOBYTE(v16) = v16 & 0x1F | 0x40;
  BYTE1(v16) = 5;
  BYTE2(v16) = *(_BYTE *)(a2 + 9);
  HIBYTE(v16) = *(_WORD *)(a2 + 10);
  v9 = BM_CRC5(&v16, 0x20u);
  v17 = v17 & 0xE0 | v9 & 0x1F;
  send_command_packet(a1, (int)&v15, 7u);
  if ( *(_BYTE *)(a2 + 8) != 1 )
    a3 = 1;
  return (*(int (__fastcall **)(int, int, int, int, int, int))(a1 + 172))(a1, a3, a4, a5, a7, a8);
}
