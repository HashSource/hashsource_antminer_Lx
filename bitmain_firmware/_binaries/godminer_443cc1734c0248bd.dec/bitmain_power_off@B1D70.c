int bitmain_power_off()
{
  if ( !is_gpio_exist(907) )
  {
    gpio_export(907);
    gpio_direction(907, 1);
  }
  return gpio_write(907, 1);
}
