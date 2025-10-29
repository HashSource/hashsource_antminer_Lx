int download_MES_system_Config_file()
{
  _BYTE v2[252]; // [sp+4h] [bp+4h] BYREF
  int v3; // [sp+100h] [bp+100h]
  char v4; // [sp+107h] [bp+107h]

  v4 = 0;
  v3 = 0;
  putchar(32);
  if ( (unsigned __int8)create_connection_to_MES_system_by_name(1) != 1 )
    return 0;
  if ( (unsigned __int8)send_message_to_bitmain_MES_system(" ", mes_system_handshake_file_length) != 1 )
    return 0;
  mes_system_config_file_length = 0;
  if ( MES_system_Config_information )
  {
    free((void *)MES_system_Config_information);
    MES_system_Config_information = 0;
  }
  MES_system_Config_information = (int)receive_message_from_bitmain_MES_system((unsigned int *)&mes_system_config_file_length);
  if ( !MES_system_Config_information )
    return 0;
  puts("Get MES system Config information, and do integrity verification");
  MES_system_config_File = (int)json_loadb(
                                  MES_system_Config_information,
                                  mes_system_config_file_length - 1,
                                  0,
                                  (json_error_t *)v2);
  if ( MES_system_config_File && !*(_DWORD *)MES_system_config_File )
  {
    puts("The received MES system Config information is in JSON format");
    return 1;
  }
  else
  {
    lcd_clear_result();
    lcd_show(0, (const char *)(MES2Local_Config_Information + 32));
    lcd_show(1u, "MES config");
    lcd_show(2u, "information");
    lcd_show(3u, "is not in JSON");
    puts("The received MES system Config information is not in JSON format");
    return 0;
  }
}
