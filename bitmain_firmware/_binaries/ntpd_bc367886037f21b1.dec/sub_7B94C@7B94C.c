int sub_7B94C()
{
  int *v1; // r0

  if ( truncate64() >= 0 )
    return 0;
  v1 = _errno_location();
  return sub_7A584(*v1, "./../lib/isc/unix/file.c", 470);
}
