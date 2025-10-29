int __fastcall check_whether_MES_system_submit_result_is_correct(const json_t *a1)
{
  const char *v1; // r0
  const char *v2; // r0
  const char *v3; // r0
  json_t *v5; // [sp+8h] [bp+8h]
  unsigned __int8 v6; // [sp+Fh] [bp+Fh]
  json_t *v7; // [sp+10h] [bp+10h]
  json_t *v8; // [sp+14h] [bp+14h]

  v8 = 0;
  v7 = 0;
  v5 = json_object_get(a1, "result");
  if ( v5 && !*(_DWORD *)v5 )
  {
    v8 = json_object_get(v5, "code");
    if ( v8 && *(_DWORD *)v8 == 2 )
    {
      v1 = json_string_value(v8);
      if ( !strcmp(v1, "000000") )
      {
        puts("submit result success");
        v6 = 1;
      }
      else
      {
        v2 = json_string_value(v8);
        printf("submit result fail! code: %s\n", v2);
        v7 = json_object_get(v5, "msg");
        if ( v7 && *(_DWORD *)v7 == 2 )
        {
          v3 = json_string_value(v7);
          printf("submit result fail! msg: %s\n", v3);
          v6 = 0;
        }
        else
        {
          puts("Don't get msg in result");
          v6 = 0;
        }
      }
    }
    else
    {
      puts("Don't get code in result");
      v6 = 0;
    }
  }
  else
  {
    puts("Don't find result in submit result responce");
    v6 = 0;
  }
  if ( v5 )
    sub_2E8A8((int)v5);
  if ( v8 )
    sub_2E8A8((int)v8);
  if ( v7 )
    sub_2E8A8((int)v7);
  return v6;
}
