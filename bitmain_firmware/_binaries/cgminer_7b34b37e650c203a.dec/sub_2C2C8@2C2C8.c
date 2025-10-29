char *__fastcall sub_2C2C8(const char *a1, _DWORD *a2)
{
  char *result; // r0

  result = sub_40268(a1, a2);
  if ( !result && (unsigned int)(*a2 - 22) > 0x21 )
    return "Value out of range";
  return result;
}
