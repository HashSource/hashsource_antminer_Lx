_BYTE *__fastcall sub_E2754(_BYTE *result, char a2, int a3, unsigned __int8 a4)
{
  unsigned __int8 i; // [sp+15h] [bp+15h]
  __int16 v5; // [sp+16h] [bp+16h]

  *result = 85;
  result[1] = -86;
  result[2] = a4 + 4;
  result[3] = a2;
  v5 = (unsigned __int8)result[3] + (unsigned __int8)result[2];
  if ( a3 )
  {
    for ( i = 0; i < (unsigned int)a4; ++i )
    {
      result[i + 4] = *(_BYTE *)(i + a3);
      v5 += *(unsigned __int8 *)(i + a3);
    }
    result[i + 4] = HIBYTE(v5);
    result[i + 5] = v5;
  }
  else
  {
    result[4] = HIBYTE(v5);
    result[5] = v5;
  }
  return result;
}
