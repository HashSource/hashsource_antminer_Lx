int eeprom_load()
{
  int v2; // [sp+1000h] [bp-Ch]
  unsigned __int8 i; // [sp+1007h] [bp-5h]

  v2 = 0;
  if ( dword_15FA68 )
  {
    if ( *(_BYTE *)(dword_15FA68 + 80) )
      return 0;
  }
  else if ( sub_9D24C() )
  {
    return -1;
  }
  for ( i = 0; i < dword_15FAAC; ++i )
    v2 |= eeprom_load_one_chain(dword_15FA6C[i], dword_15FA68);
  if ( !v2 )
    *(_BYTE *)(dword_15FA68 + 80) = 1;
  return v2;
}
