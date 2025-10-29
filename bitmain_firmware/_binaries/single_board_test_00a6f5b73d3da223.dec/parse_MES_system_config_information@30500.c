int __fastcall parse_MES_system_config_information(int a1)
{
  if ( !a1 )
    return parse_all_MES_system_config_information();
  if ( a1 != 1 )
    printf("Don't support parse this type config information. type = %d\n", a1);
  return 0;
}
