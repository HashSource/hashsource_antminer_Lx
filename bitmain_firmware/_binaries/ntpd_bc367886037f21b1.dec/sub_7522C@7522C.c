int __fastcall sub_7522C(int a1, int a2, int *a3)
{
  int v4; // r0
  int *v6; // r0

  v4 = fopen64(a1, a2);
  if ( v4 )
  {
    *a3 = v4;
    return 0;
  }
  else
  {
    v6 = _errno_location();
    return sub_7A584(*v6, "./../lib/isc/unix/stdio.c", 36);
  }
}
