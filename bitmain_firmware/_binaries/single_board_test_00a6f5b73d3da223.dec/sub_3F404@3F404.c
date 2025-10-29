char *__fastcall sub_3F404(int *a1, const char *a2, char a3, char *format)
{
  __gnuc_va_list __varargs; // [sp+24h] [bp+14h]

  jsonp_error_vset(a1[14], a1[6], a1[7], a1[8], a3, format, __varargs);
  return jsonp_error_set_source((char *)a1[14], a2);
}
