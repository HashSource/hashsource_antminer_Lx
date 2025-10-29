int __fastcall set_check_asic_voltage(int a1)
{
  int result; // r0

  if ( a1 )
  {
    result = set_voltage_by_steps(dword_168250, (unsigned __int8)byte_16823C);
    if ( !result )
      return result;
    return sub_4C4D0();
  }
  result = set_voltage(dword_168250, (unsigned __int8)byte_16823C);
  if ( result )
    return sub_4C4D0();
  return result;
}
