int get_working_voltage()
{
  if ( byte_16823C )
    return dword_168248;
  else
    return -1;
}
