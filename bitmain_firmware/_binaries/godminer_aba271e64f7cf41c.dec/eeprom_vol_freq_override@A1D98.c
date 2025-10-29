int __fastcall eeprom_vol_freq_override(int a1, int a2)
{
  int v6; // [sp+1008h] [bp-Ch]
  unsigned __int8 i; // [sp+100Fh] [bp-5h]

  v6 = 0;
  if ( !dword_15FA68 && sub_9D24C() )
    return -1;
  for ( i = 0; i < dword_15FAAC; ++i )
    v6 |= eeprom_rewrite_one_chain(dword_15FA6C[i], dword_15FA68, a1, a2);
  if ( !v6 )
    *(_BYTE *)(dword_15FA68 + 80) = 1;
  return v6;
}
