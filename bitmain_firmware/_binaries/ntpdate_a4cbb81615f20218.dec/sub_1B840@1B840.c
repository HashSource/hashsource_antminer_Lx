int sub_1B840()
{
  int *v1; // r0

  if ( truncate64() >= 0 )
    return 0;
  v1 = _errno_location();
  return sub_1A478(*v1, "./../lib/isc/unix/file.c", 470);
}
