int init_MES_system_config_information()
{
  if ( Mes_System_Config_File_Information )
  {
    puts("Already malloced parse MES system config information!");
    return 1;
  }
  else
  {
    Mes_System_Config_File_Information = (int)malloc(0x68u);
    if ( Mes_System_Config_File_Information )
    {
      *(_DWORD *)(Mes_System_Config_File_Information + 100) = 0;
      return 1;
    }
    else
    {
      lcd_clear_result();
      lcd_show(0, (const char *)(MES2Local_Config_Information + 32));
      lcd_show(1u, "malloc for parse");
      lcd_show(2u, "MES system");
      lcd_show(3u, "information fail");
      puts("malloc for parse MES system config information fail!");
      return 0;
    }
  }
}
