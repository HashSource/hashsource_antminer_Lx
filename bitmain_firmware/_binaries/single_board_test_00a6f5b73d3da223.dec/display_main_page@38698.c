int display_main_page()
{
  char v1[16]; // [sp+0h] [bp+0h] BYREF

  lcd_clear_result();
  if ( !strcmp((const char *)MES2Local_Config_Information, "PT1") )
  {
    lcd_show(0, (const char *)(MES2Local_Config_Information + 32));
    lcd_show(2u, "Only find ASIC");
    return printf("Only find ASIC");
  }
  else if ( !strcmp((const char *)MES2Local_Config_Information, "PT1+") )
  {
    lcd_show(0, (const char *)(MES2Local_Config_Information + 32));
    lcd_show(1u, "Find ASIC");
    memset(v1, 0, sizeof(v1));
    sprintf(v1, "%d pattern test", *(_DWORD *)(MES2Local_Config_Information + 200));
    lcd_show(2u, v1);
    return printf("do PT1+ test");
  }
  else if ( !strcmp((const char *)MES2Local_Config_Information, "PT2") )
  {
    if ( *(_DWORD *)(MES2Local_Config_Information + 64) == 1 )
    {
      lcd_show(0, (const char *)(MES2Local_Config_Information + 48));
      memset(v1, 0, sizeof(v1));
      sprintf(
        v1,
        "IC:%2d  P:%d",
        *(_DWORD *)(MES2Local_Config_Information + 64),
        *(_DWORD *)(MES2Local_Config_Information + 200));
      lcd_show(1u, v1);
      memset(v1, 0, sizeof(v1));
      sprintf(
        v1,
        "FREQ:%d L:%d",
        *(_DWORD *)(MES2Local_Config_Information + 236),
        *(_DWORD *)(MES2Local_Config_Information + 224));
      lcd_show(2u, v1);
      lcd_show(3u, "Vol: set power");
      return printf("Single ASIC pattern test");
    }
    else if ( *(_BYTE *)(MES2Local_Config_Information + 188) )
    {
      lcd_show(0, (const char *)(MES2Local_Config_Information + 32));
      lcd_show(1u, "Factory Mode:PT2");
      lcd_show(2u, "Please Scan code");
      lcd_show(3u, "first");
      return puts("Factory Mode:PT2, Please Scan code first");
    }
    else if ( *(_BYTE *)(MES2Local_Config_Information + 189) )
    {
      lcd_show(0, (const char *)(MES2Local_Config_Information + 32));
      memset(v1, 0, sizeof(v1));
      sprintf(
        v1,
        "IC:%2d  P:%d",
        *(_DWORD *)(MES2Local_Config_Information + 64),
        *(_DWORD *)(MES2Local_Config_Information + 200));
      lcd_show(1u, v1);
      memset(v1, 0, sizeof(v1));
      sprintf(
        v1,
        "FREQ:%d L:%d",
        *(_DWORD *)(MES2Local_Config_Information + 236),
        *(_DWORD *)(MES2Local_Config_Information + 224));
      lcd_show(2u, v1);
      memset(v1, 0, sizeof(v1));
      sprintf(v1, "Voltage: %d", *(_DWORD *)(MES2Local_Config_Information + 232));
      lcd_show(3u, v1);
      return printf("Manual Mode:PT2, does not use scan code gun");
    }
    else
    {
      lcd_show(0, (const char *)(MES2Local_Config_Information + 32));
      lcd_show(1u, "Manual Mode:PT2");
      lcd_show(2u, "Please Scan code");
      lcd_show(3u, "first");
      return puts("Manual Test Mode:PT2, Please Scan code first");
    }
  }
  else
  {
    lcd_clear_result();
    lcd_show(0, (const char *)(MES2Local_Config_Information + 32));
    lcd_show(1u, "Test Process");
    return lcd_show(2u, "error");
  }
}
