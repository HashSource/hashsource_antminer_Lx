_DWORD *__fastcall sub_172230(_DWORD *result, int a2)
{
  _DWORD *v2; // [sp+4h] [bp+4h]
  unsigned int i; // [sp+Ch] [bp+Ch]

  v2 = result;
  result[16] = 0;
  for ( i = 0; i <= 6; ++i )
  {
    result = &v2[2 * i + 18];
    *result = 0;
    result[1] = 0;
  }
  v2[32] = 0;
  v2[33] = ((a2 & 0xFF00) << 8) | (a2 << 24);
  v2[34] = 0;
  v2[35] = 0;
  return result;
}
