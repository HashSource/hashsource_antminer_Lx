int sub_18534()
{
  int result; // r0
  int v1; // r6
  const char *v2; // r0

  if ( sub_12B7C(&stru_33388, (int)"./../lib/isc/result.c", 152) )
    sub_15154("./../lib/isc/result.c", 152, "isc__mutex_init((&lock), \"./../lib/isc/result.c\", 152) == 0");
  dword_333A0 = 0;
  dword_333A4 = 0;
  result = sub_18370(0, 0x3Eu, (int)off_31138, isc_msgcat, 2);
  v1 = result;
  if ( result )
  {
    v2 = (const char *)sub_11084((_DWORD *)isc_msgcat, 1, 101, (int)"failed");
    return sub_1508C("./../lib/isc/result.c", 158, "register_table() %s: %u", v2, v1);
  }
  return result;
}
