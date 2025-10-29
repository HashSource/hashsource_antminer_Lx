int malloc_for_mes_config_information()
{
  if ( MES2Local_Config_Information )
  {
    puts("mes config information already malloced");
    goto LABEL_5;
  }
  MES2Local_Config_Information = (int)calloc(1u, 0x1D8u);
  if ( MES2Local_Config_Information )
  {
LABEL_5:
    puts("malloc for mes config information success");
    return 1;
  }
  puts("malloc for mes config information fail!");
  return 0;
}
