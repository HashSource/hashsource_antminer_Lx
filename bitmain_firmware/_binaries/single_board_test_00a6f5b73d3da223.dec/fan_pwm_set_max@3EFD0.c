int fan_pwm_set_max()
{
  int result; // r0

  if ( byte_479DD5 != 1 )
  {
    dword_479DD8 = pwm_init(0, 100);
    byte_479DD5 = 1;
  }
  result = fan_pwm_get();
  if ( result != 100 )
    return pwm_set(dword_479DD8, 0x64u);
  return result;
}
