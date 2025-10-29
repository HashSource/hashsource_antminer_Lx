int __fastcall set_core_reg_base2(int a1, int a2)
{
  char v3; // r0
  __int16 v7; // [sp+8h] [bp+8h] BYREF
  _BYTE v8[10]; // [sp+Ah] [bp+Ah] BYREF
  char v9; // [sp+14h] [bp+14h]
  void *s; // [sp+18h] [bp+18h]
  size_t nmemb; // [sp+1Ch] [bp+1Ch]

  if ( *(_BYTE *)(a1 + 144) != 1 )
    return 4;
  v7 = -21931;
  *(_WORD *)&v8[4] = 0;
  *(_DWORD *)&v8[6] = 0;
  v9 = 0;
  *(_DWORD *)v8 = 4;
  v8[0] = (16 * (*(_BYTE *)(a2 + 8) & 1)) & 0x1B | 0x44;
  v8[1] = 11;
  v8[2] = *(_BYTE *)(a2 + 9);
  v8[3] = *(_BYTE *)(a2 + 12);
  *(_WORD *)&v8[4] = reverse_byte_order_16(*(_WORD *)(a2 + 10));
  *(_DWORD *)&v8[6] = reverse_byte_order_32(*(_DWORD *)a2);
  nmemb = 12;
  s = calloc(0xCu, 1u);
  memset(s, 0, 4u);
  memcpy(s, v8, 0xAu);
  v3 = BM_CRC5(s, 8 * nmemb);
  v9 = v9 & 0xE0 | v3 & 0x1F;
  free(s);
  send_command_packet(a1, (int)&v7, 0xDu);
  return 0;
}
