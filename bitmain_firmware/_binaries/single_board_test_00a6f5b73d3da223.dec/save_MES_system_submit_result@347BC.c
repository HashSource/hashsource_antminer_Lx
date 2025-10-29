int save_MES_system_submit_result()
{
  FILE *s; // [sp+4h] [bp+4h]

  memset(submit_result_file, 0, 0xC8u);
  strcpy(submit_result_file, base_submit_result_file);
  strcat(submit_result_file, (const char *)(MES2Local_Config_Information + 16));
  *(_WORD *)&submit_result_file[strlen(submit_result_file)] = 45;
  strcat(submit_result_file, (const char *)(MES2Local_Config_Information + 32));
  *(_WORD *)&submit_result_file[strlen(submit_result_file)] = 45;
  strcat(submit_result_file, ::s);
  printf("Save MES system config information into %s\n", submit_result_file);
  s = fopen(submit_result_file, "w");
  if ( s )
  {
    printf("Open %s success\n", submit_result_file);
    if ( fwrite(" ", mes_system_submit_result_file_length, 1u, s) == 1 )
    {
      printf("Write %s success\n", submit_result_file);
      fclose(s);
      system("sync");
      return 1;
    }
    else
    {
      printf("Write %s fail\n", submit_result_file);
      fclose(s);
      return 0;
    }
  }
  else
  {
    printf("Open %s fail\n", submit_result_file);
    return 0;
  }
}
