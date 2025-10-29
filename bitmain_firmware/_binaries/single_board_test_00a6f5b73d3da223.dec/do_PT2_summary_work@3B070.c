int __fastcall do_PT2_summary_work(unsigned __int8 a1)
{
  printf("Pattern test done. Test level_index: %d\n", a1);
  if ( *(_BYTE *)(MES2Local_Config_Information + 189) != 1 )
  {
    if ( (unsigned __int8)prepare_eeprom_data(a1) != 1 )
    {
      lcd_show_one(0, (const char *)(MES2Local_Config_Information + 32));
      lcd_show(1u, "prepare");
      lcd_show(2u, "eeprom data");
      lcd_show(3u, "fail");
      puts("prepare eeprom data fail");
      return 0;
    }
    if ( eeprom_write(gChain, 0, (int)eeprom_data_buf, 0x52u) )
    {
      lcd_show_one(0, (const char *)(MES2Local_Config_Information + 32));
      lcd_show(1u, "Write eeprom");
      lcd_show(2u, "fail");
      *((_BYTE *)&gHistory_Result + 265800 * a1 + 2) = 0;
      puts("Write EEPROM fail");
      sleep(5u);
    }
    else
    {
      puts("Write EEPROM ok");
    }
  }
  if ( *(_BYTE *)(MES2Local_Config_Information + 189) != 1 )
  {
    if ( prepare_MES_system_submit_information(a1) )
    {
      if ( submit_result_to_MES_system() )
      {
        puts("submit result ok");
      }
      else
      {
        printf("save result into SD card");
        if ( save_MES_system_submit_result() )
          printf("save result into SD card success");
        else
          printf("save result into SD card fail");
      }
    }
    else
    {
      printf("prepare submit result information fail");
    }
    memset(&sn, 0, 0x21u);
    memset(qr_code, 0, 0x90u);
  }
  return 1;
}
