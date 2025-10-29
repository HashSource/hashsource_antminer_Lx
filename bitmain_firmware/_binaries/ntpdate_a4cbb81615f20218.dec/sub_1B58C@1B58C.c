const char *__fastcall sub_1B58C(const char *a1)
{
  char *v2; // r0

  if ( !a1 )
    sub_10788();
  v2 = strrchr(a1, 47);
  if ( v2 )
    return v2 + 1;
  else
    return a1;
}
