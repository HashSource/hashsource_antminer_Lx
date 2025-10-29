int pcba_display_result_on_lcd()
{
  int result; // r0
  size_t v1; // r0
  signed int j; // [sp+18h] [bp+18h]
  int i; // [sp+1Ch] [bp+1Ch]

  switch ( g_lcd_result_with_data )
  {
    case 0:
    case 1:
    case 18:
    case 20:
      result = lcd_clear_result();
      for ( i = 0; i <= 3; ++i )
      {
        for ( j = strlen((const char *)&g_lcd_result_with_data + 17 * i + 4); j <= 15; ++j )
          *((_BYTE *)&g_lcd_result_with_data + 17 * i + j + 4) = 32;
        result = lcd_show_result(i, (int)&g_lcd_result_with_data + 17 * i + 4, 0x10u);
      }
      break;
    case 2:
      lcd_clear_result();
      lcd_show_result(1u, (int)"Find ASIC:OK    ", 0x10u);
      lcd_show_result(2u, 4701898, 0x10u);
      result = lcd_show_result(3u, 4701915, 0x10u);
      break;
    case 3:
      lcd_clear_result();
      lcd_show_result(1u, (int)"  FPGA version  ", 0x10u);
      result = lcd_show_result(2u, (int)"     error      ", 0x10u);
      break;
    case 4:
      lcd_clear_result();
      lcd_show_result(1u, (int)"Hash board error", 0x10u);
      result = lcd_show_result(2u, (int)"Only support one", 0x10u);
      break;
    case 5:
      lcd_clear_result();
      result = lcd_show_result(1u, (int)"Hash board error", 0x10u);
      break;
    case 6:
      lcd_clear_result();
      result = lcd_show_result(1u, (int)" Pic init error ", 0x10u);
      break;
    case 7:
      lcd_clear_result();
      lcd_show_result(1u, (int)"  Create heart  ", 0x10u);
      result = lcd_show_result(2u, (int)"  thread error  ", 0x10u);
      break;
    case 8:
      lcd_clear_result();
      result = lcd_show_result(1u, (int)" Voltage error  ", 0x10u);
      break;
    case 9:
      lcd_clear_result();
      lcd_show_result(1u, (int)" Create receive ", 0x10u);
      result = lcd_show_result(2u, (int)"  thread error  ", 0x10u);
      break;
    case 10:
      lcd_clear_result();
      lcd_show_result(0, (int)"   Only have    ", 0x10u);
      lcd_show_result(1u, (int)dest, 0x10u);
      result = lcd_show_result(2u, (int)"      ASIC      ", 0x10u);
      break;
    case 12:
      lcd_clear_result();
      result = lcd_show_result(1u, (int)dest, 0x10u);
      break;
    case 13:
      lcd_clear_result();
      lcd_show_result(0, (int)"Sensor: NG", 0x10u);
      result = lcd_show_result(1u, (int)"TEMP Value Error", 0x10u);
      break;
    case 14:
      lcd_clear_result();
      lcd_show_result(1u, (int)" Create status  ", 0x10u);
      result = lcd_show_result(2u, (int)"  thread error  ", 0x10u);
      break;
    case 15:
      lcd_clear_result();
      lcd_show_result(1u, (int)"  Create send   ", 0x10u);
      result = lcd_show_result(2u, (int)"  thread error  ", 0x10u);
      break;
    case 16:
      lcd_clear_result();
      lcd_show_result(1u, (int)"  Create TEMP   ", 0x10u);
      result = lcd_show_result(2u, (int)"  thread error  ", 0x10u);
      break;
    case 17:
      lcd_clear_result();
      lcd_show_result(0, (int)"   dump ASIC   ", 0x10u);
      lcd_show_result(1u, (int)dest, 0x10u);
      result = lcd_show_result(2u, (int)"    failed    ", 0x10u);
      break;
    case 19:
      lcd_clear_result();
      lcd_show_result(1u, (int)" Press Button   ", 0x10u);
      result = lcd_show_result(2u, (int)"   Please       ", 0x10u);
      break;
    case 21:
      lcd_clear_result();
      lcd_show_result(1u, (int)"    Write PIC   ", 0x10u);
      result = lcd_show_result(2u, (int)"    error       ", 0x10u);
      break;
    case 22:
      lcd_clear_result();
      v1 = strlen(dest);
      lcd_show_result(0, (int)dest, v1);
      lcd_show_result(1u, (int)"connect internet ", 0x10u);
      result = lcd_show_result(2u, (int)"please  wait    ", 0x10u);
      break;
    case 23:
      lcd_clear_result();
      lcd_show_result(0, (int)dest, 0x10u);
      lcd_show_result(1u, (int)"Prepare MES     ", 0x10u);
      lcd_show_result(2u, (int)"config handshake", 0x10u);
      result = lcd_show_result(3u, (int)"fail            ", 0x10u);
      break;
    case 25:
      lcd_clear_result();
      result = lcd_show_result(1u, (int)"Check EEPROM:NG ", 0x10u);
      break;
    default:
      lcd_clear_result();
      lcd_show_result(0, (int)"     Fail       ", 0x10u);
      result = lcd_show_result(1u, (int)"  Unknow Error  ", 0x10u);
      break;
  }
  return result;
}
