uint16_t __cdecl CRC16(const uint8_t *p_data, uint16_t w_len)
{
  const uint8_t *v2; // r3
  unsigned __int16 v7; // [sp+Ch] [bp+Ch]
  unsigned __int8 v8; // [sp+Eh] [bp+Eh]
  unsigned __int8 v9; // [sp+Fh] [bp+Fh]

  v9 = -1;
  v8 = -1;
  while ( w_len-- )
  {
    v2 = p_data++;
    v7 = (unsigned __int8)(v8 ^ *v2);
    v8 = v9 ^ chCRCHTalbe[v8 ^ *v2];
    v9 = chCRCLTalbe[v7];
  }
  return v8 | (v9 << 8);
}
