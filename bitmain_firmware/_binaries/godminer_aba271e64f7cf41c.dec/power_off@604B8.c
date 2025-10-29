unsigned int power_off()
{
  bitmain_power_off();
  byte_152440 = 0;
  return sleep(1u);
}
