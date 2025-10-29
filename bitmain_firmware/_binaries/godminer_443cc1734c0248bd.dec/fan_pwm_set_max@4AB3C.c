int fan_pwm_set_max()
{
  int result; // r0

  if ( !byte_165208 )
  {
    dword_16520C = pwm_init(0, 100);
    byte_165208 = 1;
  }
  result = fan_pwm_get();
  if ( result != 100 )
    return pwm_set(dword_16520C, 0x64u);
  return result;
}
