int __fastcall set_core_reg_ltc(int a1, int a2)
{
  int v3; // r3
  char v4; // r0
  unsigned __int8 v8[2]; // [sp+Ch] [bp-10h] BYREF
  char v9; // [sp+Eh] [bp-Eh] BYREF
  __int64 v10; // [sp+Fh] [bp-Dh]

  if ( *(_BYTE *)(a1 + 256) != 1 )
    return 4;
  chip_setting_core_command_ltc(a1, *(unsigned __int8 *)(a2 + 13));
  v10 = 0;
  v8[0] = 85;
  v8[1] = -86;
  v9 = 4;
  v9 = (16 * (*(_BYTE *)(a2 + 8) & 1)) | 4;
  v9 = v9 & 0x1F | 0x40;
  LOBYTE(v10) = 9;
  BYTE1(v10) = *(_BYTE *)(a2 + 9);
  BYTE2(v10) = *(_WORD *)(a2 + 10) & 0xF;
  BYTE3(v10) = *(_BYTE *)(a2 + 12);
  v3 = (unsigned __int8)BYTE2(*(_DWORD *)a2) | *(_DWORD *)a2 & 0xFF00 | (*(_DWORD *)a2 << 16) & 0xFF0000;
  BYTE4(v10) = BYTE2(*(_DWORD *)a2);
  BYTE5(v10) = BYTE1(v3);
  BYTE6(v10) = BYTE2(v3);
  v4 = BM_CRC5(&v9, 0x40u);
  HIBYTE(v10) = HIBYTE(v10) & 0xE0 | v4 & 0x1F;
  send_command_packet(a1, v8, 0xBu);
  return 0;
}
