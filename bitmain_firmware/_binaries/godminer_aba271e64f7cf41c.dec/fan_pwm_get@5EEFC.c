int fan_pwm_get()
{
  int v1; // [sp+4h] [bp-8h] BYREF

  if ( byte_152421 != 1 )
  {
    dword_152424 = pwm_init(0, 1);
    byte_152421 = 1;
  }
  pwm_get(dword_152424, &v1);
  return v1;
}
