int __fastcall set_inactive_base(pthread_mutex_t *a1)
{
  char v2; // r0
  int v4; // [sp+0h] [bp-18h] BYREF
  __int16 v5; // [sp+4h] [bp-14h]
  char v6; // [sp+6h] [bp-12h]

  if ( !a1[6].__size[8] )
    return 4;
  v5 = 0;
  v6 = 0;
  v4 = 89369173;
  v2 = BM_CRC5((_BYTE *)&v4 + 2, 32);
  v6 = v6 & 0xE0 | v2 & 0x1F;
  send_command_packet(a1, (int)&v4, 7u);
  return 0;
}
