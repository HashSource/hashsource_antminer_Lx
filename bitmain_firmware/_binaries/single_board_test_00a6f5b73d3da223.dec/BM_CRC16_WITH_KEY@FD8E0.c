int __fastcall BM_CRC16_WITH_KEY(const unsigned __int8 *a1, int a2, unsigned __int16 a3)
{
  const unsigned __int8 *v3; // r3

  while ( a2-- )
  {
    v3 = a1++;
    a3 = crc_itu_t_byte(a3, *v3);
  }
  return a3;
}
