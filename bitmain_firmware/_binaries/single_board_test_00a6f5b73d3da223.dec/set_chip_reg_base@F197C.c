int __fastcall set_chip_reg_base(int a1, int a2)
{
  char v3; // r0
  __int16 v6; // [sp+Ch] [bp+Ch] BYREF
  _WORD v7[5]; // [sp+Eh] [bp+Eh] BYREF

  if ( *(_BYTE *)(a1 + 144) != 1 )
    return 4;
  v6 = -21931;
  memset(&v7[2], 0, 5);
  *(_DWORD *)v7 = 1;
  LOBYTE(v7[0]) = (16 * (*(_BYTE *)(a2 + 8) & 1)) & 0x1E | 0x41;
  HIBYTE(v7[0]) = 9;
  LOBYTE(v7[1]) = *(_BYTE *)(a2 + 9);
  HIBYTE(v7[1]) = *(_WORD *)(a2 + 10);
  *(_DWORD *)&v7[2] = reverse_byte_order_32(*(_DWORD *)a2);
  v3 = BM_CRC5(v7, 0x40u);
  LOBYTE(v7[4]) = v7[4] & 0xE0 | v3 & 0x1F;
  send_command_packet(a1, (int)&v6, 0xBu);
  return 0;
}
