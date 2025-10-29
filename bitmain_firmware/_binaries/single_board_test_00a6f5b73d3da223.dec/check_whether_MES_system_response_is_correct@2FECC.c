int check_whether_MES_system_response_is_correct()
{
  const char *v0; // r0
  const char *v1; // r0
  const char *v2; // r0
  json_t *v4; // [sp+0h] [bp+0h]
  json_t *v5; // [sp+4h] [bp+4h]
  json_t *v6; // [sp+8h] [bp+8h]
  unsigned __int8 v7; // [sp+Fh] [bp+Fh]

  v6 = json_object_get((const json_t *)MES_system_config_File, "result");
  if ( v6 && !*(_DWORD *)v6 )
  {
    v5 = json_object_get(v6, "code");
    if ( v5 && *(_DWORD *)v5 == 2 )
    {
      v0 = json_string_value(v5);
      if ( !strcmp(v0, "000000") )
      {
        puts("Get MES system config information success");
        v7 = 1;
      }
      else
      {
        v1 = json_string_value(v5);
        printf("Get MES system config information fail. code: %s\n", v1);
        v4 = json_object_get(v6, "msg");
        if ( v4 && *(_DWORD *)v4 == 2 )
        {
          lcd_clear_result();
          lcd_show(0, (const char *)(MES2Local_Config_Information + 32));
          lcd_show(1u, "MES system");
          lcd_show(2u, "return error");
          lcd_show(3u, "response");
          v2 = json_string_value(v4);
          printf("Get MES system config information fail. msg: %s\n", v2);
          v7 = 0;
        }
        else
        {
          lcd_clear_result();
          lcd_show(0, (const char *)(MES2Local_Config_Information + 32));
          lcd_show(1u, "Don't find");
          lcd_show(2u, "msg in MES");
          lcd_show(3u, "system response");
          puts("Don't get msg in result");
          v7 = 0;
        }
      }
    }
    else
    {
      lcd_clear_result();
      lcd_show(0, (const char *)(MES2Local_Config_Information + 32));
      lcd_show(1u, "Don't find");
      lcd_show(2u, "code in MES");
      lcd_show(3u, "system response");
      puts("Don't get code in result");
      v7 = 0;
    }
  }
  else
  {
    lcd_clear_result();
    lcd_show(0, (const char *)(MES2Local_Config_Information + 32));
    lcd_show(1u, "Don't find");
    lcd_show(2u, "result in MES");
    lcd_show(3u, "system response");
    puts("Don't find result in MES system responce");
    v7 = 0;
  }
  if ( v6 )
    sub_2E8A8((int)v6);
  return v7;
}
