int g_dbus_send_error(const json_t *a1, json_error_t *a2, int a3, _BYTE *a4, ...)
{
  va_list va; // [sp+30h] [bp+28h] BYREF

  va_start(va, a4);
  return json_vunpack_ex(a1, a2, a3, a4, (char **)va);
}
