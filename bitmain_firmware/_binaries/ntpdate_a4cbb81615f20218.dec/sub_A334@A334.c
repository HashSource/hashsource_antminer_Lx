char *__fastcall sub_A334(int a1, char *s)
{
  int v4; // r5
  char *v5; // r0
  int v6; // r5
  int v7; // r6
  __pid_t v8; // r10
  char *result; // r0
  const char *v10; // r11
  FILE *v11; // r6
  int v12; // r0
  const char *v13; // [sp+1Ch] [bp-18h]
  char v14; // [sp+24h] [bp-10h] BYREF
  __int16 v15; // [sp+28h] [bp-Ch] BYREF

  v15 = 10;
  v14 = 0;
  v4 = progname;
  if ( progname != dword_3330C )
  {
    dword_3330C = progname;
    v5 = strrchr((const char *)progname, 47);
    if ( v5 )
      dword_33310 = (int)(v5 + 1);
    else
      dword_33310 = v4;
  }
  v6 = syslogit;
  v7 = msyslog_term;
  if ( syslogit )
  {
    result = (char *)_syslog_chk(a1, 1, "%s", s);
    if ( !v7 )
      return result;
    v6 = 0;
  }
  else if ( syslog_file )
  {
    v6 = 1;
  }
  else
  {
    v7 = 1;
  }
  if ( msyslog_include_timestamp )
    v13 = (const char *)sub_1323C();
  else
    v13 = 0;
  if ( v6 | msyslog_term_pid )
    v8 = getpid();
  else
    v8 = -1;
  result = &s[strlen(s)];
  if ( *(result - 1) == 10 )
    v10 = &v14;
  else
    v10 = (const char *)&v15;
  if ( v7 )
  {
    if ( a1 <= 3 )
      v11 = stderr;
    else
      v11 = stdout;
    if ( msyslog_include_timestamp )
      _fprintf_chk(v11, 1, "%s ", v13);
    if ( msyslog_term_pid )
      _fprintf_chk(v11, 1, "%s[%d]: ", (const char *)dword_33310, v8);
    _fprintf_chk(v11, 1, "%s%s", s, v10);
    result = (char *)fflush(v11);
  }
  if ( v6 )
  {
    v12 = syslog_file;
    if ( msyslog_include_timestamp )
    {
      _fprintf_chk(syslog_file, 1, "%s ", v13);
      v12 = syslog_file;
    }
    _fprintf_chk(v12, 1, "%s[%d]: %s%s", (const char *)dword_33310, v8, s, v10);
    return (char *)fflush((FILE *)syslog_file);
  }
  return result;
}
