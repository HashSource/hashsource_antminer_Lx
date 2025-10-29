void __fastcall sub_47AB4(int a1, const char *a2, int a3)
{
  int v6; // r4
  struct tm *v7; // r0
  int v8; // r0
  FILE *v9; // r5
  size_t v10; // r0
  size_t v11; // r0
  int v12; // r7
  time_t timer; // [sp+1Ch] [bp-4Ch] BYREF
  struct timeval v14; // [sp+20h] [bp-48h] BYREF
  char s[64]; // [sp+28h] [bp-40h] BYREF

  if ( byte_244080 )
  {
    syslog(a1 | 0x80, "%s", a2);
  }
  else
  {
    v14.tv_sec = 0;
    v14.tv_usec = 0;
    sub_4A60C(&v14);
    timer = v14.tv_sec;
    v6 = v14.tv_usec / 1000;
    v7 = localtime(&timer);
    snprintf(
      s,
      0x40u,
      " [%d-%02d-%02d %02d:%02d:%02d.%03d] ",
      v7->tm_year + 1900,
      v7->tm_mon + 1,
      v7->tm_mday,
      v7->tm_hour,
      v7->tm_min,
      v7->tm_sec,
      v6);
    v8 = fileno((FILE *)stderr);
    if ( !isatty(v8) )
    {
      fprintf((FILE *)stderr, "%s%s\n", s, a2);
      fflush((FILE *)stderr);
    }
    if ( byte_1AEB9C )
    {
      v9 = (FILE *)dword_1AEBA0;
      if ( dword_1AEBA0 || (v9 = (FILE *)fopen64(byte_1AEBC4, &word_1AEBA4), (dword_1AEBA0 = (int)v9) != 0) )
      {
        v10 = strlen(s);
        fwrite(s, v10, 1u, v9);
        v11 = strlen(a2);
        fwrite(a2, v11, 1u, (FILE *)dword_1AEBA0);
        fwrite(&word_8B454, 1u, 1u, (FILE *)dword_1AEBA0);
        fflush((FILE *)dword_1AEBA0);
      }
    }
    if ( a1 == 3 )
      v12 = 0;
    else
      v12 = byte_242EF8 & 1;
    if ( !v12 )
      sub_47DA0(s, a2, a3);
  }
}
