int __fastcall sub_9A5FC(unsigned int a1)
{
  int v6; // [sp+Ch] [bp-8h]

  v6 = 0;
  if ( a1 == 2 )
  {
    if ( hal_led_green_addr() < 0 )
      return 0;
    else
      return hal_led_green_addr();
  }
  else if ( a1 > 2 )
  {
    if ( a1 == 256 )
    {
      if ( hal_key_reset_addr() < 0 )
        return 0;
      else
        return hal_key_reset_addr();
    }
    else if ( a1 == 257 )
    {
      if ( hal_key_ipreport_addr() < 0 )
        return 0;
      else
        return hal_key_ipreport_addr();
    }
  }
  else if ( a1 == 1 )
  {
    if ( hal_led_red_addr() < 0 )
      return 0;
    else
      return hal_led_red_addr();
  }
  return v6;
}
