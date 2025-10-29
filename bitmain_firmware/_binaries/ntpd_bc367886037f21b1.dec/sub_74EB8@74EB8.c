int sub_74EB8()
{
  int result; // r0
  int v1; // r6
  const char *v2; // r0

  if ( sub_781A0(&stru_10626C, "./../lib/isc/result.c", 152) )
    sub_6F24C("./../lib/isc/result.c", 152, "isc__mutex_init((&lock), \"./../lib/isc/result.c\", 152) == 0");
  dword_106284 = 0;
  dword_106288 = 0;
  result = sub_74CF4(0, 0x3Eu, (int)off_B6DE4, isc_msgcat, 2);
  v1 = result;
  if ( result )
  {
    v2 = (const char *)sub_73430((_DWORD *)isc_msgcat, 1, 101, (int)"failed");
    return sub_6F184("./../lib/isc/result.c", 158, (int)"register_table() %s: %u", v2, v1);
  }
  return result;
}
