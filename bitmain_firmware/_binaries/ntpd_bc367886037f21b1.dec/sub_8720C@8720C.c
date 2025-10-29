_BYTE *__fastcall sub_8720C(_BYTE *result, int a2)
{
  _BYTE *v2; // r1
  int v3; // t1

  v2 = (_BYTE *)(a2 - 1);
  do
  {
    v3 = (unsigned __int8)*++v2;
    *result++ = *((_BYTE *)&dword_B7164 + v3 + 8);
  }
  while ( *v2 );
  return result;
}
