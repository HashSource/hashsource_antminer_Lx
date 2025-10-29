int __fastcall set_core_reg_base_9(int a1, int a2)
{
  char v3; // r0
  __int16 v6; // [sp+Ch] [bp+Ch] BYREF
  int v7; // [sp+Eh] [bp+Eh] BYREF
  char v8; // [sp+12h] [bp+12h]
  int v9; // [sp+13h] [bp+13h]

  if ( *(_BYTE *)(a1 + 144) != 1 )
    return 4;
  v6 = -21931;
  v8 = 0;
  v9 = 0;
  v7 = 4;
  LOBYTE(v7) = (16 * (*(_BYTE *)(a2 + 8) & 1)) | 4;
  LOBYTE(v7) = v7 & 0x1F | 0x40;
  BYTE1(v7) = 9;
  BYTE2(v7) = *(_BYTE *)(a2 + 9);
  HIBYTE(v7) = *(_WORD *)(a2 + 10);
  v8 = *(_BYTE *)(a2 + 12);
  LOBYTE(v9) = BYTE2(*(_DWORD *)a2);
  BYTE1(v9) = BYTE1(*(_DWORD *)a2);
  BYTE2(v9) = *(_DWORD *)a2;
  v3 = BM_CRC5(&v7, 0x40u);
  HIBYTE(v9) = HIBYTE(v9) & 0xE0 | v3 & 0x1F;
  send_command_packet(a1, (int)&v6, 0xBu);
  return 0;
}
