char *__fastcall sub_5285C(const char *a1, _DWORD *a2)
{
  char *result; // r0

  result = sub_6448C(a1, a2);
  if ( !result && *a2 > 4u )
    return "Value out of range";
  return result;
}
