int eeprom_load()
{
  int v2; // [sp+1000h] [bp+1000h]
  unsigned __int8 i; // [sp+1007h] [bp+1007h]

  v2 = 0;
  if ( dword_479E64 )
  {
    if ( *(_BYTE *)(dword_479E64 + 80) )
      return 0;
  }
  else if ( sub_467E4() )
  {
    return -1;
  }
  for ( i = 0; i < dword_479EA8; ++i )
    v2 |= eeprom_load_one_chain(dword_479E68[i], dword_479E64);
  if ( !v2 )
    *(_BYTE *)(dword_479E64 + 80) = 1;
  return v2;
}
