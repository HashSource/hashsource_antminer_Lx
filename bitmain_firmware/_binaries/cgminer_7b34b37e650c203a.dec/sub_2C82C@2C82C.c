char *__fastcall sub_2C82C(const char *a1, _DWORD *a2, int a3, int a4)
{
  char *result; // r0
  _BOOL4 v8; // r4
  int v9; // r3

  result = sub_40268(a1, a2);
  if ( !result )
  {
    v8 = *a2 < a3;
    if ( *a2 > a4 )
      v9 = v8 | 1;
    else
      v9 = v8;
    if ( v9 )
      return "Value out of range";
  }
  return result;
}
