int __fastcall sub_64BD0(char a1)
{
  byte_14F510 = byte_14F510 == 0;
  if ( a1 )
  {
    green_led_off();
    if ( byte_14F510 )
      return red_led_on();
    else
      return red_led_off();
  }
  else
  {
    red_led_off();
    if ( byte_14F510 )
      return green_led_on();
    else
      return green_led_off();
  }
}
