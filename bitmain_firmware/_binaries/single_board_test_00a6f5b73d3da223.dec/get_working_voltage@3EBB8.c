int get_working_voltage()
{
  if ( byte_479DB0 != 1 )
    return -1;
  else
    return dword_479DBC;
}
