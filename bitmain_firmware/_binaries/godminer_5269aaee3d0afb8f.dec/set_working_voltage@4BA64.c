int __fastcall set_working_voltage(int a1)
{
  int result; // r0

  if ( a1 )
  {
    result = (unsigned __int16)set_voltage_by_steps(dword_166230, (unsigned __int8)byte_166224);
    if ( !(_WORD)result )
      return result;
    return sub_4B608();
  }
  result = (unsigned __int16)set_voltage(dword_166230, (unsigned __int8)byte_166224);
  if ( (_WORD)result )
    return sub_4B608();
  return result;
}
