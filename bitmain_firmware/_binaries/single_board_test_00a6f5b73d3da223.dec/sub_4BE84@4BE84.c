_BYTE *__fastcall sub_4BE84(_BYTE *result, int a2, int a3, int a4)
{
  result[7] = a3;
  result[6] = BYTE1(a3);
  result[5] = BYTE2(a3);
  result[4] = HIBYTE(a3);
  result[3] = a4;
  result[2] = BYTE1(a4);
  result[1] = BYTE2(a4);
  *result = HIBYTE(a4);
  return result;
}
