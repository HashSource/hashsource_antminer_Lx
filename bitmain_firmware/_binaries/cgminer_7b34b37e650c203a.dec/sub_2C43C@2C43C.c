char *__fastcall sub_2C43C(const char *a1, _DWORD *a2)
{
  char *result; // r0

  result = sub_40268(a1, a2);
  if ( !result && *a2 > 0xFFu )
    return "Value out of range";
  return result;
}
