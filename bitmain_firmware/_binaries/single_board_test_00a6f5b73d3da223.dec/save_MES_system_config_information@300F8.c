int __fastcall save_MES_system_config_information(int a1)
{
  FILE *s; // [sp+Ch] [bp+Ch]

  if ( a1 )
  {
    if ( a1 != 1 )
    {
      lcd_clear_result();
      lcd_show(0, (const char *)(MES2Local_Config_Information + 32));
      lcd_show(1u, "Don't support");
      lcd_show(2u, "this type config");
      lcd_show(3u, "information");
      printf("Don't support save this type information. type = %d\n", a1);
      return 0;
    }
    memset(factory_config_file, 0, 0xC8u);
    strcpy(factory_config_file, base_factory_config_file);
    strcat(factory_config_file, (const char *)(MES2Local_Config_Information + 16));
    *(_WORD *)&factory_config_file[strlen(factory_config_file)] = 45;
    strcat(factory_config_file, (const char *)(MES2Local_Config_Information + 32));
    *(_WORD *)&factory_config_file[strlen(factory_config_file)] = 45;
    strcat(factory_config_file, src);
    *(_WORD *)&factory_config_file[strlen(factory_config_file)] = 45;
    strcat(factory_config_file, byte_47BF34);
    *(_WORD *)&factory_config_file[strlen(factory_config_file)] = 45;
    strcat(factory_config_file, byte_47BF64);
  }
  else
  {
    memset(factory_config_file, 0, 0xC8u);
    strcpy(factory_config_file, base_factory_config_file);
    strcat(factory_config_file, (const char *)(MES2Local_Config_Information + 16));
    *(_WORD *)&factory_config_file[strlen(factory_config_file)] = 45;
    strcat(factory_config_file, (const char *)(MES2Local_Config_Information + 32));
  }
  printf("Save MES system config information into %s\n", factory_config_file);
  s = fopen(factory_config_file, "w");
  if ( s )
  {
    printf("Open %s success\n", factory_config_file);
    if ( fwrite((const void *)MES_system_Config_information, mes_system_config_file_length, 1u, s) == 1 )
    {
      printf("Write %s success\n", factory_config_file);
      fclose(s);
      return 1;
    }
    else
    {
      lcd_clear_result();
      lcd_show(0, (const char *)(MES2Local_Config_Information + 32));
      lcd_show(1u, "write MES system");
      lcd_show(2u, "config infor");
      lcd_show(3u, "fail");
      printf("Write %s fail\n", factory_config_file);
      fclose(s);
      return 0;
    }
  }
  else
  {
    lcd_clear_result();
    lcd_show(0, (const char *)(MES2Local_Config_Information + 32));
    lcd_show(1u, "open file to");
    lcd_show(2u, "save MES system");
    lcd_show(3u, "config info fail");
    printf("Open %s fail\n", factory_config_file);
    return 0;
  }
}
