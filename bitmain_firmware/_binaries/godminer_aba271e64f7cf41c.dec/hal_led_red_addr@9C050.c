int hal_led_red_addr()
{
  if ( dword_1505F4 )
    return dword_150758;
  else
    return -1;
}
