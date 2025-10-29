int __fastcall prepare_mes_config_test_process(int a1)
{
  if ( (unsigned __int8)malloc_for_mes_config_information() != 1 )
    return 0;
  copy_app_config(a1);
  if ( !strcmp(*(const char **)(a1 + 20), "PT2") )
  {
    if ( *(_BYTE *)(MES2Local_Config_Information + 188) )
    {
      *(_BYTE *)(MES2Local_Config_Information + 189) = 0;
      memcpy(dest, (const void *)(MES2Local_Config_Information + 32), sizeof(dest));
      g_lcd_result_with_data = 22;
      pcba_display_result_on_lcd();
      if ( (unsigned __int8)prepare_MES_system_handshake_information(0) != 1 )
      {
        g_lcd_result_with_data = 23;
        pcba_display_result_on_lcd();
        printf("Prepare all config handshake fail");
        return 0;
      }
      if ( (unsigned __int8)download_MES_system_Config_file() != 1 )
        return 0;
      if ( (unsigned __int8)check_whether_MES_system_response_is_correct() != 1 )
        return 0;
      if ( (unsigned __int8)init_MES_system_config_information() != 1 )
        return 0;
      if ( (unsigned __int8)parse_MES_system_config_information(0) != 1 )
      {
        lcd_clear_result();
        lcd_show(0, (const char *)(MES2Local_Config_Information + 32));
        lcd_show(1u, "parse MES all");
        lcd_show(2u, "config infor");
        lcd_show(3u, "fail");
        printf("parse MES all config infor fail");
        return 0;
      }
    }
    else
    {
      if ( *(_BYTE *)(MES2Local_Config_Information + 189) )
        *(_BYTE *)(MES2Local_Config_Information + 468) = 0;
      else
        *(_BYTE *)(MES2Local_Config_Information + 468) = 1;
      display_main_page();
      printf("You are in Manual PT2 test mode, please make sure all the configrations are correct!");
    }
    return 1;
  }
  return 1;
}
