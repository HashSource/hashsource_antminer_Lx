int __fastcall set_working_voltage(int a1)
{
  int result; // r0

  if ( a1 )
  {
    result = (unsigned __int16)set_voltage_by_steps(dword_168248, (unsigned __int8)byte_16823C);
    if ( !(_WORD)result )
      return result;
    return sub_4C448();
  }
  result = (unsigned __int16)set_voltage(dword_168248, (unsigned __int8)byte_16823C);
  if ( (_WORD)result )
    return sub_4C448();
  return result;
}
