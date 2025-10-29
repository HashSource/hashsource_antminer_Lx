int __fastcall sub_B4E30(int a1, _DWORD *a2, int a3, _DWORD *a4)
{
  int result; // r0

  result = sub_B4D40(a1, (int)a2);
  if ( !result )
    ++a3;
  if ( a2 == (_DWORD *)(a1 + 4) )
  {
    if ( *a4 == -1 )
      *a4 = a3;
  }
  else
  {
    sub_B4E30(a1, (_DWORD *)*a2, a3, a4);
    return sub_B4E30(a1, (_DWORD *)a2[1], a3, a4);
  }
  return result;
}
