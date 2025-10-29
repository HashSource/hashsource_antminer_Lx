int __fastcall set_core_reg_base(int a1, int a2)
{
  char v3; // r0
  unsigned __int8 v6[2]; // [sp+Ch] [bp-10h] BYREF
  char v7; // [sp+Eh] [bp-Eh] BYREF
  char v8; // [sp+Fh] [bp-Dh]
  __int64 v9; // [sp+10h] [bp-Ch]

  if ( *(_BYTE *)(a1 + 256) != 1 )
    return 4;
  v8 = 0;
  v9 = 0;
  v6[0] = 85;
  v6[1] = -86;
  v7 = 4;
  v7 = (16 * (*(_BYTE *)(a2 + 8) & 1)) & 0x1B | 0x44;
  v8 = 10;
  LOBYTE(v9) = *(_BYTE *)(a2 + 9);
  BYTE1(v9) = *(_WORD *)(a2 + 10);
  BYTE2(v9) = *(_BYTE *)(a2 + 12);
  *(_DWORD *)((char *)&v9 + 3) = reverse_byte_order_32(*(_DWORD *)a2);
  v3 = BM_CRC5(&v7, 0x48u);
  HIBYTE(v9) = HIBYTE(v9) & 0xE0 | v3 & 0x1F;
  send_command_packet(a1, v6, 0xCu);
  return 0;
}
