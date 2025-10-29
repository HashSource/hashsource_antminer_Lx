char *__fastcall sub_52494(const char *a1, float *a2)
{
  char *result; // r0

  result = sub_6437C(a1, a2);
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
