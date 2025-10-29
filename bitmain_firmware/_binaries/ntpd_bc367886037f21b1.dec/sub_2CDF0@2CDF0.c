_QWORD *__fastcall sub_2CDF0(int a1)
{
  _QWORD *result; // r0
  _QWORD *v3; // r9

  result = (_QWORD *)dword_B8B18;
  if ( (_QWORD *)dword_B8B18 == qword_B8938 )
  {
    v3 = qword_B8A28;
  }
  else if ( (_QWORD *)dword_B8B18 == qword_B8A28 )
  {
    v3 = qword_B8938;
  }
  else
  {
    v3 = qword_B8A28;
    sub_2C66C(qword_B8938);
    sub_2C66C(qword_B8A28);
    result = qword_B8938;
    dword_B8B18 = (int)qword_B8938;
  }
  if ( a1 )
  {
    memcpy(v3, result, 0xF0u);
    return v3;
  }
  return result;
}
