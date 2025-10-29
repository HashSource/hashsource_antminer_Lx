int __fastcall sub_F8DFC(int a1, _DWORD *a2, int a3, _DWORD *a4)
{
  int result; // r0

  result = sub_F8D6C(a1, (int)a2);
  if ( !result )
    ++a3;
  if ( (_DWORD *)(a1 + 4) == a2 )
  {
    if ( *a4 == -1 )
      *a4 = a3;
  }
  else
  {
    sub_F8DFC(a1, (_DWORD *)*a2, a3, a4);
    return sub_F8DFC(a1, (_DWORD *)a2[1], a3, a4);
  }
  return result;
}
