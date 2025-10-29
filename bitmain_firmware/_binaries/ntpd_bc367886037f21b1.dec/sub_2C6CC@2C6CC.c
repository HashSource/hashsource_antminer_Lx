unsigned __int8 *__fastcall sub_2C6CC(unsigned __int8 *a1)
{
  const unsigned __int16 **v2; // r0
  unsigned __int8 *v3; // r2
  const unsigned __int16 *v4; // r1
  unsigned __int8 *result; // r0

  v2 = _ctype_b_loc();
  v3 = a1;
  v4 = *v2;
  do
    result = v3++;
  while ( (v4[*result] & 0x2000) != 0 );
  return result;
}
