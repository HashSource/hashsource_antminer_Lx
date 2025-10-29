__int16 *sub_239A4()
{
  int v0; // r0
  int v1; // r6
  unsigned int v2; // r0
  int v3; // r0
  unsigned __int8 *v4; // r4
  int v5; // t1

  if ( !word_B86C8 )
    return sub_2386C();
  v0 = sub_3197C((unsigned __int16)word_B86C8);
  v1 = v0;
  if ( !v0 )
    return (__int16 *)sub_1F270(4);
  v2 = sub_2329C(v0);
  if ( byte_B88DD )
    *(_BYTE *)(v1 + 74) = 0;
  word_B84A0 = __rev16(v2);
  v3 = 4;
  v4 = (unsigned __int8 *)&unk_9378C;
  do
  {
    sub_20594(v3, v1);
    v5 = *++v4;
    v3 = v5;
  }
  while ( v5 );
  return sub_1E934(0);
}
