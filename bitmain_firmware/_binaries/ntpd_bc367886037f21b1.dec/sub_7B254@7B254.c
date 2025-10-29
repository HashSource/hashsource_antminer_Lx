int __fastcall sub_7B254(const char *a1)
{
  int result; // r0
  int *v2; // r0

  if ( !a1 )
    sub_6E8F0((int)"./../lib/isc/unix/file.c", 320, 0, "filename != ((void *)0)");
  result = unlink(a1);
  if ( result )
  {
    v2 = _errno_location();
    return sub_7A584(*v2, "./../lib/isc/unix/file.c", 326);
  }
  return result;
}
