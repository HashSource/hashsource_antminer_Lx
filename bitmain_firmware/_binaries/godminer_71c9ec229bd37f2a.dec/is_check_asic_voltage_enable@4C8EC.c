int is_check_asic_voltage_enable()
{
  int result; // r0

  result = (unsigned __int8)byte_168240;
  if ( byte_168240 )
    return (unsigned __int8)byte_16824C;
  return result;
}
