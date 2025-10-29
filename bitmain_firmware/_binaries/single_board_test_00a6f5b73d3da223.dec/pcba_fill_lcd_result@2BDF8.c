size_t __fastcall pcba_fill_lcd_result(const char *a1)
{
  size_t result; // r0
  size_t v2; // r3
  signed int v4; // [sp+8h] [bp+8h]
  int i; // [sp+18h] [bp+18h]
  int v6; // [sp+1Ch] [bp+1Ch]

  result = strlen(a1);
  v2 = (result + 1) & 0xF;
  if ( (int)(result + 1) <= 0 )
    v2 = -(-(result + 1) & 0xF);
  v6 = (int)(result + 1) / 16 + (v2 != 0);
  if ( v6 > 4 )
    v6 = 4;
  for ( i = 0; i < v6; ++i )
  {
    v4 = strlen(&a1[16 * i]);
    if ( v4 > 15 )
      result = sprintf((char *)&g_lcd_result_with_data + 17 * i + 4, &a1[16 * i], 16);
    else
      result = sprintf((char *)&g_lcd_result_with_data + 17 * i + 4, &a1[16 * i], v4);
  }
  return result;
}
