int __fastcall utf8_check_string(int a1, unsigned int a2)
{
  size_t v6; // [sp+8h] [bp+8h]
  unsigned int i; // [sp+Ch] [bp+Ch]

  for ( i = 0; i < a2; ++i )
  {
    v6 = utf8_check_first(*(_BYTE *)(i + a1));
    if ( !v6 )
      return 0;
    if ( v6 > 1 )
    {
      if ( a2 - i < v6 )
        return 0;
      if ( !utf8_check_full((const char *)(i + a1), v6, 0) )
        return 0;
      i = i + v6 - 1;
    }
  }
  return 1;
}
