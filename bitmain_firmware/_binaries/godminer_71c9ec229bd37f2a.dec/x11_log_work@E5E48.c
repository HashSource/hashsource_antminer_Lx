FILE *x11_log_work()
{
  FILE *result; // r0
  FILE *v1; // r5
  size_t v2; // r0
  const void *v3; // r0
  char v4[260]; // [sp+0h] [bp-104h] BYREF

  memset(v4, 0, 0x100u);
  result = (FILE *)fopen64("/tmp/x11_dump_file.log", 1246680);
  g_logwork_file = (int)result;
  if ( result )
  {
    v1 = result;
    v2 = strlen(v4);
    fwrite(v4, v2, 1u, v1);
    LOWORD(v3) = 21012;
    HIWORD(v3) = (unsigned int)"Pool: %s" >> 16;
    fwrite(v3, 1u, 1u, (FILE *)g_logwork_file);
    return (FILE *)fflush((FILE *)g_logwork_file);
  }
  return result;
}
