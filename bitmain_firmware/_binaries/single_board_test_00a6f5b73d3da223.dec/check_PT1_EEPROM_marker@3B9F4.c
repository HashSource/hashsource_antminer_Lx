int check_PT1_EEPROM_marker()
{
  unsigned __int8 v2; // [sp+3h] [bp+3h] BYREF
  int v3; // [sp+4h] [bp+4h]

  v2 = 0;
  v3 = 0;
  v3 = eeprom_read(gChain, 255, (int)&v2, 1u);
  if ( v3 && (v3 = eeprom_read(gChain, 255, (int)&v2, 1u)) != 0 )
  {
    lcd_clear_result();
    lcd_show(0, (const char *)(MES2Local_Config_Information + 32));
    lcd_show(1u, "read PT1 marker");
    lcd_show(2u, "fail");
    puts("read PT1 marker fail twice.");
    return 0;
  }
  else if ( v2 == 90 )
  {
    puts("This board already did PT1.");
    return 1;
  }
  else
  {
    printf("PT1 marker is 0x%02x.\n", v2);
    v3 = eeprom_read(gChain, 255, (int)&v2, 1u);
    if ( v3 && (v3 = eeprom_read(gChain, 255, (int)&v2, 1u)) != 0 )
    {
      lcd_clear_result();
      lcd_show(0, (const char *)(MES2Local_Config_Information + 32));
      lcd_show(1u, "read PT1 marker");
      lcd_show(2u, "fail");
      puts("read PT1 marker fail twice...");
      return 0;
    }
    else if ( v2 == 90 )
    {
      puts("This board already did PT1...");
      return 1;
    }
    else
    {
      lcd_clear_result();
      lcd_show(0, (const char *)(MES2Local_Config_Information + 32));
      lcd_show(1u, "This hashboard");
      lcd_show(2u, "didn't do PT1");
      printf("PT1 marker is 0x%02x...\n", v2);
      puts("This board didn't do PT1");
      return 0;
    }
  }
}
