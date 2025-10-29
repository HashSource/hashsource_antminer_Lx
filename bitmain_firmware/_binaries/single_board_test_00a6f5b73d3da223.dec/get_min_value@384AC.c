int8_t __cdecl get_min_value(int8_t *data, uint8_t data_length)
{
  unsigned __int8 i; // [sp+Eh] [bp+Eh]
  int8_t v4; // [sp+Fh] [bp+Fh]

  v4 = 127;
  for ( i = 0; i < (unsigned int)data_length; ++i )
  {
    if ( v4 > data[i] )
      v4 = data[i];
  }
  return v4;
}
