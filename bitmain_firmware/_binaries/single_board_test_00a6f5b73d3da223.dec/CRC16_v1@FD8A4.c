unsigned __int16 __cdecl CRC16_v1(const unsigned __int8 *buffer, int len)
{
  const unsigned __int8 *v2; // r3
  unsigned __int16 i; // [sp+Eh] [bp+Eh]

  for ( i = -1; len--; i = crc_itu_t_byte(i, *v2) )
    v2 = buffer++;
  return i;
}
