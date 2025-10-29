int pcba_lcd_dump()
{
  signed int j; // [sp+8h] [bp+8h]
  int i; // [sp+Ch] [bp+Ch]

  printf("------------LCD display-------------");
  for ( i = 0; i <= 3; ++i )
  {
    for ( j = strlen((const char *)&g_lcd_result_with_data + 17 * i + 4); j <= 15; ++j )
      *((_BYTE *)&g_lcd_result_with_data + 17 * i + j + 4) = 32;
    printf("%s", (const char *)&g_lcd_result_with_data + 17 * i + 4);
  }
  return printf("-----------------------------------");
}
