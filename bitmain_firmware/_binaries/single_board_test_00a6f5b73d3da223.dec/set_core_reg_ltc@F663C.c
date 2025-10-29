int __fastcall set_core_reg_ltc(int a1, int a2)
{
  char v3; // r0
  __int16 v7; // [sp+8h] [bp+8h] BYREF
  _WORD v8[5]; // [sp+Ah] [bp+Ah] BYREF
  unsigned int v9; // [sp+14h] [bp+14h]

  if ( *(_BYTE *)(a1 + 144) != 1 )
    return 4;
  LOWORD(v9) = *(_DWORD *)a2;
  BYTE2(v9) = BYTE2(v9) & 0xF0 | *(_WORD *)(a2 + 10) & 0xF;
  HIWORD(v9) = HIWORD(v9) & 0xF00F | (16 * *(unsigned __int8 *)(a2 + 12));
  HIBYTE(v9) = HIBYTE(v9) & 0xF | 0x40 | ((*(_BYTE *)(a2 + 14) & 1) << 7);
  v7 = -21931;
  memset(&v8[2], 0, 5);
  *(_DWORD *)v8 = 1;
  LOBYTE(v8[0]) = (16 * (*(_BYTE *)(a2 + 8) & 1)) & 0x1E | 0x41;
  HIBYTE(v8[0]) = 9;
  LOBYTE(v8[1]) = *(_BYTE *)(a2 + 9);
  HIBYTE(v8[1]) = 60;
  *(_DWORD *)&v8[2] = reverse_byte_order_32(v9);
  LOBYTE(v8[4]) = 32 * (*(_BYTE *)(a2 + 15) & 3);
  v3 = BM_CRC5(v8, 0x40u);
  LOBYTE(v8[4]) = v8[4] & 0xE0 | v3 & 0x1F;
  send_command_packet(a1, (int)&v7, 0xBu);
  return 0;
}
