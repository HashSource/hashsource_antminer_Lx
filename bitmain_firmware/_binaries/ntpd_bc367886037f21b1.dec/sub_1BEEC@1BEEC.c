bool __fastcall sub_1BEEC(const char *a1, int a2)
{
  _BOOL4 v2; // r3

  v2 = a1 == 0;
  if ( dword_B83D8 )
    v2 = 1;
  if ( v2 )
    return 0;
  dword_B83D8 = (int)sub_1BABC(a1, a2);
  return dword_B83D8 != 0;
}
