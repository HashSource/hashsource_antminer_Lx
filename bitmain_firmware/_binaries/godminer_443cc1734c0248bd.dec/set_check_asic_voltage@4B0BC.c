int __fastcall set_check_asic_voltage(int a1)
{
  int result; // r0

  if ( a1 )
  {
    result = set_voltage_by_steps(dword_165228, (unsigned __int8)byte_165214);
    if ( !result )
      return result;
    return sub_4AC88();
  }
  result = set_voltage(dword_165228, (unsigned __int8)byte_165214);
  if ( result )
    return sub_4AC88();
  return result;
}
