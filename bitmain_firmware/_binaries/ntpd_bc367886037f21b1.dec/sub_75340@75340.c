int __fastcall sub_75340(FILE *a1, int a2, int a3)
{
  int result; // r0
  int *v4; // r0

  result = fseek(a1, a2, a3);
  if ( result )
  {
    v4 = _errno_location();
    return sub_7A584(*v4, "./../lib/isc/unix/stdio.c", 60);
  }
  return result;
}
