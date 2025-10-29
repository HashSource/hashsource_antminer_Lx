int __fastcall fan_pwm_set(unsigned int a1)
{
  int result; // r0

  if ( byte_479DD5 != 1 )
  {
    dword_479DD8 = pwm_init(0, 100);
    byte_479DD5 = 1;
  }
  if ( a1 > 0x64 )
    a1 = 100;
  result = fan_pwm_get();
  if ( result != a1 )
  {
    if ( fan_pwm_fixed )
      return pwm_set(dword_479DD8, fan_pwm);
    else
      return pwm_set(dword_479DD8, a1);
  }
  return result;
}
