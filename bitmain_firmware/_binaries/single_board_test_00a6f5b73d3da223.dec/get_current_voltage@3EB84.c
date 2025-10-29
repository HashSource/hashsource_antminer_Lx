int get_current_voltage()
{
  if ( byte_479DB0 != 1 )
    return -1;
  else
    return dword_479DCC;
}
