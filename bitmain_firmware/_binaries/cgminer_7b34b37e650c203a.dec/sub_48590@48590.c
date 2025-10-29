char *__fastcall sub_48590(char *result)
{
  char *v1; // r4
  size_t v2; // r0

  if ( result )
  {
    v1 = result;
    v2 = strlen(result);
    return (char *)sub_4800C(v1, v2, 0);
  }
  return result;
}
