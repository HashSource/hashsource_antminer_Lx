int __fastcall set_working_voltage(int a1)
{
  int result; // r0

  if ( a1 )
  {
    result = (unsigned __int16)set_voltage_by_steps(dword_165220, (unsigned __int8)byte_165214);
    if ( !(_WORD)result )
      return result;
    return sub_4AC00();
  }
  result = (unsigned __int16)set_voltage(dword_165220, (unsigned __int8)byte_165214);
  if ( (_WORD)result )
    return sub_4AC00();
  return result;
}
