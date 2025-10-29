int __fastcall check_sn_qr_code_legality(int a1, const char *a2)
{
  if ( strlen((const char *)(a1 + 1)) == 17 )
  {
    if ( strlen(a2 + 32) == 2 )
    {
      if ( strlen(a2 + 48) <= 0xD )
      {
        if ( strlen(a2 + 64) == 4 )
        {
          if ( strlen(a2 + 80) == 9 || strlen(a2 + 80) == 5 )
          {
            return 1;
          }
          else
          {
            lcd_clear_result();
            lcd_show(0, (const char *)(MES2Local_Config_Information + 32));
            lcd_show(1u, "ft version");
            lcd_show(2u, "is not correct");
            printf("ft version isn't correct, ft version: %s", a2 + 80);
            return 0;
          }
        }
        else
        {
          lcd_clear_result();
          lcd_show(0, (const char *)(MES2Local_Config_Information + 32));
          lcd_show(1u, "chip bin");
          lcd_show(2u, "is not correct");
          printf("chip bin isn't correct, chip bin: %s", a2 + 64);
          return 0;
        }
      }
      else
      {
        lcd_clear_result();
        lcd_show(0, (const char *)(MES2Local_Config_Information + 32));
        lcd_show(1u, "chip marking");
        lcd_show(2u, "is not correct");
        printf("chip marking isn't correct, chip marking: %s", a2 + 48);
        return 0;
      }
    }
    else
    {
      lcd_clear_result();
      lcd_show(0, (const char *)(MES2Local_Config_Information + 32));
      lcd_show(1u, "chip die");
      lcd_show(2u, "is not correct");
      printf("chip die isn't correct, chip die: %s", a2 + 32);
      return 0;
    }
  }
  else
  {
    lcd_clear_result();
    lcd_show(0, (const char *)(MES2Local_Config_Information + 32));
    lcd_show(2u, "SN isn't correct");
    printf("SN isn't correct, sn: %s\n", (const char *)(a1 + 1));
    return 0;
  }
}
