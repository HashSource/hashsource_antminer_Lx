unsigned int power_on()
{
  bitmain_power_on();
  byte_16522C = 1;
  return sleep(1u);
}
