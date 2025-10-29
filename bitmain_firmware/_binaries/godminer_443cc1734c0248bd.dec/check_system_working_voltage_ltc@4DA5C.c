int check_system_working_voltage_ltc()
{
  int result; // r0

  if ( dword_1652C8 == 1 )
    return sub_4D5B0();
  if ( dword_1652C8 == 2 )
    return sub_4D810();
  return result;
}
