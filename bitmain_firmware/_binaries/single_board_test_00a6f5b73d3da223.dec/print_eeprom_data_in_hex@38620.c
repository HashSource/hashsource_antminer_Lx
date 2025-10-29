int __fastcall print_eeprom_data_in_hex(int a1, unsigned int a2)
{
  unsigned __int8 i; // [sp+Fh] [bp+Fh]

  for ( i = 0; i < a2; ++i )
  {
    printf("%02X", *(unsigned __int8 *)(i + a1));
    if ( i )
    {
      if ( (i & 7) == 7 )
        putchar(32);
      if ( (i & 0xF) == 0xF )
        putchar(10);
    }
  }
  return puts("\n");
}
