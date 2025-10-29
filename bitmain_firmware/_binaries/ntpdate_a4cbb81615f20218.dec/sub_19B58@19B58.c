size_t __fastcall sub_19B58(time_t *a1, char *a2, size_t a3)
{
  struct tm *v5; // r0
  size_t result; // r0
  time_t v7; // [sp+0h] [bp-8h] BYREF

  if ( !a3 )
    sub_10788();
  v7 = *a1;
  v5 = gmtime(&v7);
  result = strftime(a2, a3, "%a, %d %b %Y %H:%M:%S GMT", v5);
  if ( a3 <= result )
    sub_10788();
  return result;
}
