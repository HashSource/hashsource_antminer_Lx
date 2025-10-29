const char *__fastcall sub_1626C(_DWORD *a1, char *s2)
{
  const char *v3; // r4

  if ( !a1 || *a1 != 1281586296 )
    sub_10788();
  if ( !s2 )
    sub_10788();
  v3 = (const char *)a1[4];
  while ( *(_DWORD *)v3 )
  {
    if ( *((_DWORD *)v3 + 1) == -1 )
    {
      v3 = *(const char **)v3;
    }
    else
    {
      if ( !strcmp(*(const char **)v3, s2) )
        return v3;
      v3 += 8;
    }
  }
  return 0;
}
