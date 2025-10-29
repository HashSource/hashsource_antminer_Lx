unsigned int power_off()
{
  bitmain_power_off();
  byte_479DC8 = 0;
  return sleep(1u);
}
