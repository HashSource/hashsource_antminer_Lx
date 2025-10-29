unsigned int power_off()
{
  bitmain_power_off();
  byte_16522C = 0;
  return sleep(1u);
}
