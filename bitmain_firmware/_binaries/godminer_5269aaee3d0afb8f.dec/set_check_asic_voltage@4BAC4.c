int __fastcall set_check_asic_voltage(int a1)
{
  int result; // r0

  if ( a1 )
  {
    result = set_voltage_by_steps(dword_166238, (unsigned __int8)byte_166224);
    if ( !result )
      return result;
    return sub_4B690();
  }
  result = set_voltage(dword_166238, (unsigned __int8)byte_166224);
  if ( result )
    return sub_4B690();
  return result;
}
