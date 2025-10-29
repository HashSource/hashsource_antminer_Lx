int dump_eeprom_data()
{
  _BYTE v1[512]; // [sp+4h] [bp+4h] BYREF
  int i; // [sp+204h] [bp+204h]

  i = 0;
  eeprom_read(gChain, 0, (int)v1, 0x100u);
  for ( i = 0; i <= 255; ++i )
  {
    printf("%02x ", (unsigned __int8)v1[i]);
    if ( i && (i & 7) == 0 )
      putchar(10);
  }
  return putchar(10);
}
