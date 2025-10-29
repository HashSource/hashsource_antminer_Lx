int get_current_voltage()
{
  if ( byte_16823C )
    return dword_168260;
  else
    return -1;
}
