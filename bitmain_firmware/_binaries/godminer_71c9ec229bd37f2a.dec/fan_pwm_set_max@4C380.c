int fan_pwm_set_max()
{
  int result; // r0

  if ( !byte_168230 )
  {
    dword_168234 = pwm_init(0, 100);
    byte_168230 = 1;
  }
  result = fan_pwm_get();
  if ( result != 100 )
    return pwm_set(dword_168234, 0x64u);
  return result;
}
