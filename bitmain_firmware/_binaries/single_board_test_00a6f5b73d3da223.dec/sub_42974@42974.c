void *__fastcall sub_42974(unsigned int a1, unsigned int a2, int a3)
{
  void *v8; // [sp+14h] [bp+14h]

  *(_DWORD *)(a1 + 56) = 0;
  lex_scan((lex_t *)a1, (json_error_t *)a3);
  if ( (a2 & 4) != 0 || *(_DWORD *)(a1 + 60) == 91 || *(_DWORD *)(a1 + 60) == 123 )
  {
    v8 = sub_427FC(COERCE_DOUBLE(__PAIR64__(a2, a1)), (json_error_t *)a3);
    if ( v8 )
    {
      if ( (a2 & 2) != 0 || (lex_scan((lex_t *)a1, (json_error_t *)a3), !*(_DWORD *)(a1 + 60)) )
      {
        if ( a3 )
          *(_DWORD *)(a3 + 8) = *(_DWORD *)(a1 + 36);
        return v8;
      }
      else
      {
        sub_4188C(a3, (_DWORD *)a1, 7, "end of file expected");
        sub_41848((int)v8);
        return 0;
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    sub_4188C(a3, (_DWORD *)a1, 8, "'[' or '{' expected");
    return 0;
  }
}
