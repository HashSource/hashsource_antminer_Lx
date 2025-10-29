_DWORD *json_sprintf(const char *a1, ...)
{
  va_list varg_r1; // [sp+14h] [bp+14h] BYREF

  va_start(varg_r1, a1);
  return json_vsprintf(a1, varg_r1);
}
