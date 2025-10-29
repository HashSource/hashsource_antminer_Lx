int fan_pwm_get()
{
  int v1; // [sp+4h] [bp+4h] BYREF

  if ( byte_479DD5 != 1 )
  {
    dword_479DD8 = pwm_init(0, 1);
    byte_479DD5 = 1;
  }
  pwm_get(dword_479DD8, &v1);
  return v1;
}
