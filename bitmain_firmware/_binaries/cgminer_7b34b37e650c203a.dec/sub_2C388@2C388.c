char *__fastcall sub_2C388(const char *a1, _DWORD *a2)
{
  char *result; // r0

  result = sub_40268(a1, a2);
  if ( !result && *a2 > 4u )
    return "Value out of range";
  return result;
}
