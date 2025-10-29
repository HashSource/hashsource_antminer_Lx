int bitmain_power_off()
{
  if ( !is_gpio_exist(dword_1505E8) )
  {
    gpio_export(dword_1505E8);
    gpio_direction(dword_1505E8, 1);
  }
  return gpio_write(dword_1505E8, 0);
}
