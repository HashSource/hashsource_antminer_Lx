int __fastcall set_chip_reg_ltc(int a1, int a2)
{
  char v3; // r0
  __int16 v7; // [sp+Ch] [bp+Ch] BYREF
  _WORD v8[5]; // [sp+Eh] [bp+Eh] BYREF

  if ( *(_BYTE *)(a1 + 144) != 1 )
    return 4;
  v7 = -21931;
  memset(&v8[2], 0, 5);
  *(_DWORD *)v8 = 1;
  LOBYTE(v8[0]) = (16 * (*(_BYTE *)(a2 + 8) & 1)) & 0x1E | 0x41;
  HIBYTE(v8[0]) = 9;
  LOBYTE(v8[1]) = *(_BYTE *)(a2 + 9);
  HIBYTE(v8[1]) = *(_WORD *)(a2 + 10);
  *(_DWORD *)&v8[2] = reverse_byte_order_32(*(_DWORD *)a2);
  LOBYTE(v8[4]) = 32 * (*(_BYTE *)(a2 + 15) & 3);
  v3 = BM_CRC5(v8, 0x40u);
  LOBYTE(v8[4]) = v8[4] & 0xE0 | v3 & 0x1F;
  send_command_packet(a1, (int)&v7, 0xBu);
  return 0;
}
