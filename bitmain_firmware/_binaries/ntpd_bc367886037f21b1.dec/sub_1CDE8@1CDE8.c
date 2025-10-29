const char *__fastcall sub_1CDE8(const char *result, int a2, int a3, int a4)
{
  char v6[256]; // [sp+4h] [bp-108h] BYREF

  if ( unexpected_error_cnt <= 99 )
  {
    sub_64A18(3, "%s:%d: unexpected error:", result, a2);
    sub_6B34C(v6, 256, a3, a4);
    result = (const char *)sub_64A18(3, "%s", v6);
    if ( ++unexpected_error_cnt == 100 )
      return (const char *)sub_64A18(3, "Too many errors.  Shutting up.");
  }
  return result;
}
