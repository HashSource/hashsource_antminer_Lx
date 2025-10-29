char *__fastcall sub_D578(char *s1)
{
  char **v2; // r4
  const char *v3; // r1
  const char *v4; // t1
  char *result; // r0
  const char *v6; // r4
  _UNKNOWN **v7; // r8
  const char *v8; // r6
  const char *v9; // r1
  char **v10; // r8
  const char *v11; // t1
  char *v12; // r0
  const char *v13; // t1
  size_t v14; // r6

  v2 = &off_B501C;
  v3 = off_B501C;
  if ( !off_B501C )
    goto LABEL_6;
  while ( strcmp(s1, v3) )
  {
    v4 = v2[2];
    v2 += 2;
    v3 = v4;
    if ( !v4 )
      goto LABEL_6;
  }
  result = v2[1];
  if ( !result )
  {
LABEL_6:
    v6 = (const char *)off_B506C;
    if ( off_B506C )
    {
      v7 = &off_B506C;
      while ( 1 )
      {
        v14 = strlen(v6);
        if ( !strncmp(s1, v6, v14) )
          break;
        v13 = (const char *)v7[2];
        v7 += 2;
        v6 = v13;
        if ( !v13 )
          goto LABEL_8;
      }
      v8 = &s1[v14];
      v6 = (const char *)v7[1];
    }
    else
    {
LABEL_8:
      v8 = s1;
    }
    v9 = off_B5094;
    if ( !off_B5094 )
      goto LABEL_15;
    v10 = &off_B5094;
    while ( strcmp(v8, v9) )
    {
      v11 = v10[2];
      v10 += 2;
      v9 = v11;
      if ( !v11 )
        goto LABEL_15;
    }
    v12 = v10[1];
    if ( v12 )
    {
      return (char *)((_DWORD)v12 << (char)v6);
    }
    else
    {
LABEL_15:
      sub_64A18(3, "logconfig: '%s' not recognized - ignored", s1);
      return 0;
    }
  }
  return result;
}
