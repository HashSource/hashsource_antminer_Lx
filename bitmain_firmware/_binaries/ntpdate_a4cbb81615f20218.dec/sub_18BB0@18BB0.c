int __fastcall sub_18BB0(FILE *a1)
{
  int result; // r0
  int *v2; // r0

  result = fflush(a1);
  if ( result )
  {
    v2 = _errno_location();
    return sub_1A478(*v2, "./../lib/isc/unix/stdio.c", 105);
  }
  return result;
}
