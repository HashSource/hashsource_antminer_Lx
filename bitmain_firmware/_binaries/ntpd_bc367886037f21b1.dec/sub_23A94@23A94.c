__int16 *sub_23A94()
{
  int v0; // r0

  if ( !word_B86C8 )
  {
    word_B84A0 = __rev16(sub_23340());
    return sub_1E934(0);
  }
  v0 = sub_3197C((unsigned __int16)word_B86C8);
  if ( v0 )
  {
    word_B84A0 = __rev16(sub_2329C(v0));
    return sub_1E934(0);
  }
  return (__int16 *)sub_1F270(4);
}
