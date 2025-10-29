int __fastcall sub_2CF1C(int a1)
{
  int v1; // r5
  bool v2; // zf

  v1 = dword_B8930;
  if ( a1 >= 0 )
  {
    dword_B8930 = a1 != 0;
    if ( (a1 != 0) != v1 )
    {
      v2 = dword_B8B18 == (_DWORD)qword_B8A28;
      if ( (_QWORD *)dword_B8B18 != qword_B8A28 )
        v2 = dword_B8B18 == (_DWORD)qword_B8938;
      if ( v2 )
        sub_2C66C((_QWORD *)dword_B8B18);
    }
  }
  return v1;
}
