int __fastcall set_core_reg_base_9(int a1, int a2)
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
  v7 = 4;
  v7 = (16 * (*(_BYTE *)(a2 + 8) & 1)) | 4;
  v7 = v7 & 0x1F | 0x40;
  LOBYTE(v8) = 9;
  BYTE1(v8) = *(_BYTE *)(a2 + 9);
  BYTE2(v8) = *(_WORD *)(a2 + 10);
  BYTE3(v8) = *(_BYTE *)(a2 + 12);
  BYTE4(v8) = BYTE2(*(_DWORD *)a2);
  BYTE5(v8) = BYTE1(*(_DWORD *)a2);
  BYTE6(v8) = *(_DWORD *)a2;
  v3 = BM_CRC5(&v7, 0x40u);
  HIBYTE(v8) = HIBYTE(v8) & 0xE0 | v3 & 0x1F;
  send_command_packet(a1, v6, 0xBu);
  return 0;
}
