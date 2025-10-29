int hal_chain_max_num()
{
  int i; // [sp+4h] [bp-8h]

  if ( !dword_1505F4 )
    return -1;
  for ( i = 0;
        i <= 15
     && (dword_1505F8[4 * i] != -1
      || dword_1505F8[4 * i + 1] != -1
      || dword_1505F8[4 * i + 2] != -1
      || dword_1505F8[4 * i + 3] != -1);
        ++i )
  {
    ;
  }
  return i;
}
