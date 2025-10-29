char *__fastcall sub_2BEF8(const char *a1, float *a2)
{
  char *result; // r0

  result = sub_40158(a1, a2);
  if ( !result )
  {
    if ( *a2 < 125.0 )
    {
      return "Value out of range";
    }
    else if ( *a2 > 500.0 )
    {
      return "Value out of range";
    }
  }
  return result;
}
