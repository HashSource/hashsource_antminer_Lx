uint8_t __cdecl CRC5_long(const uint8_t *pdata, uint32_t length)
{
  _BYTE v4[5]; // [sp+Ch] [bp+Ch]
  int v5; // [sp+14h] [bp+14h]
  char v6; // [sp+18h] [bp+18h]
  bool v7; // [sp+1Ah] [bp+1Ah]
  uint8_t v8; // [sp+1Bh] [bp+1Bh]
  int v9; // [sp+1Ch] [bp+1Ch]
  unsigned int v10; // [sp+20h] [bp+20h]
  uint32_t i; // [sp+24h] [bp+24h]

  v5 = 16843009;
  v6 = 1;
  v10 = 128;
  v9 = 0;
  for ( i = 0; i < length; ++i )
  {
    v7 = (v10 & *pdata) != 0;
    v4[0] = v7 ^ v6;
    v4[1] = v5;
    v4[2] = v7 ^ v6 ^ BYTE1(v5);
    *(_WORD *)&v4[3] = HIWORD(v5);
    v10 >>= 1;
    if ( ++v9 == 8 )
    {
      v10 = 128;
      v9 = 0;
      ++pdata;
    }
    v5 = *(_DWORD *)v4;
    v6 = v4[4];
  }
  v8 = 0;
  if ( v6 )
    v8 = 16;
  if ( HIBYTE(v5) )
    v8 |= 8u;
  if ( BYTE2(v5) )
    v8 |= 4u;
  if ( BYTE1(v5) )
    v8 |= 2u;
  if ( (_BYTE)v5 )
    v8 |= 1u;
  return v8;
}
