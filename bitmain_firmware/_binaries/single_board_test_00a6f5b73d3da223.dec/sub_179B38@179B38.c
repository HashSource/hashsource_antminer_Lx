_DWORD *__fastcall sub_179B38(_DWORD *result, int a2)
{
  _DWORD *v2; // [sp+4h] [bp+4h]
  unsigned int i; // [sp+Ch] [bp+Ch]

  v2 = result;
  result[32] = 0;
  for ( i = 0; i <= 0xE; ++i )
  {
    result = &v2[2 * i + 34];
    *result = 0;
    result[1] = 0;
  }
  v2[64] = 0;
  v2[65] = ((a2 & 0xFF00) << 8) | (a2 << 24);
  v2[66] = 0;
  v2[67] = 0;
  return result;
}
