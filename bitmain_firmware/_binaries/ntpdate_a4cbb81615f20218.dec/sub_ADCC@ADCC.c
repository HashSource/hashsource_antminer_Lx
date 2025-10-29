const char *__fastcall sub_ADCC(const char *result)
{
  const char *v1; // r6
  int v2; // r2
  char *v3; // r1

  if ( syslog_fname )
  {
    result = (const char *)sub_AA34((const char *)syslog_fname, 0);
    if ( result != (const char *)-1 )
      return result;
    v2 = syslog_fname;
    v3 = "Cannot reopen log file %s, %m";
    return sub_A848(3, v3, v2);
  }
  v1 = result;
  if ( result )
  {
    result = (const char *)sub_AA34(result, 1);
    if ( result == (const char *)-1 )
    {
      v2 = (int)v1;
      v3 = "Cannot open log file %s, %m";
      return sub_A848(3, v3, v2);
    }
  }
  return result;
}
