int __fastcall set_chip_reg_base(int a1, int a2)
{
  char v3; // r0
  unsigned __int8 v6[2]; // [sp+Ch] [bp-10h] BYREF
  char v7; // [sp+Eh] [bp-Eh] BYREF
  __int64 v8; // [sp+Fh] [bp-Dh]

  if ( *(_BYTE *)(a1 + 256) != 1 )
    return 4;
  v8 = 0;
  v6[0] = 85;
  v6[1] = -86;
  v7 = 1;
  v7 = (16 * (*(_BYTE *)(a2 + 8) & 1)) & 0x1E | 0x41;
  LOBYTE(v8) = 9;
  BYTE1(v8) = *(_BYTE *)(a2 + 9);
  BYTE2(v8) = *(_WORD *)(a2 + 10);
  *(_DWORD *)((char *)&v8 + 3) = reverse_byte_order_32(*(_DWORD *)a2);
  v3 = BM_CRC5(&v7, 0x40u);
  HIBYTE(v8) = HIBYTE(v8) & 0xE0 | v3 & 0x1F;
  send_command_packet(a1, v6, 0xBu);
  return 0;
}
