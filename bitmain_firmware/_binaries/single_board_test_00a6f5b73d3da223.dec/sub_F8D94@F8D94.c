int __fastcall sub_F8D94(int a1, _DWORD *a2)
{
  int result; // r0

  result = sub_F8D6C(a1, (int)a2);
  if ( (_DWORD *)(a1 + 4) != a2 )
  {
    sub_F8D94(a1, (_DWORD *)*a2);
    return sub_F8D94(a1, (_DWORD *)a2[1]);
  }
  return result;
}
