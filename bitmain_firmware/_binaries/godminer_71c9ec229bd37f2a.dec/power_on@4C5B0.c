unsigned int power_on()
{
  bitmain_power_on();
  byte_16825C = 1;
  return sleep(1u);
}
