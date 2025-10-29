int __cdecl lex_scan(lex_t *lex, json_error_t *error)
{
  char *s1; // [sp+8h] [bp+8h]
  int v6; // [sp+Ch] [bp+Ch]
  int save; // [sp+Ch] [bp+Ch]

  strbuffer_clear((lex_t *)((char *)lex + 40));
  if ( *((_DWORD *)lex + 15) == 256 )
    lex_free_string(lex);
  do
  {
    do
      v6 = sub_41C18((int)lex, (int)error);
    while ( v6 == 32 );
  }
  while ( v6 == 9 || v6 == 10 || v6 == 13 );
  if ( v6 == -1 )
  {
    *((_DWORD *)lex + 15) = 0;
  }
  else if ( v6 == -2 )
  {
    *((_DWORD *)lex + 15) = -1;
  }
  else
  {
    lex_save(lex, v6);
    if ( v6 == 123 || v6 == 125 || v6 == 91 || v6 == 93 || v6 == 58 || v6 == 44 )
    {
      *((_DWORD *)lex + 15) = v6;
    }
    else if ( v6 == 34 )
    {
      sub_41DE4((int)lex, error);
    }
    else if ( v6 > 47 && v6 <= 57 || v6 == 45 )
    {
      sub_42174((int)lex, v6, error);
    }
    else if ( (v6 <= 64 || v6 > 90) && (v6 <= 96 || v6 > 122) )
    {
      lex_save_cached(lex);
      *((_DWORD *)lex + 15) = -1;
    }
    else
    {
      do
      {
        do
          save = lex_get_save(lex, error);
        while ( save > 64 && save <= 90 );
      }
      while ( save > 96 && save <= 122 );
      sub_41CB0(lex, save);
      s1 = (char *)strbuffer_value((int)lex + 40);
      if ( !strcmp(s1, "true") )
      {
        *((_DWORD *)lex + 15) = 259;
      }
      else if ( !strcmp(s1, "false") )
      {
        *((_DWORD *)lex + 15) = 260;
      }
      else if ( !strcmp(s1, "null") )
      {
        *((_DWORD *)lex + 15) = 261;
      }
      else
      {
        *((_DWORD *)lex + 15) = -1;
      }
    }
  }
  return *((_DWORD *)lex + 15);
}
