int sub_32B70()
{
  int v0; // r4
  int i; // r0
  int v2; // r0
  int result; // r0

  v0 = (unsigned __int16)word_B9E9E;
  for ( i = (unsigned __int16)word_B9E9C; (unsigned __int16)word_B9E9C != v0; v0 = (unsigned __int16)(v0 + 1) )
  {
    if ( v0 )
    {
      v2 = sub_3197C(v0);
      if ( v2 )
        sub_31CC8(v2);
    }
    i = (unsigned __int16)word_B9E9C;
  }
  result = sub_3197C(i);
  if ( result )
    return sub_31CC8(result);
  return result;
}
