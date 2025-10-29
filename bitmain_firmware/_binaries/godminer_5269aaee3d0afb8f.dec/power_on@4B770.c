unsigned int power_on()
{
  bitmain_power_on();
  byte_166244 = 1;
  return sleep(1u);
}
