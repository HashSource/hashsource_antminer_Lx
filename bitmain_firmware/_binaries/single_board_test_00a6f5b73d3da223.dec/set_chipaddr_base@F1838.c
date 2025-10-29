int __fastcall set_chipaddr_base(int a1, int a2, int a3)
{
  char v4; // r0
  __int16 v9; // [sp+14h] [bp+14h] BYREF
  int v10; // [sp+16h] [bp+16h] BYREF
  char v11; // [sp+1Ah] [bp+1Ah]
  int i; // [sp+1Ch] [bp+1Ch]

  if ( *(_BYTE *)(a1 + 144) != 1 )
    return 4;
  (*(void (__fastcall **)(int))(a1 + 152))(a1);
  usleep(0x2710u);
  v9 = -21931;
  v11 = 0;
  v10 = 1344;
  for ( i = 0; i < a3; ++i )
  {
    usleep(0x2710u);
    BYTE2(v10) = *(_BYTE *)(i + a2);
    v4 = BM_CRC5(&v10, 8 * (BYTE1(v10) - 1));
    v11 = v11 & 0xE0 | v4 & 0x1F;
    send_command_packet(a1, (int)&v9, 7u);
  }
  return 0;
}
