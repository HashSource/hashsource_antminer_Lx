_DWORD *__fastcall sub_13DB0(_DWORD *result, int a2)
{
  unsigned int v2; // r1

  if ( !result || *result != 1114990113 )
    sub_10788();
  v2 = a2 + result[4];
  if ( v2 > result[3] )
    sub_10788();
  result[5] = v2;
  return result;
}
