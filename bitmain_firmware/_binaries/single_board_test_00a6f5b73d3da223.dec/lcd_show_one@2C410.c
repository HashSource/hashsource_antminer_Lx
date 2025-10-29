int __fastcall lcd_show_one(unsigned __int8 a1, const char *a2)
{
  size_t v2; // r0

  lcd_clear_result_pcba();
  v2 = strlen(a2);
  return lcd_show_result(a1, (int)a2, v2);
}
