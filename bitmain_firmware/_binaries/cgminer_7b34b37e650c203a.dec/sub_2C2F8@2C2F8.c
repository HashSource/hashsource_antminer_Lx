char *__fastcall sub_2C2F8(const char *a1, _DWORD *a2)
{
  char *result; // r0

  result = sub_40268(a1, a2);
  if ( !result && (unsigned int)(*a2 - 42) > 0x2B )
    return "Value out of range";
  return result;
}
