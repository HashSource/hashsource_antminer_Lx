int fan_pwm_set_max()
{
  int result; // r0

  if ( !byte_166218 )
  {
    dword_16621C = pwm_init(0, 100);
    byte_166218 = 1;
  }
  result = fan_pwm_get();
  if ( result != 100 )
    return pwm_set(dword_16621C, 0x64u);
  return result;
}
