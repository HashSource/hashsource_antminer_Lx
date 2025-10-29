_DWORD *__fastcall sub_4644C(_DWORD *result, _DWORD *a2)
{
  _DWORD *v2; // r5
  char v4; // r1
  int v5; // r2

  if ( (unsigned int)a2 + 2 > 1 )
  {
    v2 = result;
    sub_461C8(result, (int)a2);
    result = (_DWORD *)sub_479A0(v2 + 10, v4, v5);
    if ( result != a2 )
      _assert_fail("c == d", "load.c", 0x11Au, "lex_unget_unsave");
  }
  return result;
}
