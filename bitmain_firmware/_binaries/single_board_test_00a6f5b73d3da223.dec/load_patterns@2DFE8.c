int __fastcall load_patterns(int a1)
{
  if ( !strcmp(*(const char **)(a1 + 20), "PT1") || (unsigned __int8)get_all_works(a1) == 1 )
    return 1;
  printf("get_all_works failed!");
  return 0;
}
