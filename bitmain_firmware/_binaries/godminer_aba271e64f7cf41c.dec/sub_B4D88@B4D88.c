int __fastcall sub_B4D88(int a1, _DWORD *a2)
{
  int result; // r0

  result = sub_B4D40(a1, (int)a2);
  if ( a2 != (_DWORD *)(a1 + 4) )
  {
    sub_B4D88(a1, (_DWORD *)*a2);
    return sub_B4D88(a1, (_DWORD *)a2[1]);
  }
  return result;
}
