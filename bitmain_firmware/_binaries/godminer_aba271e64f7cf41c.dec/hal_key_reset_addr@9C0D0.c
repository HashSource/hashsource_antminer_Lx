int hal_key_reset_addr()
{
  if ( dword_1505F4 )
    return dword_150760;
  else
    return -1;
}
