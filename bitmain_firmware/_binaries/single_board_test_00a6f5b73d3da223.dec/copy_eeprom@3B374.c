int __fastcall copy_eeprom(unsigned int a1, unsigned int a2)
{
  int result; // r0
  _BYTE v5[8]; // [sp+Ch] [bp+Ch] BYREF
  int i; // [sp+14h] [bp+14h]

  if ( eeprom_open(a1) < 0 )
    printf("EEPROM init fail!!!");
  result = eeprom_open(a2);
  if ( result < 0 )
    result = printf("EEPROM init fail!!!");
  for ( i = 0; i <= 89; ++i )
  {
    eeprom_read(a1, i, (int)v5, 1u);
    eeprom_write(a2, i, (int)v5, 1u);
    result = printf("write eeprom  %02x\n", v5[0]);
  }
  return result;
}
