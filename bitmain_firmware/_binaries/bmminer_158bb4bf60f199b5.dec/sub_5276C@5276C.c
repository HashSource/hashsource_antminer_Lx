char *__fastcall sub_5276C(const char *a1, _DWORD *a2)
{
  char *result; // r0

  result = sub_6448C(a1, a2);
  if ( !result && (unsigned int)(*a2 - 42) > 0x14 )
    return "Value out of range";
  return result;
}
