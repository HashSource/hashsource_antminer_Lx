FILE *x11_log_work()
{
  int v0; // r1
  FILE *result; // r0
  FILE *v2; // r5
  size_t v3; // r0
  const void *v4; // r0
  char v5[260]; // [sp+0h] [bp-104h] BYREF

  memset(v5, 0, 0x100u);
  LOWORD(v0) = -6976;
  HIWORD(v0) = (unsigned int)"lp            display this help text and exit\n" >> 16;
  result = (FILE *)fopen64("/tmp/x11_dump_file.log", v0);
  g_logwork_file = (int)result;
  if ( result )
  {
    v2 = result;
    v3 = strlen(v5);
    fwrite(v5, v3, 1u, v2);
    LOWORD(v4) = 11884;
    HIWORD(v4) = (unsigned int)"e failed to parse a newline-terminated string" >> 16;
    fwrite(v4, 1u, 1u, (FILE *)g_logwork_file);
    return (FILE *)fflush((FILE *)g_logwork_file);
  }
  return result;
}
