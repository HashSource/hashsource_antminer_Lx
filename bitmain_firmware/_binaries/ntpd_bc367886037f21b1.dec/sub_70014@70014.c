int sub_70014()
{
  int result; // r0
  struct _IO_FILE *v1; // r4
  const char *v2; // r6
  const char *v3; // r0

  result = pthread_once(&dword_106244, (void (*)(void))sub_6FFB4);
  if ( result )
  {
    v1 = stderr;
    v2 = (const char *)sub_73430(isc_msgcat, 1, 110, "fatal error");
    v3 = (const char *)sub_73430(isc_msgcat, 1, 101, "failed");
    _fprintf_chk(v1, 1, "%s:%d: %s: isc_once_do() %s.\n", "./../lib/isc/lib.c", 77, v2, v3);
    abort();
  }
  return result;
}
