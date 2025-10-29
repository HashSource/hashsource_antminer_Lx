int sub_75650()
{
  int result; // r0

  result = sub_781A0(&unk_106290, "./../lib/isc/unix/strerror.c", 41);
  if ( result )
    sub_6F24C(
      "./../lib/isc/unix/strerror.c",
      41,
      "isc__mutex_init((&isc_strerror_lock), \"./../lib/isc/unix/strerror.c\", 41) == 0");
  return result;
}
