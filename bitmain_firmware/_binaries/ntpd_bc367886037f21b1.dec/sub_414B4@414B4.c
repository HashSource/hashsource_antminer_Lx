int __fastcall sub_414B4(int a1, int a2, time_t *a3)
{
  int result; // r0
  _BOOL4 v5; // r3
  bool v6; // zf
  int v7; // r0
  const char *v8; // r2

  result = sub_2D95C(a2, a3);
  if ( !result )
    return sub_64A18(4, "%s ('%s'): will expire in less than one day", "leapsecond file", (const char *)dword_BBBE8);
  v5 = result <= 27;
  if ( !a1 )
    v5 = 0;
  if ( v5 )
  {
    if ( result >= 0 )
    {
      return sub_64A18(
               4,
               "%s ('%s'): will expire in less than %d days",
               "leapsecond file",
               (const char *)dword_BBBE8,
               result + 1);
    }
    else
    {
      v6 = result == -1;
      v7 = -result;
      if ( v6 )
        v8 = byte_97B44;
      else
        v8 = "s";
      return sub_64A18(
               3,
               "%s ('%s'): expired less than %d day%s ago",
               "leapsecond file",
               (const char *)dword_BBBE8,
               v7,
               v8);
    }
  }
  return result;
}
