int power_on()
{
  int result; // r0

  result = bitmain_power_on();
  byte_152440 = 1;
  return result;
}
