int __fastcall sub_B4CBC(int result, _DWORD *a2)
{
  int v3; // [sp+4h] [bp-8h]

  v3 = result;
  if ( a2 != (_DWORD *)(result + 4) )
  {
    sub_B4CBC(result, (_DWORD *)*a2);
    return sub_B4CBC(v3, (_DWORD *)a2[1]);
  }
  return result;
}
