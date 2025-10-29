int __fastcall sub_1B1F4(const char *a1, const char *a2)
{
  int result; // r0
  int *v3; // r0

  if ( !a1 )
    sub_10788();
  if ( !a2 )
    sub_10788();
  result = rename(a1, a2);
  if ( result )
  {
    v3 = _errno_location();
    return sub_1A478(*v3, "./../lib/isc/unix/file.c", 340);
  }
  return result;
}
