void __fastcall sub_41DE4(int a1, json_error_t *a2)
{
  int v2; // r3
  unsigned __int8 *v3; // r3
  unsigned __int8 *v4; // r2
  int v7; // [sp+14h] [bp+Ch] BYREF
  int v8; // [sp+18h] [bp+10h]
  int v9; // [sp+1Ch] [bp+14h]
  int i; // [sp+20h] [bp+18h]
  unsigned __int8 *v11; // [sp+24h] [bp+1Ch]
  const char *v12; // [sp+28h] [bp+20h]
  int save; // [sp+2Ch] [bp+24h]

  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 60) = -1;
  save = lex_get_save((lex_t *)a1, a2);
  while ( save != 34 )
  {
    if ( save == -2 )
      goto LABEL_77;
    if ( save == -1 )
    {
      sub_4188C((int)a2, (_DWORD *)a1, 6, "premature end of input");
LABEL_77:
      lex_free_string((lex_t *)a1);
      return;
    }
    if ( (unsigned int)save < 0x20 )
    {
      sub_41CB0((_DWORD *)a1, save);
      if ( save == 10 )
        sub_4188C((int)a2, (_DWORD *)a1, 8, "unexpected newline");
      else
        sub_4188C((int)a2, (_DWORD *)a1, 8, "control character 0x%x", save);
      goto LABEL_77;
    }
    if ( save == 92 )
    {
      save = lex_get_save((lex_t *)a1, a2);
      if ( save != 117 )
      {
        if ( save != 34
          && save != 92
          && save != 47
          && save != 98
          && save != 102
          && save != 110
          && save != 114
          && save != 116 )
        {
LABEL_18:
          sub_4188C((int)a2, (_DWORD *)a1, 8, "invalid escape");
          goto LABEL_77;
        }
        goto LABEL_32;
      }
      save = lex_get_save((lex_t *)a1, a2);
      for ( i = 0; i <= 3; ++i )
      {
        if ( (save <= 47 || save > 57) && (save <= 64 || save > 70) && (save <= 96 || save > 102) )
          goto LABEL_18;
        save = lex_get_save((lex_t *)a1, a2);
      }
    }
    else
    {
LABEL_32:
      save = lex_get_save((lex_t *)a1, a2);
    }
  }
  v11 = (unsigned __int8 *)jsonp_malloc(*(_DWORD *)(a1 + 44) + 1);
  if ( !v11 )
    goto LABEL_77;
  *(_DWORD *)(a1 + 64) = v11;
  v12 = (const char *)(strbuffer_value(a1 + 40) + 1);
  while ( *v12 != 34 )
  {
    if ( *v12 == 92 )
    {
      if ( *++v12 == 117 )
      {
        v9 = sub_41D58((int)v12);
        if ( v9 < 0 )
          goto LABEL_39;
        v12 += 5;
        if ( v9 < 55296 || v9 >= 56320 )
        {
          if ( v9 >= 56320 && v9 < 57344 )
          {
LABEL_52:
            sub_4188C((int)a2, (_DWORD *)a1, 8, "invalid Unicode '\\u%04X'", v9);
            goto LABEL_77;
          }
        }
        else
        {
          if ( *v12 != 92 || v12[1] != 117 )
            goto LABEL_52;
          v8 = sub_41D58((int)++v12);
          if ( v8 < 0 )
          {
LABEL_39:
            sub_4188C((int)a2, (_DWORD *)a1, 8, "invalid Unicode escape '%.6s'", v12 - 1);
            goto LABEL_77;
          }
          v12 += 5;
          if ( v8 < 56320 || v8 >= 57344 )
          {
            sub_4188C((int)a2, (_DWORD *)a1, 8, "invalid Unicode '\\u%04X\\u%04X'", v9, v8);
            goto LABEL_77;
          }
          v9 = v8 - 56320 + ((v9 - 55296) << 10) + 0x10000;
        }
        utf8_encode(v9, v11, &v7);
        v11 += v7;
      }
      else
      {
        v2 = *(unsigned __int8 *)v12;
        if ( v2 == 98 )
        {
          *v11 = 8;
        }
        else if ( *(unsigned __int8 *)v12 > 0x62u )
        {
          if ( v2 == 110 )
          {
            *v11 = 10;
          }
          else if ( *(unsigned __int8 *)v12 > 0x6Eu )
          {
            if ( v2 == 114 )
            {
              *v11 = 13;
            }
            else if ( v2 == 116 )
            {
              *v11 = 9;
            }
          }
          else if ( v2 == 102 )
          {
            *v11 = 12;
          }
        }
        else if ( v2 == 47 || v2 == 92 || v2 == 34 )
        {
          *v11 = *v12;
        }
        ++v11;
        ++v12;
      }
    }
    else
    {
      v3 = v11++;
      v4 = (unsigned __int8 *)v12++;
      *v3 = *v4;
    }
  }
  *v11 = 0;
  *(_DWORD *)(a1 + 68) = &v11[-*(_DWORD *)(a1 + 64)];
  *(_DWORD *)(a1 + 60) = 256;
}
