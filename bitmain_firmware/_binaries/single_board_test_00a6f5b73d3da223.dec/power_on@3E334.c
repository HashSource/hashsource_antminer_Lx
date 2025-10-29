unsigned int power_on()
{
  bitmain_power_on();
  byte_479DC8 = 1;
  return sleep(1u);
}
