int hal_led_green_addr()
{
  if ( dword_1505F4 )
    return dword_15075C;
  else
    return -1;
}
