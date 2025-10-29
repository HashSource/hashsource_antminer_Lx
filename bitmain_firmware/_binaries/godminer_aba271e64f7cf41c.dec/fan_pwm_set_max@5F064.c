int fan_pwm_set_max()
{
  int result; // r0

  if ( byte_152421 != 1 )
  {
    dword_152424 = pwm_init(0, 100);
    byte_152421 = 1;
  }
  result = fan_pwm_get();
  if ( result != 100 )
    return pwm_set(dword_152424, 0x64u);
  return result;
}
