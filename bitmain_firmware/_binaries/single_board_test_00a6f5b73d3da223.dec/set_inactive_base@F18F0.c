int __fastcall set_inactive_base(int a1)
{
  char v2; // r0
  __int16 v5; // [sp+8h] [bp+8h] BYREF
  int v6; // [sp+Ah] [bp+Ah] BYREF
  char v7; // [sp+Eh] [bp+Eh]

  if ( *(_BYTE *)(a1 + 144) != 1 )
    return 4;
  v5 = -21931;
  v7 = 0;
  v6 = 1363;
  v2 = BM_CRC5(&v6, 0x20u);
  v7 = v7 & 0xE0 | v2 & 0x1F;
  send_command_packet(a1, (int)&v5, 7u);
  return 0;
}
