int __fastcall sub_2CEA0(_QWORD *a1)
{
  bool v2; // zf
  int result; // r0

  v2 = a1 == qword_B8938;
  if ( a1 != qword_B8938 )
    v2 = a1 == qword_B8A28;
  if ( v2 )
  {
    dword_B8B18 = (int)a1;
    result = 1;
  }
  else
  {
    result = dword_B8B18;
  }
  if ( !v2 )
    return result == (_DWORD)a1;
  return result;
}
