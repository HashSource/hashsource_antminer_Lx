int __fastcall sub_F8D1C(int result, _DWORD *a2)
{
  int v3; // [sp+4h] [bp+4h]

  v3 = result;
  if ( (_DWORD *)(result + 4) != a2 )
  {
    sub_F8D1C(result, (_DWORD *)*a2);
    return sub_F8D1C(v3, (_DWORD *)a2[1]);
  }
  return result;
}
