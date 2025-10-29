int __fastcall fan_pwm_set(unsigned int a1)
{
  int result; // r0

  if ( byte_152421 != 1 )
  {
    dword_152424 = pwm_init(0, 100);
    byte_152421 = 1;
  }
  if ( a1 > 0x64 )
    a1 = 100;
  result = fan_pwm_get();
  if ( a1 != result )
  {
    if ( fan_pwm_fixed )
      return pwm_set(dword_152424, fan_pwm);
    else
      return pwm_set(dword_152424, a1);
  }
  return result;
}
