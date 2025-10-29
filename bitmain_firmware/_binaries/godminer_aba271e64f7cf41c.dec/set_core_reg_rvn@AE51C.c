int __fastcall set_core_reg_rvn(int a1, int a2)
{
  char v3; // r0
  _BYTE v7[14]; // [sp+8h] [bp-14h] BYREF

  if ( *(_BYTE *)(a1 + 256) != 1 )
    return 4;
  *(_QWORD *)v7 = 305749;
  *(_QWORD *)&v7[6] = 0;
  v7[2] = (16 * (*(_BYTE *)(a2 + 8) & 1)) & 0x1B | 0x44;
  v7[3] = 12;
  v7[4] = *(_BYTE *)(a2 + 9);
  *(_WORD *)&v7[5] = reverse_byte_order_16(*(_WORD *)(a2 + 10) & 0xFFF);
  v7[7] = *(_BYTE *)(a2 + 12);
  v7[8] = *(_BYTE *)(a2 + 13);
  *(_DWORD *)&v7[9] = reverse_byte_order_32(*(_DWORD *)a2);
  v3 = BM_CRC5(&v7[2], 0x58u);
  v7[13] = v7[13] & 0xE0 | v3 & 0x1F;
  send_command_packet(a1, v7, 0xEu);
  return 0;
}
